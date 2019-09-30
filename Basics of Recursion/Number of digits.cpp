int count(int n){
   if(n/10 == 0){
       return 1;
   }
    return count(n/10) + 1;
}
