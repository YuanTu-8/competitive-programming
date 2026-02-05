class TimeLimitedCache {
    private cache = new Map<number, { value: number; timer: ReturnType<typeof setTimeout> }>();

    set(key: number, value: number, duration: number): boolean {
        const existing = this.cache.get(key);

        // Clear existing timer to prevent stale deletion
        if (existing) {
            clearTimeout(existing.timer);
        }

        const timer = setTimeout(() => this.cache.delete(key), duration);
        this.cache.set(key, { value, timer });

        return existing !== undefined;
    }

    get(key: number): number {
        return this.cache.get(key)?.value ?? -1;
    }

    count(): number {
        return this.cache.size;
    }
}