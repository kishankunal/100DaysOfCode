#include<bits/stdc++.h>

int FindUnique(int arr[], int size){
    std::map<int,int> data;
    for(int i =0; i<size; i++){
        data[arr[i]]++;
    }
    for(std::pair<int,int> x : data){
        if(x.second == 1){
            return x.first;
        }
    }
}
