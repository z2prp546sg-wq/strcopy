#include<stdio.h>
#include<string.h>

int main(){

    char massage[100] = "hi my name is priyanshu";

    char CopyString[sizeof(massage)];

    strcpy(CopyString, massage);

    printf("\n copied string is %s",CopyString);

    return 0;

}

