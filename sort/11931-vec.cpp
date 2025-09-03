// vector를 전역 변수로 선언.

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

vector<int> v;

bool compare(const int& a, const int& b){
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x = 0;
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end(), compare);
    
    for(int i = 0; i < n; i++)
        cout << v[i] << '\n';
    
    return 0;
}
