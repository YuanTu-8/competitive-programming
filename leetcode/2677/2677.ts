type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };
type Obj = Record<string, JSONValue> | Array<JSONValue>;

function chunk(array: Obj[], size: number): Obj[][] {
    const result: Obj[][] = [];

    for (let i = 0; i < array.length; i += size) {
        result.push(array.slice(i, i + size));
    }

    return result;
}