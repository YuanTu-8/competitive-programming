class ArrayWrapper {
    private readonly nums: number[];
    private readonly sum: number;

    constructor(nums: number[]) {
        this.nums = nums;
        this.sum = nums.reduce((sum, num) => sum + num, 0);
    }

    valueOf(): number {
        return this.sum;
    }

    toString(): string {
        return `[${this.nums.join(',')}]`;
    }
}