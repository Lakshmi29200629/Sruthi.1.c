#include<stdio.h>
int main(){
  int rows,cols;
  printf("Enter the number of rows and columns");
scanf("%d%d",&rows,&cols);
int a[rows][cols],b[rows][cols],sum[rows][cols];
  printf("Enter elements of matrix A:\n");
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter elements of matrix B:\n");
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      sum[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("resultant matrix:\n");
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;i++){
      printf("%d",sum[i][j]);
    }
    printf("\n");
    return 0;
  }
  }
