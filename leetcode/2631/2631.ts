interface Array<T> {
    groupBy(fn: (item: T) => string): Record<string, T[]>
}

Array.prototype.groupBy = function (fn) {
    const result: Record<string, unknown[]> = {};

    for (const item of this) {
        const key = fn(item);
        (result[key] ??= []).push(item);
    }

    return result;
};