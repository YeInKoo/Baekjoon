#include<iostream>
using namespace std;
void add(int cnt[16][16],char *a, char* b) {
	for (int i = 0; i < 16; i++) {
		if (i % 2 == 0)cnt[0][i] = a[i / 2] - '0';
		else cnt[0][i]=b[i / 2] - '0';
	}
}
int main() {
	int cnt[16][16];
	char n1[9], n2[9];
	cin >> n1 >> n2;
	add(cnt, n1, n2);

	for (int i = 1; i < 16; i++) {
		for (int j = 0; j < 16 - i; j++) {
			cnt[i][j] = (cnt[i - 1][j] + cnt[i - 1][j + 1])%10;
		}
	}
	cout << cnt[14][0] << cnt[14][1] << endl;
}