#include<bits/stdc++.h>
using namespace std;

long long int print(long long int x){
    if(x/10 == 0){
        return x;
    }
    return print(x/10) + x%10;
}


int main() {
    int t;
    cin >> t;
    while(t--){
        long long int x;
        cin >> x;
        cout << print(x) << endl;
    }
    return 0;
}
