function numSpecial(matrix: number[][]): number {
    const rowSum = matrix.map((row) => row.reduce((acc, curr) => acc + curr, 0));
    const colSum = matrix[0].map((_, colIdx) => matrix.reduce((acc, row) => acc + row[colIdx], 0));

    let count = 0;
    for (let i = 0; i < matrix.length; ++i)
        for (let j = 0; j < matrix[0].length; ++j)
            if (matrix[i][j] === 1 && rowSum[i] === 1 && colSum[j] === 1)
                ++count;

    return count;
}
