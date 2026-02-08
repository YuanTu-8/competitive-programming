type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };
type JSONContainer = Record<string, JSONValue> | Array<JSONValue>;

function isNestedContainer(value: JSONValue): value is JSONContainer {
    return typeof value === "object" && value != null;
}

function compactObject(input: JSONContainer): JSONContainer {
    if (Array.isArray(input)) {
        return input
            .filter(Boolean)
            .map(item => isNestedContainer(item) ? compactObject(item) : item);
    }

    return Object.fromEntries(
        Object.entries(input)
            .filter(([, value]) => Boolean(value))
            .map(([key, value]) => [
                key,
                isNestedContainer(value) ? compactObject(value) : value
            ])
    );
}