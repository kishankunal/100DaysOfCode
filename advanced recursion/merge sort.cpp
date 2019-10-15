void merge(int input[], int left, int mid, int right){
    int temp[right-left+1];
    int i = left;
    int j = mid;
    int k = 0;
    while(i < mid && j <= right){
        if(input[i] <= input[j]){
            temp[k++] = input[i++];
        }
        else{
            temp[k++] = input[j++];
        }
    }
    while(i<mid){
        temp[k++] = input[i++];
    }
    while(j<=right){
        temp[k++] = input[j++];
    }
    for(int i = left ,k=0; i<=right; i++,k++){
        input[i] = temp[k];
    }
}




void merge_sort(int input[], int left, int right){
    if(left<right){
        int mid = (left+right)/2;
        merge_sort(input,left,mid);
        merge_sort(input,mid+1,right);
        merge(input,left,mid+1,right);
    }
}


void mergeSort(int input[], int size){
	merge_sort(input,0,size-1);
}

