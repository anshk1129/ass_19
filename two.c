#include<stdio.h>
#include<string.h>
int main(){
char arr[10][20],temp[20];
for(int i=0;i<10;i++){
	gets(arr[i]);
}
for(int i=1;i<10;i++){
	for(int j=0;j<10-i;j++){
		if(strcmp(arr[j],arr[j+1])>0){
           strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
				strcpy(arr[j+1],temp);

		}
	}
}
for(int i=0;i<10;i++){
printf("%s",arr[i]);
printf("\n");
}
return 0;
}