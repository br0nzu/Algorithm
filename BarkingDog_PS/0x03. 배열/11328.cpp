#include <bits/stdc++.h>
using namespace std;

string a, b;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int str[26] = { }, cnt = 0;
		
		cin >> a >> b;

		for (int i = 0; i < a.length(); i++) {
			str[a[i] - 'a']++;
			str[b[i] - 'a']--;
		}

		for (int i = 0; i < 26; i++) {
			if (str[i]) cnt++;
		}

		if (cnt) cout << "Impossible" << "\n";
		else cout << "Possible" << "\n";
	}
}