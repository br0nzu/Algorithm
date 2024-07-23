#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long A[2];
	for (int i = 0; i < 2; i++) cin >> A[i];

	sort(A, A + 2);

	if (A[1] - A[0] == 0 || A[1] - A[0] == 1) cout << "0" << "\n";
	else {
		cout << A[1] - A[0] - 1 << "\n";

		for (A[0]; A[0] + 1 < A[1]; A[0]++) cout << A[0] + 1 << " ";
	}
}