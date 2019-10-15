#include<bits/stdc++.h>
using namespace std;

long long merging(int arr[], int left, int mid, int right){
	int i = left;
	int j = mid;
	int temp[right-left+1];
	int k = 0;
	long long ans = 0;
	while(i<mid && j <= right){
		if(arr[i] < arr[j]){
			ans += arr[i]*(right-j+1);
            temp[k++] = arr[i++];
		}
		else{
			temp[k++] = arr[j++];
		}
	}
	while(i < mid){
		temp[k++] = arr[i++];
	}
	while(j <= right){
		temp[k++] = arr[j++];
	}
	for(int i = left, k = 0;  i<=right; i++,k++){
		arr[i] = temp[k];
	}
    return ans;
}


long long merge(int arr[], int left, int right){
	long long ans = 0;
	if(left < right){
		int mid = (left+right)/2;
		long long ans1 = merge(arr,left,mid);
		long long ans2 = merge(arr,mid+1,right);
		long long ans3 = merging(arr,left,mid+1,right);
		ans = ans1 + ans2 + ans3;
	}
	return ans;
}


int main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i<n; i++){
			cin >> arr[i];
		}
		long long ans = merge(arr,0,n-1);
		cout << ans << endl;
	}
}
