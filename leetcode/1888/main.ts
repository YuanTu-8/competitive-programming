function minFlips(str: string): number {
    const strLen = str.length;
    const doubled = str + str;
    let numDiffs = 0; // mismatch count against "010101..."
    let ans = strLen;

    for (let right = 0; right < 2 * strLen; ++right) {
        const bit = doubled[right] === "1" ? 1 : 0;
        if (bit !== right % 2)
            ++numDiffs;

        // Shrink window: remove the leftmost element
        if (right >= strLen) {
            const left = right - strLen;
            const excluded = doubled[left] === "1" ? 1 : 0;
            if (excluded !== left % 2)
                --numDiffs;
        }

        // Window is full — compare both patterns
        if (right >= strLen - 1)
            ans = Math.min(ans, numDiffs, strLen - numDiffs);
    }

    return ans;
}
