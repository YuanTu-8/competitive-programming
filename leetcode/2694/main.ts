type Callback = (...args: any[]) => any;
type Subscription = {
    unsubscribe: () => void;
};

class EventEmitter {
    private listeners = new Map<string, Set<Callback>>();

    subscribe(eventName: string, callback: Callback): Subscription {
        if (!this.listeners.has(eventName)) {
            this.listeners.set(eventName, new Set());
        }
        this.listeners.get(eventName)!.add(callback);

        return {
            unsubscribe: () => {
                this.listeners.get(eventName)?.delete(callback);
            },
        };
    }

    emit(eventName: string, args: any[] = []): ReturnType<Callback>[] {
        const callbacks = this.listeners.get(eventName);
        if (!callbacks) return [];
        return [...callbacks].map(callback => callback(...args));
    }
}