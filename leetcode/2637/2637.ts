type Fn = (...params: any[]) => Promise<any>;

function timeLimit(fn: Fn, t: number): Fn {
    return async (...args) => {
        // Race between original function and timeout
        const timeout = new Promise<never>((_, reject) =>
            setTimeout(() => reject("Time Limit Exceeded"), t)
        );

        return Promise.race([fn(...args), timeout]);
    };
}