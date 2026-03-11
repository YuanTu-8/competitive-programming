function numberOfStableArrays(numZeros: number, numOnes: number, limit: number): number {
    const MOD = 1_000_000_007;

    // dp[i][j][k]: stable arrays using i zeros, j ones, ending with digit k
    const ways: number[][][] = Array.from(
        { length: numZeros + 1 },
        () => Array.from({ length: numOnes + 1 }, () => [0, 0]),
    );

    for (let i = 1; i <= Math.min(numZeros, limit); ++i)
        ways[i][0][0] = 1;
    for (let i = 1; i <= Math.min(numOnes, limit); ++i)
        ways[0][i][1] = 1;

    for (let i = 1; i <= numZeros; ++i) {
        for (let j = 1; j <= numOnes; ++j) {
            ways[i][j][0] = (ways[i - 1][j][0] + ways[i - 1][j][1]) % MOD;
            if (i > limit)
                ways[i][j][0] = (ways[i][j][0] - ways[i - limit - 1][j][1] + MOD) % MOD;

            ways[i][j][1] = (ways[i][j - 1][0] + ways[i][j - 1][1]) % MOD;
            if (j > limit)
                ways[i][j][1] = (ways[i][j][1] - ways[i][j - limit - 1][0] + MOD) % MOD;
        }
    }

    return (ways[numZeros][numOnes][0] + ways[numZeros][numOnes][1]) % MOD;
}
