#include <iostream>

int main() {
    for (int addend, augend; std::cin >> addend >> augend && (addend || augend);) {
        int carry = 0, carryCount = 0;
        while (addend || augend || carry) {
            carry = (addend % 10 + augend % 10 + carry) / 10;
            if (carry)
                ++carryCount;
            addend /= 10;
            augend /= 10;
        }

        if (!carryCount) {
            std::cout << "No carry operation.\n";
        } else {
            std::cout << carryCount << " carry operation" << (carryCount > 1 ? "s.\n" : ".\n");
        }
    }
}
