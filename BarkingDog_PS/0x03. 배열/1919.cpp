#include <bits/stdc++.h>
using namespace std;

int arr_a[26], arr_b[26], cnt;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a, b;
	cin >> a >> b;

	for (int i = 0; i < a.length(); i++) {
		arr_a[a[i] - 'a']++;
	}
	for (int i = 0; i < b.length(); i++) {
		arr_b[b[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (arr_a[i] - arr_b[i] > 0) cnt = cnt + arr_a[i] - arr_b[i];
		else cnt = cnt - (arr_a[i] - arr_b[i]);
	}

	cout << cnt;
}