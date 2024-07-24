#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A[9];
	int max = 0, cnt = 1;

	for (int i = 0; i < 9; i++) {
		cin >> A[i];

		if (A[i] > max) {
			max = A[i];
			cnt = i + 1;
		}
	}

	cout << max << "\n" << cnt;
}