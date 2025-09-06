// k = 2^n(거듭제곱) 반복 횟수 (3 ~ 21번) 2^20 대략 10^6 정도.
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    int judge;
    cin >> judge;
    
    // (start = 8이면, 한 2, 4, 8 간격으로 작업 진행)
    // 8개 : 01 23 45 67
    int step = n / judge;
    for(int i = 0; i < n; i += step){
        sort(v.begin() + i, v.begin() + i + step);
    }
    
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    
    return 0;
}
