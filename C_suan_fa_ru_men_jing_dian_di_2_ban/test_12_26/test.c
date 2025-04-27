#define _CRT_SECURE_NO_WARNINGS 1 

//第一章
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 1 + 2);
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 3 - 4);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 5 * 6);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 8 / 4);
//	return 0;
//}


//整数/整数=整数,浮点数/浮点数=浮点数。
//#include<stdio.h>
//int main()
//{
//	printf("%.1f\n", 8 / 5);
//	return 0;
//}


//整数 - 浮点数 = 浮点数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	printf("%.8f\n", 1 + 2 * sqrt(3) / (5 - 0.1));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}


//圆柱体的表面积
//#include<stdio.h>
//#include<math.h>
//#define PI 3.1415926
//int main()
//{
//	float r = 0;
//	float h = 0;
//	double s = 0;
//	scanf("%f %f", &r, &h);
//	s = PI * 2 * r * h + 2 * PI * pow(r, 2);
//	printf("Area=%.3f", s);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
// 	const double pi = acos(-1.0);
//	printf("%.10f", pi);
//	return 0;
//}


//三位数翻转
//123
//321
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int num1 = num / 100 + num / 10 % 10 * 10 + num % 10 * 100;
//	printf("%03d\n", num1);
//	return 0;
//}


//交换变量
//输入两个整数a和b,交换二者的值,然后输出。
//第一种方法
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", b, a);
//	return 0;
//}


//第二种方法
//三变量交换
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d", a, b);
//	return 0;
//}


//第三种方法
//混合与分离
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}


//已知鸡和兔的总数量为n,总腿数为m。
//输入n和m,依次输出鸡的数目和兔的数目。
//如果无解,则输出No answer。
//样例输入:
//14 32
//样例输出:
//12 2
//2*c+4*d = m
//2c+2d = 2n
//2d = m - 2n;
//d = 0.5m - n
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d", &n, &m);
//	d = 0.5 * m - n;
//	c = n - d;
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


//三整数排序
//方法一
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


//方法二
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a <= b && b <= c) printf("%d %d %d\n", a, b, c);
//	else if (a <= c && c <= b) printf("%d %d %d\n", a, c, b);
//	else if (b <= a && a <= c) printf("%d %d %d\n", b, a, c);
//	else if (b <= c && c <= a) printf("%d %d %d\n", b, c, a);
//	else if (c <= a && a <= b) printf("%d %d %d\n", c, a, b);
//	else if (c <= b && b <= a) printf("%d %d %d\n", c, b, a);//可以去掉if
//	return 0;
//}


//方法3
//#include<stdio.h>
//int main()
//{
//	int a, b, c, t;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b) { t = a; a = b; b = t; } //执行完毕之后a≤b
//	if (a > c) { t = a; a = c; c = t; } //执行完毕之后a≤c,且a≤b依然成立
//	if (b > c) { t = b; b = c; c = t; }
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//方法4
//冒泡排序
//#include<stdio.h>
//void sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		for (j = 0;j < sz - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr,sz);
//	for (i = 0;i < 3;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//输入3个整数,输出它们的平均值,保留3位小数。
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	float average = (a + b + c ) / 3.0;
//	printf("%.3f\n", average);
//	return 0;
//}


//输入华氏温度f,输出对应的摄氏温度c,保留3位小数。
//提示:c＝5(f－32)/9
//#include<stdio.h>
//int main()
//{
//	float c = 0;
//	float f = 0;
//	scanf("%f", &f);
//	c = 5 * (f - 32) / 9.0;
//	printf("%.3f", c);
//	return 0;
//}


//输入正整数n,输出1＋2＋…＋n的值
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//输入正整数n(n＜360),输出n度的正弦、余弦函数值。
//提示:使用数学函数。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	const double pi = acos(-1.0);
//	double hu = (double)n * pi / 180.0;
//	double si = sin(hu);
//	double co = cos(hu);
//	printf("sin = %lf\ncos = %lf", si, co);
//	return 0;
//}


//一件衣服95元,若消费满300元,可打八五折。
//输入购买衣服件数,输出需要支付的金额(单位:元),保留两位小数。
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	float money = 0;
//	if (95 * num >= 300)
//	{
//		money = 95 * num * 0.85;
//		printf("%.2f\n", money);
//	}
//	else
//	{
//		money = 95 * num;
//		printf("%.2f\n", money);
//	}
//	return 0;
//}


//输入三角形3条边的长度值(均为正整数),判断是否能为直角三角形的3个边长。
//如果可以,则输出yes,如果不能,则输出no。
//如果根本无法构成三角形,则输出not a triangle。
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		printf("%d %d %d\n", a, b, c);
//	}
//	else
//	{
//		printf("not a triangle\n");
//	}
//	return 0;
//}


//闰年
//#include<stdio.h>
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
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
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	if (ret)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}


//第二章
//输出1,2,3,....n的值
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	for (i = 1; i <= num; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//输出所有形如aabb的4位完全平方数(即前两位数字相等,后两位数字也相等)。
//方法一
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	for (int a = 1; a <= 9; a++)
//		for (int b = 0; b <= 9; b++)
//		{
//			int n = a * 1100 + b * 11; 
//			//这里才开始使用n,因此在这里定义n
//			int m = floor(sqrt(n) + 0.5);
//			if (m * m == n) printf("%d\n", n);
//		}
//	return 0;
//}


//方法二
//#include<stdio.h>
//int main()
//{
//	for (int x = 1; ; x++)
//	{
//		int n = x * x;
//		if (n < 1000) continue;
//		if (n > 9999) break;
//		int hi = n / 100;
//		int lo = n % 100;
//		if (hi / 10 == hi % 10 && lo / 10 == lo % 10) 
//			printf("%d\n", n);
//	}
//	return 0;
//}


//3*n+1问题
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	while (num != 1)
//	{
//		if (num % 2 != 0)
//		{
//			num = 3 * num + 1;
//		}
//		else
//		{
//			num = num / 2;
//		}
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//计算sum = 1-1/3+1/5-1/7+.....+1/n
//第一种方法
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int temp = 0;
//	do
//	{
//		temp = pow(-1, i) * (2 * i + 1);
//		sum = sum + 1.0 / temp;
//		i++;
//	} while (temp < pow(-6,10));
//	printf("%f\n", sum);
//	return 0;
//}


//第二种方法
//#include<stdio.h>
//int main() 
//{
//	double sum = 0;
//	for (int i = 0; ; i++) 
//	{
//		double term = 1.0 / (i * 2 + 1);
//		if (i % 2 == 0) sum += term;
//		else sum -= term;
//		if (term < 1e-6) break;
//	}
//	printf("%.6f\n", sum);
//	return 0;
//}


//输入n,计算S＝1!＋2!＋3!＋…＋n!的末6位(不含前导0)。
//n≤106,n!表示前n个正整数之积。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	int temp = 0;
//	scanf("%d", &num);
//	for (i = 1;i <= num;i++)
//	{	
//		int sum1 = 1;
//		for (j = 1;j <= i;j++)
//		{
//			sum1 = sum1 * j;
//		}
//		temp = sum1 + temp;
//	}
//	printf("%d\n", temp % 1000000);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int n = 0;
//	int max = -9999;
//	int min = 9999;
//	double sum = 0;
//	while (scanf("%d", &x) == 1)
//	{
//		max = min = x;
//		sum = sum + x;
//		if (max < x)
//		{
//			max = x;
//		}
//		if (min > x)
//		{
//			min = x;
//		}
//		n++;
//	}
//	printf("%d %d %f\n", max, min, sum / n);
//	return 0;
//}


//输入一些整数,求出它们的最小值、最大值和平均值(保留3位小数)。
//输入保证这些数都是不超过1000的整数。
//输入包含多组数据,每组数据第一行是整数个数n,第二行是n个整数。
//n＝0为输入结束标记,程序应当忽略这组数据。
//相邻两组数据之间应输出一个空行。
//样例输入:
//8
//2 8 3 5 1 7 3 6
//4
//- 4 6 10 0
//0
//样例输出:
//Case 1: 1 8 4.375
//Case 2 : -4 10 3.000
//#include<stdio.h>
//#define INF 1000000000
//int main()
//{
//	int x, n = 0, s = 0, kase = 0;
//	while (scanf("%d", &n) == 1 && n)
//	{
//		int min = INF, max = -INF;
//		s = 0;
//		for (int i = 0; i < n; i++) 
//		{
//			scanf("%d", &x);
//			s += x;
//			if (x < min) min = x;
//			if (x > max) max = x;
//		}
//		if (kase)
//		{
//			printf("\n");
//		}
//		printf("Case %d: %d %d %.3f\n", ++kase, min, max, (double)s / n);
//	}
//	return 0;
//}


//输出100～999中的所有水仙花数。
//若3位数ABC满足ABC＝A3＋B3＋C3,则称其为水仙花数。
//例如153＝13＋53＋33,所以153是水仙花数。
//#include<stdio.h>
//#include<math.h>
//int narcissus(int num)
//{
//	if (num == pow(num / 100, 3) + pow(num % 10, 3) + pow(num / 10 % 10, 3))
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
//	for (i = 100;i <= 999;i++)
//	{
//		int ret = narcissus(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//相传韩信才智过人,从不直接清点自己军队的人数
//只要让士兵先后以三人一排、五人一排、七人一排地变换队形
//而他每次只掠一眼队伍的排尾就知道总人数了。
//输入包含多组数据,每组数据包含3个非负整数a,b,c
//表示每种队形排尾的人数(a＜3,b＜5,c＜7)
//输出总人数的最小值(或报告无解)。
//已知总人数不小于10,不超过100。
//输入到文件结束为止。
//样例输入:
//2 1 6
//2 1 3
//样例输出:
//Case 1 : 41
//Case 2 : No answer
//#include<stdio.h>
//int NUM(int num1, int num2, int num3)
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 10;i <= 100;i++)
//	{
//		if (num1 == i % 3 && num2 == i % 5 && num3 == i % 7)
//		{
//			return i;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int n = 1;
//	while (scanf("%d %d %d", &num1, &num2, &num3) != EOF )
//	{
//		int ret = NUM(num1, num2, num3);
//		if (ret == 1)
//		{
//			printf("Case %d : No answer\n", n);
//			n++;
//		}
//		else
//		{
//			printf("Case %d : %d\n", n, ret);
//			n++;
//		}
//	}
//	return 0;
//}


//输入正整数n≤20，输出一个n层的倒三角形。
//例如,n＝5时输出如下:
//#########
// #######
//  #####
//   ###
//    #
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int num = 0;
//	int temp = 0;
//	scanf("%d", &num);
//	//5 9
//	//4 7
//	//3 5
//	//2 3
//	//1 1
//	for (i = num;i > 0;i--)
//	{
//		for (k = 0;k < temp;k++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2 * i - 1;j++)
//		{
//			printf("*");
//		}
//		temp++;
//		printf("\n");
//	}
//	return 0;
//}


//输入两个正整数n＜m＜10^6,输出1/(n)^2+1/(n+1)^2+......+1/(m)^2
//保留5位小数。
//输入包含多组数据,结束标记为n＝m＝0。
//提示：本题有陷阱。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long num1 = 0;
//	long long num2 = 0;
//	while (scanf("%lld %lld", &num1, &num2) == 2)
//	{
//		double sum = 0;
//		long long i = 0;
//		for (i = num1;i <= num2;i++)
//		{
//			sum = 1.0 / pow(i, 2) + sum;
//		}
//		printf("%.5f\n", sum);
//	}
//	return 0;
//}


//输入正整数a,b,c,输出a/b的小数形式,精确到小数点后c位。
//a,b≤10^6,c≤100。
//输入包含多组数据,结束标记为a＝b＝c＝0。
//样例输入:
//1 6 4
//0 0 0
//样例输出:
//Case 1: 0.1667
//#include<stdio.h>
//int main()
//{
//	double num1 = 0;
//	double num2 = 0;
//	int num3 = 0;
//	int n = 1;
//	double sum = 0;
//	while (scanf("%lf %lf %d", &num1, &num2, &num3) == 3)
//	{
//		sum = num1 / num2;
//		printf("Case %d : %.*f\n", n, num3, sum);
//		n++;
//	}
//	return 0;
//}


//用1,2,3,…,9组成3个三位数abc,def和ghi,每个数字恰好使用一次
//要求abc:def:ghi＝1:2:3。
//按照"abc def ghi"的格式输出所有解, 每行一个解。
//提示:不必太动脑筋。
//192 384 576
//219 438 657
//273 546 819
//327 654 981
//第一种方法
//#include<stdio.h>
////判断9个数是否有0
//int bi1(int num1, int num2, int num3)
//{
//	int arr[9] = { 0 };
//	int i = 0;
//	arr[0] = num1 / 100;
//	arr[1] = num1 / 10 % 10;
//	arr[2] = num1 % 10;
//	arr[3] = num2 / 100;
//	arr[4] = num2 / 10 % 10;
//	arr[5] = num2 % 10;
//	arr[6] = num3 / 100;
//	arr[7] = num3 / 10 % 10;
//	arr[8] = num3 % 10;
//	for (i = 0;i < 9;i++)
//	{
//		if (arr[i] == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
////判断9个数是否相等
//int bi2(int i, int j, int k)
//{
//	int m = 0;
//	int num1 = 0;
//	int count = 0;
//	int arr[9] = { 0 };
//	arr[0] = i / 100;
//	arr[1] = i / 10 % 10;
//	arr[2] = i % 10;
//	arr[3] = j / 100;
//	arr[4] = j / 10 % 10;
//	arr[5] = j % 10;
//	arr[6] = k / 100;
//	arr[7] = k / 10 % 10;
//	arr[8] = k % 10;
//	int use[10] = { 0 };//arr[m]最小为1,+9为10
//	for (m = 0;m < 9;m++)
//	{
//		if (use[arr[m]] == 0)
//		{
//			use[arr[m]] = 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int num2 = 0;
//	int num3 = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 123;i <= 333;i++)
//	{
//		j = 2 * i;
//		k = 3 * i;
//		int ret1 = bi1(i, j, k);
//		if (ret1 == 1)
//		{
//			continue;
//		}
//		int ret2 = bi2(i, j, k);
//		if (ret2 == 1)
//		{
//			printf("%d %d %d\n", i, j, k);
//		}
//	}
//	return 0;
//}


//第二种方法
//#include <stdio.h>
//// 交换函数，用于交换数组元素
//void swap(int* a, int* b) 
//{
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// 生成全排列的函数
//void permute(int* arr, int start, int end) 
//{
//    if (start == end) 
//    {
//        int abc = arr[0] * 100 + arr[1] * 10 + arr[2];
//        int def = arr[3] * 100 + arr[4] * 10 + arr[5];
//        int ghi = arr[6] * 100 + arr[7] * 10 + arr[8];
//        if (def == 2 * abc && ghi == 3 * abc) 
//        {
//            printf("%d %d %d\n", abc, def, ghi);
//        }
//        return;
//    }
//    for (int i = start; i <= end; i++) 
//    {
//        swap(&arr[start], &arr[i]);
//        permute(arr, start + 1, end);
//        swap(&arr[start], &arr[i]);
//    }
//}
//
//int main() {
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    permute(arr, 0, 8);
//    return 0;
//}


//数字逆序输出
//#include<stdio.h>
//void print(int* arr, int count)
//{
//	int i = 0;
//	int count1 = 0;
//	int temp = 10;
//	for (i = 0; i < count; i++)
//	{
//		temp = arr[i];
//		while (temp > 0)
//		{
//			printf("%d ", temp % 10);
//			temp = temp / 10;
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int num = 0;
//	int count = 0;
//	while (scanf("%d", &num) == 1)
//	{
//		arr[count++] = num;
//		if (getchar() == '\n')
//		{
//			print(arr, count);
//			count = 0;
//		}
//	}
//	return 0;
//}


//逆序输出s
//方法1
//#include<stdio.h>
//#define ROW 100
//int main()
//{
//	int arr[ROW] = { 0 };
//	int count = 0;
//	char c = 0;
//	int num = 0;
//	while (scanf("%d%c", &num, &c) == 2)
//	{
//		if (c == '\n')
//		{
//			arr[count++] = num;
//			break;
//		}
//		arr[count++] = num;
//	}
//	int i = 0;
//	for (i = count - 1;i >= 0;i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//方法2
//#include<stdio.h>
//#define maxn 105
//int a[maxn];
//int main()
//{
//	int x, n = 0;
//	while (scanf("%d", &x) == 1)
//	{
//		a[n++] = x;
//		for (int i = n - 1; i >= 1; i--)
//		{
//			printf("%d ", a[i]);
//		}
//		printf("%d\n", a[0]);
//	}
//	return 0;
//}



//开灯问题。有n盏灯,编号为1～n。
//第1个人把所有灯打开,第2个人按下所有编号为2的倍数的开关(这些灯将被关掉)
//第3个人按下所有编号为3的倍数的开关
//(其中关掉的灯将被打开,开着的灯将被关闭)
//依此类推。
//一共有k个人,问最后有哪些灯开着？
//输入n和k,输出开着的灯的编号。
//k≤n≤1000。
//样例输入:
//7 3
//样例输出:
//1 5 6 7
//方法一
//#include<stdio.h>
//void open(int* arr, int num,int num1)
//{
//	int i = 0;
//	for (i = num - 1; i <= num1; i += num)
//	{
//		if (arr[i] == 1)
//		{
//			arr[i] = 0;
//		}
//		else
//		{
//			arr[i] = 1;
//		}
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int i = 0;
//	int j = 0;
//	int arr[100] = { 0 };
//	while (scanf("%d %d", &num1, &num2) == 2)
//	{
//		for (i = 0; i < num1; i++)
//		{
//			arr[i] = 1;
//		}
//		for (j = 2; j <= num2; j++)
//		{
//			open(arr, j , num1);
//		}
//		for (i = 0; i < num1; i++)
//		{
//			if (arr[i] == 1)
//			{
//				printf("%d ", i + 1);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#define maxn 1010
//int a[maxn];
//int main()
//{
//	int n, k, first = 1;
//	memset(a, 0, sizeof(a));
//	scanf("%d %d", &n, &k);
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (j % i == 0)
//			{
//				a[j] = !a[j];
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i]) 
//		{ 
//			if (first)
//			{
//				first = 0; 
//			}
//			else
//			{
//				printf(" ");
//			}
//			printf("%d", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}


//蛇形填数
//在n×n方阵里填入1,2,…,n×n,要求填成蛇形。
//例如,n＝4时方阵为:
//10 11 12 1
// 9 16 13 2
// 8 15 14 3
// 7  6  5 4
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void snake(int num)
//{
//	int num1 = 1;
//	int top = 0;
//	int bottom = num - 1;
//	int left = 0;
//	int right = num - 1;
//	int arr[ROW][COL] = { 0 };
//	int i = 0;
//	while (left <= right && top <= bottom)
//	{
//		//从上向下填充右边界
//		for (i = top;i <= bottom;i++)
//		{
//			arr[i][right] = num1++;
//		}
//		right--;
//		//从右向左填充下边界
//		for (i = right;i >= left;i--)
//		{
//			arr[bottom][i] = num1++;
//		}
//		bottom--;
//		//从下向上填充左边界
//		for (i = bottom;i >= top;i--)
//		{
//			arr[i][left] = num1++;
//		}
//		left++;
//		//从左向右填充上边界
//		for (i = left;i <= right;i++)
//		{
//			arr[top][i] = num1++;
//		}
//		top++;
//	}
//	int j = 0;
//	for (i = 0;i < num;i++)
//	{
//		for (j = 0;j < num;j++)
//		{
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	snake(num);
//	return 0;
//}


//第二种方法
//#include<stdio.h>
//#include<string.h>
//#define maxn 20
//int a[maxn][maxn];
//int main()
//{
//	int n, x, y, tot = 0;
//	scanf("%d", &n);
//	memset(a, 0, sizeof(a));
//	tot = a[x = 0][y = n - 1] = 1;
//	while (tot < n * n)
//	{
//		while (x + 1 < n && !a[x + 1][y]) a[++x][y] = ++tot;
//		while (y - 1 >= 0 && !a[x][y - 1]) a[x][--y] = ++tot;
//		while (x - 1 >= 0 && !a[x - 1][y]) a[--x][y] = ++tot;
//		while (y + 1 < n && !a[x][y + 1]) a[x][++y] = ++tot;
//	}
//	for (x = 0; x < n; x++)
//	{
//		for (y = 0; y < n; y++) printf("%3d", a[x][y]);
//		printf("\n");
//	}
//	return 0;
//}


//竖式问题。
//找出所有形如abc*de(三位数乘以两位数)的算式
//使得在完整的竖式中,所有数字都属于一个特定的数字集合。
//输入数字集合(相邻数字之间没有空格),输出所有竖式。
//每个竖式前应有编号,之后应有一个空行。
//最后输出解的总数。
//具体格式见样例输出
//(为了便于观察,竖式中的空格改用小数点显示,但所写程序中应该输出空格,而非小数点)
//样例输入:
//2357
//样例输出:
//<1>
//..775
//X..33
//-----
//.2325
//2325.
//-----
//25575
//The number of solutions = 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int count = 0;
//	char s[20], buf[99];
//	scanf("%s", s);
//	for (int abc = 775; abc <= 999; abc++)
//	{
//		for (int de = 33; de <= 99; de++)
//		{
//			int x = abc * (de % 10);
//			int y = abc * (de / 10);
//			int z = abc * de;
//			sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
//			int ok = 1;
//			int a = strlen(buf);
//			for (int i = 0; i < a; i++)
//			{
//				if (strchr(s, buf[i]) == NULL)
//				{
//					ok = 0;
//				}
//			}
//			if (ok)
//			{
//				printf("<%d>\n", ++count);
//				printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, z);
//			}
//		}
//	}
//	printf("The number of solutions = %d\n", count);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#define ROW 100
//int main()
//{
//	char arr1[ROW] = { 0 };
//	char arr2[2] = { '"','\0' };
//	int arr3[ROW];
//	char c = 0;
//	int count2 = 0;
//	while (scanf("%c", &c) == 1)
//	{
//		if (c == '\n')
//		{
//			break;
//		}
//		arr1[count2++] = c;
//	}
//	int i = 0;
//	int flag = 0;
//	int count1 = 0;
//	for (i = 0; i < strlen(arr1); i++)
//	{
//		if (strchr(arr2, arr1[i]) != NULL)
//		{
//			arr3[count1++] = i;
//			flag = 1;
//		}
//	}
//	if (flag == 1)
//	{
//		int flag1 = 0;
//		for (i = 0; i < count1; i++)
//		{
//			int temp = arr3[i];
//			if (flag1 == 0)
//			{
//				arr1[temp] = '`';
//				arr1[temp] = '`';
//				flag1 = 1;
//			}
//			else
//			{
//				flag1 = 0;
//			}
//		}
//	}
//	for (i = 0; i < count2; i++)
//	{
//		printf("%c", arr1[i]);
//	}
//	printf("\n");
//	return 0;
//}


//TeX中的引号(Tex Quotes,UVa 272)(1)
//在TeX中,左双引号是"``",右双引号是"''"。
//输入一篇包含双引号的文章,你的任务是把它转换成TeX的格式。
//样例输入:
//"To be or not to be,"quoth the Bard,"that is the question".
//样例输出:
//``To be or not to be,''quoth the Bard,``that is the question''.
//#include<stdio.h>
//int main()
//{
//	char c = 0;
//	int flag = 1;
//	while ((c = getchar()) != EOF)
//	{
//		if (c == '"')
//		{
//			printf("%s", flag ? "``" : "''");
//			flag = !flag;
//		}
//		else
//		{
//			printf("%c", c);
//		}
//	}
//	return 0;
//}


//把手放在键盘上时,稍不注意就会往右错一位。
//这样,输入Q会变成输入W,输入J会变成输入K等。
//键输入一个错位后敲出的字符串(所有字母均大写)
//输出打字员本来想打出的句子。
//输入保证合法,即一定是错位之后的字符串。
//例如输入中不会出现大写字母A。
//样例输入:
//O S, GOMR YPFSU /
//样例输出:
//I AM FINE TODAY.
//#include<stdio.h>
//int main()
//{
//	int i, c;
//	char s[] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
//	while ((c = getchar()) != EOF) 
//	{
//		for (i = 1; s[i] && s[i] != c; i++);//找错位之后的字符在常量表中的位置
//		{
//			if (s[i])//如果找到,则输出它的前一个字符
//			{
//				putchar(s[i - 1]);
//			}
//			else
//			{
//				putchar(c);
//			}
//		}
//	}
//	return 0;
//}


