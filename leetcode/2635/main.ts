function map(array: number[], fn: (n: number, i: number) => number): number[] {
    const result: number[] = new Array(array.length);

    for (let i = 0; i < array.length; ++i) {
        result[i] = fn(array[i], i);
    }

    return result;
}