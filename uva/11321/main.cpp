#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>

int main() {
    std::vector<int> numbers;
    numbers.reserve(1000);

    for (int numInputs, mod; std::cin >> numInputs >> mod && (numInputs || mod);) {
        std::cout << numInputs << ' ' << mod << '\n';

        numbers.resize(numInputs);
        for (int& num : numbers)
            std::cin >> num;

        // Sort by: (1) remainder mod M, (2) odd before even, (3) odd desc / even asc
        std::sort(numbers.begin(), numbers.end(), [mod](int a, int b) {
            auto key = [mod](int num) {
                bool isOdd = num % 2 != 0;
                return std::make_tuple(num % mod, !isOdd, isOdd ? -num : num);
            };
            return key(a) < key(b);
        });

        for (int num : numbers)
            std::cout << num << '\n';
    }

    std::cout << "0 0\n";
}
