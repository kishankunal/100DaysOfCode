#include<bits/stdc++.h>
using namespace std;

bool check(int position[], int min_dist, int cows, int n){
    int count = 1;
    int last_position = position[0];
    for(int i = 0; i<n; i++){
        if(position[i] - last_position >= min_dist){
            count++;
            last_position = position[i];
        }
        if(count == cows){
            return true;
        }
    }
    
    return false;
}




int main() {
    int test;
    cin >> test;
    while(test--){
        int n, cows;
        cin >> n >> cows;
        int position[n];
        for(int  i = 0; i < n; i++){
            cin >> position[i];
        }
        sort(position,position+n);
        int start = 0 ;
        int end = position[n-1] - position[0];
        int ans = -1;
        while(start <= end){
            int mid = (start+end)/2;
            if(check(position,mid,cows,n)){
                start = mid+1;
                ans = mid;
            }
            else{
                end = mid-1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

