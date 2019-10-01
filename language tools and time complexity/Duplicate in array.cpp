#include<bits/stdc++.h>
int MissingNumber(int arr[], int size){
    
    set<int> data;
    for(int i = 0; i<size; i++){
        auto it = data.find(arr[i]);
        if(it == data.end()){
            data.insert(arr[i]);
        }
        else{
            return arr[i];
        }
    }

}
