#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int>v;
	int n, k, num, cnt = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j != i; j--) {
			if (v[i] + v[j] == k)cnt++;
			else if (v[i] + v[j] < k)break;
		}
	}
	cout << cnt;

}