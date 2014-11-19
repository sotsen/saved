#include<stdio.h>

void InputArr(int n,int m,double arr[][m]);				//读取一个数组
double AveArr(int n,double arr[]);						//计算一个一维数组平均值
double AveArr2d(int n,int m,double arr[][m]);			//计算二维数组平均值
double FindMax(int n,int m,double arr[][m]);			//返回二维数组最大值
void PrintResult(int n,double Aver[],double AverAll,double max);

int main(void){
	int n,m;
	int i;
	double max,aver_all;
	
	printf("Input n and m:");
	scanf("%d%d",&n,&m);
	
	double aver[n];
	double arr[n][m];
	
	InputArr(n,m,arr);
	for(i = 0;i < n;i++)
		aver[i] = AveArr(n,arr[i]);
	aver_all = AveArr2d(n,m,arr);
	max = FindMax(n,m,arr);
	PrintResult(n,aver,aver_all,max);
	
	return 0;	
} 

void InputArr(int n,int m,double arr[][m]){
	int i,j;
	
	printf("Input %dx%d array:\n",n,m);
	for(i = 0;i < n;i++)
		for(j = 0;j < m;j++)
			scanf("%lf",&arr[i][j]);
			
	return;
}

double AveArr(int n,double arr[]){
	int i;
	double sum = 0;
	
	for(i = 0;i < n;i++)
		sum += arr[i];
		
	return sum / (double)n;
}

double AveArr2d(int n,int m,double arr[][m]){
	int i,j;
	double sum = 0;
	
	for(i = 0;i < n;i++)
		for(j = 0;j < n;j++)
			sum += arr[i][j];

	return sum / (double)(n * m);
}

double FindMax(int n,int m,double arr[][m]){
	int i,j;
	double max;
	
	max = arr[0][0];
	for(i = 0;i < n;i++)
		for(j = 0;j < n;j++)
			if(max < arr[i][j])
				max = arr[i][j];
				
	return max; 
}

void PrintResult(int n,double Aver[],double AverAll,double max){
	int i;
	
	putchar('\n');
	printf("======================================\n");
	printf("Pirnt Result\n");
	printf("======================================\n");
	for(i = 0;i < n;i++)
		printf("Average of Arr[%d] = %.2f\n",i,Aver[i]);
	putchar('\n');
	printf("Average of All number = %.2f\n\n",AverAll);
	printf("Maximum of Arrangement = %.2f\n",max);
	
	return;
}
