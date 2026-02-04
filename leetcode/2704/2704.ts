type ToBeOrNotToBe = {
    toBe: (actual: unknown) => true;
    notToBe: (actual: unknown) => true;
};

function expect(actual: unknown): ToBeOrNotToBe {
    return {
        toBe: (expected: unknown) => {
            if (actual !== expected) throw new Error("Not Equal");
            return true;
        },
        notToBe: (expected: unknown) => {
            if (actual === expected) throw new Error("Equal");
            return true;
        }
    };
}