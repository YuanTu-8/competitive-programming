function minOperations(s: string): number {
    // Count mismatches against "0101..." pattern
    let numMismatch = 0;
    for (let i = 0; i < s.length; ++i)
        if (s[i] !== String(i % 2))
            ++numMismatch;

    // Other pattern's mismatches = s.length - mismatchCount
    return Math.min(numMismatch, s.length - numMismatch);
}
