/* sum_arr.c --读取一个n，再读入n阶矩阵，求出除副对角线、最后一行、最后一列的和 */ 

#include<stdio.h>

int main(void){
  int sum = 0;
  int n;
  int i,j;
  printf("Input n:");
  scanf("%d",&n);
  int arr[n][n];
  
  //读取nxn的矩阵数值
  printf("Input array:\n");
  for(i = 0;i < n;i++)
    for(j = 0;j < n;j++)
      scanf("%d",&arr[i][j]);
    
  //求和
  for(i = 0;i < n;i++)
    for(j = 0;j < n;j++)
      if(i != 3 && j != 3 && i + j != 3)
	sum += *(*(arr + i) + j);
      
  printf("sum = %d\n",sum);
  return 0;
}
