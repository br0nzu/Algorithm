#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for(int i = 0; i < 3; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		int sum = a + b + c + d;

		if (sum == 4) cout << "E";
		else if (sum == 3) cout << "A";
		else if (sum == 2) cout << "B";
		else if (sum == 1) cout << "C";
		else if (sum == 0) cout << "D";
		cout << "\n";
	}
}