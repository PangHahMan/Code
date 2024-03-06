#include<stdio.h>
//1.写一个函数可以找出两个整数中的最大值。
//get_max函数的设计
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//
//	return 0;
//}


//2.写一个函数可以交换两个整形变量的内容。
//实现成函数，但是不能完成任务
//void Swap1(int x, int y)    //传的是两个值  两个值交换变量，改变的是形参，不会改变实参
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
////正确的版本
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);     //传值调用
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);   //传址调用
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}


//3.实际参数
//真实传给函数的参数，叫实参。
//实参可以是：常量、变量、表达式、函数等。
//无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传送给形参。


//4.形式参数
//形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单元），所以叫形式参数。
//形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效。

//结论★ 形参实例化之后其实相当于实参的一份临时拷贝。

//5.传值调用
//函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参。

//6.传址调用
//传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
//这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量。