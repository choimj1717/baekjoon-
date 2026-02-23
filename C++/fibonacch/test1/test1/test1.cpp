#include <iostream>

int fibo(int a) {

	if (a <= 1)
	{
		return a;
	}
	return fibo(a - 1) + fibo(a - 2);
}
        
int main()
{
	int n;
	std::cin >> n;

	std::cout << fibo(n) << std::endl;
}
