function minSwaps(grid: number[][]): number {
    const gridSize = grid.length;
    const trailingZeros = grid.map((row) => {
        const lastOne = row.lastIndexOf(1);
        return lastOne === -1 ? gridSize : gridSize - 1 - lastOne;
    });

    let numSwaps = 0;
    for (let targetRow = 0; targetRow < gridSize; ++targetRow) {
        const need = gridSize - 1 - targetRow;

        // Find nearest row with enough trailing zeros
        const found = trailingZeros.findIndex((zeros, i) => i >= targetRow && zeros >= need);

        if (found === -1) {
            return -1;
        }

        // Bubble the found row up to targetRow
        for (let i = found; i > targetRow; --i) {
            [trailingZeros[i], trailingZeros[i - 1]] = [trailingZeros[i - 1], trailingZeros[i]];
            ++numSwaps;
        }
    }

    return numSwaps;
}
