/* Program to find cube of a numbergcc  */

#include<stdio.h>
int main(){
    int n,cube; //variable decleration

    printf("Enter number : ");  
    scanf("%d",&n); //value entering

    cube = n*n*n;   //cube defining

    printf("Cube of number is %d",cube);    //printing results
    return 0;
}