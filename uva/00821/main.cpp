#include <climits>

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <set>

constexpr int MAX_NODE = 100;
int dist[MAX_NODE + 1][MAX_NODE + 1];

int main() {
    int caseNum = 0;
    for (int u, v; std::cin >> u >> v && (u || v);) {
        std::fill(&dist[0][0], &dist[0][0] + (MAX_NODE + 1) * (MAX_NODE + 1), INT_MAX / 2);
        std::set<int> nodes;

        do {
            dist[u][v] = 1, dist[u][u] = dist[v][v] = 0;
            nodes.insert({u, v});
        } while (std::cin >> u >> v && (u || v));

        for (int via : nodes)
            for (int src : nodes)
                for (int dst : nodes)
                    dist[src][dst] = std::min(dist[src][dst], dist[src][via] + dist[via][dst]);

        int sum = 0;
        for (int src : nodes)
            for (int dst : nodes)
                if (src != dst)
                    sum += dist[src][dst];

        std::cout << std::fixed << std::setprecision(3) << "Case " << ++caseNum
                  << ": average length between pages = "
                  << static_cast<double>(sum) / (nodes.size() * (nodes.size() - 1)) << " clicks\n";
    }
}
