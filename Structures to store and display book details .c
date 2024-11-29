#include<stdio.h>
struct book{
char title[40];
char author[40];
float price;
int pages;
};
int main(){
  struct book book1;
  printf("Enter the title of the book:");
  scanf("%s",book1.title);
  printf("Enter the author of the book:");
  scanf("%s", book1.author);
  printf("Enter the price of the book:");
  scanf("%f",&book1.price);
  printf("enter the pages of the group:");
  scanf("%d",&book1.pages);
  printf("\nbook details:\n");
  printf("title:%s\n",book1.title);
  printf("author:%s\n",book1.title);
  printf("price:%f\n",book1.title);
  printf("pages:%d\n",book1.title);
  return 0;
}
  
  
