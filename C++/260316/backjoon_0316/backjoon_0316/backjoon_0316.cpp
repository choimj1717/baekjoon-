#/*include <iostream>

int main() {
	char c[1001] = {};
	int idx;

	std::cin >> c;
	std::cin >> idx;

	std::cout << c[idx-1] << std::endl;

	return 0;
}*/

//#include <iostream>
//#include <string.h> 
//
//int main() {
//	char c[1001] = {};
//	int num = 0;
//
//	std::cin >> num;
//
//	for (int i = 0; i < num; i++)
//	{
//		std::cin >> c;
//		std::cout << c[0] << c[strlen(c) - 1] << std::endl;
//	}
//	
//	return 0;
//
// 
// }

//#include <iostream>
//#include <algorithm>
//
//int main(void)
//{
//	int num;
//	int arr[1001] = {};
//
//	std::cin >> num;
//
//	for (int i = 0; i < num; i++) {
//		std::cin >> arr[i];
//	}
//
//	std::sort(arr, arr + num);
//
//	for (int i = 0; i < num; i++) {
//		std::cout << arr[i] << std::endl;
//	}
//
//	return 0;
//
// }

//#include <iostream>
//#include <algorithm>
//
//int main(void)
//{
//	int arr[5] = {};
//	int avg = 0;
//
//	for (int i = 0; i < 5; i++) {
//		std::cin >> arr[i];
//	}
//
//	std::sort(arr, arr + 5);
//
//	for (int i = 0; i < 5; i++) {
//		avg += arr[i];
//	}
//
//	avg /= 5;
//
//	std::cout << avg << std::endl;
//	std::cout << arr[2] << std::endl;
//
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//
//int main() {
//	int first, second;
//	long arr[10001] = {};
//
//	std::cin >> first >> second;
//
//	for (int i = 0; i < first; i++) {
//		std::cin >> arr[i];
//	}
//
//	std::sort(arr, arr + first, std::greater<long>());
//
//	std::cout << arr[second - 1] << std::endl;
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;  
//
//    vector<int> arr;
//
//    // 숫자 자릿수 분리
//    for (char c : s) {
//        arr.push_back(c - '0');
//    }
//
//    // 작은 수부터 정렬
//    sort(arr.begin(), arr.end(), std::greater<int>());
//
//    // 출력
//    for (int x : arr) {
//        cout << x;
//    }
//
//    return 0;
//}

#include <iostream>
#include <algorithm>

int main() {
	int x, y, w, h;
	std::cin >> x >> y >> w >> h;

	std::cout << std::min({ x, y, w - x, h - y }) << std::endl;

	return 0;
}