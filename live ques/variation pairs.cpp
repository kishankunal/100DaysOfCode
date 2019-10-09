#include<bits/stdc++.h>
using namespace std;

long long int calVariation(int arr[], int n, int k){
	sort(arr,arr+n);
	int j = 1;
	int i = 0;
	long long int count = 0;
	while(j < n){
		if(arr[j] - arr[i] >= k){
			count += (n-j);
			i++;
		}
		else{
			j++;
		}
	}
	return count;
}


int main(){
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	long long int ans = calVariation(arr,n,k);
	cout << ans << endl;
	return 0;
}
