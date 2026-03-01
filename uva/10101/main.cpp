#include <iomanip>
#include <iostream>
#include <string>
#include <utility>

constexpr std::pair<long long, const char*> UNITS[] = {
    {10'000'000, " kuti"},
    {100'000, " lakh"},
    {1'000, " hajar"},
    {100, " shata"},
};

std::string toBangla(long long number) {
    if (number < 100)
        return std::to_string(number);

    for (const auto& [value, name] : UNITS)
        if (number >= value) {
            long long q = number / value;
            long long r = number % value;
            return toBangla(q) + name + (r ? " " + toBangla(r) : "");
        }

    return "";  // unreachable
}

int main() {
    int caseNum = 0;
    for (long long number; std::cin >> number;)
        std::cout << std::setw(4) << ++caseNum << ". " << toBangla(number) << '\n';
}
