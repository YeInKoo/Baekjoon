#include<iostream>
using namespace std;
int num[10001] = { 0, };
int sum(int n) {
	int result = n;
	for (int i = 10; n > 0; n /= 10) {
		result += n % i;
	}
	return result;
}
int main() {
	for (int i = 1; i < 10001; i++) {
		if (num[i] == 0) {
			int j = i;
			while (j < 10001) {
				j = sum(j);
				num[j] = 1;

			}
		}
	}
	for (int i = 1; i < 10001; i++) {
		if (num[i] == 0) {
			cout << i << endl;
		}
	}
}
