#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N >> M;
	vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));
	vector<vector<int>> B(N + 1, vector<int>(N + 1, 0));
	for (int i = 1; i < N + 1; i++) {
		for (int j = 1; j < N + 1; j++) {
			cin >> A[i][j];

			B[i][j] = B[i][j - 1] + B[i - 1][j] + -B[i - 1][j - 1] + A[i][j];
		}
	}
	for (int i = 0; i < M; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int res = B[x2][y2] - B[x1 - 1][y2] - B[x2][y1 - 1] + B[x1 - 1][y1 - 1];
		cout << res << "\n";
	}
}