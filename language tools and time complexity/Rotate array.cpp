

void Rotate(int arr[], int d, int size) {
     int ar[d],t=0;
    for(int i=0; i<d; i++){
        ar[i]=arr[i];

    }
    for(int i=0; i<size-d; i++){
        arr[i]=arr[i+d];
    }
    for(int i=size-d; i<size; i++){
        arr[i]=ar[t];
        t++;
    }
    return;
    

}	

