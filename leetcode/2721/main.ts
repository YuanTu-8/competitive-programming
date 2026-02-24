type Fn<T> = () => Promise<T>;

function promiseAll<T>(functions: Fn<T>[]): Promise<T[]> {
    return new Promise((resolve, reject) => {
        const totalCount = functions.length;
        if (totalCount === 0) { resolve([]); return; }

        const results: T[] = new Array(totalCount) ;
        let resolvedCount = 0;

        for (const [idx, fn] of functions.entries()) {
            fn()
                .then((value) => {
                    results[idx] = value;
                    if (++resolvedCount === totalCount) {
                        resolve(results);
                    }
                })
                .catch(reject);
        }
    });
}