#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    multimap<int,string,greater<int>> students;
    for(int i = 0; i<n; i++){
        string s;
        cin >> s;
        int x, y, z;
        cin >> x >> y >> z;
        int temp = x + y + z;
        students.insert(make_pair(temp,s));
    }
    int i =1;
    for(pair<int,string> x : students){
        cout << i++ << " " << x.second << endl;
    }
	return 0;
}

