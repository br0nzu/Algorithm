#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A, B, C;
	cin >> A >> B >> C;

	if (A > B) {
		if (A > C) {
			if (B > C) cout << C << " " << B << " " << A;
			else cout << B << " " << C << " " << A;
		}
		else cout << B << " " << A << " " << C;
	}
	else {
		if (A < C) {
			if (C > B) cout << A << " " << B << " " << C;
			else cout << A << " " << C << " " << B;
		}
		else cout << C << " " << A << " " << B;
	}
}

// sol1
/*
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c; // 입력
  cin >> a >> b >> c;
  int d, e, f; // 크기 순으로 출력할 세 수
  d = min({a,b,c});
  f = max({a,b,c});
  e = a+b+c-d-f;
  cout << d << ' ' << e << ' ' << f;
}
*/

//sol2
/*
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int arr[4];
  for(int i=0;i<3;i++){
	cin>>arr[i];
  }
  sort(arr, arr+3);
  for(int i=0;i<3;i++){
	cout<<arr[i]<<" ";
  }
}
*/