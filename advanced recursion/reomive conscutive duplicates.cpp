void removeConsecutiveDuplicates(char *input) {
	
    if(input[0]=='\0')
    {
        return;
    }
    if(input[0] == input[1]){
        int i;
        for(i=1;input[i]!='\0';i++){
            input[i-1] = input[i];
        }
        input[i-1] = '\0';
        removeConsecutiveDuplicates(input);
    }
    else{
        removeConsecutiveDuplicates(input+1);
    }
}
