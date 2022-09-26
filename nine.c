#include<stdio.h>
#include<string.h>
int fact(int n);
int main(){
char str[10][20]={"ansh2911","yashu112","n1213an","qkj12wkn1"};
char word1[20];
int flag=0;
printf("Enter your user name\n");
gets(word1);
for(int i=0;i<4;i++){
    if(strcmp(str[i],word1)==0){
        int val;
        printf("Enter the number whose factorial you want to calculate\n");
        scanf("%d",&val);
        printf("Factorial of %d is %d",val,fact(val));
        flag=1;
        break;
    }
}
if(flag==0){
    printf("Invalid\n");
}
return 0;
}
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}