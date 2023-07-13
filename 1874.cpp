#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	vector<int> A(N, 0);
	vector<char> B;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	stack<int> myStack;
	int num = 1;
	bool result = true;
	for (int i = 0; i < A.size(); i++) {
		int su = A[i];
		if (su >= num) {
			while (su >= num) {
				myStack.push(num++);
				B.push_back('+');
			}
			myStack.pop();
			B.push_back('-');
		}
		else {
			int n = myStack.top();
			myStack.pop();
			if (n > su) {
				cout << "NO";
				result = false;
				break;
			}
			else {
				B.push_back('-');
			}
		}
	}
	if (result) {
		for (int i = 0; i < B.size(); i++) {
			cout << B[i] << "\n";
		}
	}
}