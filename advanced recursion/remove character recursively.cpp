#include<bits/stdc++.h>
using namespace std;
void Character(char input[], char c1, char c2,int n){
    if(n < 0){
        return;
    }
    if(input[n] == c1){
        input[n] = c2;
    }
    Character(input,c1,c2,n-1);
}
void replaceCharacter(char input[], char c1, char c2) {
    int n = strlen(input);
    Character(input, c1, c2,n-1);
}

//===========================================================================================
//======Second Method========================================================================



void replaceCharacter(char input[], char c1, char c2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
    if(input[0]=='\0'){
        return;
    }
    else if(input[0]==c1){
        input[0]=c2;
        replaceCharacter(input+1,c1,c2);
    }
    else{
        replaceCharacter(input+1,c1,c2);
    }
    
}

//=========================================================================================
