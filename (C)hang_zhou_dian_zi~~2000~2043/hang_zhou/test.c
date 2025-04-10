#define _CRT_SECURE_NO_WARNINGS 1 
//https://acm.hdu.edu.cn/listproblem.php?vol=11
//第2000题
//输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
//Input
//输入数据有多组，每组占一行，有三个字符组成，之间无空格。
//Output
//对于每组输入数据，输出一行，字符中间用一个空格分开。
//Sample Input
//qwe
//asd
//zxc
//Sample Output
//e q w
//a d s
//c x z
//#include<stdio.h>
//int main()
//{
//	char a = 0;
//	char b = 0;
//	char c = 0;
//	while (scanf(" %c %c %c", &a, &b, &c) != EOF)
//	{
//		if ((int)a > (int)(b))
//		{
//			int temp = a;
//			a = b;
//			b = temp;
//		}
//		if ((int)a > (int)(c))
//		{
//			int temp = a;
//			a = c;
//			c = temp;
//		}
//		if ((int)b > (int)(c))
//		{
//			int temp = b;
//			b = c;
//			c = temp;
//		}
//		printf("%c %c %c\n", a, b, c);
//	}
//	return 0;
//}


//第1001题
//Problem Description
//Hey, welcome to HDOJ(Hangzhou Dianzi University Online Judge).
//In this problem, your task is to calculate SUM(n) = 1+2+3+...+n.
//Input
//The input will consist of a series of integers n, one integer per line.
//Output
//For each case
//output SUM(n) in one line, followed by a blank line.
//You may assume the result will be in the range of 32-bit signed integer.
//Sample Input
//1
//100
//Sample Output
//1
//5050
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int sum = 0;
//	for (i = 1;i <= num;i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d\n", sum);
//}


//第2001题
//Problem Description
//输入两点坐标(X1,Y1),(X2,Y2),计算并输出两点间的距离。
//Input
//输入数据有多组,每组占一行,由4个实数组成
//分别表示x1,y1,x2,y2,数据之间用空格隔开。
//Output
//对于每组输入数据,输出一行,结果保留两位小数。
//Sample Input
//0 0 0 1
//0 1 1 0
//Sample Output
//1.00
//1.41
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int num4 = 0;
//	while (scanf("%d %d %d %d", &num1, &num2, &num3, &num4) == 4)
//	{
//		double sum1 = pow(pow(num3 - num1, 2) + pow(num4 - num2, 2), 1.0 / 2);
//		printf("%.2f\n", sum1);
//	}
//	return 0;
//}


//第2002题
//Problem Description
//根据输入的半径值,计算球的体积。
//Input
//输入数据有多组,每组占一行,每行包括一个实数,表示球的半径。
//Output
//输出对应的球的体积,对于每组输入数据,输出一行,计算结果保留三位小数。
//Sample Input
//1
//1.5
//Sample Output
//4.189
//14.137
//#define PI 3.1415927
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	const double pi = acos(-1.0);
//	double r = 0;
//	while (scanf("%lf", &r) != EOF)
//	{
//		double volume = 0;
//		volume = 4.0 / 3 * pi * pow(r, 3);
//		printf("%.3f\n", volume);
//	}
//	return 0;
//}


//第2003题
//Problem Description
//求实数的绝对值。
//Input
//输入数据有多组,每组占一行,每行包含一个实数。
//Output
//对于每组输入数据,输出它的绝对值,要求每组数据输出一行,结果保留两位小数。
//Sample Input
//123
//-234.00
//Sample Output
//123.00
//234.00
//#include<stdio.h>
//void jue_dui_zhi(double num)
//{
//	if (num > 0)
//	{
//		printf("%.2f\n", num);
//	}
//	else
//	{
//		num = -num;
//		printf("%.2f\n", num);
//	}
//}
//int main()
//{
//	double num = 0;
//	while (scanf("%lf", &num) != EOF)
//	{
//		jue_dui_zhi(num);
//	}
//	return 0;
//}


//第2004题
//Problem Description
//输入一个百分制的成绩t,将其转换成对应的等级,具体转换规则如下:
//90~100为A;
//80~89为B;
//70~79为C;
//60~69为D;
//0~59为E;
//Input
//输入数据有多组,每组占一行,由一个整数组成。
//Output
//对于每组输入数据,输出一行。
//如果输入数据不在0~100范围内,请输出一行:"Score is error!"。
//Sample Input
//56
//67
//100
//123
//Sample Output
//E
//D
//A
//Score is error!
//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	while (scanf("%d", &score) != EOF)
//	{
//		if ((score >= 0) && (score <= 59))
//		{
//			printf("E\n");
//		}
//		else if ((score >= 60) && (score <= 69))
//		{
//			printf("D\n");
//		}
//		else if ((score >= 70) && (score <= 79))
//		{
//			printf("C\n");
//		}
//		else if ((score >= 80) && (score <= 89))
//		{
//			printf("B\n");
//		}
//		else if ((score >= 90) && (score <= 100))
//		{
//			printf("A\n");
//		}
//		else
//		{
//			printf("Score is error!\n");
//		}
//	}
//	return 0;
//}


//第2005题
//Problem Description
//给定一个日期,输出这个日期是该年的第几天。
//Input
//输入数据有多组,每组占一行,数据格式为YYYY/MM/DD组成
//具体参见sample input
//另外,可以向你确保所有的输入数据是合法的。
//Output
//对于每组输入数据,输出一行,表示该日期是该年的第几天。
//Sample Input
//1985 / 1 / 20
//2006 / 3 / 12
//Sample Output
//20
//71
//#include<stdio.h>
//void DAY(int year, int month, int day)
//{
//	int sum = 0;
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	int two = 0;
//	for (i = 1; i <= month-1; i++)
//	{
//		if ((i == 1 )||(i==3)||(i==5)||(i==7)||(i==8)|| (i==10))
//		{
//			count1++;
//		}
//		if((i==4)||(i==6)||(i==9)||(i==11))
//		{
//			count2++;
//		}
//	}
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		two = 29;
//	}
//	else
//	{
//		two = 28;
//	}
//	if (month > 2)
//	{
//		sum = 31 * count1 + 30 * count2 + two + day;
//	}
//	else if(month == 1)
//	{
//		sum = day;
//	}
//	else
//	{
//		sum = 31 + day;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	while (scanf("%d%*c%d%*c%d",&year,&month,&day) != EOF)
//	{
//		DAY(year, month, day);
//	}
//	return 0;
//}


//第2006题
//Problem Description
//给你n个整数,求他们中所有奇数的乘积。
//Input
//输入数据包含多个测试实例,每个测试实例占一行
//每行的第一个数为n,表示本组数据一共有n个,接着是n个整数
//你可以假设每组数据必定至少存在一个奇数。
//Output
//输出每组数中的所有奇数的乘积,对于测试实例,输出一行。
//Sample Input
//3 1 2 3
//4 2 3 4 5
//Sample Output
//3
//15
//#include<stdio.h>
//int qu_chong(int* arr,int size)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < size; i++)
//	{
//		int temp = arr[i];
//		j = j + 1;
//		int k = 0;
//		while (j < size)
//		{
//			if (arr[j] == temp)
//			{
//				count++;
//				for (k = j; k < size; k++)
//				{
//					arr[k] = arr[k + 1];
//				}
//			}
//			else
//			{
//				j++;
//			}
//		}
//	}
//	return size-count;
//}
//void ji_shu(int* arr,int size)
//{
//	int i = 0;
//	int sum = 1;
//	int ret = qu_chong(arr,size);
//	for (i = 0; i < ret; i++)
//	{
//		if ((arr[i] % 2 == 1 ))
//		{
//			sum = sum * arr[i];
//		}
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int arr[1000] = { 0 };
//	int num = 0;
//	int i = 0;
//	char c = 0;
//	while(scanf("%d%c", &num,&c) == 2)
//	{
//		arr[i++] = num;
//		if (c != ' ')
//		{
//			break;
//		}
//	}
//	ji_shu(arr,i);
//	return 0;
//}


//第2007题
//Problem Description
//给定一段连续的整数,求出他们中所有偶数的平方和以及所有奇数的立方和。
//Input
//输入数据包含多组测试实例,每组测试实例包含一行,由两个整数m和n组成。
//Output
//对于每组输入数据,输出一行,应包括两个整数x和y
//分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和。
//你可以认为32位整数足以保存结果。
//Sample Input
//1 3
//2 5
//Sample Output
//4 28
//20 152
//#include<stdio.h>
//#include<math.h>
//void cheng(int* arr,int num,int sum1,int sum2)
//{
//	if (num % 2 == 0)
//	{
//		arr[0] = arr[0] + pow(num, 2);
//	}
//	else
//	{
//		arr[1] = pow(num, 3) + arr[1];
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int i = 0;
//	while (scanf("%d %d", &num1, &num2) == 2)
//	{
//		int sum1 = 0;
//		int sum2 = 0;
//		int arr[2] = { 0 };
//		for (i = num1; i <= num2; i++)
//		{
//			cheng(arr,i,sum1,sum2);
//		}
//		for (i = 0;i < 2;i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//第2008题
//Problem Description
//统计给定的n个数中,负数、零和正数的个数。
//Input
//输入数据有多组,每组占一行,每行的第一个数是整数n(n<100)
//表示需要统计的数值的个数,然后是n个实数
//如果n=0,则表示输入结束,该行不做处理。
//Output
//对于每组输入数据,输出一行a,b和c
//分别表示给定的数据中负数、零和正数的个数。
//Sample Input
//6 0 1 2 3 - 1 0
//5 1 2 3 4 0.5
//0
//Sample Output
//1 2 3
//0 0 5
//#include<stdio.h>
//void shu(int* arr,int count)
//{
//	int i = 0;
//	int ling = 0;
//	int zheng = 0;
//	int fu = 0;
//	for (i = 1;i < count;i++)
//	{
//		if (arr[i] > 0)
//		{
//			zheng++;
//		}
//		else if (arr[i] == 0)
//		{
//			ling++;
//		}
//		else
//		{
//			fu++;
//		}
//	}
//	printf("%d %d %d\n", fu, ling, zheng);
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	char c = 0;
//	int arr[1000] = { 0 };
//	while (scanf("%d%c", &num, &c) == 2)
//	{
//		arr[count++] = num;
//		if (c == '\n')
//		{
//			shu(arr, count);
//			count = 0;
//			continue;
//		}
//	}
//	return 0;
//}


//第2009题
//Problem Description
//数列的定义如下:
//数列的第一项为n,以后各项为前一项的平方根,求数列的前m项的和。
//Input
//输入数据有多组,每组占一行,由两个整数n(n<10000)和m(m<1000)组成
//n和m的含义如前所述。
//Output
//对于每组输入数据,输出该数列的和,每个测试实例占一行,要求精度保留2位小数。
//Sample Input
//81 4
//2 2
//Sample Output
//94.73
//3.41
//#include<stdio.h>
//#include<math.h>
//void SUM(int num1, int num2)
//{
//	int i = 0;
//	double sum = 0;
//	double temp = num1;
//	for (i = 1; i <= num2;i++)
//	{
//		num1 = temp;
//		sum = sum + temp;
//		temp = pow(num1, 0.5);
//	}
//	printf("%.2f\n", sum);
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	while (scanf("%d %d", &num1, &num2) == 2)
//	{
//		SUM(num1, num2);
//	}
//	return 0;
//}


//第2010题
//Problem Description
//春天是鲜花的季节,水仙花就是其中最迷人的代表,数学上有个水仙花数
//他是这样定义的:"水仙花数"是指一个三位数,它的各位数字的立方和等于其本身
//比如:153=1^3+5^3+3^3。
//现在要求输出所有在m和n范围内的水仙花数。
//Input
//输入数据有多组,每组占一行,包括两个整数m和n(100<=m<=n<=999)。
//Output
//对于每个测试实例,要求输出所有在给定范围内的水仙花数
//输出的水仙花数必须大于等于m,并且小于等于n
//如果有多个,则要求从小到大排列在一行内输出,之间用一个空格隔开
//如果给定的范围内不存在水仙花数,则输出no;
//每个测试实例的输出占一行。
//Sample Input
//100 120
//300 380
//Sample Output
//no
//370 371
//#include<stdio.h>
//#include<math.h>
//int water_xian_flower(int num)
//{
//	if (num == pow(num / 100, 3) + pow(num / 10 % 10, 3) + pow(num % 10, 3))
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
//	int num1 = 0;
//	int num2 = 0;
//	int i = 0;
//	int flag = 0;
//	while (scanf("%d %d", &num1, &num2) == 2)
//	{
//		for (i = num1;i <= num2;i++)
//		{
//			int ret = water_xian_flower(i);
//			if (ret == 1)
//			{
//				flag = 1;
//				printf("%d ", i);
//			}
//		}
//		if (flag == 0)
//		{
//			printf("no\n");
//		}
//		else
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}


//第2011题
//Problem Description
//多项式的描述如下:
//1-1/2+1/3-1/4+1/5-1/6+...
//现在请你求出该多项式的前n项的和。
//Input
//输入数据由2行组成,首先是一个正整数m(m<100),表示测试实例的个数
//第二行包含m个正整数,对于每一个整数(不妨设为n,n<1000)
//求该多项式的前n项的和。
//Output
//对于每个测试实例n,要求输出多项式前n项的和。
//每个测试实例的输出占一行，结果保留2位小数。
//Sample Input
//2
//1 2
//Sample Output
//1.00
//0.50
//#include<stdio.h>
//#include<math.h>
//void shu_lie(int* arr,int num)
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= num; i++)
//	{
//		sum = sum + pow(-1, i + 1) * 1.0 / i;
//	}
//	printf("%.2f\n", sum);
//}
//int main()
//{
//	int arr[1000] = { 0 };
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 0; i < num; i++)
//	{
//		scanf("%d", &arr[i]);
//		shu_lie(arr, arr[i]);
//	}
//	return 0;
//}


//第2012题
//对于表达式n^2+n+41,当n在(x,y)范围内取整数值时
//(包括x,y)(-39<=x<y<=50),判定该表达式的值是否都为素数。
//Input
//输入数据有多组,每组占一行,由两个整数x,y组成
//当x=0,y=0时,表示输入结束,该行不做处理。
//Output
//对于每个给定范围内的取值,如果表达式的值都为素数,则输出"OK"
//否则请输出"Sorry",每组输出占一行。
//Sample Input
//0 1
//0 0
//Sample Output
//OK
//#include <stdio.h>
//#include <math.h>
//// 判断一个数是否为素数
//int isPrime(int num)
//{
//    if (num <= 1)
//    {
//        return 0;
//    }
//    if (num <= 3) 
//    {
//        return 1;
//    }
//    if (num % 2 == 0 || num % 3 == 0)
//    {
//        return 0;
//    }
//    // 只需要检查到sqrt(num)即可
//    for (int i = 5; i * i <= num; i += 6) 
//    {
//        if (num % i == 0 || num % (i + 2) == 0) 
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main() 
//{
//    int x, y;
//    while (1) 
//    {
//        // 输入x和y
//        scanf("%d %d", &x, &y);
//        if (x == 0 && y == 0) {
//            break;
//        }
//        int flag = 1;
//        for (int n = x; n <= y; n++) 
//        {
//            int value = n * n + n + 41;
//            // 如果有一个值不是素数，将flag设为0并跳出循环
//            if (!isPrime(value)) 
//            {
//                flag = 0;
//                break;
//            }
//        }
//        // 根据flag的值输出结果
//        if (flag) 
//        {
//            printf("OK\n");
//        }
//        else 
//        {
//            printf("Sorry\n");
//        }
//    }
//    return 0;
//}


//第2013题
//Problem Description
//喜欢西游记的同学肯定都知道悟空偷吃蟠桃的故事
//你们一定都觉得这猴子太闹腾了,其实你们是有所不知:
//悟空是在研究一个数学问题！
//什么问题？他研究的问题是蟠桃一共有多少个！
//不过,到最后,他还是没能解决这个难题,呵呵^-^
//当时的情况是这样的:
//第一天悟空吃掉桃子总数一半多一个,第二天又将剩下的桃子吃掉一半多一个
//以后每天吃掉前一天剩下的一半多一个,到第n天准备吃的时候只剩下一个桃子。
//聪明的你,请帮悟空算一下,他第一天开始吃的时候桃子一共有多少个呢？
//Input
//输入数据有多组,每组占一行,包含一个正整数n(1<n<30)
//表示只剩下一个桃子的时候是在第n天发生的。
//Output	
//对于每组输入数据,输出第一天开始吃的时候桃子的总数,每个测试实例占一行。
//Sample Input
//2
//4
//Sample Output
//4
//22
//Author
//lcy
//Source
//C语言程序设计练习(二)
//#include<stdio.h>
//void tao(int num)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 1;
//	int sum = 1;
//	for (i = 1;i < num;i++)
//	{
//		temp = 2 * (sum + 1);
//		sum = temp;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) == 1)
//	{
//		tao(num);
//	}
//	return 0;
//}


//第2014题
//Problem Description
//青年歌手大奖赛中,评委会给参赛选手打分。
//选手得分规则为去掉一个最高分和一个最低分,然后计算平均得分
//请编程输出某选手的得分。
//Input
//输入数据有多组,每组占一行,每行的第一个数是n(2<n<=100)表示评委的人数
//然后是n个评委的打分。
//Output
//对于每组输入数据,输出选手的得分,结果保留2位小数,每组输出占一行。
//Sample Input
//3 99 98 97
//4 100 99 98 97
//Sample Output
//98.00
//98.50
//#include<stdio.h>
//void score(int* arr, int count)
//{
//	arr[1] = 0;
//	arr[count - 1] = 0;
//	int i = 0;
//	int sum = 0;
//	for (i = 1;i < count;i++)
//	{
//		sum = sum + arr[i];
//	}
//	double average = (double)sum / (arr[0] - 2);
//	printf("%.2f\n", average);
//}
//void sort(int* arr, int count)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < count - 1;i++)
//	{
//		for (j = 0;j < count - i - 1;j++)
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
//	int num1 = 0;
//	int count = 0;
//	char c = 0;
//	//读入成绩
//	int arr[1000] = { 0 };
//	while (scanf("%d%c", &num1, &c) == 2)
//	{
//		arr[count++] = num1;
//		if (c == '\n')
//		{
//			sort(arr, count);
//			score(arr, count);
//			count = 0;
//			continue;
//		}
//	}
//	return 0;
//}


//第2015题
//Problem Description
//有一个长度为n(n<=100)的数列,该数列定义为从2开始的递增有序偶数
//现在要求你按照顺序每m个数求出一个平均值,如果最后不足m个
//则以实际数量求平均值。
//编程输出该平均值序列。
//Input
//输入数据有多组,每组占一行,包含两个正整数n和m,n和m的含义如上所述。
//Output
//对于每组输入数据,输出一个平均值序列,每组输出占一行。
//Sample Input
//3 2
//4 2
//Sample Output
//3 6
//3 7
//#include<stdio.h>
//void AVE(int* arr, int num2,int count1,int temp)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = count1;i < temp;i++)
//	{
//		sum = sum + arr[i];
//	}
//	printf("%d ",sum / num2);
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int i = 2;
//	int temp = 0;
//	int arr[1000] = { 0 };
//	int count = 0;
//	while (scanf("%d %d", &num1, &num2) == 2)
//	{
//		int count1 = 0;
//		temp = num2;
//		for (i = 2;i <= 2 * num1;i += 2)
//		{
//			arr[count++] = i;
//		}
//		if (num1 % num2 == 0)
//		{
//			for (i = 0;i < num1 / num2;i++)
//			{
//				AVE(arr, num2, count1, temp);
//				count1 += num2;
//				temp = num2 + temp;
//			}
//		}
//		else
//		{
//			for (i = 0;i < num1 / num2;i++)
//			{
//				AVE(arr, num2, count1,temp);
//				count1 += num2;
//				temp = num2 + temp;
//			}
//			printf("%d", arr[count - 1]);
//		}
//		count = 0;
//		printf("\n");
//	}
//	return 0;
//}


//第2016题
//Problem Description
//输入n(n<100)个数,找出其中最小的数,将它与最前面的数交换后输出这些数。
//Input
//输入数据有多组,每组占一行
//每行的开始是一个整数n,表示这个测试实例的数值的个数,跟着就是n个整数。
//n=0表示输入的结束,不做处理。
//Output
//对于每组输入数据，输出交换后的数列，每组输出占一行。
//Sample Input
//4 2 1 3 4
//5 5 4 3 2 1
//0
//Sample Output
//1 2 3 4
//1 4 3 2 5
//#include<stdio.h>
//#define INF 1000000000
////找出数组中的最小值
//int MIN(int* arr, int count)
//{
//	int min = INF;
//	int i = 0;
//	int count1 = 0;
//	for (i = 1; i < count; i++)
//	{
//		if (arr[i] < min)
//		{
//			count1 = i;
//			min = arr[i];
//		}
//	}
//	return count1;
//}
//void swap(int* arr, int count,int ret)
//{
//	int i = 0;
//	int temp = arr[1];
//	arr[1] = arr[ret];
//	arr[ret] = temp;
//	for (i = 1; i < count; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int count = 0;
//	int num = 0;
//	char c = 0;
//	while (scanf("%d%c", &num, &c) == 2)
//	{
//		arr[count++] = num;
//		if (arr[0] == 0 || c == '\n')
//		{
//			int ret = MIN(arr, count);
//			swap(arr, count, ret);
//			printf("\n");
//			continue;
//		}
//	}
//	return 0;
//}


//第2017题
//Problem Description
//对于给定的一个字符串,统计其中数字字符出现的次数。
//Input
//输入数据有多行,第一行是一个整数n,表示测试实例的个数
//后面跟着n行,每行包括一个由字母和数字组成的字符串。
//Output
//对于每个测试实例,输出该串中数值的个数,每个输出占一行。
//Sample Input
//2
//asdfasdf123123asdfasdf
//asdf111111111asdfasdfasdf
//Sample Output
//6
//9
//#include<stdio.h>
//void NUM(char* arr, int count)
//{
//	int i = 0;
//	int j = 0;
//	int count1 = 0;
//	char arr1[10] = { '0','1','2','3','4','5','6','7','8','9' };
//	for (i = 0;i < count;i++)
//	{
//		for (j = 0;j < 10;j++)
//		{
//			if (arr[i] == arr1[j])
//			{
//				count1++;
//				break;
//			}
//		}
//	}
//	printf("%d\n", count1);
//}
//int main()
//{
//	int n = 0;
//	char num = 0;
//	char arr[100] = { 0 };
//	int i = 0;
//	char c = 0;
//	scanf("%d", &n);
//	int flag = 0;
//	int count = 0;
//	for (i = 0;i < n;i++)
//	{
//		while (scanf("%c%c", &num, &c) == 2)
//		{
//			if (num == '\n' && flag == 0)
//			{
//				flag = 1;
//				arr[count++] = c;
//				continue;
//			}
//			if (c == '\n')
//			{
//				arr[count++] = num;
//				NUM(arr, count);
//				count = 0;
//				break;
//			}
//			else
//			{
//				arr[count++] = num;
//				arr[count++] = c;
//			}
//		}
//	}
//	return 0;
//}


//第2018题

//第2019题
//Problem Description
//有n(n<=100)个整数,已经按照从小到大顺序排列好
//现在另外给一个整数x,请将该数插入到序列中,并使新的序列仍然有序。
//Input
//输入数据包含多个测试实例,每组数据由两行组成
//第一行是n和m,第二行是已经有序的n个数的数列。
//n和m同时为0标示输入数据的结束,本行不做处理。
//Output
//对于每个测试实例,输出插入新的元素后的数列。
//Sample Input
//3 3
//1 2 4
//0 0
//Sample Output
//1 2 3 4
//#include<stdio.h>
//void sort(int* arr, int num1)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < num1;i++)
//	{
//		for (j = 0;j < num1 - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0;i < num1;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num = 0;
//	int i = 0;
//	char c = 0;
//	int arr[100] = { 0 };
//	while (scanf("%d %d", &num1, &num2) == 2)
//	{
//		if (num1 == 0 && num2 == 0)
//		{
//			break;
//		}
//		for (i = 0;i < num1;i++)
//		{
//			scanf("%d%c", &num, &c);
//  			arr[i] = num;
//		}
//		arr[num1] = num2;
//		sort(arr, num1 + 1);
//	}
//	return 0;
//}


//第2020题
//Problem Description
//输入n(n<=100)个整数,按照绝对值从大到小排序后输出。
//题目保证对于每一个测试实例,所有的数的绝对值都不相等。
//Input
//输入数据有多组,每组占一行
//每行的第一个数字为n,接着是n个整数,n=0表示输入数据的结束,不做处理。
//Output
//对于每个测试实例,输出排序后的结果,两个数之间用一个空格隔开。
//每个测试实例占一行。
//Sample Input
//3 3 - 4 2
//4 0 1 2 - 3
//0
//Sample Output
//- 4 3 2
//- 3 2 1 0
//#include<stdio.h>
//void sort1(int* arr1, int count)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i < count;i++)
//	{
//		for (j = 1;j < count - i;j++)
//		{
//			if (arr1[j] > 0)
//			{
//				if (arr1[j + 1] > 0)
//				{
//					if (arr1[j] < arr1[j + 1])
//					{
//						int temp = arr1[j];
//						arr1[j] = arr1[j + 1];
//						arr1[j + 1] = temp;
//					}
//				}
//				else
//				{
//					if (arr1[j] < -arr1[j + 1])
//					{
//						int temp = arr1[j];
//						arr1[j] = arr1[j + 1];
//						arr1[j + 1] = temp;
//					}
//				}
//			}
//			else
//			{
//				if (arr1[j + 1] > 0)
//				{
//					if (-arr1[j] < arr1[j + 1])
//					{
//						int temp = arr1[j];
//						arr1[j] = arr1[j + 1];
//						arr1[j + 1] = temp;
//					}
//				}
//				else
//				{
//					if (-arr1[j] < -arr1[j + 1])
//					{
//						int temp = arr1[j];
//						arr1[j] = arr1[j + 1];
//						arr1[j + 1] = temp;
//					}
//				}
//			}
//		}
//	}
//	for (i = 1;i < count;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num1 = 0;
//	int count = 0;
//	char c = 0;
//	int arr1[100] = { 0 };
//	while (scanf("%d%c", &num1, &c) == 2)
//	{
//		if (num1 == 0 && count == arr1[0])
//		{
//			break;
//		}
//		arr1[count++] = num1;
//		if (c == '\n')
//		{
//			sort1(arr1,count);
//			count = 0;
//			continue;
//		}
//	}
//	return 0;
//}


//第二种解法
//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_SIZE 100
//
////排序函数
//void sort1(int* arr, int count) 
//{
//    int i, j;
//    // 冒泡排序
//    for (i = 0; i < count - 1; i++) 
//    {
//        for (j = 0; j < count - i - 1; j++) 
//        {
//            // 比较绝对值大小
//            if (abs(arr[j]) < abs(arr[j + 1])) 
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    // 输出排序后的数组
//    for (i = 0; i < count; i++) 
//    {
//        printf("%d", arr[i]);
//        if (i < count - 1) 
//        {
//            printf(" ");
//        }
//    }
//    printf("\n");
//}
//int main() 
//{
//    int arr[MAX_SIZE];
//    int count = 0;
//    int num;
//    while (1) 
//    {
//        // 读取输入的整数
//        if (scanf("%d", &num) != 1) 
//        {
//            break;
//        }
//        if (num == 0 && count == 0) 
//        {
//            break;
//        }
//        arr[count++] = num;
//
//        // 检查是否到达换行符
//        if (getchar() == '\n') 
//        {
//            // 对当前输入的整数序列进行排序并输出
//            sort1(arr, count);
//            count = 0;
//        }
//    }
//    return 0;
//}


//第2021题
//Problem Description
//作为杭电的老师,最盼望的日子就是每月的8号了,因为这一天是发工资的日子
//养家糊口就靠它了,呵呵
//但是对于学校财务处的工作人员来说,这一天则是很忙碌的一天
//财务处的小胡老师最近就在考虑一个问题:
//如果每个老师的工资额都知道,最少需要准备多少张人民币
//才能在给每位老师发工资的时候都不用老师找零呢？
//这里假设老师的工资都是正整数,单位元
//人民币一共有100元、50元、10元、5元、2元和1元六种。
//Input
//输入数据包含多个测试实例,每个测试实例的第一行是一个整数n(n<100),表示老师的人数
//然后是n个老师的工资。
//n=0表示输入的结束,不做处理。
//Output
//对于每个测试实例输出一个整数x,表示至少需要准备的人民币张数。每个输出占一行。
//Sample Input
//3
//1 2 3
//0
//Sample Output
//4
//#include<stdio.h>
//void sort(int* arr, int count)
//{
//	int i = 0;
//	int arr1[5] = { 100,50,10,5,2 };
//	int sum = 0;
//	int temp = 0;
//	for (i = 0;i < count;i++)
//	{
//		int j = 0;
//		temp = arr[i];
//		while (temp != 0)
//		{
//			if (temp >= arr1[j])
//			{
//				temp = temp - arr1[j];
//				sum++;
//				if (j == 5)
//				{
//					break;
//				}
//			}
//			else
//			{
//				j++;
//			}
//		}
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int count = 0;
//	int num = 0;
//	int i = 0;
//	while (1)
//	{
//		scanf("%d", &count);
//		if (scanf("%d", &num) != 1)
//		{
//			break;
//		}
//		if (count == 0)
//		{
//			break;
//		}
//		for (i = 0;i < count;i++)
//		{
//			arr[i] = num;
//		}
//		if (getchar() == '\n')
//		{
//			sort(arr, count);
//		}
//	}
//	return 0;
//}


//第2022题

//第2023题
//求平均成绩
//Problem Description
//假设一个班有n(n<=50)个学生,每人考m(m<=5)门课
//求每个学生的平均成绩和每门课的平均成绩,并输出各科成绩均大于等于平均成绩的学生数量。
//Input
//输入数据有多个测试实例,每个测试实例的第一行包括两个整数n和m,分别表示学生数和课程数。
//然后是n行数据,每行包括m个整数(即:考试分数)
//Output
//对于每个测试实例,输出3行数据,第一行包含n个数据,表示n个学生的平均成绩,结果保留两位小数
//第二行包含m个数据,表示m门课的平均成绩,结果保留两位小数;
//第三行是一个整数,表示该班级中各科成绩均大于等于平均成绩的学生数量。
//每个测试实例后面跟一个空行。
//Sample Input
//2 2
//5 10
//10 20
//Sample Output
//7.50 15.00
//7.50 15.00
//1
//
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void everyone(int arr1[ROW][COL], int num1, int num2)
//{
//	double stu = 0;
//	int i = 0;
//	int sum = 0;
//	float arr2[ROW][COL];
//	for (i = 0; i < num1; i++)
//	{
//		int j = 0;
//		sum = 0;
//		for (j = 0; j < num2; j++)
//		{
//			sum = sum + arr1[i][j];
//		}
//		stu = sum / (double)num2;
//		arr2[0][i] = stu;
//	}
//	for (i = 0; i < num1; i++)
//	{
//		printf("%.2f ", arr2[0][i]);
//		if (i == num1 - 1)
//		{
//			printf("\n");
//			break;
//		}
//	}
//	sum = 0;
//	int j = 0;
//	double avg = 0;
//	while (1)
//	{
//		for (i = 0; i < num1; i++)
//		{
//			sum += arr1[i][j];
//			if (i == num1 - 1)
//			{
//				avg = sum / (double)num2;
//				arr2[1][j] = avg;
//				sum = 0;
//				j++;
//			}
//		}
//		if (j == num2)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < num2; i++)
//	{
//		printf("%.2f ", arr2[1][i]);
//		if (i == num2 - 1)
//		{
//			printf("\n");
//			break;
//		}
//	}
//	int count = 0;
//	for (i = 0; i < num1; i++)
//	{
//		int j = 0;
//		int flag = 0;
//		int num = 0;
//		for (j = 0; j < num2; j++)
//		{
//			if (arr1[i][j] < arr2[1][num++])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			count++;
//		}
//	}
//	arr2[2][0] = count;
//	printf("%d\n", (int)arr2[2][0]);
//	printf("\n");
//}
//int main()
//{
//	int num = 0;
//	int num1 = 0; 
//	int num2 = 0;
//	int i = 0;
//	int arr1[ROW][COL];
//	while (scanf("%d %d", &num1, &num2) == 2)
//	{
//		for (i = 0; i < num1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < num2; j++)
//			{
//				scanf("%d", &arr1[i][j]);
//			}
//		}
//		everyone(arr1, num1, num2);
//	}
//	return 0;
//}


//第2024题
//C语言合法标识符
//Problem Description
//输入一个字符串,判断其是否是C的合法标识符。
//Input
//输入数据包含多个测试实例,数据的第一行是一个整数n,表示测试实例的个数
//然后是n行输入数据,每行是一个长度不超过50的字符串。
//Output
//对于每组输入数据,输出一行。如果输入数据是C的合法标识符,则输出"yes",否则,输出"no"。
//Sample Input
//3
//12ajf
//fi8x_a
//ff  ai_2
//Sample Output
//no
//yes
//no
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//int latter(char arr[ROW], char arr1[54], int arr2[10], int num)
//{
//	int i = 0;
//	int k = 0;
//	int flag = 0;
//	for (k = 0; k < 54; k++)
//	{
//		if (arr[0] == arr1[k])
//		{
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//	{
//		return 0;
//	}
//	for (i = 0; i < num; i++)
//	{
//		int flag = 1;
//		for (k = 0; k < 10; k++)
//		{
//			int num1 = arr[i] - '0';
//			if (num1 == arr2[k])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			for (k = 0; k < 54; k++)
//			{
//				if (arr[i] == arr1[k])
//				{
//					flag = 0;
//					break;
//				}
//			}
//		}
//		if (flag == 1)
//		{
//			return 0;
//		}
//	}
//}
//int main()
//{
//	char arr[ROW];
//	int num = 0;
//	scanf("%d", &num);
//	char arr1[54];
//	int arr2[10];
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		arr1[i] = 'a' + i;
//	}
//	for (i = 0; i < 26; i++)
//	{
//		arr1[i + 26] = 'A' + i;
//	}
//	arr1[53] = '_';
//	for (i = 0; i < 10; i++)
//	{
//		arr2[i] = i;
//	}
//	char c = 0;
//	int flag = 0;
//	int arr3[ROW];
//	int count = 0;
//	for (i = 0; i < num; i++)
//	{
//		int j = 0;
//		if (flag == 0)
//		{
//			getchar();
//			flag = 1;
//		}
//		while (scanf("%c", &c) == 1)
//		{
//			if (c == '\n')
//			{
//				break;
//			}
//			else
//			{
//				arr[j++] = c;
//			}
//		}
//		int ret = latter(arr, arr1, arr2, j);
//		if (ret == 0)
//		{
//			arr3[count++] = 0;
//		}
//		else
//		{
//			arr3[count++] = 1;
//		}
//	}
//	for (i = 0; i < num; i++)
//	{
//		if (arr3[i] == 1)
//		{
//			printf("yes\n");
//		}
//		else
//		{
//			printf("no\n");
//		}
//	}
//}


//第2025题
//#include<stdio.h>
//#define ROW 100
//void sort(int arr2[ROW], int count)
//{
//	int i = 0;
//	for (i = 0; i < count - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < count - 1 - i; j++)
//		{
//			if (arr2[j] < arr2[j + 1])
//			{
//				int temp = arr2[j];
//				arr2[j] = arr2[j + 1];
//				arr2[j + 1] = temp;
//			}
//		}
//	}
//}
//void MAX(char arr1[ROW], int count)
//{
//	int i = 0;
//	int arr2[ROW];
//	for (i = 0; i < count; i++)
//	{
//		arr2[i] = arr1[i] - '0';
//	}
//	sort(arr2, count);
//	int count1 = 1;
//	for (i = 1; i < count; i++)
//	{
//		if (arr2[0] == arr2[i])
//		{
//			count1++;
//		}
//	}
//	char c = arr2[0] + '0';
//	int temp = count1;
//	int j = 0;
//	int temp2 = 0;
//	int count3 = 0;
//	while (count1 > 0)
//	{
//		if (c == arr1[temp2])
//		{
//			int temp3 = temp2 + 1;
//			count3++;
//			int temp1 = temp2 + 1;
//			temp3 = temp3 + 5;
//			for (i = temp3; i < temp3 + count - count3; i++)
//			{
//				arr1[i] = arr1[temp1];
//				temp1++;
//			}
//			arr1[++temp2] = '(';
//			arr1[++temp2] = 'm';
//			arr1[++temp2] = 'a';
//			arr1[++temp2] = 'x';
//			arr1[++temp2] = ')';
//			temp2++;
//			count1--;
//		}
//	}
//	for (i = 0; i < count + temp * 5; i++)
//	{
//		printf("%c", arr1[i]);
//		if (i == count + temp * 5 - 1)
//		{
//			printf("\n");
//		}
//	}
//}
//
//int main()
//{
//	char arr1[ROW] = { 0 };
//	char c = 0;
//	int count = 0;
//	while (scanf("%c", &c) == 1)
//	{
//		if (c == '\n')
//		{
//			MAX(arr1, count);
//			count = 0;
//		}
//		arr1[count++] = c;
//	}
//	return 0;
//}


//第2025题
//查找最大元素
//Problem Description
//对于输入的每个字符串,查找其中的最大字母,在该字母后面插入字符串(max)。
//Input
//输入数据包括多个测试实例,每个实例由一行长度不超过100的字符串组成,字符串仅由大小写字母构成。
//Output
//对于每个测试实例输出一行字符串,输出的结果是插入字符串(max)后的结果
//如果存在多个最大的字母,就在每一个最大字母后面都插入(max)。
//Sample Input
//abcdefgfedcba
//xxxxx
//Sample Output
//abcdefg(max)fedcba
//x(max)x(max)x(max)x(max)x(max)
//#include <stdio.h>
//#define ROW 100
//
//// 冒泡排序函数，将数组按降序排列
//void sort(int arr2[], int count) 
//{
//    int i, j;
//    for (i = 0; i < count - 1; i++) 
//    {
//        for (j = 0; j < count - 1 - i; j++) 
//        {
//            if (arr2[j] < arr2[j + 1]) 
//            {
//                int temp = arr2[j];
//                arr2[j] = arr2[j + 1];
//                arr2[j + 1] = temp;
//            }
//        }
//    }
//}
//
//// 处理输入字符串的函数
//void MAX(char arr1[], int count) 
//{
//    int i, max_count = 0;
//    int arr2[ROW];
//    // 将字符数组转换为整数数组
//    for (i = 0; i < count; i++) 
//    {
//        arr2[i] = arr1[i] - '0';
//    }
//
//    // 对整数数组进行排序
//    sort(arr2, count);
//
//    // 找出最大值并统计其出现的次数
//    int max_num = arr2[0];
//    for (i = 0; i < count; i++) 
//    {
//        if (arr2[i] == max_num) 
//        {
//            max_count++;
//        }
//    }
//    int row = ROW + max_count * 5;
//    char result[ROW];
//    int index = 0;
//
//    // 遍历原字符数组，插入 (max) 标记
//    for (i = 0; i < count; i++) 
//    {
//        result[index++] = arr1[i];
//        if (arr1[i] - '0' == max_num) 
//        {
//            result[index++] = '(';
//            result[index++] = 'm';
//            result[index++] = 'a';
//            result[index++] = 'x';
//            result[index++] = ')';
//        }
//    }
//    result[index] = '\0';
//
//    // 输出处理后的字符串
//    printf("%s\n", result);
//}
//
//int main() 
//{
//    char arr1[ROW] = { 0 };
//    int count = 0;
//    char c;
//    //读取输入,直到文件结束
//    while ((c = getchar()) != EOF) 
//    {
//        if (c == '\n') 
//        {
//            if (count > 0) 
//            {
//                MAX(arr1, count);
//                count = 0;
//            }
//        }
//        else 
//        {
//            arr1[count++] = c;
//        }
//    }
//    // 处理最后一行输入（如果没有换行符）
//    if (count > 0) 
//    {
//        MAX(arr1, count);
//    }
//    return 0;
//}


//第2026题
//首字母变大写
//Problem Description
//输入一个英文句子,将每个单词的第一个字母改成大写字母。
//Input
//输入数据包含多个测试实例,每个测试实例是一个长度不超过100的英文句子,占一行。
//Output
//请输出按照要求改写后的英文句子。
//Sample Input
//i like acm
//i want to get an accepted
//Sample Output
//I Like Acm
//I Want To Get An Accepted
//#include<stdio.h>
//#define ROW 100
//void big(char arr[ROW], int count,int count1)
//{
//	int i = 0;
//	int f = 0;
//	int flag = 0;
//	for (i = 0;i < count1;i++)
//	{
//		if (flag == 0)
//		{
//			arr[i] = arr[i] - 32;
//			flag = 1;
//		}
//		else
//		{
//			if (arr[i] == ' ')
//			{
//				flag = 0;
//			}
//		}
//	}
//	for (i = 0; i < count1; i++)
//	{
//		printf("%c", arr[i]);
//		if (i == count1 - 1)
//		{
//			printf("\n");
//		}
//	}
//}
//
//int main()
//{
//	char arr[ROW];
//	char c = 0;
//	int count = 0;
//	int i = 0;
//	while (scanf("%c", &c) == 1)
//	{
//		if (c == ' ' || c == '\n')
//		{
//			count++;
//		}
//		if (c == '\n')
//		{
//			big(arr, count, i);
//			count = 0;
//			i = 0;
//			continue;
//		}
//		arr[i++] = c;
//	}
//}


//第2027题
//统计元音
//Problem Description
//统计每个元音字母在字符串中出现的次数。
//Input
//输入数据首先包括一个整数n,表示测试实例的个数,然后是n行长度不超过100的字符串
//Output
//对于每个测试实例输出5行,格式如下：
//a:num1
//e:num2
//i:num3
//o:num4
//u:num5
//多个测试实例之间由一个空行隔开。
//请特别注意:最后一块输出后面没有空行
//Sample Input
//2
//aeiou
//my name is ignatius
//Sample Output
//a : 1
//e : 1
//i : 1
//o : 1
//u : 1
//
//a : 2
//e : 1
//i : 3
//o : 0
//u : 1
//#include<stdio.h>
//#define ROW 100
//void times(char arr[ROW], int count)
//{
//	int a = 0;
//	int e = 0;
//	int i = 0;
//	int o = 0;
//	int u = 0;
//	int j = 0;
//	int count1 = 0;
//	for (j = 0; j < count; j++)
//	{
//		if (arr[j] == 'a')
//		{
//			a++;
//		}
//		else if (arr[j] == 'e')
//		{
//			e++;
//		}
//		else if (arr[j] == 'i')
//		{
//			i++;
//		}
//		else if (arr[j] == 'o')
//		{
//			o++;
//		}
//		else if (arr[j] == 'u')
//		{
//			u++;
//		}
//		else
//		{
//			count1++;
//		}
//	}
//	printf("a:%d\n", a);
//	printf("e:%d\n", e);
//	printf("i:%d\n", i);
//	printf("o:%d\n", o);
//	printf("u:%d\n", u);
//	printf("\n");
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	char c = 0;
//	char arr[ROW];
//	int i = 0;
//	int count = 0;
//	while (getchar() != '\n');
//	for (i = 0; i < num; i++)
//	{
//		while (scanf("%c", &c) == 1)
//		{
//			if (c == '\n')
//			{
//				times(arr, count);
//				count = 0;
//				continue;
//			}
//			arr[count++] = c;
//		}
//	}
//}


//第2028题
//Lowest Common Multiple Plus
//Problem Description
//求n个数的最小公倍数。
//Input
//输入包含多个测试实例,每个测试实例的开始是一个正整数n,然后是n个正整数。
//Output
//为每组测试数据输出它们的最小公倍数,每个测试实例的输出占一行。
//你可以假设最后的输出是一个32位的整数。
//Sample Input
//2 4 6
//3 2 5 7
//Sample Output
//12
//70
//#include<stdio.h>
//#define ROW 100
//void gong(int arr[ROW], int count)
//{
//	int i = 1;
//	int num1 = 0;
//	int num2 = 0;
//	int flag = 0;
//	int temp = 0;
//	int gcd = 0;
//	while (i + 1 < count)
//	{
//		if (flag == 0)
//		{
//			num1 = arr[i];
//			num2 = arr[i + 1];
//			flag = 1;
//		}
//		else
//		{
//			num1 = num1;
//			num2 = arr[i + 1];
//		}
//		if (num1 < num2)
//		{
//			temp = num1;
//			num1 = num2;
//			num2 = temp;
//		}
//		int temp1 = num1 % num2;
//		while (temp1 != 0)
//		{
//			temp1 = num1 % num2;
//			num1 = num2;
//			num2 = temp1;
//		}
//		i++;
//	}
//	if (count % 2 == 0)
//	{
//		gcd = num2;
//	}
//	else
//	{
//		gcd = num1;
//	}
//	int cheng = 1;
//	for (i = 1;i < count;i++)
//	{
//		cheng *= arr[i];
//	}
//	int gbs = cheng / gcd;
//	printf("%d\n", gbs);
//}
//int main()
//{
//	int arr[ROW];
//	int num = 0;
//	char c = 0;
//	int count = 0;
//	while (scanf("%d%c", &num, &c) == 2)
//	{
//		arr[count++] = num;
//		if (c == '\n')
//		{
//			gong(arr, count);
//			count = 0;
//			continue;
//		}
//	}
//	return 0;
//}


//第2029题
//Palindromes _easy version
//Problem Description
//"回文串"是一个正读和反读都一样的字符串, 比如"level"或者"noon"等等就是回文串。
//请写一个程序判断读入的字符串是否是"回文"。
//Input
//输入包含多个测试实例,输入数据的第一行是一个正整数n
//表示测试实例的个数,后面紧跟着是n个字符串。
//Output
//如果一个字符串是回文串,则输出"yes",否则输出"no"
//Sample Input
//4
//level
//abcde
//noon
//haha
//Sample Output
//yes
//no
//yes
//no
//#include<stdio.h>
//#define ROW 100
//int back(char arr1[ROW], int count)
//{
//	int flag = 0;
//	int i = 0;
//	int j = 0;
//	if (count % 2 == 0)
//	{
//		j = count / 2;
//	}
//	else
//	{
//		j = count / 2 + 1;
//	}
//	int temp = count - 1;
//	for (i = 0;i < j;i++)
//	{
//		if (arr1[i] != arr1[temp--])
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[ROW];
//	int arr2[ROW];
//	int num = 0;
//	int i = 0;
//	char c = 0;
//	int count = 0;
//	int j = 0;
//	scanf("%d", &num);
//	while (getchar() != '\n');
//	for (i = 0;i < num;i++)
//	{
//		while (scanf("%c", &c) == 1)
//		{
//			if (c == '\n')
//			{
//				int ret = back(arr1, count);
//				arr2[j++] = ret;
//				count = 0;
//				break;
//			}
//			arr1[count++] = c;
//		}
//	}
//	for (i = 0;i < j;i++)
//	{
//		if (arr2[i] == 0)
//		{
//			printf("no\n");
//		}
//		else
//		{
//			printf("yes\n");
//		}
//	}
//	return 0;
//}


//第2030题
//汉字统计
//Problem Description
//统计给定文本文件中汉字的个数。
//Input
//输入文件首先包含一个整数n,表示测试实例的个数,然后是n段文本。
//Output
//对于每一段文本,输出其中的汉字的个数,每个测试实例的输出占一行。
//[Hint:]从汉字机内码的特点考虑~
//Sample Input
//2
//WaHaHa!WaHaHa!今年过节不说话要说只说普通话WaHaHa!WaHaHa!
//马上就要期末考试了Are you ready ?
//Sample Output
//14
//9
//#include <stdio.h>
//#include <string.h>
//int main() 
//{
//    int n;
//    scanf("%d", &n);
//    getchar();  // 读取掉输入n后的换行符
//    while (n--) 
//    {
//        char s[10000];
//        fgets(s, sizeof(s), stdin);
//        int len = strlen(s);
//        int count = 0;
//        for (int i = 0; i < len; i++) 
//        {
//            if ((unsigned char)s[i] > 127) 
//            {  // 汉字的机内码每个字节都大于127
//                count++;
//            }
//        }
//        printf("%d\n", count / 2);  // 一个汉字占两个字节
//    }
//    return 0;
//}


//第2031题
//进制转换
//Problem Description
//输入一个十进制数N,将它转换成R进制数输出。
//Input
//输入数据包含多个测试实例,每个测试实例包含两个整数N(32位整数)和R(2<=R<=16)。
//Output
//为每个测试实例输出转换后的数,每个输出占一行。
//如果R大于10,则对应的数字规则参考16进制(比如,10用A表示,等等)。
//Sample Input
//7 2
//23 12
//- 4 3
//Sample Output
//111
//1B
//-11
//#include<stdio.h>
//void change(int N, int R)
//{
//    char arr[100] = { 0 };
//    if (N == 0)
//    {
//        printf("0\n");
//        return 0;
//    }
//    if (N < 0)
//    {
//        printf("-");
//        N = -N;
//    }
//    int count = 0;
//    while (N > 0)
//    {
//        int temp = N % R;
//        if (temp < 10)
//        {
//            arr[count++] = temp + '0';
//        }
//        else
//        {
//            arr[count++] = temp - 10 + 'A';
//        }
//        N = N / R;
//    }
//    int i = 0;
//    for (i = count - 1;i >= 0;i--)
//    {
//        printf("%c", arr[i]);
//    }
//    printf("\n");
//}
//int main()
//{
//    int N = 0;
//    int R = 0;
//    while (scanf("%d %d", &N, &R) == 2)
//    {
//        change(N, R);
//    }
//    return 0;
//}


//第2032题
//杨辉三角
//Problem Description
//还记得中学时候学过的杨辉三角吗?
//具体的定义这里不再描述,你可以参考以下的图形：
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1
//Input
//输入数据包含多个测试实例,每个测试实例的输入只包含一个正整数n(1<=n<=30)
//表示将要输出的杨辉三角的层数。
//Output
//对应于每一个输入,请输出相应层数的杨辉三角
//每一层的整数之间用一个空格隔开,每一个杨辉三角后面加一个空行。
//Sample Input
//2 3
//Sample Output
//1
//1 1
//
//1
//1 1
//1 2 1
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void triangle(int num1)
//{
//	int i = 0;
//	int j = 0;
//	int arr[ROW][COL] = { 0 };
//	for (i = 0;i < num1;i++)
//	{
//		for (j = 0;j <= i;j++)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0;i < num1;i++)
//	{
//		for (j = 0;j <= i;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num1 = 0;
//	scanf("%d", &num1);
//	triangle(num1);
//	return 0;
//}


//第2033题
//Problem Description
//HDOJ上面已经有10来道A+B的题目了,相信这些题目曾经是大家的最爱
//希望今天的这个A+B能给大家带来好运,也希望这个题目能唤起大家对ACM曾经的热爱。
//这个题目的A和B不是简单的整数,而是两个时间,A和B都是由3个整数组成,分别表示时分秒
//比如,假设A为34 45 56,就表示A所表示的时间是34小时45分钟56秒。
//Input
//输入数据有多行组成,首先是一个整数N,表示测试实例的个数
//然后是N行数据,每行有6个整数AH,AM,AS,BH,BM,BS,分别表示时间A和B所对应的时分秒。
//题目保证所有的数据合法。
//Output
//对于每个测试实例,输出A+B,每个输出结果也是由时分秒3部分组成
//同时也要满足时间的规则(即:分和秒的取值范围在0~59)
//每个输出占一行,并且所有的部分都可以用32位整数表示。
//Sample Input
//2
//1 2 3 4 5 6
//34 45 56 12 23 34
//Sample Output
//5 7 9
//47 9 30
//#include<stdio.h>
//#define ROW 6
//#define COL 6
//void time(int arr[ROW][COL], int num, int col)
//{
//	int i = 0;
//	int j = 0;
//	int arr1[ROW][COL] = { 0 };
//	int flag = 0;
//	for (i = 0;i < num;i++)
//	{
//		for (j = 2;j >= 0;j--)
//		{
//			if (j > 0)
//			{
//				flag = 0;
//			}
//			int temp = arr[i][j] + arr[i][j + 3] + arr1[i][j];
//			if (temp >= 60 && j > 0)
//			{
//				arr1[i][j] = temp - 60;
//				if (flag == 0)
//				{
//					arr1[i][j - 1]++;
//					flag = 1;
//				}
//			}
//			else if(j == 0 && flag == 0)
//			{
//				arr1[i][j] = arr1[i][j] + temp;
//			}
//			else if (j == 0 && flag == 1)
//			{
//				arr1[i][j] = arr1[i][j] + temp - 1;
//			}
//			else
//			{
//				arr1[i][j] = temp;
//			}
//		}
//	}
//	for (i = 0;i < num;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num = 0;
//	int arr[ROW][COL] = { 0 };
//	scanf("%d", &num);
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < num;i++)
//	{
//		for (j = 0;j < 6;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	time(arr, num, COL);
//	return 0;
//}


//Problem Description
//给定一个字符串,请你编写一个函数,返回该字符串的逆序字符串。
//Input
//输入数据包含多个测试实例,每个测试实例占一行,每行不超过100个字符。
//Output
//对于每个测试实例,请输出它的逆序字符串。
//Sample Input
//I love you
//I love you
//Sample Output
//uoy evol I
//uoy evol I
//#include<stdio.h>
//#define ROW 100
//void back(char arr1[ROW], int count)
//{
//	int i = 0;
//	int temp = count - 1;
//	char arr2[ROW] = { 0 };
//	for (i = 0;i < count;i++)
//	{
//		arr2[temp--] = arr1[i];
//	}
//	for (i = 0;i < count;i++)
//	{
//		printf("%c", arr2[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int count = 0;
//	char c = 0;
//	char arr1[ROW] = { 0 };
//	while (scanf("%c", &c) == 1)
//	{
//		if (c == '\n')
//		{
//			break;
//		}
//		arr1[count++] = c;
//	}
//	back(arr1, count);
//	return 0;
//}


//第2034题
//人见人爱A - B
//Problem Description
//参加过上个月月赛的同学一定还记得其中的一个最简单的题目,就是{A}+{B}
//那个题目求的是两个集合的并集,今天我们这个A-B求的是两个集合的差,就是做集合的减法运算。
//(当然,大家都知道集合的定义,就是同一个集合中不会有两个相同的元素,这里还是提醒大家一下）
//呵呵,很简单吧？
//Input
//每组输入数据占1行,每行数据的开始是2个整数n(0<=n<=100)和m(0<=m<=100)
//分别表示集合A和集合B的元素个数,然后紧跟着n+m个元素
//前面n个元素属于集合A,其余的属于集合B
//每个元素为不超出int范围的整数,元素之间有一个空格隔开
//如果n=0并且m=0表示输入的结束,不做处理。
//Output
//针对每组数据输出一行数据,表示A-B的结果,如果结果为空集合,则输出"NULL"
//否则从小到大输出结果,为了简化问题,每个元素后面跟一个空格
//Sample Input
//3 3 1 2 3 1 4 7
//3 7 2 5 8 2 3 4 5 6 7 8
//0 0
//Sample Output
//2 3
//NULL
//一维数组
//#include<stdio.h>
//#define ROW 100
//void sub(int arr1[ROW], int arr2[ROW], int count1, int count2)
//{
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (i = 0;i < count1;i++)
//	{
//		for (j = 0;j < count2;j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d ", arr1[i]);
//		}
//		flag = 0;
//	}
//	if (flag == 0)
//	{
//		printf("NULL\n");
//	}
//}
//int main()
//{
//	int arr1[ROW] = { 0 };
//	int arr2[ROW] = { 0 };
//	int count1 = 0;
//	int count2 = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d %d", &count1, &count2) == 2)
//	{
//		if (count1 == 0 && count2 == 0)
//		{
//			break;
//		}
//		for (i = 0;i < count1;i++)
//		{
//			scanf("%d", &arr1[i]);
//		}
//		for (j = 0;j < count2;j++)
//		{
//			scanf("%d", &arr2[j]);
//		}
//		sub(arr1, arr2, count1, count2);
//	}
//	return 0;
//}
//二维数组
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void stract(int arr2[ROW], int arr3[ROW], int arr4[ROW][COL], int m, int n, int h)
//{
//	int i = 0;
//	int count = 1;
//	int count1 = 0;
//	for (i = 0;i < m;i++)
//	{
//		int j = 0;
//		int flag = 0;
//		for (j = 0;j < n;j++)
//		{
//			if (arr2[i] == arr3[j])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			arr4[h][count++] = arr2[i];
//			count1++;
//		}
//	}
//	arr4[h][0] = count1;
//}
//void split(int arr1[ROW][COL],int count1,int count2)
//{
//	int i = 0;
//	int arr2[ROW] = { 0 };
//	int arr3[ROW] = { 0 };
//	int arr4[ROW][COL] = {0};
//	int j = 0;
//	for (i = 0;i < count1;i++)
//	{
//		int m = 0;
//		int n = 0;
//		for (j = 2;j < arr1[i][0] + 2;j++)
//		{
//			arr2[m++] = arr1[i][j];
//		}
//		for (j = 2 + arr1[i][0];j < 2 + arr1[i][0] + arr1[i][1];j++)
//		{
//			arr3[n++] = arr1[i][j];
//		}
//		stract(arr2, arr3, arr4, m, n, i);
//	}
//	for (i = 0;i < count1;i++)
//	{
//		if (arr4[i][0] == 0)
//		{
//			printf("NULL\n");
//			continue;
//		}
//		for (j = 1;j < arr4[i][0] + 1;j++)
//		{
//			printf("%d ", arr4[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr1[ROW][COL];
//	int count1 = 0;
//	int count2 = 0;
//	char c = 0;
//	int num = 0;
//	while (scanf("%d%c", &num, &c) == 2)
//	{
//		if (c == '\n' && arr1[count1][0] != 0)
//		{
//			arr1[count1][count2++] = num;
//			count1++;
//			count2 = 0;
//			continue;
//		}
//		arr1[count1][count2++] = num;
//		if (arr1[count1][0] == 0 && arr1[count1][1] == 0)
//		{
//			break;
//		}
//	}
//	split(arr1, count1, count2);
//	return 0;
//}


//第2035题
//人见人爱A^B
//Problem Description
//求A^B的最后三位数表示的整数。
//说明:A^B的含义是"A的B次方"
//Input
//输入数据包含多个测试实例,每个实例占一行,由两个正整数A和B组成(1<=A,B<=10000)
//如果A=0,B=0,则表示输入数据的结束,不做处理。
//Output
//对于每个测试实例,请输出A^B的最后三位表示的整数,每个输出占一行。
//Sample Input
//2 3
//12 6
//6789 10000
//0 0
//Sample Output
//8
//984
//1
//#include<stdio.h>
//#include<math.h>
//#define ROW 100
//#define COL 100
//void cheng(int arr1[ROW][COL],int count)
//{
//	int i = 0;
//	int j = 0;
//	int arr2[ROW] = { 0 };
//	for (i = 0;i < count;i++)
//	{
//		arr2[i] = pow(arr1[i][0], arr1[i][1]);
//	}
//	//1234
//	//
//	for (i = 0;i < count;i++)
//	{
//		if (arr2[i] / 100 == 0)
//		{
//			printf("%d\n", arr2[i]);
//			continue;
//		}
//		int temp = arr2[i] % 10 + arr2[i] / 10 % 10 * 10 + arr2[i] / 100 % 10 * 100;
//		if (temp > 0)
//		{
//			printf("%d\n", temp);
//		}
//		else
//		{
//			printf("1\n");
//		}
//	}
//}
//int main()
//{
//	int arr1[ROW][COL];
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	while (scanf("%d", &num) == 1)
//	{
//		arr1[i][j++] = num;
//		if (arr1[i][0] == 0 && arr1[i][1] == 0)
//		{
//			break;
//		}
//		if (j == 2)
//		{
//			j = 0;
//			i++;
//			continue;
//		}
//	}
//	cheng(arr1, i);
//	return 0;
//}


//第2036题
//改革春风吹满地
//Problem Description
//"改革春风吹满地,
//不会AC没关系;
//实在不行回老家,
//还有一亩三分地。
//谢谢!(乐队奏乐)"
//话说部分学生心态极好,每天就知道游戏,这次考试如此简单的题目,也是云里雾里
//而且,还竟然来这么几句打油诗。
//好呀,老师的责任就是帮你解决问题,既然想种田,那就分你一块。
//这块田位于浙江省温州市苍南县灵溪镇林家铺子村,多边形形状的一块地,原本是linle的
//现在就准备送给你了。不过,任何事情都没有那么简单
//你必须首先告诉我这块地到底有多少面积,如果回答正确才能真正得到这块地。
//发愁了吧?就是要让你知道,种地也是需要AC知识的!以后还是好好练吧...
//Input
//输入数据包含多个测试实例,每个测试实例占一行
//每行的开始是一个整数n(3<=n<=100),它表示多边形的边数(当然也是顶点数)
//然后是按照逆时针顺序给出的n个顶点的坐标(x1,y1,x2,y2...xn,yn)
//为了简化问题,这里的所有坐标都用整数表示。
//输入数据中所有的整数都在32位整数范围内,n=0表示数据的结束,不做处理。
//Output
//对于每个测试实例,请输出对应的多边形面积,结果精确到小数点后一位小数。
//每个实例的输出占一行。
//Sample Input
//3 0 0 1 0 0 1
//4 1 0 0 1 - 1 0 0 - 1
//0
//Sample Output
//0.5
//2.0
//可以完成题目的条件,但不能准确求出n边形的面积
//#include<stdio.h>
//#include<math.h>
//#define ROW 100
//void square(int arr[ROW], int count1)
//{
//	int i = 0;
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	int th = 0;
//	int num = 1;
//	if (arr[0] > 3)
//	{
//		num = arr[0] - 2;
//	}
//	a = sqrt(pow(arr[1] - arr[3], 2) + pow(arr[2] - arr[4], 2));
//	b = sqrt(pow(arr[1] - arr[5], 2) + pow(arr[2] - arr[6], 2));
//	c = sqrt(pow(arr[3] - arr[5], 2) + pow(arr[4] - arr[6], 2));
//	float p = (a + b + c) / 2.0;
//	//1.5*0.5*0.5*0.5
//	double sq = sqrt(p * (p - a) * (p - b) * (p - c)) * num;
//	printf("%.2f\n", sq);
//}
//int main()
//{
//	int arr[ROW] = { 0 };
//	int count = 0;
//	int num = 0;
//	char c = 0;
//	while (scanf("%d%c", &num, &c) == 2)
//	{
//		if (c == '\n')
//		{
//			arr[count++] = num;
//			square(arr, count);
//			count = 0;
//			continue;
//		}
//		arr[count++] = num;
//	}
//	return 0;
//}



//求n边形的面积
//#include<stdio.h>
//#include<math.h>
//#define ROW 100
//double triangle(int x1, int y1, int x2, int y2, int x3, int y3)
//{
//	float a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
//	float b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
//	float c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
//	float p = (a + b + c) / 2.0;
//	double sq = sqrt(p * (p - a) * (p - b) * (p - c));
//}
//void square(int arr[ROW], int count)
//{
//	int i = 0;
//	double area = 0;
//	for (i = 1;i < count - 2;i+=2)
//	{
//		area += triangle(arr[i], arr[i + 1], arr[i + 2], arr[i + 3], arr[i + 4], arr[i + 5]);
//	}
//	printf("%.2f\n", area);
//}
//int main()
//{
//	int arr[ROW] = { 0 };
//	int count = 0;
//	int num = 0;
//	char c = 0;
//	while (scanf("%d%c", &num, &c) == 2)
//	{
//		arr[count++] = num;
//		if (c == '\n')
//		{
//			square(arr, count);
//			count = 0;
//			continue;
//		}
//	}
//	return 0;
//}


//第2037题
//今年暑假不AC
//Problem Description
//"今年暑假不AC?"
//"是的。"
//"那你干什么呢?"
//"看世界杯呀,笨蛋!"
//"@#$ % ^&*%..."
//确实如此,世界杯来了,球迷的节日也来了,估计很多ACMer也会抛开电脑,奔向电视了。
//作为球迷,一定想看尽量多的完整的比赛,
//当然,作为新时代的好青年,你一定还会看一些其它的节目,比如新闻联播(永远不要忘记关心国家大事)、
//非常6+7、超级女生,以及王小丫的《开心辞典》等等
//假设你已经知道了所有你喜欢看的电视节目的转播时间表,你会合理安排吗?(目标是能看尽量多的完整节目)
//Input
//输入数据包含多个测试实例,每个测试实例的第一行只有一个整数n(n<=100)
//表示你喜欢看的节目的总数,然后是n行数据,每行包括两个数据Ti_s,Ti_e(1<=i<=n),
//分别表示第i个节目的开始和结束时间,为了简化问题,每个时间都用一个正整数表示。
//n=0表示输入结束,不做处理。
//Output
//对于每个测试实例,输出能完整看到的电视节目的个数,每个测试实例的输出占一行。
//Sample Input
//12
//1 3
//3 4
//0 7
//3 8
//15 19
//15 20
//10 15
//8 18
//6 12
//5 10
//4 14
//2 9
//0
//Sample Output
//5


//第2039题
//三角形
//Problem Description
//给定三条边,请你判断一下能不能组成一个三角形。
//Input
//输入数据第一行包含一个数M,接下有M行,每行一个实例,包含三个正数A,B,C。其中A,B,C<1000;
//Output
//对于每个测试实例,如果三条边长A,B,C能组成三角形的话,输出YES,否则NO。
//Sample Input
//2
//1 2 3
//2 2 2
//Sample Output
//NO
//YES
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void triangle(int arr1[ROW][COL], int num)
//{
//	int i = 0;
//	int j = 0;
//	int arr2[ROW] = { 0 };
//	for (i = 0;i < num;i++)
//	{
//		if (arr1[i][0] + arr1[i][1] > arr1[i][2] && arr1[i][0] + arr1[i][2] > arr1[i][1] && arr1[i][1] + arr1[i][2] > arr1[i][0])
//		{
//			arr2[i] = 1;
//		}
//	}
//	for (i = 0;i < num;i++)
//	{
//		if (arr2[i] == 1)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int arr1[ROW][COL] = { 0 };
//	for (i = 0;i < num;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 3;j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	triangle(arr1, num);
//	return 0;
//}


//第2040题
//亲和数
//Problem Description
//古希腊数学家毕达哥拉斯在自然数研究中发现,220的所有真约数(即不是自身的约数)之和为:
//1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110＝284。
//而284的所有真约数为1、2、4、71、142, 加起来恰好为220。
//人们对这样的数感到很惊奇, 并称之为亲和数。
//一般地讲, 如果两个数中任何一个数都是另一个数的真约数之和,则这两个数就是亲和数。
//你的任务就编写一个程序, 判断给定的两个数是否是亲和数
//Input
//输入数据第一行包含一个数M,接下有M行,每行一个实例,
//包含两个整数A,B;
//其中0<=A,B<=600000;
//Output
//对于每个测试实例,如果A和B是亲和数的话输出YES,否则输出NO。
//Sample Input
//2
//220 284
//100 200
//Sample Output
//YES
//NO
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//int NUM1(int num)
//{
//	int i = 0;
//	int count = 0;
//	int sum = 0;
//	for (i = 1;i < num - 1;i++)
//	{
//		if (num % i == 0)
//		{
//			sum += i;
//		}
//	}
//	return sum;
//}
//void NUM(int arr1[ROW][COL], int num)
//{
//	int i = 0;
//	int arr2[ROW] = { 0 };
//	for (i = 0;i < num;i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0;j < 2;j++)
//		{
//			int ret = NUM1(arr1[i][j]);
//			arr2[count++] = ret;
//		}
//		if (arr2[0] == arr1[i][1] && arr2[1] == arr1[i][0])
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//}
//int main()
//{
//	int arr1[ROW][COL] = { 0 };
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0;i < num;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 2;j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	NUM(arr1, num);
//	return 0;
//}


//第2041题
//超级楼梯
//Problem Description
//有一楼梯共M级,刚开始时你在第一级,若每次只能跨上一级或二级,要走上第M级,共有多少种走法？
//Input
//输入数据首先包含一个整数N,表示测试实例的个数,然后是N行数据,
//每行包含一个整数M(1<=M<=40),表示楼梯的级数。
//Output
//对于每个测试实例,请输出不同走法的数量
//Sample Input
//2
//2
//3
//Sample Output
//1
//2
//方法1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#define ROW 100
//#define COL 2
//int climb(int num)
//{
//	int count = 0;
//	int count3 = 0;
//	int row = 0;
//	int arr1[ROW][COL] = { 0 };
//	while (count3 <= num)
//	{
//		int count1 = 0;
//		int count2 = 0;
//		int sum = 1;
//		while (sum != num)
//		{
//			int r = rand() % 2 + 1;
//			if (r == 2 && sum + 2 <= num)
//			{
//				sum += 2;
//				count2++;
//			}
//			else
//			{
//				sum += 1;
//				count1++;
//			}
//		}
//		int i = 0;
//		for (i = 0; i < 2; i++)
//		{
//			if (i == 0)
//			{
//				arr1[row][i] = count1;
//			}
//			else
//			{
//				arr1[row][i] = count2;
//			}
//		}
//		count++;
//		row++;
//		int j = 0;
//		if (count > 1)
//		{
//			for (i = 0; i < row; i++)
//			{
//				int temp = arr1[i][0];
//				for (j = 0; j < row; j++)
//				{
//					if (i == j)
//					{
//						continue;
//					}
//					if (temp == arr1[j][0])
//					{
//						if (arr1[i][1] == arr1[j][1])
//						{
//							arr1[j][0] = 0;
//							arr1[j][1] = 0;
//							row--;
//							count--;
//							count3++;
//						}
//					}
//				}
//			}
//		}
//	}
//	return count;
//}
//void test(int arr1[ROW], int num)
//{
//	int i = 0;
//	int arr2[ROW] = { 0 };
//	for (i = 0; i < num; i++)
//	{
//		int ret = climb(arr1[i]);
//		arr2[i] = ret;
//	}
//	for (i = 0; i < num; i++)
//	{
//		printf("%d\n", arr2[i]);
//	}
//}
//int main()
//{
//	int num = 0;
//	srand((unsigned int)time(NULL));
//	scanf("%d", &num);
//	int i = 0;
//	int arr1[ROW] = { 0 };
//	for (i = 0; i < num; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	test(arr1, num);
//	return 0;
//}


//方法2
//#include <stdio.h>
////动态规划求解爬楼梯问题(初始在第一阶)
//int climb(int num) 
//{
//    if (num == 2)
//    {
//        return 1;
//    }
//    if (num == 3)
//    {
//        return 2;
//    }
//    int dp[100];
//    dp[2] = 1;
//    dp[3] = 2;
//    for (int i = 4; i <= num; i++)
//    {
//        dp[i] = dp[i - 1] + dp[i - 2];
//    }
//    return dp[num];
//}
////测试函数
//void test(int arr1[], int num) 
//{
//    for (int i = 0; i < num; i++)
//    {
//        int ret = climb(arr1[i]);
//        printf("%d\n", ret);
//    }
//}
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    int arr1[100];
//    for (int i = 0; i < num; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    test(arr1, num);
//    return 0;
//}


//第2042题
//不容易系列之二
//Problem Description
//你活的不容易,我活的不容易,他活的也不容易。
//不过,如果你看了下面的故事,就会知道,有位老汉比你还不容易。
//重庆市郊黄泥板村的徐老汉(大号徐东海,简称XDH)这两年辛辛苦苦养了不少羊
//到了今年夏天,由于众所周知的高温干旱,实在没办法解决牲畜的饮水问题,就决定把这些羊都赶到集市去卖。
//从黄泥板村到交易地点要经过N个收费站,按说这收费站和徐老汉没什么关系,但是事实却令徐老汉欲哭无泪:
//(镜头回放)
//近景:老汉,一群羊
//远景:公路,收费站
//......
//收费员(彬彬有礼+职业微笑):"老同志,请交过路费!"
//徐老汉(愕然,反应迟钝状):"锅,锅,锅,锅-炉-费?我家不烧锅炉呀?"
//收费员(职业微笑依然):"老同志,我说的是过-路-费,就是你的羊要过这个路口必须交费,understand?"
//徐老汉(近镜头10秒,嘴巴张开):"我-我-我知道汽车过路要收费,这羊也要收费呀?"
//收费员(居高临下+不解状):"老同志,你怎么就不明白呢,那么我问你,汽车几个轮子?"
//徐老汉(稍放松):"这个我知道,今天在家里我孙子还问我这个问题,4个!"
//收费员(生气,站起):"嘿!老头,你还骂人不带脏字,既然知道汽车四个轮子,难道就不知道这羊有几条腿吗?!"
//徐老汉(尴尬,依然不解状):"也,也,也是4个呀,这有关系吗?"
//收费员(生气,站起):"怎么没关系!我们头说了,只要是4条腿的都要收费!"
//......
//(画外音)
//由于徐老汉没钱,收费员就将他的羊拿走一半,看到老汉泪水涟涟,犹豫了一下,又还给老汉一只。
//巧合的是,后面每过一个收费站,都是拿走当时羊的一半,然后退还一只,等到老汉到达市场,就只剩下3只羊了。
//你,当代有良知的青年,能帮忙算一下老汉最初有多少只羊吗？
//Input
//输入数据第一行是一个整数N,下面由N行组成,每行包含一个整数a(0<a<=30),表示收费站的数量。
//Output
//对于每个测试实例,请输出最初的羊的数量,每个测试实例的输出占一行。
//Sample Input
//2
//1
//2
//Sample Output
//4
//6
//#include<stdio.h>
//#define ROW 100
//#define COL 100
////(3-1)*2 --- 2*2
////((3-1)*2-1)*2 --- 3 * 2
////(((3-1)*2-1) * 2 - 1) * 2  --- 5 * 2
//void sheep(int arr1[ROW], int num)
//{
//	int i = 0;
//	int arr2[ROW] = { 0 };
//	for (i = 0;i < num;i++)
//	{
//		int j = 0;
//		int count = 3;
//		for (j = 1;j <= arr1[i];j++)
//		{
//			int temp = (count - 1) * 2;
//			count = temp;
//		}
//		arr2[i] = count;
//	}
//	for (i = 0;i < num;i++)
//	{
//		printf("%d\n", arr2[i]);
//	}
//}
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	int count = 0;
//	int arr1[ROW] = { 0 };
//	for (i = 0;i < num;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	sheep(arr1, num);
//	return 0;
//}


//第2043题
//密码
//Problem Description
//网上流传一句话:"常在网上飘啊,哪能不挨刀啊～"。
//其实要想能安安心心地上网其实也不难,学点安全知识就可以。
//首先,我们就要设置一个安全的密码。
//那什么样的密码才叫安全的呢?
//一般来说一个比较安全的密码至少应该满足下面两个条件:
//(1).密码长度大于等于8，且不要超过16。
//(2).密码中的字符应该来自下面"字符类别"中四组中的至少三组。
//这四个字符类别分别为:
//1.大写字母:A,B,C...Z;
//2.小写字母:a,b,c...z;
//3.数字:0,1,2...9;
//4.特殊符号:~,!,@,#,$,%,^;
//给你一个密码,你的任务就是判断它是不是一个安全的密码。
//Input
//输入数据第一行包含一个数M,接下有M行,每行一个密码(长度最大可能为50)
//密码仅包括上面的四类字符。
//Output
//对于每个测试实例,判断这个密码是不是一个安全的密码,是的话输出YES,否则输出NO。
//Sample Input
//3
//a1b2c3d4
//Linle@ACM
//^~^@^@!%
//Sample Output
//NO
//YES
//NO
//#include<stdio.h>
//#include<string.h>
//#define ROW 100
//#define COL 100
//int safe(char arr1[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	char arr2[ROW][COL] = { 0 };
//	char arr3[8] = { '~','!','@','#','$','%','^' };
//	int arr4[10] = { 0 };
//	int flag1 = 0;
//	int flag2 = 0;
//	int flag3 = 0;
//	int flag4 = 0;
//	int count = 0;
//	for (j = 0; j < 26; j++)
//	{
//		arr2[0][j] = 'a' + j;
//	}
//	for (j = 0; j < 26; j++)
//	{
//		arr2[1][j] = 'A' + j;
//	}
//	for (j = 0; j < 26; j++)
//	{
//		if (strchr(arr1[row], arr2[0][j]))
//		{
//			flag1 = 1;
//			break;
//		}
//	}
//	for (j = 0; j < 26; j++)
//	{
//		if (strchr(arr1[row], arr2[1][j]))
//		{
//			flag2 = 1;
//			break;
//		}
//	}
//	for (j = 0; j <= 9; j++)
//	{
//		if (strchr(arr1[row], '0' + j))
//		{
//			flag3 = 1;
//			break;
//		}
//	}
//	for (j = 0; j < 7; j++)
//	{
//		if (strchr(arr1[row], arr3[j]))
//		{
//			flag4 = 1;
//			break;
//		}
//	}
//	if (flag1 && flag2 && flag3)
//	{
//		count = 3;
//	}
//	if (flag1 && flag3 && flag4)
//	{
//		count = 3;
//	}
//	if (flag2 && flag3 && flag4)
//	{
//		count = 3;
//	}
//	if (flag1 && flag2 && flag4)
//	{
//		count = 3;
//	}
//	if (flag1 && flag2 && flag3 && flag4)
//	{
//		count = 4;
//	}
//	if (count >= 3 && (col - 1 >= 8 && col - 1 <= 16))
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
//	int num = 0;
//	scanf("%d", &num);
//	char arr1[ROW][COL] = { 0 };
//	char arr2[ROW] = { 0 };
//	int i = 0;
//	char c = 0;
//	int row = 0;
//	int col = 0;
//	int count = 0;
//	while (getchar() != '\n');
//	for (i = 0; i < num; i++)
//	{
//		scanf("%s", arr1[row]);
//		col = strlen(arr1[row]);
//		int ret = safe(arr1, row, col);
//		arr2[count++] = ret;
//		row++;
//	}
//	for (i = 0; i < row; i++)
//	{
//		if (arr2[i] == 1)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}


//第2047题
//阿牛的EOF牛肉串
//Problem Description
//今年的ACM暑期集训队一共有18人,分为6支队伍。
//其中有一个叫做EOF的队伍,由04级的阿牛、XC以及05级的COY组成。
//在共同的集训生活中,大家建立了深厚的友谊,阿牛准备做点什么来纪念这段激情燃烧的岁月,
//想了一想,阿牛从家里拿来了一块上等的牛肉干
//准备在上面刻下一个长度为n的只由"E""O""F"三种字符组成的字符串
//(可以只有其中一种或两种字符,但绝对不能有其他字符) 
//阿牛同时禁止在串中出现O相邻的情况,他认为,"OO"看起来就像发怒的眼睛,效果不好。
//你,NEW ACMer,EOF的崇拜者,能帮阿牛算一下一共有多少种满足要求的不同的字符串吗?
//PS:阿牛还有一个小秘密,就是准备把这个刻有EOF的牛肉干
//作为神秘礼物献给杭电五十周年校庆,可以想象,当校长接过这块牛肉干的时候该有多高兴!
//这里,请允许我代表杭电的ACMer向阿牛表示感谢!
//再次感谢!
//Input
//输入数据包含多个测试实例,每个测试实例占一行,由一个整数n组成,(0<n<40)。
//Output
//对于每个测试实例,请输出全部的满足要求的涂法,每个实例的输出占一行。
//Sample Input
//1
//2
//Sample Output
//3
//8
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 100
#define COL 100
void beef(int num)
{
	char arr[ROW][COL] = { 0 };
	int flag = 0;
	int count = 0;
	int row = 0;
	int col = 0;
	while ()
	{
		int ret = rand() % 3 + 1;
		if (ret == 2 && flag != 1)
		{
			flag = 1;
			
		}
		
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int num = 0;
	scanf("%d", &num);
	beef(num);
	return 0;
}