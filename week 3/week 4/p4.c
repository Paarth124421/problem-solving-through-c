#include <stdio.h>
void main(){
    int N,sum=0;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
    if (i%2==0){
        sum+=i;
    }
    }
    printf("The sum of even numbers from 1 to %d is: %d\n", N, sum);
}