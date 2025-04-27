#define _CRT_SECURE_NO_WARNINGS 1 
//交换两个整数的值
//编写一个函数,使用指针作为参数,交换两个整数的值。
//#include<stdio.h>
//void change(int* num1, int* num2)
//{
//	int temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	printf("交换前:%d %d\n", num1, num2);
//	change(&num1, &num2);
//	printf("交换后:%d %d\n", num1, num2);
//	return 0;
//}


//查找数组中的最大值
//编写一个函数, 使用指针遍历数组, 找出数组中的最大值。
//*(arr + i) == arr[i] == i[arr] == *(i + arr)
//#include<stdio.h>
//int MAX(int* arr, int sz)
//{
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (max < *(arr + i))
//		{
//			max = *(arr + i);
//		}
//	}
//	return max;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = MAX(arr, sz);
//	printf("%d\n", ret);
//	return 0;
//}


//查找数组中的最大值
//编写一个函数, 在1-100之间随机生成10个整数,使用指针遍历数组,找出数组中的最大值。
//*(arr + i) == arr[i] == i[arr] == *(i + arr)
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int MAX(int* arr, int sz)
//{
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (max < *(arr + i))
//		{
//			max = *(arr + i);
//		}
//	}
//	return max;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	srand((unsigned int)(time)(NULL));
//	int i = 0;
//	//rand() % 100表示随机生成0~99之间的数
//	//rand() % 100 + 1表示随机生成1~100之间的数
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = rand() % 100 + 1;
//	}
//	int ret = MAX(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//	printf("%d\n", ret);
//	return 0;
//}


//求字符串长度
//第1种方法
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "hello world!";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//第2种方法
//#include<stdio.h>
//int* my_strlen(char* arr)
//{
//	char* temp = arr;
//	while (*temp != '\0')
//	{
//		temp++;
//	}
//	return temp - arr;
//}
//int main()
//{
//	char arr[] = "hello world!";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//计数器
//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world!";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//字符串反转
//编写一个函数,接收一个字符串指针,将该字符串反转。
//#include<stdio.h>
//void back(char* arr)
//{
//	int sz = strlen(arr);
//	char* start = arr;
//	char* end = arr + sz - 1;
//	while (start < end)
//	{
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//}
//int main()
//{
//	char arr[] = "Hello World!";
//	back(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a = 7;
//    int b = 2;
//    float c = 2.0f;
//    printf("%d\n", a / b);
//    printf("%f\n", a / c);
//    return 0;
//}
//3 3.500000


//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a 6 c 6
//	b = ++c, c++, ++a, a++;
//	//c 8 a 8 b 7
//	b += a++ + c;
//	//b = b+ 16 // 23
//	// a  9 
//	//c 8
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//9 23 8


//#include <stdio.h>
//
//int main()
//{
//    printf("%5d\n", 123456);
//    return 0;
//}
//123456


//#include <stdio.h>
//int main() 
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2) 
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: 
//			printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
//hellothird


//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;//4 7 10 13 16 19 22 
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		int j = 0;
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d * %d = %2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//求10个整数的最大值
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = i;
//	}
//	int max = arr[0];
//	for (i = 1;i < 10;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5……+1/99-1/100的值,打印出结果
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		if (flag == 1)
//		{
//			sum += 1.0 / i;
//			flag = 0;
//		}
//		else
//		{
//			sum += -1.0 / i;
//			flag = 1;
//		}
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//编写程序数一下1到100的所有整数中出现多少个数字9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if ((i+1) % 10 == 0)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//写一个代码:打印100~200之间的素数
//#include<stdio.h>
//#include<math.h>
//int prime(int num)
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 2;i <= sqrt(num);i++)
//	{
//		if (num % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 101;i <= 200;i+=2)
//	{
//		int ret = prime(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}


//打印1000年到2000年之间的闰年
//#include<stdio.h>
//int sort(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		int ret = sort(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}


//给定两个数,求这两个数的最大公约数
//例如:
//输入:20 40
//输出:20
//#include<stdio.h>
//void big(int num1, int num2)
//{
//	if (num1 < num2)
//	{
//		num1 = num1 + num2;
//		num2 = num1 - num2;
//		num1 = num1 - num2;
//	}
//	while (num1 % num2 != 0)
//	{
//		int temp = num1 % num2;
//		num1 = num2;
//		num2 = temp;
//	}
//	printf("%d\n", num2);
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	big(num1, num2);
//	return 0;
//}


//求两个数的最小公倍数
//例如:
//输入:20 40
//输出:40
//#include<stdio.h>
//void gcd(int num1, int num2)
//{
//	if (num1 < num2)
//	{
//		int temp = num1;
//		num1 = num2;
//		num2 = temp;
//	}
//	int b = num1 * num2;
//	while (num1 % num2 != 0)
//	{
//		int temp1 = num1 % num2;
//		num1 = num2;
//		num2 = temp1;
//	}
//	printf("%d\n", b / num2);
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	gcd(num1, num2);
//	return 0;
//}

