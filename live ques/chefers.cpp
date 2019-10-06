#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n, m;
		cin >> n >> m;
		vector<pair<int,int>> data;
		for(int i = 0; i<n; i++){
			int x, y;
			cin >> x >> y;
			data.push_back(make_pair(x,y));
		}
		sort(data.begin(),data.end());
		for(int i = 0; i<m;i++){
			int x;
			cin >> x;
			int position = lower_bound(data.begin(), data.end(),make_pair(x,0)) - data.begin();
			if(position == 0){
				cout << (data[0].first - x) << endl;
			}
			
			else{
				int ans = -1;
				if(data[position-1].second > x ){
					ans = 0;
				}
				else if(position < data.size()){
					ans = data[position].first - x;
				}
				cout << ans << endl;
			}
			
		}
	}
	return 0;
}
