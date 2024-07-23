#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A[5], sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> A[i];
		sum += A[i];
	}
	sort(A, A + 5);
	int aver = sum / 5;

	cout << aver << "\n" << A[2];
}