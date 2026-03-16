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

// 10952번 문제 풀이

//#include <iostream>
//
//int main() {
//	int num, number;
//	int alpha = 0;
//	int arr[10000];
//
//	std::cin >> num;
//
//	for(int i = 0; i < num; i++) {
//		std::cin >> alpha;
//		arr[i] = alpha;
//	}
//
//	std::cin >> number;
//	
//
//}

// 최대값 최소값을 찾아 두 값을 곱해 원래 수를 구함.

//#include <iostream>
//
//int main() {
//
//    int div_num = 0; // 약수 갯수
//    int divisors[51] = { 0 }; // 약수들
//    long long N = 0; // 구하려는 N
//    int i = 0; // 반복 인덱스
//    int min, max; // 약수들 중 최대값, 최소값 저장
//
//    std::cin >> div_num;
//
//    for (i = 0; i < div_num; i++) {
//        std::cin >>divisors[i];
//    }
//
//    switch (div_num)
//    {
//    case 0:
//        break;
//
//    case 1:
//        N = divisors[0] * divisors[0];
//        std::cout << N;
//        break;
//
//    default:
//        min = max = divisors[0];
//
//        for (int i = 0; i < div_num - 1; i++) {
//            if (min > divisors[i + 1]) {
//                min = divisors[i + 1];
//            }
//        }
//
//        for (int i = 0; i < div_num - 1; i++) {
//            if (max < divisors[i + 1]) {
//                max = divisors[i + 1];
//            }
//        }
//
//        N = min * max;
//        std::cout << N;
//        break;
//    }
//
//    return 0;
//
//}


//#include <iostream>
//
//int first = 0, second = 0;
//
//int fibonacci(int n) {
//
//    if (n == 0) {
//        first += 1;
//        return 0;
//    }
//    else if (n == 1) {
//        second += 1;
//        return 1;
//    }
//    else {
//        return fibonacci(n-1) + fibonacci(n-2);
//    }
//}
//
//int main() {
//	int num;
//	int select[50];
//
//	std::cin >> num;
//
//    for (int i = 0; i < num; i++) {
//        std::cin >> select[i];
//        fibonacci(select[i]);
//		std::cout << first << " " << second << std::endl;
//		first = 0; second = 0;
//    }
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main() {
//	int T;	// 테스트 케이스의 개수
//	int N;	// 각 테스트 케이스, fibonacci(N)
//
//	int fibonacci[42][2];
//
//	fibonacci[0][0] = 1;
//	fibonacci[0][1] = 0;
//
//	fibonacci[1][0] = 0;
//	fibonacci[1][1] = 1;
//
//
//	for (int i = 2; i < 42; ++i)
//	{
//		fibonacci[i][0] = fibonacci[i - 1][0] + fibonacci[i - 2][0];
//		fibonacci[i][1] = fibonacci[i - 1][1] + fibonacci[i - 2][1];
//	}
//
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		cin >> N;
//		cout << fibonacci[N][0] << " " << fibonacci[N][1] << endl;
//	}
//
//	return 0;
//}
//

//#include <iostream>
//
//int main() {
//	int num[30];
//	int min_1 = 0, min_2 = 0;
//
//	for(int i = 0; i < 28; i++) {
//		std::cin >> num[i];
//	}
//
//	min_1 = num[0]; min_2 = num[0];
//
//	for(int i = 0; i < 28; i++) {
//		if (num[i] < min_1) {
//			min_1 = num[i];
//		}
//		if (num[i] < min_2 && min_1 != min_2) {
//			min_2 = num[i];
//		}
//
//	}
//
//	std::cout << min_1 << std::endl;
//	std::cout << min_2 << std::endl;
//
//	return 0;
//}


// 백준 2630번 문제 풀이

#include <iostream>

// 분할 정복 및 재귀 홤수 사용

int num; // 입력밭을 행과 열의 개수
int white = 0, blue = 0; // 흰색, 파란색을 담을 변수
int arr[128][128]; // 0과 1로된 색종이를 담을 배열

// num = size
void  cut_paper(int y, int x, int size) {
	if(size == 1) { // size == 1 즉 안 쪽 사각형 까지 탐색이 완료 됬다면 실행
		 if (arr[y][x] == 0) white += 1; // 가장 안쪽의 사각형이 0이면 하얀색
		 else blue += 1; // 1이면 파란색을 더하고

		 return; // 끝냄
	}

	// 영역 내 색이 한 종류인지 확인
	int count0 = 0, count1 = 0;
	
	for (int i = y; i < y + size; i++) { // 0 ~ size 만큼 순회
		for (int j = x; j < x + size; j++) { // 행도 마찬가지로 순회
			if (arr[i][j] == 0) count0++; // size의 배열이 0이면 증감
			else count1++; // 아니면 (1이면) 증감
		}
	}
	// 정사각형

	// 정사각형의 사이즈와 가로 세로가 모두 0이면 즉 배열이 같으면 정사각형 부분이 있고 하양을 의미함으로 하양 증감 및 함수 실행 종료
	if (count0 == size * size) white++; 

	// 0이 아니라면 다른 수 1이 들어있기에 1을 비교하고 사이즈의 크기와 맞다면 파랑을 반환 및 함수 실행 종료
	else if (count1 == size * size) blue++; // 영역 내 색이 한 종류

	// 이것도 아니라면 아직 정사각형을 찾이 못한 것이기에 한 번 더 크기를 반으로 나누고 순회
	else {
		cut_paper(y, x, size / 2); // 왼쪽 상단
		cut_paper(y, x + size / 2, size / 2); // 오른쪽 상단
		cut_paper(y + size / 2, x, size / 2); // 왼족 하단
		cut_paper(y + size / 2, x + size / 2, size / 2); // 오른쪽 하단
	}
}

int main() {
	// 배열에[ 값 입력 받기
	std::cin >> num;

	// 행과 열에 각각 숫자 입력 받기 위한 for문
	for (int i = 0; i < num; i++) for (int j = 0; j < num; j++) std::cin >> arr[i][j];

	cut_paper(0, 0, num); // 함수 실행 

	// 하얀색, 파란색 출력
	std::cout << white << std::endl;
	std::cout << blue << std::endl;

	return 0;
}