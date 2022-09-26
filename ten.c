#include <stdio.h>
#include <string.h>
int main()
{
    char str[3][2][20] = {
        {"ansh", "1232"}, {"yashu", "2121"}, {"ramesh", "1212"}};
    char pass[] = "1232";
    char user[] = "ansh";
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {

        if(strcmp(str[i][0],user)==0&&strcmp(str[i][1],pass)==0){
            printf("Login successfull\n");
            flag = 1;
         }
    }
    if (flag == 0)
        printf("Login failed\n");

    return 0;
}