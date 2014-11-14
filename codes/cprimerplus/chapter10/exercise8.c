/* copy2d.c --创建一个3x5的double二维数组，利用一个基于变长数组的函数copy他。
 * 还要编写一个基于变长数组的函数显示这两个数组的内容。这两个函数能处理任意NxM的数组。
 */

#include<stdio.h>

void copy2d(int n,int m,double (*source)[m],double (*target)[m]);
void show_arr(int n,int m,double arr[n][m]);

int main(void){
  double arr_source[3][5] = {
    {5.4,6.2,3.6,3.8,6.9},
    {3.8,6.4,3.8,4.6,9.4},
    {3.4,8.1,6.4,2.8,6.4}
  };
  
  double arr_target[3][5];
  
  copy2d(3,5,arr_source,arr_target);
  show_arr(3,5,arr_source);
  show_arr(3,5,arr_target);
  
  return 0;
}

void copy2d(int n,int m,double (*source)[m],double (*target)[m]){
  int i,j;
  for(i = 0;i < n;i++)
    for(j = 0;j < m;j++)
      *(*(target + i) + j) = *(*(source + i) + j);
  return;
}

void show_arr(int n,int m,double arr[n][m]){
  int i,j;
  for(i = 0;i < n;i++){
    for(j = 0;j < m;j++)
      printf("%.1f\t",arr[i][j]);
    putchar('\n');
  }
  putchar('\n');
  return;
}
