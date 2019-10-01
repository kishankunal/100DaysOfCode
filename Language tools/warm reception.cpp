#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	int arrival[n];
	int depart[n];
	
	for(int i =0; i<n;i++){
		cin >> arrival[i];
	}
	
	for(int i = 0; i<n; i++){
		cin >> depart[i];
	}
	
	sort(arrival,arrival+n);
	sort(depart,depart+n);
	
	int chair = 1,temp = 1, i = 1, j = 0;
	
	=while(i<n && j<n){
		if(arrival[i] < depart[j]){
			temp++;
			i++;
			chair = max(chair,temp);
		}
		else{
			temp--;
			j++;
		}
	}
	cout << chair << endl;
}
