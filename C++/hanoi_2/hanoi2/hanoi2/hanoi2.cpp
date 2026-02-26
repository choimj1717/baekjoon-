#include <iostream>
#include <vector>

int count = 0;

int hanoi(int alpha, int first, int last, int tmp) {
	if (alpha == 1) {
		count += 1;
		std::cout << first << " " << last << "\n";
		return 0;
	}

	hanoi(alpha - 1, first, tmp, last);
	count += 1;
	std::cout << first << " " << last << "\n";
	hanoi(alpha - 1, tmp, last, first);

	return 0;
}

int main() {
	int num;

	std::cin >> num;

	if (num <= 20) {
		long long count = (1LL << num) - 1;

		std::cout << count << "\n";

		hanoi(num, 1, 3, 2);
	}
	else {
		unsigned long long count = (1LL << num) - 1;
		std::cout << count << "\n";

		return 0;
	}

	return 0;
}
