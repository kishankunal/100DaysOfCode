void xyz(int n, int x){
    if(x==n){
        cout << x << " ";
        return;
    }
    cout << x << " ";
    xyz(n,x+1);
}


void print(int n){
  xyz(n,1);
}
