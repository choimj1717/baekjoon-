#include <iostream>

void hanoi(int n, int from, int to, int aux) {
    if (n == 1) {
        std::cout << from << " " << to << "\n";
        return;
    }

    hanoi(n - 1, from, aux, to);
    std::cout << from << " " << to << "\n";
    hanoi(n - 1, aux, to, from);
}

int main() {
    int num;
    std::cin >> num;

    if (num >= 1) {
        hanoi(num, 1, 3, 2);
    }

    return 0;
}
