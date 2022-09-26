#include<stdio.h>
int main(){
char arr[5][30];
int vowel;
printf("Enter the strings\n");
for(int i=0;i<5;i++){
fgets(arr[i],30,stdin);
}
for(int i=0;i<5;i++){
    vowel=0;
    for(int j=0;arr[i][j];j++){
           if(arr[i][j]=='a'||arr[i][j]=='A'||arr[i][j]=='e'||arr[i][j]=='E'||arr[i][j]=='i'||arr[i][j]=='I'||arr[i][j]=='o'||arr[i][j]=='O'||arr[i][j]=='u'||arr[i][j]=='U')
           vowel+=1;
    }
    printf("%s has %d vowels",arr[i],vowel);
    printf("\n");
}


return 0;
}