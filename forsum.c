//11(A)2 Print sum of 1 to n numbers.

#include<stdio.h>

void main(){
    int i,n,sum=0;
    printf("enter a number : ");
    scanf("%d", &n);

    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("%d", sum);
}