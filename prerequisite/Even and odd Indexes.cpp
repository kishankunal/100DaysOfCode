#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0,sum1=0;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        if(arr[i]%2 == 0 && i%2==0){
            sum+=arr[i];
        }
        else if(arr[i]%2 !=0 && i%2 !=0)
            
        {
            sum1+=arr[i];
        }
    }
    cout << sum << " " << sum1;
    return 0;
}

