//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int num[28];
//    for (int i = 0; i < 28; i++) cin >> num[i];
//
//    sort(num, num + 28);
//
//    int miss1 = -1, miss2 = -1;
//    int cnt = 0;
//
//    // 앞 경계
//    if (num[0] != 1) {
//        miss1 = 1;
//        cnt++;
//    }
//
//    // 중간
//    for (int i = 0; i < 27; i++) {
//        if (num[i] + 1 != num[i + 1]) {
//            int missing = num[i] + 1;
//            if (cnt == 0) miss1 = missing;
//            else miss2 = missing;
//            cnt++;
//        }
//    }
//
//    // 뒤 경계
//    if (cnt < 2 && num[27] != 30) {
//        if (cnt == 0) miss1 = 30;
//        else miss2 = 30;
//    }
//
//    if (miss1 > miss2) swap(miss1, miss2);
//    cout << miss1 << "\n" << miss2 << "\n";
//    return 0;
//}



#include <iostream>

int main() {

	unsigned long long first, second;

	std::cin >> first >> second;

	std::cout << first / second << std::endl;
	std::cout << first % second << std::endl;

	return 0;
}
