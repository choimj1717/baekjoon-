#include <iostream>

int hanoi(int alpha) {

	if (alpha == 0) return 0;

	for (int i = 0; i < alpha; i++) {
		for(int j  = 0; j < alpha - i; j++) {

		}
	}


	return 0;
}

int main()
{
	int num;

	std::cin >> num;

	hanoi(num);

    return 0;
}