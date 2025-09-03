// vector를 사용하였을 때

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = 0;
    cin >> n;
    
    vector<int> v(n);
    int x = 0;
    for(int &x : v) {
        cin >> x;
    }
    
    sort(v.begin(), v.end());
    
    for(const int &y : v) {
        cout << y << '\n';
    }
    
    return 0;
}
