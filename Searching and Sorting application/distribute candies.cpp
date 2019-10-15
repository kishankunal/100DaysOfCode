#include<bits/stdc++.h>
using namespace std;





int main(){
	int test;
	cin >> test;
	while(test--){
		long long int n, k;
		cin >> n >> k;
		long long int arr[n];
		long long int min = 0;
		long long int max = INT_MIN;
		for(long long int i = 0; i<n; i++){
			cin >> arr[i];
			if(max < arr[i]){
				max = arr[i];
			}
		}
		long long int max_sweet;
		while(min <= max){
			long long int mid = (min+max)/2;
			long long int person  = 0;
			for(long long int i = 0; i<n; i++){
				person += (int)arr[i]/mid;
			}
			if(person >= k){
				min = mid+1;
				max_sweet = mid;
			}
			else{
				max = mid - 1;
			}
		}
		cout << max_sweet << endl;	
	}
	return 0;
}
