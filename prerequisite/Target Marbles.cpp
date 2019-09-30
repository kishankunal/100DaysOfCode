#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int target;
    cin >> target;
    int  arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int sum = arr[0];
    int start = 0;
    int end = 0;
    while(start < n && end < n){
        if(sum < target){
            end++;
            sum +=arr[end];
            
        }
        if(sum == target){
            cout << "true"<<endl;
            for(int i = start ; i <=end; i++){
                cout << arr[i] << " ";
            }
            exit(0);
        }
        if(sum > target){
            sum -= arr[start];
            start++;
        }
    }
    cout << "false";
    return 0;
}
