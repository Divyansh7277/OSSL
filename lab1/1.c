#include<stdio.h>

int main(){
int S,sum;
scanf("%d",&S);

int num[S];
printf("enter numbers :");

for(int i=0;i<S;i++){
    scanf("%d",&num[i]);
    sum+=num[i];
}

printf("%d",sum/S);

return 0;
}

