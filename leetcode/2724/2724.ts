type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };
type Fn = (value: JSONValue) => number;

function sortBy(array: JSONValue[], fn: Fn): JSONValue[] {
    return array.sort((a, b) => fn(a) - fn(b));  // ascending order
}