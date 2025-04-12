#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//int main()
//{
//	printf("This is a C program.\n");
//	return 0;
//}


//在字符串中的//和/*都不作为注释的开始,而是作为字符串的一部分。
//#include<stdio.h>
//int main()
//{
//	printf("//This is a C program.\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("/*This is a C program.*/\n");
//	return 0;
//}


//求两数之和
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}


//写一个函数求两个数的最大值
//#include<stdio.h>
//int MAX(int num1, int num2)
//{
//	if (num1 >= num2)
//	{
//		return num1;
//	}
//	else
//	{
//		return num2;
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int c = MAX(num1, num2);
//	printf("%d\n", c);
//	return 0;
//}


//编写一个C程序,运行时输出Hello World!
//#include<stdio.h>
//int main()
//{
//	printf("Hello world!\n");
//	return 0;
//}


//编写一个C程序,运行时输出以下图形:
//*****
//  *****
//	  *****
//	    *****
//	      *****
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int temp = 2;
//	int flag = 0;
//	for (i = 0; i < 5; i++)
//	{
//		if (flag == 0)
//		{
//			printf("*****\n");
//			flag = 1;
//			continue;
//		}
//		int j = 0;
//		for (j = 0; j < temp; j++)
//		{
//			printf(" ");
//		}
//		temp += 2;
//		printf("*****\n");
//	}
//	return 0;
//}


//编写一个C程序,运行时输入a, b, c三个值,输出其中值最大者
//#include<stdio.h>
//int MAX(int a, int b, int c)
//{
//	int max = 0;
//	if (a > max)
//	{
//		max = a;
//	}
//	if (b > max)
//	{
//		max = b;
//	}
//	if (c > max)
//	{
//		max = c;
//	}
//	return max;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int ret = MAX(a, b, c);
//	printf("%d\n", ret);
//	return 0;
//}