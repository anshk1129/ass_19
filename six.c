#include<stdio.h>
#include <string.h>
int main(){
char str[10][30];
int n,flag;
for(int i=0;i<5;i++){
    gets(str[i]);
}
for(int i=0;i<5;i++){
    flag=1;
    n=strlen(str[i]);
    for(int j=0;j<n;j++){
        if(str[i][j]!=str[i][n-1-j]){
            flag=0;
          break;
        }
    }
    if(flag==1){
        printf("%s",str[i]);
        printf("\n");
    }
}
return 0;
}