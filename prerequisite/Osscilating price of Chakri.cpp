#including<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	int maxProfit = INT_MIN;
	int min = 0;
	for(int i = 1; i<n; i++){
		if(arr[i] < arr[min]){
			min = i;
		}
		int profit = arr[i] - arr[min];
		if(maxProfit < profit){
			maxProfit = profit;
		}
	}
	cout << MaxProfit << endl;
	return 0;
}
