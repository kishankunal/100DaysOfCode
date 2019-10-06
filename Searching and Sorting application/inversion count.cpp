


long long merge(int arr[], int left,int mid, int right){
	int i = left;
	int j = mid;
	int temp[right-left+1];
	int k = 0;
	long long count = 0;
	while(i<mid && j<=right){
		if(arr[i] <= arr[j]){
			temp[k++] = arr[i++];
		}
		else{
			temp[k++] = arr[j++];
			count += mid-i;
		}
	}
	while(i < mid){
		temp[k++] = arr[i++];
	}
	while(j <= right){
		temp[k++] = arr[j++];
	}
	for(int i = left, k = 0; i<=right; i++,k++){
		arr[i] = temp[k];
	}
    return count;
}






long long mergesort(int arr[], int left, int right){
	long long res = 0;
	if(left < right){
        int  mid = (left +right)/2;
		long long ans1 = mergesort(arr,left,mid);
		long long ans2 = mergesort(arr,mid+1, right);
		long long ans3 = merge(arr,left,mid+1,right);
		res = ans1+ans2+ans3;
	}
	return res;
}



long long solve(int A[], int n)
{
	long long ans = mergesort(A, 0, n-1);
	return ans;
}
