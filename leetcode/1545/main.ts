function findKthBit(n: number, k: number): string {
    if (n === 1)
        return "0";

    const mid = 2 ** (n - 1);

    // Middle bit is always "1"
    if (k === mid)
        return "1";

    // Left half: same as S(n-1)
    if (k < mid)
        return findKthBit(n - 1, k);

    // Right half: find the reversed position in S(n-1), then flip
    const reversed = 2 * mid - k;
    return findKthBit(n - 1, reversed) === "0" ? "1" : "0";
}
