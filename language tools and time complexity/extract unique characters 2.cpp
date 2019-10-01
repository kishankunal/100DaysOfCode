int FindUnique(int arr[], int size){
    std::sort(arr,arr+size);
    for(int i = 0; i<size;i+=2){
        if(arr[i] != arr[i+1]){
            return arr[i];
        }
    }
}
