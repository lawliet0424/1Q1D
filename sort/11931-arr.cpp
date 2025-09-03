// 배열을 전역 변수로 선언

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

int arr[1000001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);
    reverse(arr, arr + n);
    
    for(int i = 0; i < n; i++)
        cout << arr[i] << '\n';
    
    return 0;
}
