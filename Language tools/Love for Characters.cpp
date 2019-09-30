#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    map<char,int> data;
    for(int i = 0; i<n; i++){
        data[str[i]]++;
    }
    cout << data['a'] << " " << data['s'] << " " << data['p'];
	return 0;
}
