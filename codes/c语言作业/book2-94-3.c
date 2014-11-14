/* single_arr.c --判断一个矩阵是否上三角矩阵 */

#include<stdio.h>

int main(void){
  int n;
  int i,j;
  int statu;
  
  printf("Input n:");
  scanf("%d",&n);
  int arr[n][n];
  
  //读取一个nxn矩阵
  printf("Input array:\n");
  for(i = 0;i < n;i++)
    for(j = 0;j < n;j++)
      scanf("%d",&arr[i][j]);
  
  //判断矩阵
  statu = 1;
  for(i = 1;i < n && statu == 1;i++)
    for(j = 0;j < i && statu == 1;j++)
      if(0 != arr[i][j])
	statu = 0;
  
  if(!statu)
    printf("NO\n");
  else
    printf("YES\n");
  
  return 0;
}