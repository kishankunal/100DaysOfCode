#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
            
            if(i==0 || i==n-1 || j==0 || j==n-1){
                sum += arr[i][j];
            }
            //for diagonal points
            else if(i==j|| i == (n -j-1)){
                sum +=arr[i][j];
            }
        }
    }
    cout << sum;
	return 0;
}

