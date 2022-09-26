#include<stdio.h>
#include<string.h>
int main(){
char arr[5][20],arr1[20];
int flag=0;
printf("Enter the strings\n");
for(int i=0;i<5;i++){
	gets(arr[i]);
}
printf("Enter the string which u want to search\n");
gets(arr1);
for(int i=0;i<5;i++){
    if(strcmp(arr[i],arr1)==0){
         printf("String found\n");
         flag=1;
         break;
    }
}
if(flag==0){
    printf("String not found\n");
}

return 0;
}