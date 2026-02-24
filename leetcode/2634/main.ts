type Fn = (n: number, i: number) => unknown;

function filter(array: number[], fn: Fn): number[] {
    const result: number[] = [];

    for (let i = 0; i < array.length; ++i) {
        if (fn(array[i], i)) {
            result.push(array[i]);
        }
    }

    return result;
}