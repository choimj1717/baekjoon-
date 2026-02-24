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
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int num;
	std::cin >> num;

	long long count = (1LL << num) - 1;
	std::cout << count << "\n";
	hanoi(num, 1, 3, 2);

	return 0;
}

// recursive function
/*
#include <iostream>
#include <vector>

int count = 0;
std::vector<int> result;

int hanoi(int alpha, int first, int last, int tmp) {
	if (alpha == 1) {
		count += 1;
		result.push_back(first); result.push_back(last);
		return 0;
	}

	hanoi(alpha - 1, first, tmp, last);
	count += 1;
	result.push_back(first); result.push_back(last);
	hanoi(alpha - 1, tmp, last, first);

	return 0;
}

int main() {
	int num;

	std::cin >> num;

	hanoi(num, 1, 3, 2);

	std::cout << count << "\n";
	for (int i = 0; i < result.size(); i += 2) {
		std::cout << result[i] << " " << result[i + 1] << "\n";
	}

	return 0;
}
 */