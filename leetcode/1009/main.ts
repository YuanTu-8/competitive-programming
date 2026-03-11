function bitwiseComplement(n: number): number {
    if (n === 0)
        return 1;

    const bitLen = Math.floor(Math.log2(n)) + 1;
    return n ^ ((1 << bitLen) - 1);
}
