#include <stdio.h>

//최댓값 구하기
int max3(int a, int b, int c)
{
	int max = a;	//최댓값
	if (b > max) max = b;
	if (c > max) max = c;
	return max;		//최댓값 반환
}

int main(void)
{
	printf("max3(%d %d %d) = %d \n", 3, 2, 1, max3(3, 2, 1));
	printf("max3(%d %d %d) = %d \n", 3, 2, 2, max3(3, 2, 2));
	printf("max3(%d %d %d) = %d \n", 3, 1, 2, max3(3, 1, 2));
	printf("max3(%d %d %d) = %d \n", 3, 2, 3, max3(3, 2, 3));
	printf("max3(%d %d %d) = %d \n", 2, 1, 3, max3(2, 1, 3));
	printf("max3(%d %d %d) = %d \n", 3, 3, 2, max3(3, 3, 2));
	printf("max3(%d %d %d) = %d \n", 3, 3, 3, max3(3, 3, 3));
	printf("max3(%d %d %d) = %d \n", 2, 2, 3, max3(2, 2, 3));
	printf("max3(%d %d %d) = %d \n", 2, 3, 1, max3(2, 3, 1));
	printf("max3(%d %d %d) = %d \n", 2, 3, 2, max3(2, 3, 2));
	printf("max3(%d %d %d) = %d \n", 1, 3, 2, max3(1, 3, 2));
	printf("max3(%d %d %d) = %d \n", 2, 3, 3, max3(2, 3, 3));
	printf("max3(%d %d %d) = %d \n", 1, 2, 3, max3(1, 2, 3));
	return 0;
}