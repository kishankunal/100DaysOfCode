int lastIndex(int input[], int size, int x) {
  if((size-1) ==0){
      return -1;
  }
    if(input[size-1] == x){
        return size-1;
    }
    return lastIndex(input, size-1,x);

}
