#include<bits/stdc++.h>
vector<int> longestSubsequence(int *arr, int n){
    unordered_map<int,bool> data;
    
    for(int i = 0; i<n; i++){
        if(data.count(arr[i]) == 0){
            data[arr[i]] = true;
        }
    }
    
    vector<int>output;
    int maxCount = 1;
    int startNum = arr[0];
    for(int i = 0; i<n ; i++){
        
        int count = 0;
        int tempNum = arr[i];
        
        while(data.count(tempNum) == 1){
            count++;
            tempNum++;
        }
        
        if(count > maxCount){
            maxCount = count;
            startNum = arr[i];
        }
        
        
    }
    while(maxCount > 0){
            output.push_back(startNum++);
            maxCount--;
        }
    return output;
}
