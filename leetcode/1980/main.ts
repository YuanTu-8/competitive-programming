function findDifferentBinaryString(nums: string[]): string {
    return nums.map((str, i) => (str[i] === "0" ? "1" : "0")).join("");
}
