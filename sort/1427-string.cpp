// string 타입의 경우, char 단위로 sort 알고리즘을 사용할 수 있음.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
typedef long long ll;

bool compare(const char &a, const char &b){
    return a > b;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string x;
    cin >> x;
    
    sort(x.begin(), x.end(), compare);
    cout << x;
    
    return 0;
}
