#include <bits/stdc++.h>
using namespace std;

int W[7], M[7], S, G, cnt;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> S >> G;
		if (S == 0) W[G - 1]++;
		else if (S == 1) M[G - 1]++;
	}

	for (int i = 0; i < 6; i++) {
		if (W[i] > 0) {
			if (W[i] / K == 0) cnt++;
			else {
				if (W[i] % K == 0) cnt += W[i] / K;
				else cnt += W[i] / K + 1;
			}
		}

		if (M[i] > 0) {
			if (M[i] / K == 0) cnt++;
			else {
				if (M[i] % K == 0) cnt += M[i] / K;
				else cnt += M[i] / K + 1;
			}
		}
	}

	cout << cnt;
}