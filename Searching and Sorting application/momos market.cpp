#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin >> n;
	int price[n];
	int prefix[n];
	prefix[0] = 0;
	for(int i = 0; i<n; i++){
		cin >> price[i];
		prefix[i] += price[i];
	}
	int q;
	cin >> q;
	int saved[q];
	for(int i = 0; i<q; i++){
		cin >> saved[i];
		int position = lower_bound(prefix,prefix+n,saved[i])-prefix;
		if(prefix(position) == saved[i]){
			cout << position+1 << "0" << endl;
		}
		else{
			cout << position <<amount[i] - prefix[position-1] << endl
		}
	}
	return 0;
}
