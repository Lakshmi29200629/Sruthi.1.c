#include<stdio.h>
struct student{
int roll;
char name[50];
float marks;
};
int main(){
  struct student s1;
  printf("Enter name:");
  scanf("%s",s1.name);
  printf("Enter the roo number:");
  scanf("%d",&s1.roll);
  printf("Enter the marks:");
  scanf("%f",&s1.marks);
  printf("\student details:\n");
  printf("name:%s\nroll:%d\marks:%.2f\n",s1.name,s1.roll,s1.marks);
  return 0;
}
