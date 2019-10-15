#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        
    
   for(int i=0;i<n;i++)
    {
      long long left_in_q  = (arr[i]-i);
          long long  q= left_in_q/n;
       long long rem=  (left_in_q)%n;
       
           if(rem==0 || left_in_q < 0 )
           { 
               if(left_in_q < 0)
                   arr[i]= i;
               else
               arr[i]=(long long)n*left_in_q; 
           }
              
         else
             arr[i]= (long long)n*(left_in_q+1)+rem;
    }
   long long ans, time= INT_MAX;
     for(int i=0;i<n;i++)
    {
      if(arr[i]<time)
      {
         time=arr[i]; 
          ans=i+1;
      }
          
    }
   
    cout<<ans<<endl;
	return 0;
}


