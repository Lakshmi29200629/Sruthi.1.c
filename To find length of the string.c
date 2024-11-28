#include<stdio.h>
#include<string.h>
int main(){
  char str[100];
  printf("Enter a string:");
  fgets(str, sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n'){
      str[strlen(str)-1]='\0';
    }
    int length=strlen(str);
    printf("the length of the string is :%d\n",length);
    return 0;
    }
    
