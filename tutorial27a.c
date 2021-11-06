#include<stdlib.h>
#include<stdio.h>

int main(){
    int i;
    printf("Enter the value of i : \n");
    scanf("%d", &i);
    while(i--){
        if(i==0){
            break;
        }
        printf("Hello World\n");
    }
    return 0;
}