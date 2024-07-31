#include <bits/stdc++.h>
using namespace std;

int arr[101];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];

	int v;
	cin >> v;

	int cnt = 0;

	for (int i = 0; i < N; i++) {
		if (arr[i] == v) cnt++;
	}

	cout << cnt;
}