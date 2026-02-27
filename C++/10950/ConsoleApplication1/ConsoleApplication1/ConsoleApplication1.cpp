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

// 백준 2562번 문제 풀이

//#include <iostream>
//
//int main() {
//	int arr[10000];
//	int temp;
//	int max = 0;
//	int adress = 0;
//
//	for (int i = 0; i < 10; i++) {
//		std::cin >> temp;
//		arr[i] = temp;
//	}
//
//	for (int i = 0; i < 10; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//			adress = i + 1;
//		}
//	}
//
//	std::cout << max << std::endl;
//	std::cout << adress << std::endl;
//
//	return 0;
//}

//#include <iostream>
//#include <cstring>
//
//int main() {
//	int arr[10000];
//	std::string num = "";
//	float temp = 0;
//
//	std::cin >> num;
//	
//
//	temp = temp / num;
//
//	std::cout << temp << std::endl;
//}

// 2720 문제 풀이

//#include <iostream>
//
//int main() {
//	int num;
//	int arr[10000];
//	int money[4];
//	int temp = 0;
//
//	std::cin >> num;
//	
//	for(int i = 0; i < num; i++) {
//		std::cin >> arr[i];
//	}
//
//	for (int i = 0; i < num; i++) {
//
//		temp = arr[i] / 25;
//		money[0] = temp;
//
//		temp = (arr[i] % 25) / 10;
//		money[1] = temp;
//
//		temp = ((arr[i] % 25) % 10) / 5;
//		money[2] = temp;
//
//		temp = ((arr[i] % 25) % 10) % 5;
//		money[3] = temp;
//
//
//		std::cout << money[0] << " " << money[1] << " " << money[2] << " " << money[3] << std::endl;
//		temp = 0;
//		money[0] = 0; money[1] = 0; money[2] = 0; money[3] = 0;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//int main() {
//	int num;
//	int first = 0; int second = 0;
//	int sel[1000];
//	int k = 0;
//
//	std::cin >> num;
//
//	for(int i = 0; i < num * 2; i+=2) {
//		std::cin >> first >> second;
//		sel[i] = first;  sel[i + 1] = second;
//	}
//
//	for(int i = 0; i < num * 2; i+=2) {
//		std::cout << "Case #" << k+1 << ": " << sel[i] << " + " << sel[i + 1] << " = " << sel[i] + sel[i + 1] << std::endl;
//		k++;
//	}
//
//	return 0;
//}

// 109510번 문제 풀이

//#include <iostream>
//
//int main() {
//	int num = 0;
//	int first, second;
//	int sel[1000];
//
//	while (std::cin >> first >> second) {
//		sel[num] = first + second;
//		num ++;
//	}
//
//	for(int i=0; i < num; i++) {
//		std::cout << sel[i] << std::endl;
//	}
//	return 0;
//}

#include <iostream>

int main() {
	int num, number;
	int alpha = 0;
	int arr[10000];

	std::cin >> num;

	for(int i = 0; i < num; i++) {
		std::cin >> alpha;
		arr[i] = alpha;
	}

	std::cin >> number;
	

}