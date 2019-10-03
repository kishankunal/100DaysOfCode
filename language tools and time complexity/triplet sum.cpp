
#include<bits/stdc++.h>
void FindTriplet(int arr[], int size, int x) {
    
    sort(arr,arr+size);
    for(int i=0; i<size-2; i++){
         for(int j=i+1; j<size-1; j++){
             for(int k=j+1; k<size; k++){
                 if((arr[i]+arr[j]+arr[k]==x)){
                     cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                 }
             }
         }
     }
}



