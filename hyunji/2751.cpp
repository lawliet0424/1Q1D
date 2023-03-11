#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, arr[1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n); // sort 함수의 경우, worst case가 O(nlog(n))이다!!

	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}
