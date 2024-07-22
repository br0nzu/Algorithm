#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(0);

	int score;
	cin >> score;

	if (score >= 90 && score <= 100) {
		cout << "A";
	}
	else if (score >= 80 && score <= 89) {
		cout << "B";
	}
	else if (score >= 70 && score <= 79) {
		cout << "C";
	}
	else if (score >= 60 && score <= 69) {
		cout << "D";
	}
	else {
		cout << "F";
	}
}

/*
	시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
	처음 if문에서 90이상 100이하라고 지정했기 때문에 89이하 숫자들만 생각하면 된다.
	위에 있는 코드 처럼 굳이 80 ~ 89, 70 ~ 79.. 이런식으로 지정할 필요 없고 80이상, 70이상.. 이렇게 하면 된다.
*/

/*
  if(90 <= score && score <= 100)  cout << 'A';
  else if(80 <= score)  cout << 'B';
  else if(70 <= score)  cout << 'C';
  else if(60 <= score)  cout << 'D';
  else cout << 'F';
*/