//N = 10^9 (1s = 10^8)
//10125 % 10 = 5 | 10125 / 10 = 1012 || 3 % 10 = 3 | 3 / 10 = 0
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
typedef long long ll;

int arr[10] = {0};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int x = n;
    while(x > 0){
        arr[x % 10] += 1;
        x /= 10;
    }
    
    for(int i = 9; i >= 0; i--){
        for(int j = arr[i]; j > 0; j--){
            cout << i;
        }
    }
    
    return 0;
}
