#include <iostream>
#include <vector>

constexpr int NUM_NODES = 5;
constexpr int NUM_EDGES = 8;

const std::vector<int> adj[NUM_NODES + 1] = {{},           {2, 3, 5}, {1, 3, 5},
                                             {1, 2, 4, 5}, {3, 5},    {1, 2, 3, 4}};
bool used[NUM_NODES + 1][NUM_NODES + 1];
int path[NUM_EDGES + 1];

void dfs(int curr, int depth) {
    path[depth] = curr;
    if (depth == NUM_EDGES) {
        for (int node : path)
            std::cout << node;
        std::cout << '\n';
        return;
    }

    for (int next : adj[curr]) {
        if (!used[curr][next]) {
            used[curr][next] = used[next][curr] = true;
            dfs(next, depth + 1);
            used[curr][next] = used[next][curr] = false;
        }
    }
}

int main() {
    dfs(1, 0);
}
