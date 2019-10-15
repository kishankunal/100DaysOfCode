void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}


int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high - 1; j++) 
	{ 
		// If current element is smaller than or 
		// equal to pivot 
		if (arr[j] <= pivot) 
		{ 
			i++; // increment index of smaller element 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
}



void quick(int input[],int left,int right){
	if(left<right){
		int pi=partition(input,left,right);
		quick(input,left,pi-1);
		quick(input ,pi+1,right);
	}
}




void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    //partition
    //left quick sort
    //right quick sort
    quick(input,0,size-1);

}
