#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    s += " ";
    int curr = 0;
    int size = s.size();
    unordered_map<string,int> data;
    while(curr<size){
        string str="";
        while(!isspace(s[curr])){
            str+=s[curr];
            curr++;
        }
        curr++;
        data[str]++;
    }
    bool check = true;
    
    for(pair<string,int> x: data){
    	if(x.second == 1){
    		continue;
		}
		else{
			check = false;
			cout << x.first << " " << x.second << endl;
		}
        
    }
    if(check){
    	cout << "-1";
	}
	return 0;
}
