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
//	// printf("%d",100);����
//	//printf("%c",'a');�ַ�
//	//printf("%s","abc");�ַ���
//  //printf("%f",3.1)float�����ȸ�����
// //printf("%lf",3.1��double˫���ȸ�����
//	printf("%d",'\130');
//	//�˽���
//	printf("%c", '\x12');
//	//ʮ������
//	printf("%c", '\a');
//	//������
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
//�����±���㿪ʼ������ȫ��ʼ����ʣ���Ĭ��Ϊ0
//"%f"��ӡС��
//%ȡ��
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
//	//   �����ƵĻ����� <<���Ʋ�����    >>���Ʋ�����
//	//   &��λ��   |��λ��   
// 
//	//  0��ʾ�٣���0��ʾ��
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
//	//sizeof��һ����������������ſ���ʡ�ԣ�������������Ų���ʡ��
//	
//
//
//	return 0;
//}
//  ~��λȡ��������λ��

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


//һ���������ڴ����Բ�����ʽ�洢
// ��������ԭ�룬���룬������ͬ
//һ���������Ķ����ƣ����λ��ʾ����λ������Ϊ1����32������λ����ʾ�����֣���-1Ϊ��
//ԭ��10000000000000000000000000000001
//����11111111111111111111111111111110   ����λ���䣬��Чλȡ��
//����11111111111111111111111111111111    +1





//ǰ��++����++����ʹ��
//����++����ʹ�ã���++
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	int c = a++;
//	printf("%d,%d,%d\n", a, b,c);
//	int k = 3.14;
//	int k = (int)3.14;//   ()ǿ������ת��
//	printf("%d", k);
//
//
//	return 0;
//}
// ==���ڲ��ԣ��жϣ����
// ��=���ڲ��Բ����
//  &&�߼� ��
//  ||�߼� ��

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
//��������������Ŀ��������  �� ��
//exp1 ? exp2:exp3               1������ִ��2��    1��������ִ��3�� 
//���ű��ʽ��������������ִ�У���������һ������
//   []�±������     
//    ()�������ò����������ú�����ʱ�򣬺�����ߵģ���
//  auto���Զ��ģ�ÿ���ֲ���������auto���ε�
//   extern �����ⲿ����
//   register �Ĵ����ؼ���
//  signed�з��ŵ�    unsigned�޷��ŵ�    static��̬��  unoin ������    void�ޣ��գ�
// include   define Ԥ����ָ��
//   typedef �����ض���
//typedef unsigned int uint;
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//
//
//}


// static���ξֲ��������ı�ֲ��������������ڣ��൱��ȫ�ֱ��������������Ǹı��˱����Ĵ洢���ͣ���ջ������̬��
// static����ȫ�ֱ�����ʹ�ø�ȫ�ֱ���ֻ���ڱ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ�����ʹ�ã�������ȫ�ֱ������ⲿ��������)
//static���κ���ͬȫ�ֱ���
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
//    define Ԥ����ָ��
// 1.���峣��
// #define max 1000
// 2.�����
// #define add��x��y) x+y
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
//  %pר�����ڴ�ӡ��ַ
//  pa��ָ����������ڴ�ŵ�ַ
//  *˵��pa��ָ�������int˵��paִ�еĶ�����int���͵�
// *�����ò�����*pa����ͨ��a�ĵ�ַ�ҵ�a
//ָ����ǵ�ַ

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
//�ṹ��Ĵ����ͳ�ʼ��
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
//	printf("%s,%d,%lf", a.name, a.age, a.score);//�ṹ�����.��Ա����
//	struct sdu* pa = &a;
//	printf("%s,%d,%lf", (*pa).name, (*pa).age, (*pa).score);//������
//	printf("%s,%d,%lf", pa->name, pa->age, pa->score);//ָ��Ӽ�ͷ
//
//
//	return 0;
//}
// 
// 1.˳��ṹ2.ѡ��ṹ����֧��䣬if else��switch��3.ѭ���ṹ��do while��while��for��
//else�������ifƥ��
//  if(���ʽ)
//  {
//   ����б�   
//   }
// 
//   if(���ʽ��
//    ��䣻
//
// returnֱ�ӽ�������
// 
// switch(���ͱ��ʽ��
// {
//     case  ���ͳ������ʽ��
//      ��䣻
//      break��
//  }
// 
//  ��case  ���ͳ������ʽ�����������
//   break��Ϊ����(���Ǳ��룩
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
// while(���ʽ��
//    ѭ����䣻
// 
// 
// 
// ��whileѭ���У�break�������õ���ֹѭ��
// ��whileѭ���У�continue����ҵ����������ѭ��continue����Ĵ��룬ֱ��ȥwhile����жϲ���
//   ==(�������ںţ���Ϊ�ж��Ƿ����
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
// for(���ʽ1;���ʽ2;���ʽ3)
//ѭ����䣻
//1����ʼ��ѭ������   2�������ж�  3��ѭ�������ĵ���
//�κ�һ�����ֽԿ�ʡ�ԣ��жϲ��ֵ�ʡ��=��Ϊ��
// do ѭ����䣻
//  while(���ʽ);

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
// ����
// ret-type fun-name(para1,*)
// {
//    statement
//  }
// �������� ������������������
// {�����}
//
//������������Ϊvoidʱ����ʾ�����޷���ֵ
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

//ͨ���Ե�ַ�Ĳ�����ʹ�������������໥Ӱ��

//void swap(int* pa, int* pb)//�������壬pa��pbΪ��ʽ�������βΣ�
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
//	swap(&a,&b);//�������ã�a��bΪʵ�ʲ�����ʵ�Σ�
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
// �����ĵ��ã�
// 1��ֵ���ã��βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬�����βε��޸Ĳ���Ӱ��ʵ��
// 
// 2��ַ���ã��βκ�ʵ��������ϵ�ģ������ڲ�����ֱ�Ӳ��������ⲿ�ı���
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
//	printf("%d", strlen("abc"));//��ʽ����
//	char arr1[20] = { 0 };
//	char arr[] = "abc";
//	printf("%s", strcpy(arr1, arr));
//	printf("%d", printf("%d", (printf("%d", 43))));
//
//
//
//	return 0;
//}
//����������Ƕ�׶��壬������Ƕ�׵���
//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//printf�������ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
//�ݹ飺һ�����̻������䶨���˵����ֱ�ӻ��ӵ�������
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
//һ����ȥ��һ������

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
//�ݹ��������Ҫ������1�������������������������������ʱ���ݹ�㲻�ټ���
//ÿ�εݹ����֮��Խ��Խ�ӽ������������
// �ݹ��β���̫��������׳���ջ���
//�ڴ棺
// 1ջ�����ֲ�����
// 2��������̬�ڴ����
// 3��̬����ȫ�ֱ�����static
//�ַ����Σ������ǵ�ַ
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

//�ַ���+1����һ���ַ��ĵ�ַ
//ѭ����һ�ֵ����ķ�ʽ
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
////Ч��̫�ͣ��ظ���������
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
////������ѧ����������ѭ����������
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
// ���飺һ����ͬ����Ԫ�صļ���
//���鳤�Ⱥ��ַ������Ȳ�ͬ
//  []���±����ò�������������±��Ǵ�0��ʼ��
// ��������ʱ[]�п���Ϊ����������ʱֻ��Ϊ����
//  %p���յ�ַ�ĸ�ʽ��ӡ
//  0x��ͷ��ʮ����������
//int main()
//{
//	int a = 0;
//	char arr[] = "bit";
//	char arr1[] = { 'b','i','t' };
//	char arr2[] = { 'b','i','t','\0' };//  \0���ַ���������־
//	printf("%s", arr);
//	printf("%s\n", arr1);
//	printf("%s", arr2);
//	scanf("%d", &a);
//	printf("%d", a);
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������С
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
//һά(��ά)�������ڴ�����������ŵ�
//���������±����������ַ���ɵ͵��߱仯��
//����ĳ�ʼ����������ʱ��ֵ
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
//��ά�����е�һ�������ŵ���������ʡ�ԣ����ڶ��������е���������ʡ��
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[3][4] = { {1},{2},{3} };//ÿ�������Ŵ���һ��
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
//ð������:�������ڵ�Ԫ�ؽ��бȽ�,���ܽ���
//
//void  pupple_sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//�β�arr�ı�����ָ��
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
//	pupple_sort(arr);//���鴫�ε�ʱ��,���ݵ���ʵ��������Ԫ�صĵ�ַ
//
//	return 0;
//}
//ð������
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
//	pupple_sort(arr,sz);//���鴫�ε�ʱ��,���ݵ���ʵ��������Ԫ�صĵ�ַ
//	
//
//	return 0;
//}
//��������������Ԫ�صĵ�ַ,
// &��������ʾ��������,ȡ��������������ĵ�ַ
//sizeof(������),��������ʾ��������,���������������Ĵ�С,��λ���ֽ�

//ԭ�뵽��������뵽ԭ�붼����ֵλ��λȡ��Ȼ���1
// ��ȡ�ַ�������getchar
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
//    x = 0x1122;     //0x22,0x11,����Ѱַ�õ��ǵ�λ�ֽڵĵ�ַ
//    x0 = ((char*)&x)[0];
//    //�͵�ַ��Ԫ  
//    x1 = ((char*)&x)[1];
//    //�ߵ�ַ��Ԫ
//    printf("x0=0x%x,x1=0x%x", x0, x1);
//    // ��x0=0x22,����С�ˣ���x0=0x11,���Ǵ�� 
//    if (x0 == 0x22)
//        printf("\nС�˴洢ģʽ\n");
//    else
//        printf("\n��˴洢ģʽ\n");
//    return 0;
//}
//strlen�����ַ���������Ч�ַ�(��0)�ĸ���
//int main()
//{
//	char num[5] ;
//	fgets(num,sizeof(num),stdin);
//	puts(num);
//	fputs(num, stdout);//�Զ�����
//
//	return 0;
// rand��õ�����������ص�ȫ�ֱ���seed����
//������ +-*/%���޶�������ķ�Χ
//time()��������һ��ֵ,����������ʱ��1970��1��1��00:00:00����ǰʱ�̵�ʱ��,��λ����,���ݸ�time()�����Ĳ�����ָ��time_t�������͵�ָ��
//time()��ʹ�÷�ʽ:1.t=time(NULL)��t=time(0)    2.ֱ�Ӵ���ַ,����Ҫ����ĸ�ֵ���.time(&a),a������Ϊtime_t
//������ctime������ת��Ϊ��ǰʱ��(�ַ�����ʽ)
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
//	short* p3 = (short*)&num;//�������Ž���ǿ������ת��
//	printf("%p,%p,%p\n", p1, p2, p3);
//	printf("%x,%x,%x", *p1,*p2, *p3);
//
//
//
//
//
//	return 0;
//}