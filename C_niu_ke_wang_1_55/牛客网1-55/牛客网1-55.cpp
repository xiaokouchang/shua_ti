#define _CRT_SECURE_NO_WARNINGS 1 
#define _CRT_SECURE_NO_WARNINGS 1 
//https://www.nowcoder.com/exam/oj?questionJobId=10&subTabName=online_coding_page
//第1题
//输出"Hello Nowcoder!"
//#include <stdio.h>
//
//int main()
//{
//    printf("Hello Nowcoder!");
//    return 0;
//}


//第2题
//输出以下图形
//     **     
//     **
//************
//************
//    *  * 
//    *  *
//#include<stdio.h>
//int main()
//{
//	char a = '*';
//	int i,j;
//	//打印空格
//	for (j = 0; j <= 1; j++)
//	{
//		for (i = 0; i < 5; i++)
//		{
//			printf(" ");
//		}
//		printf("%c%c\n", a, a);
//	}
//	for (j = 0; j <= 1; j++)
//	{
//		for (i = 0; i < 12; i++)
//		{
//			printf("%c", a);
//		}
//		printf("\n");
//	}
//	for (j = 0; j <= 1; j++)
//	{
//		for (i = 0; i < 4; i++)
//		{
//			printf(" ");
//		}
//		printf("%c  %c", a, a);
//		printf("\n");
//	}
//	return 0;
//}


//第3题
//输入描述：
//输入一个整数，范围在32位有符号整数范围内
//输出描述：
//输出这个整数
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d\n", a);
//    return 0;
//}


//第4题
//输入一个浮点数，输出这个浮点数。
//输入描述：
//输入一个浮点数
//输出描述：
//输出一个浮点数，保留三位小数
//#include <stdio.h>
//
//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    printf("%.3f\n", a);
//    return 0;
//}


//第5题
//输入一个字符，输出这个字符。
//输入描述：
//输入一个字符，范围在ascii范围内
//输出描述：
//输出这个字符
//#include <stdio.h>
//
//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    printf("%c\n", a);
//    return 0;
//}


//第6题
//牛牛从键盘上输入三个整数，并尝试在屏幕上显示第二个整数。
//输入描述：
//一行输入3个整数，用空格隔开。
//输出描述：
//请输出第二个整数的值。
//#include <stdio.h>
//
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("%d\n", b);
//    return 0;
//}


//第7题
//输入描述：
//一行读入一个char类型的字符。
//输出描述：
//输出这个字符组成的3*3矩形。
//#include <stdio.h>
//
//int main()
//{
//    char a = 0;
//    int m, n;
//    scanf("%c", &a);
//    for (m = 0; m < 3; m++)
//    {
//        for (n = 0; n < 3; n++)
//        {
//            printf("%c", a);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//第8题
//打印如下字符
//   #  //5 1
//  ###//4 3
// #####//3 5
//  ###//2 3
//   #//1 1
//#include <stdio.h>
//#include<math.h>
//
//int main()
//{
//    char a = 0;
//    int m, n;
//    int j,k;
//    scanf("%c", &a);
//    for (m = 5; m > 0; m--)//4
//    {
//        for (n = 3; n < m; n++)
//        {
//            printf(" ");
//        }
//        if (m <= 2)
//        {
//            for (n = 2; n >= m; n--)
//            {
//                printf(" ");
//            }
//        }
//        k = (-1) * pow(m, 2) + 6 * m - 4;
//        if (m == 4 || m == 2)
//        {
//            for (j = 1; j <= 3; j++)
//            {
//                printf("%c", a);
//            }
//        }
//        else
//        {
//            for (j = 1; j <= k; j++)
//            {
//                printf("%c", a);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}


//第9题
//输入描述：
//一行，一个字符。
//输出描述：
//一行，输出输入字符对应的ASCII码。
//#include<stdio.h>
//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    printf("%d\n", a);
//    return 0;
//}


//第10题
//输入描述：
//随机输入的浮点数
//输出描述：
//四舍五入之后的整数
//#include <stdio.h>
//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    printf("%.0f\n", a);
//    return 0;
//}


//第11题
//描述
//输入3科成绩,然后把三科成绩输出,成绩为整数形式。
//数据范围:0≤n≤100
//输入描述:
//一行,3科成绩,用空格分隔,范围(0~100)
//输出描述:
//一行,把3科成绩显示出来,输出格式详见输出样例。
//#include<stdio.h>
//
//int main()
//{
//    int score1, score2, score3;
//    scanf("%d %d %d", &score1, &score2, &score3);
//    printf("score1=%d,score2=%d,score3=%d\n", score1, score2, score3);
//    return 0;
//}


//第12题
//输入描述：
//一行，3科成绩，用空格分隔，范围（0~100）。
//输出描述：
//一行，把3科成绩显示出来
//#include<stdio.h>
//
//int main()
//{
//    int xuehao = 0;
//    float English, Math, C_language;
//    scanf("%d;%f,%f,%f", &xuehao, &English, &Math, &C_language);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", xuehao, English, Math, C_language);
//    return 0;
//}


//第13题
//输入描述:
//输入只有一行,出生日期,包括年月日,年月日之间的数字没有分隔符。
//输出描述:
//三行
//第一行为出生年份
//第二行为出生月份
//第三行为出生日期。
//输出时如果月份或天数为1位数，需要在1位数前面补0。
//#include<stdio.h>
//
//int main()
//{
//    int born = 0;
//    int year, month, date;
//    scanf("%d", &born);
//    year = born / 10000;
//    month = born % 10000 / 100;
//    date = born % 10000 % 100;
//    printf("year=%4d\nmonth=%02d\ndate=%02d\n", year, month, date);
//    return 0;
//}


//第14题
//输入描述:
//输入只有一行,按照格式输入两个整数,中间用,分隔。
//输出描述:
//把两个整数按格式输出,中间用,分隔。
//#include<stdio.h>
//
//int main()
//{
//    int a, b;
//    scanf("a=%d,b=%d", &a, &b);
//    a = a + b;
//    b = a - b;
//    a = a - b;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}


//第15题
//输入描述：
//多组输入，每一行输入大写字母
//输出描述：
//针对每组输入输出对应的小写字母
//#include <stdio.h>
//
//int main()
//{
//    char a = 0;
//    char b = 0;
//    char c = 0;
//    scanf("%c %c %c", &a, &b, &c);
//    printf("%c\n%c\n%c\n", a + 32, b + 32, c + 32);
//    return 0;
//}


//第16题
//输入描述：
//无
//输出描述：
//十六进制整数ABCDEF对应的十进制整数,所占域宽为15
//#include<stdio.h>
//
//int main()
//{
//	int a = 0xABCDEF;
//	printf("%15d\n", a);
//	return 0;
//}


//第17题
//输入描述:
//无
//输出描述:
//十进制整数1234对应的八进制和十六进制(字母大写),用空格分开
//在八进制前显示前导0,在十六进制数前显示前导0X
//#include<stdio.h>
//int main()
//{
//	int a = 1234;
//	printf("0%o 0X%X", a, a);
//	return 0;
//}


//第18题
//输入描述：
//读入一个字符,一个整数,一个单精度浮点数用换行符隔开。
//输出描述：
//按顺序输出字符、整数、单精度浮点数,用空格分隔,浮点数保留 6 位小数
//#include <stdio.h>
//
//int main()
//{
//    char a = 0;
//    int b = 0;
//    float c = 0;
//    scanf("%c %d %f", &a, &b, &c);
//    printf("%c %d %.6f", a, b, c);
//    return 0;
//}


//第19题
//输入描述：
//输入三个整数,用空格隔开。
//输出描述：
//输出3个整数,以第2、3个数字占8个空格靠右对齐输出
//靠左对齐前面加-号
//#include <stdio.h>
//
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("%d%8d%8d", a, b, c);
//    return 0;
//}


//第20题
//输入描述：
//一行,一个十六进制数a,和一个八进制数b,中间间隔一个空格。
//输出描述：
//一行,a+b的十进制结果。
//#include <stdio.h>
//
//int main()
//{
//    int a, b;
//    scanf("0x%x 0%o", &a, &b);
//    int sum = a + b;
//    printf("%d\n", sum);
//    return 0;
//}


//第21题
//给你两个整数,要求输出这两个整数的和
//输入描述：
//输入两个整数a,b(0<=a,b<=1000）
//输出描述：
//输出一个整数
//#include <stdio.h>
//
//int main()
//{
//    int num1, num2;
//    scanf("%d %d", &num1, &num2);
//    int sum = num1 + num2;
//    printf("%d\n", sum);
//    return 0;
//}


//第22题
//描述
//输入两个整数a, b, 输出a / b的值，只保留整数部分
//输入描述：
//输入两个整数, 在int范围内
//输出描述：
//输出一个整数
//#include <stdio.h>
//
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int chu = a / b;
//    printf("%d\n", chu);
//    return 0;
//}


//第23题
//描述
//输入两个整数a,b,输出a除以b的余数,5除以2的余数为1,10除以4的余数为2
//输入描述：
//输入两个整数,在int范围内
//输出描述：
//输出一个整数
//#include <stdio.h>
//
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int yu = a % b;
//    printf("%d\n", yu);
//    return 0;
//}


//第24题
//描述
//给定一个浮点数,要求得到该浮点数的个位数。
//数据范围：
//0<n≤200
//输入描述：
//一行,包括一个浮点数。
//输出描述：
//一行,包含一个整数,为输入浮点数对应的个位数。
//#include <stdio.h>
//
//int main()
//{
//    float a;
//    scanf("%f", &a);
//    int ge = (int)a % 10;
//    printf("%d\n", ge);
//    return 0;
//}


//第25题
//描述
//牛牛正在给他的朋友们买电影票，已知一张电影票价是100元，计算 x 位朋友的总票价是多少？
//输入描述：
//输入一个正整数 x ，表示牛牛的朋友个数
//输出描述：
//输出总票价 （牛牛不需要给自己买票）
//#include <stdio.h>
//
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int yuan = num * 100;
//    printf("%d\n", yuan);
//    return 0;
//}


//第26题
//描述
//给定两个整数a和b(0 < a, b < 10, 000)，计算a除以b的整数商和余数。
//输入描述：
//一行,包括两个整数a和b,依次为被除数和除数(不为零),中间用空格隔开。
//输出描述：
//一行,包含两个整数,依次为整数商和余数,中间用一个空格隔开。
//#include<stdio.h>
//
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int shang = a / b;
//    int yu = a % b;
//    printf("%d %d", shang, yu);
//    return 0;
//}


//第27题
//描述
//输入一个整数a, 求个位数
//输入描述：
//输入一个整数, 在int范围内
//输出描述：
//输出一个整数
//#include <stdio.h>
//
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int ge = num % 10;
//    printf("%d", ge);
//    return 0;
//}


//第28题
//描述
//输入一个整数a, 求十位数
//输入描述：
//输入一个整数, 在int范围内
//输出描述：
//输出一个整数
//#include <stdio.h>
//
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int shi = num / 10 % 10;
//    printf("%d\n", shi);
//    return 0;
//}


//第29题
//输入描述：
//输入包含两个数字X，N（1≤X≤7, 1≤N≤1000）。
//输出描述：
//输出一个数字，表示开学日期是星期几。
//1.输入：1 2 输出：3
//2.输入：5 9 输出：7
//#include <stdio.h>
//int main()
//{
//    int x, n;
//    scanf("%d %d", &x, &n);
//    int num = n % 7;
//    int num1 = num + x;
//    if (num1 > 7)
//    {
//        num1 = num1 - 7;
//    }
//    printf("%d\n", num1);
//    return 0;
//}


//第30题
//输入描述：
//一行,包括一个整数,即给定的秒数。
//输出描述：
//一行,包含三个整数,依次为输入整数对应的小时数、分钟数和秒数(可能为零)
//中间用一个空格隔开。
//#include <stdio.h>
//
//int main()
//{
//    int time = 0;
//    scanf("%d", &time);
//    int hour = time / 3600;
//    int minute = (time - 3600 * hour) / 60;
//    int miao = time - 3600 * hour - 60 * minute;
//    printf("%d %d %d", hour, minute, miao);
//    return 0;
//}


//第31题
//不使用累计乘法的基础上,通过移位运算(<<)实现2的n次方的计算。
//输入描述：
//一行输入整数n（0 <= n < 31）。
//输出描述：
//输出对应的2的n次方的结果。
//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	scanf("%d", &n);
//	n = 1 << n;
//	printf("%d\n", n);
//	return 0;
//}


//第32题
//描述
//问题：一年约有3.156×107s,要求输入您的年龄,显示该年龄合多少秒。
//输入描述：
//一行,包括一个整数age。
//输出描述：
//一行,包含一个整数,输出年龄对应的秒数
//#include <stdio.h>
//
//int main() 
//{
//    int age;
//    scanf("%d", &age);
//    long int miao = age * 3.156e7;
//    printf("%ld\n", miao);
//    return 0;
//}


//第33题
//描述
//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
//输入描述：
//两行
//第1行,正整数n(1≤n≤100)
//第2行,n科成绩(范围0.0~100.0),用空格分隔。
//输出描述：
//输出一行,三个浮点数,分别表示,最高分,最低分以及平均分(小数点后保留2位),用空格分隔。
//#include <stdio.h>
//int main()
//{
//    int num, i;
//    float avg = 0, most = 0.0, min = 100.0, grade = 0.0;
//    scanf("%d", &num);
//    for (i = 0; i < num; i++)
//    {
//        scanf("%f", &grade);
//        if (grade > most)
//        {
//            most = grade;
//        }
//        if (grade < min)
//        {
//            min = grade;
//        }
//        avg = avg + grade;
//    }
//    avg = avg / num;
//    printf("%.2f %.2f %.2f", most, min, avg);
//    return 0;
//}


//第34题
//描述
//根据给出的三角形3条边a,b,c,计算三角形的周长和面积。
//输入描述：
//一行,三角形3条边(能构成三角形),中间用一个空格隔开。
//输出描述：
//一行,三角形周长和面积(保留两位小数),中间用一个空格隔开。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int a, b, c;
//    float p = 0.0;
//    scanf("%d %d %d", &a, &b, &c);
//    float circumference = a + b + c;
//    p = circumference / 2.0;
//    double area = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("circumference=%.2f area=%.2f", circumference, area);
//    return 0;
//}


//第35题
//BoBo买了一箱酸奶,里面有n盒未打开的酸奶,KiKi喜欢喝酸奶,第一时间发现了酸奶。
//KiKi每h分钟能喝光一盒酸奶,并且KiKi在喝光一盒酸奶之前不会喝另一个
//那么经过m分钟后还有多少盒未打开的酸奶？
//输入描述：
//多组输入,每组输入仅一行,包括n,h和m(均为整数)。输入数据保证m <= n * h。
//输出描述：
//针对每组输入,输出也仅一行,剩下的未打开的酸奶盒数。
//#include <stdio.h>
//int main()
//{
//    int n, yu;
//    int m = 0, h = 0;
//    scanf("%d %d %d", &n, &h, &m);
//    if (m <= n * h)
//    {
//        if (m % h == 0)
//        {
//            yu = n - m / h;
//        }
//        else
//        {
//            yu = n - m / h - 1;
//        }
//    }
//    printf("%d", yu);
//    return 0;
//}


//第36题
//描述
//输入一个浮点数f,表示华氏温度,输出对应的摄氏温度c,c = 5/9*(f - 32)
//输入描述：
//输入一个浮点数f(1<=f<=100000)
//输出描述：
//输出浮点数,保留3位小数
//#include <stdio.h>
//int main()
//{
//    float f = 0.0, c = 0.0;
//    scanf("%f", &f);
//    c = 5.0 / 9 * (f - 32);
//    printf("%.3f", c);
//    return 0;
//}


//第37题
//牛牛有一个半径为r的圆,请你计算这个圆的面积。
//π取3.14
//输入描述：
//输入一个半径r
//输出描述：
//输出圆的面积
//#include <stdio.h>
//#include<math.h>
//#define PI 3.1415926
//int main()
//{
//    int r;
//    double s = 0.0;
//    scanf("%d", &r);
//    s = PI * pow(r, 2);
//    printf("%lf", s);
//    return 0;
//}


//第38题
//描述
//牛牛有一个阻值是r1和一个阻值r2的电阻,牛牛想知道这两个电阻并联后等效电阻是多少
//输入描述：
//输入r1和r2两个电阻的阻值
//输出描述：
//输出两个电阻并联后的等效电阻
//#include <stdio.h>
//
//int main()
//{
//    int r1, r2;
//    float R = 0.0;
//    scanf("%d %d", &r1, &r2);
//    R = 1.0 / (1.0 / r1 + 1.0 / r2);
//    printf("%.2f\n", R);
//    return 0;
//}


//第39题
//牛牛口渴了,要喝10升水才能解渴,但现在只有一个深h厘米,底面半径是r厘米的水杯
//牛牛最少要喝多少杯水才能解渴。
//输入描述：
//输入杯子的高度h,底面半径r。
//输出描述：
//输出牛牛最少要喝多少杯水
//#include <stdio.h>
//#include <math.h>
//#define PI 3.14
//int main()
//{
//    int h = 0, r = 0;
//    double s = 0.0;
//    int bei = 0;
//    scanf("%d %d", &h, &r);
//    s = PI * h * pow(r, 2);
//    bei = 10 * 1e3 / s;
//    if (10 / s == 1)
//    {
//        printf("%d\n", bei);
//    }
//    else
//    {
//        bei = bei + 1;
//        printf("%d\n", bei);
//    }
//    return 0;
//}


//第40题
//输入描述：
//输入等差数列的第一、二项 a ， b
//输出描述：
//输出等差数列第三项的值
//#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d", &a, &b);
//    b = a + 2 * (b - a);
//    printf("%d\n", b);
//    return 0;
//}


//第41题
//输入描述:
//输入球的半径
//输出描述:
//输出球的体积
//#include <stdio.h>
//#include<math.h>
//#define PI 3.14
//int main()
//{
//    int r;
//    float v = 0.0;
//    scanf("%d", &r);
//    v = 4 / 3.0 * PI * pow(r, 3);
//    printf("%.2f", v);
//    return 0;
//}


//第42题
//输入描述:
//输入现在的时刻以及要睡的时长k(单位：minute),中间用空格分开
//输入格式:
//hour:minute k(如hour或minute的值为1,输入为1,而不是01)
//(0≤hour≤23,0≤minute≤59,1≤k≤109)
//输出描述：
//对于每组输入,输出闹钟应该设定的时刻
//输出格式为标准时刻表示法(即时和分都是由两位表示,位数不够用前导0补齐)
//#include<stdio.h>
//int main()
//{
//	unsigned int hour = 0, minute = 0, second = 0;
//	scanf("%d:%d %d", &hour, &minute, &second);
//	hour = hour + (minute + second) / 60;
//	minute = (minute + second) % 60;
//	if(hour >= 24)
//	{
//		hour = hour % 24;
//	}
//	printf("%02d:%02d", hour, minute);
//}


//第43题
//小乐乐学校教学楼的电梯前排了很多人,他的前面有n个人在等电梯
//电梯每次可以乘坐12人,每次上下需要的时间为4分钟(上需要2分钟,下需要2分钟)
//请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上
//输入描述:
//输入包含一个整数n(0≤n≤109)
//输出描述:
//输出一个整数,即小乐乐到达楼上需要的时间。
//#include<stdio.h>
//int main()
//{
//	unsigned int n = 0, count = 0;
//	scanf("%d", &n);
//	if (n < 12)
//	{
//		printf("%d\n",2);
//	}
//	else
//	{
//		while (1)
//		{
//			count++;
//			n = n - 12;
//			if (n <= 12)
//			{
//				printf("%d\n", count * 4 + 2);
//				break;
//			}
//		}
//	}
//	return 0;
//}


//第44题
//描述
//小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数
//但是他竟然不会求两个正整数的最大公约数与最小公倍数之和
//请你帮助他解决这个问题。
//输入描述:
//每组输入包含两个正整数n和m。
//(1≤n≤109,1≤m≤109)
//输出描述:
//对于每组输入,输出一个正整数,为n和m的最大公约数与最小公倍数之和。
//#include<stdio.h>
//int main()
//{
//	long long m = 0, n = 0;
//	long long i = 0, b = 0, j = 0;
//	scanf("%lld %lld", &m, &n);
//	b = m * n;
//	//求m和n的最大公因数
//	if (m < n)
//	{
//		m = m + n;
//		n = m - n;
//		m = m - n;
//	}
//	while (n != 0)
//	{
//		i = m % n;
//		m = n;
//		n = i;
//	}
//	//求m和n的最小公倍数
//	j = b / m;
//	printf("%lld\n", m + j);
//	printf("m = %d\n", m);
//	printf("n = %d\n", j);
//	return 0;
//}


//第45题
//描述
//小乐乐喜欢数字,尤其喜欢0和1,他现在得到了一个数,想把每位的数变成0或1。
//如果某一位是奇数,就把它变成1,如果是偶数,那么就把它变成0。
//请你回答他最后得到的数是多少。
//输入描述:
//输入包含一个整数n(0≤n≤109)
//输出描述:
//输出一个整数,即小乐乐修改后得到的数字。
//#include<stdio.h>
//#include<math.h>
//int print(int n)
//{
//	int j = 0;
//	int i = 0;
//	while (n)
//	{
//		int x = n % 10;
//		if (x % 2 == 1)
//		{
//			x = 1;
//		}
//		else
//		{
//			x = 0;
//		}
//		j = x * pow(10, i) + j;
//		i++;
//		n = n / 10;
//	}
//	return j;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = print(num);
//	printf("%d\n", ret);
//	return 0;
//}


//第46题
//KiKi这学期努力学习程序设计基础,要期末考试了,BoBo老师告诉他,总成绩包括四个部分,如下：
//总成绩=实验成绩*20%+课堂表现成绩*10%+过程考核成绩*20%+期末上机考试成绩*50%
//现在输入KiKi的各项成绩,请计算KiKi的总成绩。
//输入描述:
//一行,包括四个整数(百分制)
//用空格分隔,分别表示实验成绩,课堂表现成绩,过程考核成绩,期末上机考试成绩
//输出描述:
//一行,总成绩,保留小数点一位。
//#include<stdio.h>
//int main()
//{
//	int score1 = 0;
//	int score2 = 0;
//	int score3 = 0;
//	int score4 = 0;
//	scanf("%d %d %d %d", &score1, &score2, &score3, &score4);
//	float score = 0.2 * score1 + 0.1 * score2 + 0.2 * score3 + 0.5 * score4;
//	printf("%.1f", score);
//	return 0;
//}


//第47题
//描述
//这是一个非常简单的题目,意在考察你编程的基础能力。千万别想难了哦。
//输入为一行,包括了用空格分隔的四个整数a、b、c、d(0<a,b,c,d<100,000)
//输出为一行,为"(a + b - c) * d"的计算结果。
//输入描述:
//输入为一行,用空格分隔的四个整数a、b、c、d(0<a,b,c,d<100,000)
//输出描述:
//输出为一行,为"(a+b-c)*d"的计算结果。
//#include <stdio.h>
//
//int main()
//{
//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    printf("%d\n", (a + b - c) * d);
//    return 0;
//}


//第48题
//输出线段的长度的平方
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int a, b, c, d;
//    scanf("%d %d", &a, &b);
//    scanf("%d %d", &c, &d);
//    int s = pow(a - c, 2) + pow(d - b, 2);
//    printf("%d\n", s);
//    return 0;
//}


//第49题
//描述
//问题:KiKi今年5岁了,已经能够认识100以内的非负整数
//并且并且能够进行100以内的非负整数的加法计算。
//不过,BoBo老师发现KiKi在进行大于等于100的正整数的计算时,规则如下:
//只保留该数的最后两位。例如:对KiKi来说1234等价于34
//如果计算结果大于等于100,那么KiKi也仅保留计算结果的最后两位
//如果此两位中十位为0,则只保留个位。
//例如：45 + 80 = 25
//要求给定非负整数a和b,模拟KiKi的运算规则计算出a+b的值。
//#include<stdio.h>
//int main()
//{
//	unsigned int c, d;
//	int i = 0;
//	scanf("%d %d", &c, &d);
//	c = c % 100 + d % 100;
//	if (c >= 100)
//	{
//		c = c % 100;
//	}
//	printf("%d\n", c);
//	return 0;
//}


//第50题
//据说智商140以上者称为天才,KiKi想知道他自己是不是天才,请帮他编程判断。
//输入一个整数表示一个人的智商,如果大于等于140,则表明他是一个天才,输出"Genius"
//输入描述：
//多组输入,每行输入包括一个整数表示的智商
//输出描述：
//针对每行输入,输出"Genius"
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	while(scanf("%d", &num) != EOF)
//	{
//		if (num >= 140)
//		{
//			printf("Genius\n");
//		}
//	}
//	return 0;
//}


//第51题
//描述
//KiKi想知道他的考试分数是否通过,请帮他判断。
//从键盘任意输入一个整数表示的分数,编程判断该分数是否在及格范围内,如果及格
//即:分数大于等于60分,是输出"Pass",否则,输出"Fail"
//输入描述:
//多组输入,每行输入包括一个整数表示的分数(0~100)。
//输出描述:
//针对每行输入,输出"Pass"或"Fail"。
//#include <stdio.h>
//int main()
//{
//    int score = 0;
//    while (scanf("%d", &score) != EOF)
//    {
//        if (score >= 0 && score <= 100)
//        {
//            if (score >= 60)
//            {
//                printf("Pass\n");
//            }
//            else
//            {
//                printf("Fail\n");
//            }
//        }
//    }
//    return 0;
//}


//第52题
//描述
//KiKi想知道一个整数的奇偶性,请帮他判断。
//从键盘任意输入一个整数(范围-231~231-1),编程判断它的奇偶性。
//输入描述:
//多组输入,每行输入包括一个整数。
//输出描述:
//针对每行输入,输出该数是奇数(Odd)还是偶数(Even)
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", num);
//	if (num % 2 == 0)
//	{
//		printf("偶数\n");
//	}
//	else
//	{
//		printf("奇数\n");
//	}
//	return 0;
//}


//第53题
//描述
//KiKi开始学习英文字母
//BoBo老师告诉他,有五个字母A(a),E(e),I(i),O(o),U(u)称为元音
//其他所有字母称为辅音
//请帮他编写程序判断输入的字母是元音(Vowel)还是辅音(Consonant)。
//输入描述:
//多组输入,每行输入一个字母。
//输出描述:
//针对每组输入,输出为一行,如果输入字母是元音(包括大小写),输出"Vowel"
//如果输入字母是非元音,输出"Consonant"
//输入:A
//b
//输出:Vowel
//Consonant
//#include<stdio.h>
//#include<string.h>
//int main() {
//    char arr1 = 'a';
//    char arr2[] = { 'A', 'a', 'e', 'E', 'I', 'i', 'O', 'o', 'U', 'u' };
//    while (scanf("%c", &arr1) != EOF) {
//        if (arr1 == '\n') 
//        {
//            continue;
//        }
//        int i = 0;
//        int flag = 0;
//        for (i = 0; i < 10; i++) 
//        {
//            if (arr1 == arr2[i]) 
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 1) {
//            printf("Vowel\n");
//        }
//        else {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}


//第54题
//输入描述：
//依次输入x,l,r三个整数。用空格隔开。
//输出描述：
//如果存在l≤x≤r则输出true,否则输出false
//#include<stdio.h>
//int is_in_two(int j, int k, int l)
//{
//	if (j >= k && j <= l)
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
//	int x, l, r;
//	scanf("%d %d %d", &x, &l, &r);
//	if (l > r)
//	{
//		l = l + r;
//		r = l - r;
//		l = l - r;
//	}
//	int ret = is_in_two(x, l, r);
//	if (ret)
//	{
//		printf("true\n");
//	}
//	else
//	{
//		printf("false\n");
//	}
//	return 0;
//}


//第55题
//判断闰年
//#include<stdio.h>
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
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