 #include<bits/stdc++.h>	
void PairSum(int *input, int n){
    map<int,int> data;
    for(int i = 0; i<n; i++){
        data[input[i]]++;
    }
    for(pair<int,int> x : data){
        if(x.first >= 0){
            break;
        }
        int tar = -1*x.first;
    
        int freq1 = x.second;
        int freq2 = data[tar];
        for(int i = 0; i<freq1*freq2; i++){
            cout << x.first << " " << tar << endl;
        }
    }
     	
}


