#include <algorithm>
#include <iostream>

constexpr int TARGET = 1500;

int main() {
    long long ugly[TARGET + 1] = {0, 1};
    constexpr int primes[] = {2, 3, 5};
    int indices[] = {1, 1, 1};

    auto candidate = [&](int i) {
        return ugly[indices[i]] * primes[i];
    };

    for (int i = 2; i <= TARGET; ++i) {
        ugly[i] = std::min({candidate(0), candidate(1), candidate(2)});

        for (int j = 0; j < 3; ++j)
            if (ugly[i] == candidate(j))
                ++indices[j];
    }

    std::cout << "The 1500'th ugly number is " << ugly[TARGET] << ".\n";
}
