
void print(int input[], int size, int x, int output[],int current,int& iter){
    if(input[current] == x){
        output[iter] = current;
        iter = iter + 1;
    }
    if(size<current){
        return;
    }
    print(input,size,x,output,current+1,iter);
}
int allIndexes(int input[], int size, int x, int output[]) {
    int iter = 0;
    print(input,size-1,x,output,0,iter);
    return iter;
}

