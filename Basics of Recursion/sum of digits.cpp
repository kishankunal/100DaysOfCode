int sum(int input[], int n) {
    if(n<0){
        return 0;
    }    
    return sum(input,n-1) + input[n-1] ;
}
