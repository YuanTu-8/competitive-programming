type Fn = (...args: number[]) => void;

function debounce(fn: Fn, t: number): Fn {
    let timerId: ReturnType<typeof setTimeout> | undefined;

    return (...args) => {
        clearTimeout(timerId);
        timerId = setTimeout(() => fn(...args), t);
    };
}