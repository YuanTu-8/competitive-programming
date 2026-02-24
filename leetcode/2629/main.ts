type Fn = (x: number) => number;

function compose(functions: Fn[]): Fn {
    return (x: number) => functions.reduceRight((acc, fn) => fn(acc), x);
}