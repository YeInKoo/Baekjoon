#include<iostream>
using namespace std;
int sum(int n) {
	int total = n;
	for (int i = 10; n != 0; n /= 10) {
		total += n % 10;
	}
	return total;
}
int main() {
	int n,ans=0;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		if (sum(i) == n) {
			ans = i;
			break;
		}

	}
	cout << ans;
}