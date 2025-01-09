#define _CRT_SECURE_NO_WARNINGS 1 
//我是大v
//#include<stdio.h>
//
//int main() 
//{
//    char a = 'v';
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    int m = 0;
//    printf("请输入v的列数:");
//    scanf("%d", &m);
//    for (i = m; i > 0; i--) 
//    {
//        for (j = m + 1; j > i; j--) 
//        {
//            if (j == m + 1) 
//            {
//                continue;
//            }
//            printf(" ");
//        }
//        printf("%c", a);
//        for (k = 0; k < 2 * i - 3; k++) 
//        {
//            printf(" ");
//        }
//        if (i != 1) 
//        {
//            printf("%c\n", a);
//        }
//    }
//    return 0;
//}
//v   v
// v v
//  v


//三位数反转
//#include<stdio.h>
//
//int main()
//{
//	int a,b;
//	scanf("%d", &a);
//	b = a / 100  + a / 10 % 10 * 10 + a % 10 * 100;
//	printf("%03d\n", b);
//	return 0;
//}


//交换两个数的三种方法
//方法一----直接打印输出
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", a, b);
//	printf("%d %d", b, a);
//	return 0;
//}


//方法二-----借助空瓶子
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	c = a;
//	a = b;
//	b = c;
//	printf("%d %d", a, b);
//	return 0;
//}


//方法三-------混合与分离
//#include<stdio.h>
// 
//int main()
//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	a = a + b;  
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}


//鸡和兔的总数量为a,总腿数为b。输入a和b。依次输出鸡的数目和兔的数目,如果无解,则输出No answer
//#include<stdio.h>
//
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d", &a, &b);
//	d = 0.5 * b - a;
//	c = a - d;
//	if (c > 0 && d > 0)
//	{
//		printf("%d %d", c, d);
//	}
//	else
//	{
//		printf("No answer\n");
//	}
//	return 0;
//}


//三个整数排序
//方法一 --- 错误
//让6种情况没有交叉,单独执行
//两两进行比较,有6种排序方法
//如果输入3个1没有任何输出
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b && b < c)printf("%d %d %d\n", a, b, c);
//	if (a < c && c < b)printf("%d %d %d\n", a, c, b);
//	if (b < a && a < c)printf("%d %d %d\n", b, a, c);
//	if (b < c && c < a)printf("%d %d %d\n", b, c, a);
//	if (c < a && a < b)printf("%d %d %d\n", c, a, b);
//	if (c < b && b < a)printf("%d %d %d\n", c, b, a);
//	return 0;
//}


//方法2 ---- 正确
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a <= b && b <= c)printf("%d %d %d\n", a, b, c);
//	else if (a <= c && c <= b)printf("%d %d %d\n", a, c, b);
//	else if (b <= a && a <= c)printf("%d %d %d\n", b, a, c);
//	else if (b <= c && c <= a)printf("%d %d %d\n", b, c, a);
//	else if (c <= a && a <= b)printf("%d %d %d\n", c, a, b);
//	else if (c <= b && b <= a)printf("%d %d %d\n", c, b, a);
//	return 0;
//}


//方法二的变化 ---- 最后一句改为else
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a <= b && b <= c)printf("%d %d %d\n", a, b, c);
//	else if (a <= c && c <= b)printf("%d %d %d\n", a, c, b);
//	else if (b <= a && a <= c)printf("%d %d %d\n", b, a, c);
//	else if (b <= c && c <= a)printf("%d %d %d\n", b, c, a);
//	else if (c <= a && a <= b)printf("%d %d %d\n", c, a, b);
//	else(c <= b && b <= a)printf("%d %d %d\n", c, b, a);
//	return 0;
//}


//方法3 --- 正确
//利用三变量交换法,对程序进行修改

//#include<stdio.h>
//int main()
//{
//	int a, b, c, t;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b) { t = a; a = b; b = t; } //执行完毕之后a≤b
//	if (a > c) { t = a; a = c; c = t; } //执行完毕之后a≤c， 且a≤b依然成立
//	if (b > c) { t = b; b = c; c = t; }
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//方法3的另一种情况
//只进行两次比较,有bug,原因是没有进行a和c的比较
//如果输入2 3 1输出2 1 3
//#include<stdio.h>
//
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (b > c)
//	{
//		d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//输入一个整数判断是否为整数
//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数:");
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("这个数是奇数\n");
//	}
//	else
//	{
//		printf("这个数是偶数\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年人\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//}


//计算11111*11111,如果换成更多个1呢？
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	float a;
//	//a = sqrt(-10);
//	a = 1.0 / 0.0;
//	printf("%f\n", a);
//	return 0;
//}


//练习:输入任意一个正整数,计算除3之后的余数
//if else if else语句 
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//	{
//		printf("余数是0\n");
//	}
//	else if (num % 3 == 1)
//	{
//		printf("余数是1\n");
//	}
//	else
//	{
//		printf("余数是2\n");
//	}
//	return 0;
//}


//switch  ---- case语句
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//	return 0;
//}


//输入1到7,对应打印星期几
//switch ---- case
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}


//输入1~5,输出工作日,输入6~7,输出休息日
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}


//default可以放在前面
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//	{
//		printf("输入错误,请输入1~7的数字\n");
//		break;
//	}
//	}
//	return 0;
//}


//输出1~10的数字
//方法一
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//方法一
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d ", i++);
//	}
//	return 0;
//}


//输入一个正的整数,逆序打印这个数的每一位
//#include<stdio.h>
////123
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num = num / 10;//或者num /= 10;
//	}
//	return 0;
//}


//计算1~100之间3的倍数的求和
//第一种方法
//#include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			sum = i + sum;
//		}
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}


//第二种方法
//#include<stdio.h>
//
//int main()
//{
//	int i = 3;
//	int sum = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		sum = i + sum;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}


//输入一个正整数,计算这个整数是几位数
//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	int i = 1;
//	scanf("%d", &num);
//	for (i = 1; i <= 10; i++)
//	{
//		num = num / 10;
//		if (num == 0)
//		{
//			break;
//		}
//	}
//	printf("%d\n", i);
//	return 0;
//}


//输入三个数,输出平均值
//#include<stdio.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	float d = (a + b + c) / 3.0;
//	printf("%.3f", d);
//	return 0;
//}


//输入华氏温度f,输出对应的摄氏温度c,保留3位小数。提示：c＝5(f－32)/9。
//#include<stdio.h>
//int main()
//{
//	float f = 0;
//	scanf("%f", &f);
//	float c = 5 * (f - 32) / 9;
//	printf("%.3f\n", c);
//	return 0;
//}


//连续和sum
//输入正整数n,输出1＋2＋…＋n的值。
//第一种方法
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//第二种方法
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = n * (n + 1) / 2;
//	printf("%d\n", sum);
//	return 0;
//}


//正弦和余弦（ sin和cos）
//输入正整数n(n＜360),输出n度的正弦、余弦函数值。提示：使用数学函数
//#include<stdio.h>
//#include<math.h>
//#define PI 3.1415926
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double rad = n * (PI / 180);
//	double sin1 = sin(rad);
//	double cos1 = cos(rad);
//	printf("%.4lf\n", sin1);
//	printf("%.4lf\n", cos1);
//	return 0;
//}


//一件衣服95元,若消费满300元,可打八五折。输入购买衣服件数,输出需要支付的金
//额(单位:元),保留两位小数。

//#include<stdio.h>
//int main()
//{
//	float cloth = 95.0;
//	int count = 0;
//	scanf("%d", &count);
//	float buy = 0;
//	if (cloth * count >= 300)
//	{
//		buy = 95 * 3 + 95 * 0.85 * (count - 3);
//	}
//	else
//	{
//		buy = 95 * count;
//	}
//	printf("%.2f\n", buy);
//	return 0;
//}


//输入三角形3条边的长度值(均为正整数),判断是否能为直角三角形的3个边长。如果
//可以,则输出yes,如果不能,则输出no。如果根本无法构成三角形,则输出not a triangle。
//第一种方法
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if(a + b > c && a + c > b && b + c > a)//判断能否构成三角形
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("not a triangle\n");
//	}
//	return 0;
//}


//第二种方法
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	//让a是3个数中最大的数
//	if (a < b)
//	{
//		a = a + b;
//		b = a - b;
//		a = a - b;
//	}
//	//使用两个数相加,交换数,如果两个数字较大可能会超范围
//	if (a < c)
//	{
//		a = a + c;
//		c = a - c;
//		a = a - c;
//	}
//	if (b + c > a)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("not a triangle\n");
//	}
//	return 0;
//}


//输出aabb式的完全平方数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i < 10;i++)
//	{
//		for (j = 0;j < 10;j++)
//		{
//			int num = i * 1100 + j * 11;
//			int sqrt_num = (int)sqrt(num);
//			if (sqrt_num * sqrt_num == num)
//			{
//				printf("%d ", num);
//			}
//		}
//	}
//}


//输出1~n的值
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	for (int a = 1; a <= 9; a++)
//	{
//		for (int b = 0; b <= 9; b++)
//		{
//			int n = a * 1100 + b * 11;
//			int m = floor(sqrt(n) + 0.5);
//			if (m * m == n)
//			{
//				printf("%d\n", n);
//			}
//		}
//	}
//	return 0;
//}


//3n+1问题
//#include<stdio.h>
//long is_one(long long num)
//{
//	long count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			num = 3 * num + 1;
//		}
//		else
//		{
//			num = num / 2;
//		}
//		if (num == 1)
//		{
//			break;
//		}
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	long long num = 0;
//	scanf("%lld", &num);
//	long* ret = is_one(num);
//	long i = 0;
//	for (i = 0;i < 2;i++)
//	{
//		printf("%lld ", ret[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	long long num = 0;
//	scanf("%lld", &num);
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			num = 3 * num + 1;
//		}
//		else
//		{
//			num = num / 2;
//		}
//		count++;
//	}
//	printf("%d %d\n", count,num);
//	return 0;
//}


//C++
//#include <iostream>
//using namespace std;
//
//long long cishu(long long a)
//{
//	long long count = 0;
//	while (a != 1)
//	{
//		if (a % 2 != 0)
//		{
//			a = (a * 3) + 1;
//			count++;
//		}
//		else if (a % 2 == 0)
//		{
//			a = a / 2;
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	long long a = 0;
//	cout << "输入一个数:" << endl;
//	cin >> a;
//	long long count = cishu(a);
//	cout << count << endl;
//	return 0;
//
//}


//#include<stdio.h>
//#define PI 3.1415926
//int is(int num)
//{
//	num = (PI / 4);
//	int i = 0;
//	int j = 0;
//	while ()
//	{
//		num = (PI)
//	}
//}
//int main()
//{
//	int num = 0;
//	is(num);
//	return 0;
//}


//计算1-1/3+1/5-1/7+....
//#include<stdio.h>
//#define PI 3.1415926
//int main()
//{
//	double sum = 0;
//	int i = 1;
//	while (i)
//	{
//		double m = 1.0 / (2 * i + 1);
//		if (i % 2 == 0)
//		{
//			sum = sum + m;
//			i++;
//		}
//		else
//		{
//			sum = sum - m;
//			i++;
//		}
//		if (sum < 1e-6)
//		{
//			break;
//		}
//	}
//	printf("%.6f\n", sum);
//	return 0;
//}


//输入n计算S＝1!＋2!＋3!＋…＋n!的末6位(不含前导0)。
//n≤10的-6次方,n!表示前n个正整数之积。
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int n = 9;
//	int j = 0;
//	int i = 0;
//	for (i = 1;i <= n;i++)
//	{
//		int c = 1;
//		for (j = 1;j <= i;j++)
//		{
//			c = c * j;
//		}
//		sum = c + sum;
//	}
//	printf("%d\n", sum % 1000000);
//	return 0;
//}


//输入n计算S＝1!＋2!＋3!＋…＋n!
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (i = 1;i <= n;i++)
//	{
//		int ret = 1;
//		for (j = 1;j <= i;j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//输入一些整数,求出它们的最小值、最大值和平均值(保留3位小数)。
//输入保证这些数都是不超过1000的整数。
//样例输入:
//2 8 3 5 1 7 3 6
//样例输出:
//1 8 4.375
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	double sum = 0;
//	int max = 0;
//	int min = 9999;
//	int count = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		count++;
//		sum = sum + num;
//		if (num > max)
//		{
//			max = num;
//		}
//		if (num < min)
//		{
//			min = num;
//		}
//	}
//	sum = sum / count;
//	printf("%d %d %f\n", max, min, sum);
//	return 0;
//}


#include<stdio.h>
#define INF 1000000000
int main()
{
	int x, n = 0, min = INF, max = -INF, s = 0, kase = 0;
	while (scanf("%d", &n) == 1 && n)
	{
		int s = 0;
		for (int i = 0; i < n; i++) 
		{
			scanf("%d", &x);
			s += x;
			if (x < min) min = x;
			if (x > max) max = x;
		}
		if (kase)
		{
			printf("\n");
		}
		printf("Case %d: %d %d %.3f\n", ++kase, min, max, (double)s / n);
	}
	return 0;
}