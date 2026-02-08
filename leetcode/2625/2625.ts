type MultiDimensionalArray = (number | MultiDimensionalArray)[];

function flat(array: MultiDimensionalArray, depth: number): MultiDimensionalArray {
    const result: MultiDimensionalArray = [];

    for (const item of array) {
        if (Array.isArray(item) && depth > 0) {
            result.push(...flat(item, depth - 1));
        } else {
            result.push(item);
        }
    }

    return result;
}