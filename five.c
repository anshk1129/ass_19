#include<stdio.h>
#include<string.h>
int main(){
char str[10][20];
printf("Enter the 5 strings\n");
for(int i=0;i<5;i++){
    gets(str[i]);
}
for(int i=0;i<5;i++){
    if(strchr(str[i],'@')!=0){
        printf("%s",str[i]);
        printf("\n");
    }
}

return 0;
}