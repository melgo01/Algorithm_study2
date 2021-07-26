#include <iostream>
using namespace std;

int main() {
	int dp[12], n, T;
	cin >> T;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 1; i <= T; i++) {
		cin >> n;
		for (int j = 4; j <= n; j++) {
			dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
		}
		cout << dp[n] << endl;
	}
}