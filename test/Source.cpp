#include <iostream>
#include <cmath>
using namespace std;

void solution(int N)
{
	long long dp[6];

	dp[0] = 1;

	for (int i = 1; i <= N; i++) {
		int sum = 0;

		for (int j = 1; j <= 6; j++)
			if (i - j >= 0)
				sum += dp[(i - j) % 6];

		dp[i % 6] = sum;
	}
	cout << dp[N % 6];
}

int main()
{
	int n;
	cin >> n;
	solution(n);
	return 0;
}