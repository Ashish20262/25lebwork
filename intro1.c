#include<stdio.h>

void add(int a){
    printf("cube of %d = %d \n",a,a*a*a);
}
int main(){
    int a;
    printf("Enter any number = ");
    scanf("%d",&a);
    add(a);

}