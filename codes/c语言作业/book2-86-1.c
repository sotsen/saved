/* average.c --输入n，再输入n个整数，输出平均值 */
/* 注：第七章内容，使用数组求解 */

#include<stdio.h>

int main(void){
  int n;
  int i;
  int sum;
  printf("Input n:");
  scanf("%d",&n);
  int num[n];			//定义一个变长数组
  printf("Input %d integers:",n);
  for(i = 0;i < n;i++)		//从输入读取n个整数
    scanf("%d",num + i);
  for(sum = 0,i = 0;i < n;i++)	//把n个整数相加
    sum += *(num + i);
  printf("Average = %.2f\n",(double)sum / (double)n);
  return 0;
}
    