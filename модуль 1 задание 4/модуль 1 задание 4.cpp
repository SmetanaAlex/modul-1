
#include <iostream>
#include <vector>

using namespace std;
const int N = 1000;
struct ar { char arr[N]; };
vector<ar> list, list2;
bool check(char* s) {
	int k = strlen(s); int i, j;
	for (i = 1; i <= k / 2; i++) {
		bool b = true;
		for (j = 0; j < i; j++) {
			if (s[k - 2 * i + j] != s[k - i + j]) {
				b = false;
				break;
			}
		}
		if (b)
			return false;
	}
	return true;
}

void add1(int n) {
	ar s;
	for (int i = 0; i < list.size(); i++) {
		strcpy_s(s.arr, list[i].arr);
		for (int j = 1; j <= 3; j++) {
			s.arr[n] = '0' + j;
			s.arr[n + 1] = 0;
			if (check(s.arr)) {
				list2.push_back(s);
			}
		}
	}
}

void printlist(void) {
	for (int i = 0; i <list.size() ; i++)//
	{
		cout << (char*)(list[i].arr) << endl;
	}
}

int main()
{
	int z;
	
	cout << "N="; cin >> z;
	if (z <= 0)cout << "Net net net net net" << endl;
	ar s;
	s.arr[1] = '\0';
	s.arr[0] = '1'; list.push_back(s);
	s.arr[0] = '2'; list.push_back(s);
	s.arr[0] = '3'; list.push_back(s);


	for (int i = 1; i < z; i++) {
		add1(i);
		list = list2;
		list2.clear();
	}

	printlist();
	system("pause");
	return 0;
}

