#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A[7], sum = 0;
	for (int i = 0; i < 7; i++) {
		cin >> A[i];

		if (A[i] % 2 != 0) {
			sum += A[i];
		}
	}
	if (sum != 0) cout << sum << "\n";
	else cout << -1;

	sort(A, A + 7);
	for (int i = 0; i < 7; i++) {
		if (A[i] % 2 != 0) {
			cout << A[i];
			break;
		}
	}
}

// sol
/*
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x, odd = 0, sum = 0, min = 100;

  for (int i = 0; i < 7; i++) {
	cin >> x;

	if (x & 1) {
	  odd += 1;
	  sum += x;

	  if (x < min) {
		min = x;
	  }
	}
  }

  if (odd) cout << sum << "\n" << min;
  else cout << "-1";
}
*/