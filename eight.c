#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char str[5][10];
char word1[10],word2[10];
int w1=-1,w2=-1,min=10000,temp;
printf("Enter the string\n");
for(int i=0;i<5;i++){
    gets(str[i]);
}
printf("Enter the words\n");
gets(word1);
gets(word2);
for(int i=0;i<5;i++){
    if(strcmp(str[i],word1)==0){
        w1=i;
    }
    if(strcmp(str[i],word2)==0){
        w2=i;
    }
    if(w1!=-1&&w2!=-1){
      temp=abs(w2-w1);
      if(temp<min){
        min=temp;
      }
    }
}
if(min!=10000)
printf("\nMinimum distance is %d",min-1);

return 0;
}