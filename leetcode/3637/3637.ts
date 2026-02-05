function isTrionic(nums: number[]): boolean {
    const length = nums.length;
    
    const scanWhile = (start: number, condition: (i: number) => boolean): number => {
        let i = start;
        while (i < length - 1 && condition(i)) {
            ++i;
        }
        return i;
    };

    // Phase 1: strictly increasing
    const peak = scanWhile(0, i => nums[i] < nums[i + 1]);
    if (peak === 0) return false;

    // Phase 2: strictly decreasing
    const valley = scanWhile(peak, i => nums[i] > nums[i + 1]);
    if (valley === peak || valley === length - 1) return false;

    // Phase 3: strictly increasing to end
    const end = scanWhile(valley, i => nums[i] < nums[i + 1]);
    return end === length - 1;
}