#include<bits/stdc++.h>
char* uniqueChar(char *str){
  string Ans="";
	int t=strlen(str);
	char *chararry=new char[t+1];
	set<char>p;
	for(int i=0; i<t; i++){
		p.insert(str[i]);
	}
    int k = 0;
	for(int i=0; i<t;i++){
	   auto	it=p.find(str[i]);
		if(it!=p.end()){
			chararry[k++] = *it;
			p.erase(it);
		}
	}
	return chararry;

}
