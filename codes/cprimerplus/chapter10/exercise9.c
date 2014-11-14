/* arr_add.c --编写一个程序，使两个数组相加，结果存至第三个数组中 */

#include<stdio.h>

void arr_add(int m,int *source1,int *source2,int *target);

int main(void){
	int source1[] = { 1,6,8,9 };
	int source2[] = { 6,8,1,6 };
	int target[4];
	int i;

	arr_add(4,source1,source2,target);
	for(i = 0;i < 4;i++)
		printf("%d + %d == %d\n",*(source1 + i),*(source2 + i),*(target + i));
	
	return 0;
}

void arr_add(int m,int *source1,int *source2,int *target){
	int i;
	for(i = 0;i < m;i++)
		*(target + i) = *(source1 + i) + *(source2 + i);
	return;
}
