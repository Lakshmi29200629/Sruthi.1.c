
#include<stdio.h>
struct student{
int age;
char name[50];
char gender[50];
char college[50];
char branch[50];
};
int main(){
  struct student s1;
  printf("Enter name:");
  scanf("%s",s1.name);
  printf("Enter age:");
  scanf("%s",&s1.age);
  printf("Enter gender:");
  scanf("%s",&s1.gender);
  printf("Enter college:");
  scanf("%s",&s1.college);
  printf("Enter branch :");
  scanf("%s",&s1.branch);
  printf("\nstudent details:\n");
printf("name:%s\nage:%d\ngender:%s\ncollege name:%s\nbranch",s1.name,s1.age,s1.gender,s1.college ,s1.branch);
  return 0;
}
