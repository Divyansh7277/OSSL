#include<stdio.h>
#include<string.h>

int main(){

char string[50];;

fgets(string,50,stdin);

for(int i=strlen(string);i>=0;i--){
    printf("%c",string[i]);
}
return 0;
}

