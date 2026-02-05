type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };
type Fn = (...args: JSONValue[]) => void;

function cancellable(fn: Fn, args: JSONValue[], t: number): () => void {
    fn(...args);
    const intervalId = setInterval(() => fn(...args), t);
    return () => clearInterval(intervalId);
}