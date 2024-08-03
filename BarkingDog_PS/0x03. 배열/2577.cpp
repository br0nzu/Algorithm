#include <bits/stdc++.h>
using namespace std;

int arr[10], x;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A, B, C;
	cin >> A >> B >> C;

	int result = A * B * C;

	while (result > 0) {
		x = result % 10;
		arr[x]++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++) cout << arr[i] << "\n";
}

// sol
/*
#include <bits/stdc++.h>
using namespace std;

int d[10] = {};

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int A, B, C;
  cin >> A >> B >> C;
  int t=A*B*C;

  // 계산 결과를 자릿수별로 확인하여 저장
  while (t>0) {
	d[t%10]++;
	t/=10;
  }
  for (int i=0; i<10; ++i) cout << d[i] << '\n';
}
*/