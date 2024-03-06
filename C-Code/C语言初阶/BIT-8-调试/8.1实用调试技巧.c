#include<stdio.h>
//1.Debug和Release的介绍。
/*
Debug 通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序。
Release 称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优
的，以便用户很好地使用。
*/


//2.实现代码：求 1！+2！+3！ ...+ n! ；不考虑溢出。
/*
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int i = 0;
	int ret = 1;
	int sum = 0;
	int j = 0;
	for (j = 1; j <= n; j++)
	{
		ret = 1;        //ret必须初始化为1
		for (i = 1; i <= j; i++)
		{
			ret = ret * i;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
*/


//3.分析代码
//64位下很快崩溃  32位下会死循环
/*
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("%p\n", &i);
	}
	//越界找到了i的地址  把arr[12]改成0 就等于i==0
	return 0;
}
*/


/*
1.数组随着下标的增长是由低到高变化的
2.i和arr是局部变量，局部变量是放在栈区的
栈区内存的使用习惯：先使用高地址处的空间，再使用低地址处的空间
所以i的地址创建的时候比arr高
VS 中间空2个整型  X86
//先创建数组 后创建i后就不会死循环
改成release版本就不会死循环，release版本下 地址的顺序颠倒过来了(自动优化)
*/

