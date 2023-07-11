#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N >> M;
	int A[100001];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	int S[100001];
	for (int i = 0; i < N; i++) {

		S[i + 1] = S[i] + A[i];
	}
	for (int i = 0; i < M; i++) {
		int start, end;
		cin >> start >> end;
		cout << S[end] - S[start - 1] << "\n";
	}
}