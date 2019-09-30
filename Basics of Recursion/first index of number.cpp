int firstIndex(int input[], int size, int x) {
    if(input[0] == x){
        return 0;
    }
    if((size)==0){
        return -1;
    }
    int p=firstIndex(input+1,size-1,x);
    if(p == -1){
        return -1;
    }
    else{
        return 1+p;
    }
}

