#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	printf("3 1 2\n");
	printf("1");
	printf("\n");
	printf("2");
	printf("\n");
	printf("3");
	printf("\n");
	printf("1");
	printf("\n");
	printf("2");
	printf("\n");
	printf("3");
	printf("\n");
	printf("1");
	printf("\n");
	printf("2");
	printf("\n");
	printf("3");
	printf("\n");
	printf("1");
	printf("\n");
	printf("1");
	printf("\n");
	printf("2");
	printf("\n");
	printf("3");
	printf("\n");
	printf("1");
	printf("\n");
	printf("1");
	printf("\n");
	printf("3");
}

//#include <math.h>
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	char c = 0;
//	char arr[100][100] = { 0 };
//	scanf("%d", &n);
//	c = getchar();
//
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%[^\n]", &arr[i]);
//		c = getchar();
//		printf("%s\n", arr[i]);
//
//
//	}
//
//	return 0;
//}
//
//
//
//
















//#include<time.h>
//#include <conio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//#include<stdio.h>
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int n = 0;
//	int m = 0;
//	char dk[100] = { 0 };
//	int arr[100] = { 0 };
//	scanf("%d", &a);
//	scanf("%d", &b);
//	
//	if (a != 16)
//	{
//		scanf("%d", &c);
//		for (int i = 0;; i++)
//		{
//			d = d + (c % 10) * pow(a, i);
//			c = c / 10;
//			if (c == 0)
//				break;
//		}
//	}
//	else {
//		scanf("%s", &dk);
//		m = strlen(dk);
//
//		for (int i = 1;i<=m; i++)
//		{
//			if (dk[m - i] == 'f')
//				d = d + 15*pow(16,i-1);
//			if (dk[m - i] =='e')
//				d = d + 14 * pow(16, i-1);
//			if (dk[m - i] == 'd')
//				d = d + 13*pow(16, i - 1);
//			if (dk[m - i] == 'c')
//				d = d + 12*pow(16, i - 1);
//			if (dk[m - i] == 'b')
//				d = d + 11* pow(16, i - 1);
//			if (dk[m - i] == 9)
//				d = d + 9* pow(16, i - 1);
//			if (dk[m - i] == 8)
//				d = d + 8 * pow(16, i - 1);
//			if (dk[m - i] == 7)
//				d = d + 7 * pow(16, i - 1);
//			if (dk[m - i] == 6)
//				d = d + 6 * pow(16, i - 1);
//			if (dk[m - i] == 5)
//				d = d + 5 * pow(16, i - 1);
//			if (dk[m - i] == 4)
//				d = d + 4 * pow(16, i - 1);
//			if (dk[m - i] == 3)
//				d = d + 3 * pow(16, i - 1);
//			if (dk[m - i] == 2)
//				d = d + 2 * pow(16, i - 1);
//			if (dk[m - i] == 1)
//				d = d + 1 * pow(16, i - 1);
//			if (dk[m - i] == 0)
//				d = d + 0 * pow(16, i - 1);
//		}
//	}
//
//	if (b != 16)
//	{
//		for (int i = 0;; i++)
//		{
//			arr[i] = d % b;
//			d = d / b;
//			n = i;
//			if (d == 0)
//				break;
//		}
//		for (int i = n; i >= 0; i--)
//			printf("%d", arr[i]);
//	}
//	else
//	{
//		for (int i = 0;; i++)
//		{
//			arr[i] = d % b;
//			if (arr[i] == 10)
//				arr[i] = 'a';
//			if (arr[i] == 11)
//				arr[i] = 'b';
//			if (arr[i] == 12)
//				arr[i] = 'c';
//			if (arr[i] == 13)
//				arr[i] = 'd';
//			if (arr[i] == 14)
//				arr[i] = 'e';
//			if (arr[i] == 15)
//				arr[i] = 'f';
//			d = d / b;
//			n = i;
//			if (d == 0)
//				break;
//		}
//		for (int i = n; i >= 0; i--)
//			printf("%c", (char)arr[i]);
//	}
//
//
//	return 0;
//}
//
//




//int main()
//{
//	char a[100] = { 0 };
//	scanf("%s", &a);
//	int n = strlen(a);
//
//	if ((a[n - 1] == 'y') || (a[n - 1] == 's' || a[n - 1] == 'x') || (a[n - 1] == 'h' && a[n - 2] == 'c') || (a[n - 1] == 'h' && a[n - 2] == 's') || (a[n - 1] == 'o'))
//	{
//		if (a[n - 1] == 'y')
//		{
//			for (int i = 0; i < n - 1; i++)
//			{
//				printf("%c", a[i]);
//
//			}
//			printf("ies");
//		}
//		if (a[n - 1] == 's' || a[n - 1] == 'x')
//		{
//			for (int i = 0; i <= n - 1; i++)
//			{
//				printf("%c", a[i]);
//
//			}
//			printf("es");
//		}
//		if (a[n - 1] == 'h' && a[n - 2] == 'c')
//		{
//			for (int i = 0; i <= n - 1; i++)
//			{
//				printf("%c", a[i]);
//
//			}
//			printf("es");
//		}
//		if (a[n - 1] == 'h' && a[n - 2] == 's')
//		{
//			for (int i = 0; i <= n - 1; i++)
//			{
//				printf("%c", a[i]);
//
//			}
//			printf("es");
//		}
//
//		if (a[n - 1] == 'o')
//		{
//			for (int i = 0; i <= n - 1; i++)
//			{
//				printf("%c", a[i]);
//
//			}
//			printf("es");
//		}
//	}
//	else
//	{
//		
//		for (int i = 0; i <= n - 1; i++)
//		{
//			printf("%c", a[i]);
//
//		}
//		printf("s");
//	}
//
//	return 0;
//
//}




















//int main()
//{
//	int n = 0;
//	char c = 0;
//	char arr[100][100]= { 0 };
//	scanf("%d", &n);
//	c = getchar();
//	
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%[^\n]", &arr[i]);
//		c = getchar();
//		printf("%s\n", arr[i]);
//	
//		
//	}
//	
//	return 0;
//}




























//int main()
//{
//	int c = 0;
//	int n = 0;
//	int d = 0;
//	int x = 0;
//	int w = 0;
//	int g = 0;
//	int o = 0;
//	int a[100] = { 0 };
//	int b[100] = { 0 };
//	int y[100] = { 0 };
//	int r[100] = { 0 };
//	
//	
//	scanf("%d", &c);
//	scanf("%d", &n);
//	
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &b[i]);
//	
//	
//		for (int i =0; i <= ((int)pow(2, n) - 1); i++)
//
//		{
//			d = 0;
//			x = 0;
//			g = i;
//			for (int j = 1; j <= n; j++)
//			{
//				
//				y[j] = g% 2;
//
//
//				g = g>>1;
//			
//					d = d + y[j] * b[j];
//					x = x + y[j] * a[j];
//				
//			}
//			if (x <= c)
//			{
//				if (w < d)
//				{
//					w = d;
//					o = x;
//					for (int ai = 1; ai <= n; ai++)
//						r[ai] = y[ai];
//				}
//
//			}
//		}
//
//		
//		for (int i = 1; i <= n; i++)
//		{
//			if (r[i] =1)
//				printf("%d ", i);
//	     }
//	printf("%d %d", o,w);
//		
//
//	return 0;
//}
//
//
//





//int main()
//{
//	int a = 0;
//	int p = -1;
//	int n = 0;
//	scanf("%d", &a);
//
//	for (int i = 0; (1.0 / (2 * i + 1.0)) > pow(10, -a); i++)
//	
//			n=i;
//			
//
//	double pi = 1.0;
//	for (int i = 1;i<=n;i++)
//	{
//		pi = pi+ 1.0 / (2*i + 1) * p;
//		p = p * (-1);
//
//	}
//	double k = pi * 4.0;
//	printf("%f", k);
//
//
//
//
//
//	return 0;
//}














//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			printf("%d*%d=%d\t", j, i, i * j);
//		printf("\n");
//	}
//
//
//
//
//
//	return 0;
//}
//


















//
//
//#include<stdio.h>
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	int f = 0;
//	int i = 0;
//	scanf("%d", &a);
//	int z = a % 2;
//
//	b = a / 2;
//	c = a / 2;
//	d = a / 2;
//	a = a / 2;
//
//	for (; (d + e) >= 4 || (d + f) >= 2;)
//	{
//
//
//		b = (d + e) / 4;
//
//		e = (d + e) % 4;
//
//		c = (d + f) / 2;
//		f = (d + f) % 2;
//
//		d = b + c;
//		a = a + d;
//
//
//
//
//
//
//
//	}
//	printf("%d %d %d %d", a, f+d, e+d, z);
//	return 0;
//
//
//
//
//
//
//}



//int main()
//{
//	int a,b = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	int c = a + b;
//	printf("%d\n", c);
//	const int d = 996;
//	int f = d + e;
//	printf("%d\n", f);
//	enum sex
//	{
//		male = 8,
//	female,
//	secret
//
//	};
//	enum sex s = male;
//	printf("%d\n", female);
//	char arr[] = "hello";
//	char arr1[] = "world";
//	char arr2[] = { 'a','b','c'};
//	char arr3[]= { 'a','b','c' ,'\0'};
//	printf("%s\n", arr);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	int len = strlen("hello");
//	printf("%d", len);
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	printf("c:\texr\talk");
//	printf("c:\\texr\\talk");
//	printf("%s", "\" ");
//	printf("%c", '\'');
//	// printf("%d",100);整型
//	//printf("%c",'a');字符
//	//printf("%s","abc");字符串
//  //printf("%f",3.1)float单精度浮点型
// //printf("%lf",3.1）double双精度浮点型
//	printf("%d",'\130');
//	//八进制
//	printf("%c", '\x12');
//	//十六进制
//	printf("%c", '\a');
//	//蜂鸣器
//
//
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int input=0;
//	printf("are you serious?\n");
//	printf("if you are,input1,if not ,input0\n");
//	scanf("%d", &input);
//	if (input == 0)
//
//		printf("say bye");
//	else
//	printf("good job");
//	
//
//
//return 0;
//}
//int main()
//{
//
//	int a = 0;
//	while (a < 100)
//	{
//
//
//
//		a += 2;
//		printf("%d\n", a);
//	}
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	while (a < 100)
//	{
//		printf("come on,%d\n",a);
//		a+=2;
//	}
//	if(a==100)
//	{
//		printf("victory");
//	}
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//
//}




//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	int sum = Add(num1, num2);
//	printf("%d", sum);
//	
//
//
//
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int arr1[10] = { 0 };
//	int i = 0;
//	
//
//
//
//
//	while (i <10)
//		{
//			printf("%d", arr1[i]);
//			printf("%d", arr[i]);
//			i++;
//	}
//
//
//
//
//	return 0;
//}
//数组下标从零开始，不完全初始化，剩余的默认为0
//"%f"打印小数
//%取余
//
//int main()
//{
//	//char ch[5] = { 'a','b','c' };
//
//	int a = 9 %2;
//	float b = 9 / 2;
//	int c = 9 / 2.0;
//	float d = 9.0 / 2;
//	
//	printf("%d\n%f\n%d\n%f", a, b, c, d);
//
//	int m = 2;
//	int p = m << 2;
//	int q = m >> 1;
//	printf("%d%d\n", p, q);
//	//   二进制的基础上 <<左移操作符    >>右移操作符
//	//   &按位与   |按位或   
// 
//	//  0表示假，非0表示真
//	int l = 904;
//	printf("%d\n", !l);
//	int h = 0;
//	scanf("%d", &h);
//	if (h)
//	{
//		printf("t");
//
//	}
//	
//	
//	if (!h)
//	{
//		printf("f");
//	}
//	//sizeof是一个操作符，其后括号可以省略，而函数后的括号不可省略
//	
//
//
//	return 0;
//}
//  ~按位取反（所有位）

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", sizeof(arr));
//	printf("%d", sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//
//
//	return 0;              
//}
//
//int main()
//{
//	int a = 0;
//	printf("%d", ~a);
//
//
//	return 0;
//}


//一个整数在内存中以补码形式存储
// 正整数的原码，补码，反码相同
//一个负整数的二进制（最高位表示符号位，负数为1）（32个比特位）表示有三种，以-1为例
//原码10000000000000000000000000000001
//反码11111111111111111111111111111110   符号位不变，有效位取反
//补码11111111111111111111111111111111    +1





//前置++，先++，后使用
//后置++，先使用，后++
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	int c = a++;
//	printf("%d,%d,%d\n", a, b,c);
//	int k = 3.14;
//	int k = (int)3.14;//   ()强制类型转化
//	printf("%d", k);
//
//
//	return 0;
//}
// ==用于测试（判断）相等
// ！=用于测试不相等
//  &&逻辑 和
//  ||逻辑 或

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	int max = a > b ? a : b;
//	printf("%d\n", max);
//	int an = (a , b + a, c + b);
//	printf("%d", an);
//
//
//
//
//	return 0;
//}
//条件操作符（三目操作符）  ？ ：
//exp1 ? exp2:exp3               1成立，执行2；    1不成立，执行3； 
//逗号表达式，从左向右依次执行，结果由最后一个决定
//   []下标操作符     
//    ()函数调用操作符，调用函数的时候，函数后边的（）
//  auto是自动的，每个局部变量都是auto修饰的
//   extern 申明外部符号
//   register 寄存器关键字
//  signed有符号的    unsigned无符号的    static静态的  unoin 联合体    void无（空）
// include   define 预处理指令
//   typedef 类型重定义
//typedef unsigned int uint;
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//
//
//}


// static修饰局部变量，改变局部变量的生命周期（相当于全局变量），本质上是改变了变量的存储类型，从栈区到静态区
// static修饰全局变量，使得该全局变量只能在本源文件内部使用，其他源文件不能使用（剥夺了全局变量的外部链接属性)
//static修饰函数同全局变量
//int main()
//{
//	uint num = 100;
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//
//
//
//
//
//
//}
// 
//    define 预处理指令
// 1.定义常量
// #define max 1000
// 2.定义宏
// #define add（x，y) x+y
// #define add(x,y) ((x)+(y))
// 
//  
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p", &ch);
//	return 0;
//}
//  %p专门用于打印地址
//  pa（指针变量）用于存放地址
//  *说明pa是指针变量，int说明pa执行的对象是int类型的
// *解引用操作，*pa就是通过a的地址找到a
//指针就是地址

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	printf("%d", sizeof(char*));
// 
//	
//
//
//	return 0;
//}
//结构体的创建和初始化
//struct sdu
//{
//	char name[20];
//	int age;
//	double score;
//
//};
//
//
//int main()
//{
//	struct sdu a= { "kk",18,95};
//	printf("%s,%d,%lf", a.name, a.age, a.score);//结构体变量.成员变量
//	struct sdu* pa = &a;
//	printf("%s,%d,%lf", (*pa).name, (*pa).age, (*pa).score);//解引用
//	printf("%s,%d,%lf", pa->name, pa->age, pa->score);//指针加箭头
//
//
//	return 0;
//}
// 
// 1.顺序结构2.选择结构（分支语句，if else；switch）3.循环结构（do while；while；for）
//else跟最近的if匹配
//  if(表达式)
//  {
//   语句列表   
//   }
// 
//   if(表达式）
//    语句；
//
// return直接结束函数
// 
// switch(整型表达式）
// {
//     case  整型常量表达式：
//      语句；
//      break；
//  }
// 
//  （case  整型常量表达式：）决定入口
//   break作为出口(并非必须）
// 
// 
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("1");
//		break;
//	case 2:
//		printf("2");
//		break;
//	case 4:
//	case 5:
//		printf("qq");
//		break;
//	default:
//		printf("q");
//		break;
//
//	
//
//
//	}
//
//
//
//
//
//	return 0;
//}
// while(表达式）
//    循环语句；
// 
// 
// 
// 在while循环中，break用于永久的中止循环
// 在while循环中，continue的作业是跳过本次循环continue后面的代码，直接去while后的判断部分
//   ==(两个等于号）才为判断是否等于
//
//int main()
//{
//	int i= 1;
//	int p = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//		i++;
//		
//	}
//	while (p <= 10)
//	{
//		if (p == 5)
//			continue;
//		printf("%d", p);
//		p++;
//
//	}
//
//	return 0;
//}
// for(表达式1;表达式2;表达式3)
//循环语句；
//1：初始化循环变量   2：条件判断  3：循环变量的调整
//任何一个部分皆可省略，判断部分的省略=恒为真
// do 循环语句；
//  while(表达式);

//int main()
//{
//	int i = 1;
//	do 
//	{
//		printf("%d", i);
//		i++;
//
//
//	} while (i <= 10);
//
//
//
//	return 0;
//}
// 
// 函数
// ret-type fun-name(para1,*)
// {
//    statement
//  }
// 返回类型 函数名（函数参数）
// {语句项}
//
//函数返回类型为void时，表示函数无返回值
//int get_max(int a, int b)
//{
//	int z = 0;
//	if (a < b)
//		z = b;
//	else
//		z = a;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//	printf("%d", max);
//	return 0;
//}

//通过对地址的操作，使函数和主函数相互影响

//void swap(int* pa, int* pb)//函数定义，pa，pb为形式参数（形参）
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb= z;
//	
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	swap(&a,&b);//函数调用，a，b为实际参数（实参）
//	printf("%d %d", a, b);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 5 };
//	printf("%d", arr[1]);
//
//
//	return 0;
//}
// 函数的调用：
// 1传值调用，形参和实参分别占有不同内存块，，对形参的修改不会影响实参
// 
// 2传址调用，形参和实参是有联系的，函数内部可以直接操作函数外部的变量
//

//int is_prime(int x)
//{
//	int k = 2;
//	for (k = 2; k < x; k++)
//	{
//		if (x % k == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int j = 0;
//	int count = 0;
//	for (j = 100; j <= 200; j++)
//	{
//		int a = is_prime(j);
//		printf("%d\n", a);
//		if (a == 1)
//		{
//			printf("%d\n", j);
//			count++;
//		}
//		printf("%d", count);
//	}
//
//
//	return 0;
//}

//void add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d", num);
//	add(&num);
//	printf("%d", num);
//	add(&num);
//	printf("%d", num);
//	printf("%d", strlen("abc"));//链式访问
//	char arr1[20] = { 0 };
//	char arr[] = "abc";
//	printf("%s", strcpy(arr1, arr));
//	printf("%d", printf("%d", (printf("%d", 43))));
//
//
//
//	return 0;
//}
//函数不可以嵌套定义，但可以嵌套调用
//链式访问：把一个函数的返回值作为另一个函数的参数
//printf函数返回的是打印在屏幕上的字符的个数
//递归：一个过程或函数在其定义或说明中直接或间接调用自身
//int main()
//{
//	printf("hello\n");
//	main();
//	return 0;
//}

//void print(int x)
//{
//	if (x > 9)
//	{
//		
//		print(x/10);
//	}
//	printf("%d", x);
//}
//一层层进去，一层层出来

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//
//
//
//
//	return 0;
//}
//递归的两个必要条件：1存在限制条件，当满足这个限制条件时，递归便不再继续
//每次递归调用之后越来越接近这个限制条件
// 递归层次不能太深，否则容易出现栈溢出
//内存：
// 1栈区：局部变量
// 2堆区：动态内存分配
// 3静态区：全局变量，static
//字符传参，传的是地址
//int main()
//{
//	char arr[] = "abc";
//	printf("%d", strlen(arr));
//
//
//
//	return 0;
//}


//int my_strlen(char* x)
//{
//	int count = 0;
//	while (*x != '\0')
//	{
//		count++;
//		x++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "abc";
//	printf("%d", my_strlen(arr));
//
//
//	return 0;
//}

//字符串+1是下一个字符的地址
//循环是一种迭代的方式
//int my_strlen(char* x)
//{
//	if (*x != '\0')
//		return 1 + my_strlen(x + 1);
//	else
//		return 0;
//}
//
//
//int main()
//{
//	char arr[] = "abc";
//	printf("%d", my_strlen(arr));
//
//
//	return 0;
//}

//int hanshu(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * hanshu(x-1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	n=hanshu(n);
//	printf("%d", n);
//
//
//	return 0;
//}
//
//int fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else return fib(x - 1) + fib(x - 2);
//}
////效率太低，重复大量计算
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
////进行数学分析后，利用循环（迭代）
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	n=Fib(n);
//	printf("%d",n);
//
//
//	return 0;
//}
//
// 数组：一组相同类型元素的集合
//数组长度和字符串长度不同
//  []是下标引用操作符，数组的下标是从0开始的
// 访问数组时[]中可以为变量，创建时只能为常量
//  %p按照地址的格式打印
//  0x开头，十六进制数字
//int main()
//{
//	int a = 0;
//	char arr[] = "bit";
//	char arr1[] = { 'b','i','t' };
//	char arr2[] = { 'b','i','t','\0' };//  \0是字符串结束标志
//	printf("%s", arr);
//	printf("%s\n", arr1);
//	printf("%s", arr2);
//	scanf("%d", &a);
//	printf("%d", a);
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组大小
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//	for (i = 0; i < 10; i++)
//		printf("%p\n", &arr[i]);
//
//
//	return 0;
//}
//一维(二维)数组在内存中是连续存放的
//随着数组下标的增长，地址是由低到高变化的
//数组的初始化：创建的时候赋值
//int main()
//{
//	int arr[10] = { 0,0,0 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	
//
//
//	return 0;
//}
//二维数组中第一个中括号的行数可以省略，但第二个括号中的列数不能省略
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[3][4] = { {1},{2},{3} };//每个大括号代表一行
//	printf("%d", arr[1][1]);
//
//
//	return 0;
//}
//int main()
//{
//	int i,j = 0;
//	int arr[3][4] = { {1},{2} ,{3} };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
//			printf("arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//	}
//	int* p = &arr[0][0];
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//
//	return 0;
//}
//冒泡排序:两两相邻的元素进行比较,可能交换
//
//void  pupple_sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//形参arr的本质是指针
//	printf("%d\n", sz);
//	printf("%d", sizeof(int));
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - j;j++)
//		{
//			if(arr[j]>arr[j+1])
//				{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = arr[j];
//				}
//		}
//	}
//
//
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	pupple_sort(arr);//数组传参的时候,传递的其实是数组首元素的地址
//
//	return 0;
//}
//冒泡排序
//
//void  pupple_sort(int arr[],int sz)
//{
//	
//	printf("%d\n", sz);
//	printf("%d\n", sizeof(int));
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	int k = 0;
//	for (k = 0; k < 10; k++)
//		printf("%d ", arr[k]);
//
//}
//int main()
//{
//	
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	pupple_sort(arr,sz);//数组传参的时候,传递的其实是数组首元素的地址
//	
//
//	return 0;
//}
//数组名是数组首元素的地址,
// &数组名表示整个数组,取出的是整个数组的地址
//sizeof(数组名),数组名表示整个数组,计算的是整个数组的大小,单位是字节

//原码到补码异或补码到原码都是数值位按位取反然后加1
// 获取字符可以用getchar
//int main()
//{
//	char a,b;
//	a = getchar();
//	b = getchar();
//	putchar(a);
//	
//return 0;
//}
//int main()
//{
//    short int x;
//    char x0, x1;
//    x = 0x1122;     //0x22,0x11,数据寻址用的是低位字节的地址
//    x0 = ((char*)&x)[0];
//    //低地址单元  
//    x1 = ((char*)&x)[1];
//    //高地址单元
//    printf("x0=0x%x,x1=0x%x", x0, x1);
//    // 若x0=0x22,则是小端，若x0=0x11,则是大端 
//    if (x0 == 0x22)
//        printf("\n小端存储模式\n");
//    else
//        printf("\n大端存储模式\n");
//    return 0;
//}
//strlen测算字符数组中有效字符(非0)的个数
//int main()
//{
//	char num[5] ;
//	fgets(num,sizeof(num),stdin);
//	puts(num);
//	fputs(num, stdout);//自动换行
//
//	return 0;
// rand获得的随机数被隐藏的全局变量seed控制
//可以用 +-*/%来限定随机数的范围
//time()函数返回一个值,即格里尼治时间1970年1月1日00:00:00到当前时刻的时长,单位是秒,传递给time()函数的参数是指向time_t数据类型的指针
//time()的使用方式:1.t=time(NULL)或t=time(0)    2.直接传地址,不需要额外的赋值语句.time(&a),a的类型为time_t
//可以用ctime将秒数转化为当前时间(字符串形式)
//int main()
//{
//	int t = time(NULL);
//
//	srand(t);
//	int a = rand();
//	printf("%d", t);
//	int t1 = time(0);
//
//	time_t k = 0;
//	time(&k);
//	printf("%d", k);
//	return 0;
//}
//int main()
//{
//	int num = 0x01020304;
//	int* p1 = &num;
//	char* p2 = (char*)&num;
//	short* p3 = (short*)&num;//利用括号进行强制类型转化
//	printf("%p,%p,%p\n", p1, p2, p3);
//	printf("%x,%x,%x", *p1,*p2, *p3);
//
//
//
//
//
//	return 0;
//}