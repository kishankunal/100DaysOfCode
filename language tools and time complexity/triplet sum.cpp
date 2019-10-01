// arr - input array
// size - size of array
// x - sum of triplets
#include<bits/stdc++.h>
void FindTriplet(int arr[], int size, int x) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    
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



