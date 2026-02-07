type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };
type Fn = (value: JSONValue) => number;

function sortBy(array: JSONValue[], fn: Fn): JSONValue[] {
    return array
        .map((item): [number, JSONValue] => [fn(item), item])
        .sort((a, b) => a[0] - b[0])
        .map(([_, item]) => item);
}