// C
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a;
	cin >> a;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= i; j++) cout << "*";
		cout << "\n";
	}
}