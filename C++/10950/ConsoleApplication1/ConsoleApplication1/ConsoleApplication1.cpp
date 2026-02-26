// 백준 문제풀이 15552

//#include <iostream>
//
//int main() {
//	int num;
//
//	int first, second;
//
//	int arr[10000];
//
//	std::cin >> num;
//	for (int i = 0; i < num; i++) {
//		std::cin >> first;
//		std::cin >> second;
//
//		arr[i] = first + second;
//	}
//
//	for (int i = 0; i < num; i++) {
//		std::cout << arr[i] << "\n";
//	}
//
//	return 0;
//}


// 백준 9498번 문제 풀이

//#include <iostream>
//#include <cstring>
//
//int main() {
//	int num;
//
//	std::cin >> num;
//
//	std::string last = (num >= 90) ? "A" : (num >= 80) ? "B" : (num >= 70) ? "C" : (num >= 60) ? "D" : "F";
//
//	std::cout << last << std::endl;
//
//	return 0;
//}

// 백준 2588번 문제 풀이

//#include <iostream>
//
//int main() {
//	int num1, num2;
//	std::cin >> num1 >> num2;
//
//	std::cout << num1 * (num2 % 10) << std::endl;
//	std::cout << num1 * ((num2 / 10) % 10) << std::endl;
//	std::cout << num1 * (num2 / 100) << std::endl;
//	std::cout << num1 * num2 << std::endl;
//
//	return 0;
//}

//#include <iostream>
//
//int main() {
//	int a, b, c;
//
//	std::cin >> a >> b >> c;
//
//	std::cout << a + b + c << std::endl;
//	return 0;
//}

//10171번 문제 풀이

//#include <iostream>
//
//int main() {
//	std::cout << "\\    /\\" << std::endl;
//	std::cout << " )  ( ')" << std::endl;
//	std::cout << "(  /  )" << std::endl;
//	std::cout << " \\(__)|" << std::endl;
//
//	return 0;
//}

//10172번 문제 풀이

//#include <iostream>
//
//int main() {
//	std::cout << "|\\_/|" << std::endl;
//	std::cout << "|q p|   /}" << std::endl;
//	std::cout << "( 0 )\"\"\"\\" << std::endl;
//	std::cout << "|\"^\"`    |" << std::endl;
//	std::cout << "||_/=\\\\__|" << std::endl;
//
//	return 0;
//}

//9393번 문제 풀이

//#include <iostream>
//
//int main() {
//
//	int num;
//
//	int temp = 0;
//
//	std::cin >> num;
//
//	for(int i = 1; i <= num; i++) {
//		temp += i;
//	}
//	
//	std::cout << temp << std::endl;
//
//	return 0;
//}

// 25304번 문제 풀이

//#include <iostream>
//
//int main () {
//
//	int final, num;
//
//	int temp = 0;
//
//	int first, second;
//
//	std::cin >> final;
//	std::cin >> num;
//
//	for(int i = 1; i <= num; i++) {
//		std::cin >> first >> second;
//		temp += first * second;
//	}
//
//	if (temp == final) {
//		std::cout << "Yes" << std::endl;
//	} else {
//		std::cout << "No" << std::endl;
//	}
//
//	return 0;
//}

// 11021번 문제 풀이

//#include <iostream>
//
//int main() {
//	int num;
//
//	int first, second;
//
//	int arr[10000];
//
//	std::cin >> num;
//	for (int i = 0; i < num; i++) {
//		std::cin >> first;
//		std::cin >> second;
//
//		arr[i] = first + second;
//	}
//
//	for (int i = 0; i < num; i++) {
//		std::cout << "Case #" << i+1 << ": " << arr[i] << "\n";
//	}
//
//	return 0;
//}

//#include <iostream>
//
//int main() {
//	int num;
//
//	int first, second;
//
//	int arr[10000];
//
//	std::cin >> num;
//	for (int i = 0; i < num; i++) {
//		std::cin >> first;
//		std::cin >> second;
//
//		arr[i] = first + second;
//
//		std::cout << "Case #" << i + 1 << ": " << first << " + " << second << " = " << arr[i] << std::endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//int main() {
//	int first, second;
//
//	int i = 0;
//
//	int arr[10000];
//
//	while(1){
//		std::cin >> first;
//		std::cin >> second;
//
//		arr[i] = first + second;
//		i += 1;
//
//		if (first == 0 && second == 0) {
//			break;
//		}
//	}
//
//	for (int j = 0; j < i - 1; j++) {
//		std::cout << arr[j] << "\n";
//	}
//
//	return 0;
//}

// 10818번 문제 풀이

//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//    cin >> num;
//
//    int arr[10000];
//
//    for (int i = 0; i < num; i++) {
//        cin >> arr[i];
//    }
//
//    int mn = arr[0];
//    int mx = arr[0];
//
//    for (int i = 1; i < num; i++) {
//        if (arr[i] < mn) mn = arr[i];
//        if (arr[i] > mx) mx = arr[i];
//    }
//
//    cout << mn << " " << mx << "\n";
//    return 0;
//}
