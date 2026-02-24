type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };
type ArrayType = { "id": number } & Record<string, JSONValue>;

function join(array1: ArrayType[], array2: ArrayType[]): ArrayType[] {
    const mergedById = new Map<number, ArrayType>();

    for (const obj of array1) {
        mergedById.set(obj.id, obj);
    }

    for (const obj of array2) {
        const existing = mergedById.get(obj.id);
        mergedById.set(obj.id, { ...existing, ...obj });
    }

    return [...mergedById.values()].sort((a, b) => a.id - b.id);
}