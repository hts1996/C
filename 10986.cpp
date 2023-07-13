#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N >> M;
	vector<long>A(N, 0);
	vector<long>B(M, 0);
	long ans = 0;
	cin >> A[0];
	for (int i = 1; i < N; i++) {
		int in = 0;
		cin >> in;
		A[i] = A[i - 1] + in;
	}

	for (int i = 0; i < N; i++) {
		int res = A[i] % M;
		if (res == 0) {
			ans++;
		}
		B[res]++;
	}
	for (int i = 0; i < M; i++) {
		if (B[i] > 1) {
			ans = ans + (B[i] * (B[i] - 1) / 2);
		}
	}
	cout << ans << "\n";
}