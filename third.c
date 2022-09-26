#include<stdio.h>
int main(){
    char arr[10][30];
for(int i=0;i<10;i++){
    fgets(arr[i],30,stdin);
}
for(int i=0;i<10;i++){
    printf("%s",arr[i]);
}
return 0;
}