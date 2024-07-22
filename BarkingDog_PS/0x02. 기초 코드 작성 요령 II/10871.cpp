/* C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, X;
	scanf("%d %d", &N, &X);

	int A[10000];
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);

		if (A[i] < X) {
			printf("%d ", A[i]);
		}
	}
	return 0;
}
*/

// C++
#include <bits/stdc++.h>
using namespace std;

int N, X, A[10001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> X;
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < N; i++) if (A[i] < X) {
		cout << A[i] << " ";
	}
}