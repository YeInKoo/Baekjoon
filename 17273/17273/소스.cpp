#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int>card[2],current;
	int n, m, num;
	cin >> n >> m;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n; j++) {
			cin >> num;
			card[i].push_back(num);
			current.push_back(0);
		}
	}
	

	for (int i = 0; i < m; i++) {
		cin >> num;
		for (int j = 0; j < n; j++) {
			if (card[current[j]][j] <= num) {
				current[j] = abs(current[j] - 1);
			}
		}
		
	}
	num = 0;
	for (int i = 0; i < n; i++) {
		num += card[current[i]][i];
	}
	cout << num << endl;
}