#include<stdio.h>

void add(int a){
    if (a % 3 == 0 && a % 5 == 0){
        printf("divisibale ");
    }
    else{
        printf("not divisible");
    }
}
int main (){
    int a;
    printf("Enter any number = ");
    scanf("%d",&a);
    add(a);
}