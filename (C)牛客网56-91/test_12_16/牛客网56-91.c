#define _CRT_SECURE_NO_WARNINGS 1 
//https://www.nowcoder.com/exam/oj?questionJobId=10&subTabName=online_coding_page
//第56题
//描述
//从键盘任意输入一个字符，编程判断是否是字母(包括大小写)
//输入描述:
//输入包括一个字符。
//输出描述:
//输出该字符是字母(YES)或不是(NO)
//#include<stdio.h>
//int is_letter(char a,char* b)
//{
//	int j = 0;
//	for (j = 0;j <= 51;j++)
//	{
//		if (a == b[j])
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1;
//	scanf("%c", &arr1);
//	char arr2[52] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 65;i <= 90;i++)
//	{
//		arr2[j] = (char)i;
//		j++;
//	}
//	j = 26;
//	for (i = 97;i <= 122;i++)
//	{
//		arr2[j] = (char)i;
//		j++;
//	}
//	int ret = is_letter(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}


//第57题
//输入描述：
//输入的数据格式是固定的YYYYMM的形式,即:年份占4个数位,月份占2个数位。
//输出描述:
//输出月份对应的季节(用英文单词表示,全部用小写字母)。
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%4d%2d", &year, &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("spring\n");
//	}
//	else if (month >= 6 && month <= 8)
//	{
//		printf("summer\n");
//	}
//	else if (month >= 9 && month <= 11)
//	{
//		printf("autumn\n");
//	}
//	else
//	{
//		printf("winter\n");
//	}
//	return 0;
//}


//第58题
//BMI指数(即身体质量指数)是用体重公斤数除以身高米数平方得出的数字
//国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。
//例如:一个人的身高为1.75米,体重为68千克,他的BMI=68/(1.75^2)=22.2(千克/米^2)
//当BMI指数为18.5～23.9时属正常,否则表示身体存在健康风险。
//输入描述:
//一行,输入一个人的体重(千克)和身高(米),中间用一个空格分隔。
//输出描述:
//一行,输出身体Normal(正常)或Abnormal(不正常)。
//#include <stdio.h>
//#include<math.h>
//int is_BMI(int x)
//{
//    if (x >= 18.5 && x <= 23.9)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//int main()
//{
//    float weight = 0;
//    float high = 0;
//    scanf("%f %f", &weight, &high);
//    float BMI = weight / pow(high, 2);
//    int ret = is_BMI(BMI);
//    if (ret == 1)
//    {
//        printf("Normal\n");
//    }
//    else {
//        {
//            printf("Abnormal\n");
//        }
//    }
//    return 0;
//}


//第59题
//小乐乐获得4个最大数,请帮他编程找到最大的数。
//输入描述:
//一行,4个整数,用空格分开。
//输出描述:
//一行,一个整数,为输入的4个整数中最大的整数。
//#include <stdio.h>
//int is_MAX(int* x)
//{
//    int i = 0;
//    //int j = 0;
//    for (i = 0;i < 4;i++)
//    {
//        if (x[0] <= x[i])
//        {
//            x[0] = x[i];
//        }
//    }
//    return x[0];
//    //4 3 2 1
//}
//int main() {
//    
//    int i = 0;
//    int arr[4] = { 0 };
//    for (i = 0;i < 4;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int ret = is_MAX(arr);
//    printf("%d\n", ret);
//    return 0;
//}


//第60题
//输入描述:
//多组输入,每一行输入一个字符。
//输出描述:
//针对每组输入,输出单独占一行,判断输入字符是否为字母，
//#include <stdio.h>
//
//int is_letter(char a, char* b)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0;i <= 52;i++)
//    {
//        if (a == b[i])
//        {
//            return 1;
//        }
//    }
//    return 0;
//}
//int main() {
//    char arr1;
//    while (scanf("%c", &arr1) != EOF)
//    {
//        //清除输入缓冲区
//        if (arr1 == '\n')
//        {
//            continue;
//        }
//        int i = 0;
//        int j = 0;
//        char arr2[52] = { 0 };
//        for (i = 65;i <= 90;i++)
//        {
//            arr2[j] = (char)i;
//            j++;
//        }
//        j = 26;
//        for (i = 97;i <= 122;i++)
//        {
//            arr2[j] = (char)i;
//            j++;
//        }
//        int ret = is_letter(arr1, &arr2);
//        if (ret == 1)
//        {
//            printf("%c is an alphabet.\n", arr1);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", arr1);
//        }
//    }
//    return 0;
//}


//第61题
//牛牛从键盘输入一个整数,请你判断这个整数能被2 3 7中哪几个数整除,并按升序输出。
//如果不能被 2 3 7 任意一个数整除则输出n。
//输入描述:
//输入一个整数
//输出描述:
//输出能被2 3 7 哪几个数整除,并按升序输出。
//#include <stdio.h>
//int* is_divide_exactly(int n)
//{
//    int arr1[3] = { 2,3,7 };
//    static int arr2[3] = { 0 };
//    int i = 0;
//    int j = 0;
//    int flag = 0;
//    for (i = 0;i < 3;i++)
//    {
//        if (n % arr1[i] == 0)
//        {
//            arr2[j] = arr1[i];
//            j++;
//            flag = 1;
//        }
//    }
//    if (flag == 1)
//    {
//        return arr2;
//    }
//    return 0;
//}
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int k = 0;
//    int* ret = is_divide_exactly(num);
//    if (ret != 0)
//    {
//        for (k = 0;k < 3;k++)
//        {
//            if (ret[k] == 0)
//            {
//                continue;
//            }
//            printf("%d ", ret[k]);
//        }
//    }
//    else
//    {
//        printf("n");
//    }
//    return 0;
//}


//第62题
//描述
//输入10个整数,分别统计输出正数、负数的个数。
//输入描述:
//输入10个整数(范围-231~231-1),用空格分隔。
//输出描述:
//两行,第一行正数个数,第二行负数个数,具体格式见样例。
//#include <stdio.h>
//int is_zheng(int* arr1)
//{
//    int i = 0;
//    int count = 0;
//    int flag = 0;
//    for (i = 0;i < 10;i++)
//    {
//        if (arr1[i] > 0)
//        {
//            count++;
//            flag = 1;
//        }
//    }
//    if (flag == 1)
//    {
//        return count;
//    }
//    else {
//        return 0;
//    }
//}
//int main() {
//    int arr1[10] = { 0 };
//    int i = 0;
//    for (i = 0;i < 10;i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    int ret = is_zheng(&arr1);
//    printf("positive:%d\nnegative:%d", ret, 10 - ret);
//    return 0;
//}


//第63题
//描述
//KiKi非常喜欢网购,在一家店铺他看中了一件衣服
//今天是"双十一"(11月11日)则这件衣服打7折
//今天是"双十二"(12月12日)则这件衣服打8折
//如果有优惠券可以额外减50元(优惠券只能在双11或双12使用),求KiKi最终所花的钱数。
//输入描述:
//一行,四个数字,
//第一个数表示小明看中的衣服价格
//第二和第三个整数分别表示当天的月份、当天的日期。
//第四个整数表示是否有优惠券(有优惠券用1表示,无优惠券用0表示) 
//注:输入日期保证只有"双十一"和"双十二"。
//输出描述:
//一行,小明实际花的钱数(保留两位小数)
//(提示:不要指望商家倒找你钱)
//#include <stdio.h>
//float is_cost(float c, int m, int d, int f)
//{
//    float cost = 0;
//    int flag = 0;
//    if (m == 11 && d == 11)
//    {
//        flag = 1;
//        if (f == 0)
//            cost = c * 0.7;
//        else
//            cost = c * 0.7 - 50;
//    }
//    else if (m == 12 && d == 12)
//    {
//        flag = 1;
//        if (f == 0)
//            cost = c * 0.8;
//        else
//            cost = c * 0.8 - 50;
//    }
//    if (flag == 1)
//    {
//        return cost;
//    }
//    else {
//        return c;
//    }
//}
//int main()
//{
//    float cloth = 0;
//    int month = 0;
//    int date = 0;
//    int free = 0;
//    scanf("%f %d %d %d", &cloth, &month, &date, &free);
//    float ret = is_cost(cloth, month, date, free);
//    if (ret < 0)
//    {
//        ret = 0;
//    }
//    printf("%.2f\n", ret);
//    return 0;
//}


//第64题
//描述
//牛牛正在寄快递
//快递在1kg以内的按起步价20元计算,超出部分按每kg1元计算,不足1kg部分按1kg计算。
//如果加急的话要额外付五元,请问牛牛总共要支付多少快递费
//输入描述:
//第一行输入一个单精度浮点数a和一个字符b
//a表示牛牛要寄的快递的重量,b表示牛牛是否选择加急,'y'表示加急,'n'表示不加急。
//输出描述:
//输出牛牛总共要支付的快递费用
//#include <stdio.h>
//
//int is_sent(float x, char n) 
//{
//    int cost = 0;
//    if (x <= 1) 
//    {
//        if (n == 'y')
//        {
//            cost = 25;
//        }
//        else 
//        {
//            cost = 20;
//        }
//    }
//    else 
//    {
//        if (n == 'y') 
//        {
//            if (x - (int)x == 0) 
//            {
//                cost = 25 + (x - 1) * 1;
//            }
//            else 
//            {
//                cost = 25 + x;
//            }
//        }
//        else 
//        {
//            if (x - (int)x == 0) 
//            {
//                cost = 20 + (x - 1) * 1;
//            }
//            else 
//            {
//                cost = 20 + x;
//            }
//        }
//    }
//    return cost;
//}
//int main() 
//{
//    float weight = 0.0;
//    char a;
//    scanf("%f %c", &weight, &a);
//    int cost = is_sent(weight, a);
//    printf("%d\n", cost);
//    return 0;
//}


//第65题
//牛牛商场促销活动:
//满100打9折;
//满500打8折;
//满2000打7折;
//满5000打6折;
//牛阿姨算不清楚自己应该付多少钱,请你帮忙算一下
//输入描述:
//牛阿姨购买商品打折前的总金额
//输出描述:
//参加活动后,牛阿姨购买商品应付金额。(保留小数点后1位)
//#include <stdio.h>
//
//float cost(int n)
//{
//    int cost = 0;
//    if (n < 100)
//    {
//        cost = n;
//    }
//    else if (n >= 100 && n < 500)
//    {
//        cost = n * 0.9;
//    }
//    else if (n >= 500 && n < 2000)
//    {
//        cost = n * 0.8;
//    }
//    else if (n >= 2000 && n < 5000)
//    {
//        cost = n * 0.7;
//    }
//    else {
//        cost = n * 0.6;
//    }
//    return cost;
//}
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    float ret = cost(num);
//    printf("%.2f", ret);
//    return 0;
//}


//第66题
//牛牛的通勤路上有两种选择,要么走路,要么打车,牛牛走路的速度是1m/s。
//打车的速度的10m/s,但是打车需要等出租车10s,请你计算牛牛想尽快到公司应该选择打车还是走路。
//输入描述：
//输入一个正整数,表示牛牛到公司的距离。
//输出描述：
//输出牛牛想尽可能快到公司应该选择打车还是走路,走路的话输出w,打车的输出v。
//保证答案一定不会出现两个方案时间一样的情况。
//#include <stdio.h>
//int is_car(num)
//{
//    int time1 = 0;
//    int time2 = 0;
//    time1 = num / 1;
//    time2 = num / 10 + 10;
//    if (time1 > time2)
//    {
//        return 1;
//    }
//    else 
//    {
//        return 0;
//    }
//}
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int ret = is_car(num);
//    if (ret == 1)
//    {
//        printf("v\n");
//    }
//    else 
//    {
//        printf("w\n");
//    }
//    return 0;
//}


//第67题
//描述
//牛牛尝试在蒙住眼睛的情况下拿到旁边的金币
//假设的坐标是(x,y),金币的坐标是(x1,y1),金币一定在牛牛在周围,即请你判断牛牛应该往哪个方向伸手。
//输入描述:
//第一行输入x,y表示牛牛的坐标。
//第二行输入x1,y1表示金币的坐标。
//输出描述:
//输出牛牛应该往哪个方向伸手。
//例:
//(x,y)=(0,0)(x1,y1)=(0,1),则牛牛向上伸手,输出'u'。
//(x,y)=(0,0)(x1,y1)=(0,-1),则牛牛向下伸手,输出'd'。
//(x,y)=(0,0)(x1,y1)=(1,0),则牛牛向右伸手,输出'r'。
//(x,y)=(0,0)(x1,y1)=(-1,0),则牛牛向左伸手,输出'l'。
//#include <stdio.h>
//void put_hand(int arr1[], int arr2[])
//{
//    if (arr1[0] == arr2[0] && arr1[1] > arr2[1])
//    {
//        printf("d\n");
//    }
//    else if (arr1[0] == arr2[0] && arr1[1] < arr2[1])
//    {
//        printf("u\n");
//    }
//    else if (arr1[0] > arr2[0] && arr1[1] == arr2[1])
//    {
//        printf("l\n");
//    }
//    else
//    {
//        printf("r\n");
//    }
//}
//int main()
//{
//    int arr1[3] = { 0 };
//    int arr2[3] = { 0 };
//    int i = 0;
//    for (i = 0; i < 2; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < 2; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    put_hand(arr1, arr2);
//    return 0;
//}


//第68题
//描述
//牛牛的一周有七天,从周一到周日对应的英文是
//星期一:Monday
//星期二:Tuesday
//星期三:Wednesday
//星期四:Thursday
//星期五:Friday
//星期六:Saturday
//星期日:Sunday
//牛牛知道今天是星期几,请输出这天的英文
//输入描述:
//输入今天是星期几
//输出描述:
//输出对应的英文
//#include <stdio.h>
//void week(int day)
//{
//    switch (day)
//    {
//    case 1:
//        printf("Monday\n");
//        break;
//    case 2:
//        printf("Tuesday\n");
//        break;
//    case 3:
//        printf("Wednesday\n");
//        break;
//    case 4:
//        printf("Thursday\n");
//        break;
//    case 5:
//        printf("Friday\n");
//        break;
//    case 6:
//        printf("Saturday\n");
//        break;
//    case 7:
//        printf("Sunday\n");
//        break;
//    }
//}
//int main() 
//{
//    int day = 0;
//    scanf("%d", &day);
//    week(day);
//    return 0;
//}


//第69题
//描述
//KiKi访问网站,得到HTTP状态码,但他不知道什么含义,
//BoBo老师告诉他常见HTTP状态码:200(OK,请求已成功),202(Accepted,服务器已接受请求,但尚未处理)
//400(Bad Request,请求参数有误),403(Forbidden,被禁止),404(Not Found,请求失败)
//500(Internal Server Error,服务器内部错误),502(Bad Gateway,错误网关)
//输入描述:
//多组输入,一行,一个整数(100~600),表示HTTP状态码。
//输出描述:
//针对每组输入的HTTP状态,输出该状态码对应的含义,具体对应如下:
//200 - OK
//202 - Accepted
//400 - Bad Request
//403 - Forbidden
//404 - Not Found
//500 - Internal Server Error
//502 - Bad Gateway
//#include <stdio.h>
//void HTTP(int num)
//{
//    if (num == 200)
//    {
//        printf("OK\n");
//    }
//    else if (num == 202)
//    {
//        printf("Accepted\n");
//    }
//    else if (num == 400)
//    {
//        printf("Bad Request\n");
//    }
//    else if (num == 403)
//    {
//        printf("Forbidden\n");
//    }
//    else if (num == 404)
//    {
//        printf("Not Found\n");
//    }
//    else if (num == 500)
//    {
//        printf("Internal Server Error\n");
//    }
//    else
//    {
//        printf("Bad Gateway\n");
//    }
//}
//int main() 
//{
//    int num;
//    while (scanf("%d", &num) != EOF)
//    {
//        HTTP(num);
//    }
//    return 0;
//}


//第70题
//描述
//KiKi最近学习了信号与系统课程,这门课里有一个非常有趣的函数,单位阶跃函数,其中一种定义方式为:
//当t > 0,值为1, 当t = 0, 值为0.5, 当t < 0, 值为0,
//现在试求单位冲激函数在时域t上的值。
//输入描述:
//题目有多组输入数据,每一行输入一个t(-1000)
//输出描述:
//输出函数的值并换行。
//#include <stdio.h>
//void is_jie(int num)
//{
//    if (num > 0)
//    {
//        printf("1\n");
//    }
//    else if (num == 0)
//    {
//        printf("0.5\n");
//    }
//    else {
//        printf("0\n");
//    }
//}
//int main()
//{
//    int num;
//    while (scanf("%d", &num) != EOF) 
//    {
//        is_jie(num);
//    }
//    return 0;
//}


//第71题
//描述
//KiKi想知道已经给出的三条边a,b,c能否构成三角形
//如果能构成三角形,判断三角形的类型(等边三角形、等腰三角形或普通三角形)
//输入描述:
//题目有多组输入数据,每一行输入三个a,b,c(0<a,b,c<1000),作为三角形的三个边,用空格分隔。
//输出描述:
//针对每组输入数据,输出占一行
//如果能构成三角形,等边三角形则输出"Equilateral triangle!"
//等腰三角形则输出"Isosceles triangle!",其余的三角形则输出"Ordinary triangle!"
//反之输出"Not a triangle!"
//#include <stdio.h>
//
//void is_san(int a, int b, int c) 
//{
//    if ((a + b > c) && (a + c > b) && (b + c > a)) 
//    {
//        if ((a == b) && (a == c) && (b == c)) 
//        {
//            printf("Equilateral triangle!\n");
//        }
//        else if (a == b || b == c || a == c) 
//        {
//            printf("Isosceles triangle!\n");
//        }
//        else 
//        {
//            printf("Ordinary triangle!\n");
//        }
//    }
//    else 
//    {
//        printf("Not a triangle!\n");
//    }
//}
//int main() 
//{
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) 
//    {
//        is_san(a, b, c);
//    }
//    return 0;
//}


//第72题
//描述
//牛牛有一个学习计划,他计划在y年m月d日开始学习
//但在之前他是绝不会开始学习的,但是他一旦开始学习就不会停下来
//请你判断y1年m1月d1日牛牛应该学习吗。
//输入描述:
//第一行输入y,m,d,即牛牛计划开始学习的时间。
//第二行输入y1,m1,d1即询问的时间。
//输出描述:
//请你判断牛牛是否开始学习。
//如果是则输出yes,否则输出no
//#include <stdio.h>
//int is_study(int arr1[], int arr2[])
//{
//    if (arr1[0] < arr2[0])
//    {
//        return 1;
//    }
//    else if (arr1[0] == arr2[0] && arr1[1] < arr2[1])
//    {
//        return 1;
//    }
//    else if (arr1[0] == arr2[0] && arr1[1] == arr2[1] && arr1[2] <= arr2[2])
//    {
//        return 1;
//    }
//    return 0;
//}
//
//int main() {
//    int arr1[3] = { 0 };
//    int arr2[3] = { 0 };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    int ret = is_study(arr1, arr2);
//    if (ret == 1)
//    {
//        printf("yes\n");
//    }
//    else
//    {
//        printf("no\n");
//    }
//
//    return 0;
//}


//第73题
//多组输入,一行,包含三个浮点数a,b,c,以一个空格分隔,表示一元二次方程ax2+bx+c=0的系数。
//输出描述:
//针对每组输入,输出一行,输出一元二次方程ax2+bx+c=0的根的情况。
//如果a=0,输出"Not quadratic equation"
//如果a≠0,分三种情况:
//△=0,则两个实根相等,输出形式为:x1=x2=...
//△>0,则两个实根不等,输出形式为:x1=...;x2=...,其中x1<=x2
//△<0,则有两个虚根,则输出:x1=实部-虚部i;x2=实部+虚部i
//即x1的虚部系数小于等于x2的虚部系数,实部为0时不可省略。
//实部=-b/(2*a),虚部=sqrt(-△)/(2*a)
//所有实数部分要求精确到小数点后2位,数字、符号之间没有空格。
//#include <stdio.h>
//#include<math.h>
//void is_fang(float a, float b, float c) 
//{
//    float result = 0;
//    if (a == 0) 
//    {
//        printf("Not quadratic equation\n");
//    }
//    else if (a != 0 && pow(b, 2) - 4 * a * c == 0) 
//    {
//        result = ((-1) * b) / (2 * a);
//        if (result == 0)
//        {
//            printf("x1=x2=0.00\n");
//        }
//        else 
//        {
//            printf("x1=x2=%.2f\n", result);
//        }
//    }
//    else if (a != 0 && pow(b, 2) - 4 * a * c > 0) 
//    {
//        float result1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
//        float result2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
//        printf("x1=%.2f;x2=%.2f\n", result2, result1);
//    }
//    else 
//    {
//        float x1 = -b / (2 * a);
//        float x2 = (sqrt(4 * a * c - pow(b, 2))) / (2 * a);
//        printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", x1, x2, x1, x2);
//    }
//}
//int main() 
//{
//    float a, b, c;
//    while (scanf("%f %f %f", &a, &b, &c) != EOF) 
//    {
//        is_fang(a, b, c);
//    }
//    return 0;
//}


//第74题
//描述
//KiKi想获得某年某月有多少天,请帮他编程实现。
//输入年份和月份,计算这一年这个月有多少天。
//输入描述:
//多组输入,一行有两个整数,分别表示年份和月份,用空格分隔。
//输出描述:
//针对每组输入,输出为一行,一个整数,表示这一年这个月有多少天。
//#include <stdio.h>
//void day(int year, int month)
//{
//    int arr1[7] = { 1,3,5,7,8,10,12 };
//    int arr2[4] = { 4,6,9,11 };
//    int i = 0;
//    int j = 0;
//    for (i = 0;i < 7;i++)
//    {
//        if (month == arr1[i])
//        {
//            printf("31\n");
//            break;
//        }
//    }
//    for (j = 0;j < 4;j++)
//    {
//        if (month == arr2[j])
//        {
//            printf("30\n");
//            break;
//        }
//    }
//    if (month == 2)
//    {
//        if (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)))
//        {
//            printf("29\n");
//        }
//        else {
//            printf("28\n");
//        }
//    }
//}
//int main() {
//    int year, month;
//    while (scanf("%d %d", &year, &month) != EOF) {
//        day(year, month);
//    }
//    return 0;
//}


//第75题
//描述
//小乐乐的班级进行了一次期中考试
//考试一共有3门科目:数学,语文,英语
//小乐乐的班主任决定给没有通过考核的同学家长开一次家长会
//考核的标准是三科平均分不低于60分,所以现在想请你帮忙算一算小乐乐会不会被叫家长。
//输入描述:
//一行,输入三个整数(表示小乐乐的数学、语文、英语的成绩)用空格分隔。
//输出描述:
//一行,如果小乐乐会被请家长则输出"YES",否则输出"NO"。
//#include <stdio.h>
//int study(int* arr)
//{
//    int i = 0;
//    int sum = 0;
//    for (i = 0;i < 3;i++)
//    {
//        sum += arr[i];
//    }
//    if (sum / 3 < 60)
//    {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//int main() {
//    int arr[3] = { 0 };
//    int i = 0;
//    for (i = 0;i < 3;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int ret = study(arr);
//    if (ret == 1)
//    {
//        printf("YES\n");
//    }
//    else {
//        printf("NO\n");
//    }
//    return 0;
//}


//第76题
//描述
//每一本正式出版的图书都有一个ISBN号码与之对应
//ISBN码包括9位数字、1位识别码和3位分隔符
//其规定格式如"x-xxx-xxxxx-x", 其中符号"-"是分隔符(键盘上的减号)
//最后一位是识别码, 例如0 - 670 - 82162 - 4就是一个标准的ISBN码。
//ISBN码的首位数字表示书籍的出版语言, 例如0代表英语
//第一个分隔符"-"之后的三位数字代表出版社, 例如670代表维京出版社
//第二个分隔之后的五位数字代表该书在出版社的编号;最后一位为识别码。
//识别码的计算方法如下:
//首位数字乘以1加上次位数字乘以2……
//以此类推, 用所得的结果mod 11, 所得的余数即为识别码
//如果余数为10, 则识别码为大写字母X。
//例如ISBN号码0 - 670 - 82162 - 4中的识别码4是这样得到的
//对067082162这9个数字, 从左至右, 分别乘以1, 2, …, 9,
//再求和, 即0×1 + 6×2 + …… + 2×9 = 158, 然后取158 mod 11的结果4作为识别码。
//你的任务是编写程序判断输入的ISBN号码中识别码是否正确
//如果正确,则仅输出"Right";如果错误, 则输出你认为是正确的ISBN号码。
//输入描述:
//只有一行,是一个字符序列
//表示一本书的ISBN号码(保证输入符合ISBN号码的格式要求)
//输出描述:
//共一行,假如输入的ISBN号码的识别码正确,那么输出"Right"
//否则,按照规定的格式,输出正确的ISBN号码(包括分隔符"-")。
//#include <stdio.h>
//int main() 
//{
//    char arr[13] = { 0 };
//    int i = 0;
//    int j = 1;
//    for (i = 0; i < 13; i++) 
//    {
//        scanf("%c", &arr[i]);
//    }
//    int sum = 0;
//    for (i = 0; i < 11; i++) 
//    {
//        if (arr[i] == '-') 
//        {
//            continue;
//        }
//        sum = (arr[i] - '0') * j + sum;
//        j++;
//    }
//    sum = sum % 11;
//    if (sum == 10 && arr[12] != 'X')
//    {
//        for (i = 0; i < 12; i++) 
//        {
//            printf("%c", arr[i]);
//        }
//        printf("X\n");
//    }
//    else if (sum != (arr[12] - '0') && sum != 10) 
//    {
//        for (i = 0; i < 12; i++) 
//        {
//            printf("%c", arr[i]);
//        }
//        printf("%d\n", sum);
//    }
//    else 
//    {
//        printf("Right\n");
//    }
//    return 0;
//}


//第77题
//描述
//KiKi实现一个简单计算器,实现两个数的"加减乘除"运算
//用户从键盘输入算式"操作数1运算符操作数2",计算并输出表达式的值
//如果输入的运算符号不包括在(+、-、*、/)范围内,输出"Invalid operation!"。
//当运算符为除法运算,即"/"时。
//如果操作数2等于0.0,则输出"Wrong!Division by zero!"
//保证运算符是一个char类型字符。
//输入描述:
//输入一行字符串,操作数1+运算符+操作数2(其中合法的运算符包括:+、-、*、/)
//输出描述:
//输出为一行。
//如果操作数和运算符号均合法,则输出一个表达式
//操作数1运算符操作数2=运算结果,各数小数点后均保留4位,数和符号之间没有空格
//#include<stdio.h>
//void calculate(double num1, char a, double num2) {
//    char arr1[4] = { '+', '-', '*', '/' };
//    int i = 0;
//    double sum = 0;
//    int flag = 0;
//    for (i = 0; i < 4; i++) {
//        if (a != arr1[i]) {
//            flag++;
//        }
//    }
//    if (flag > 3) {
//        printf("Invalid operation!\n");
//    }
//    if (num2 == 0.0) {
//        printf("Wrong!Division by zero!\n");
//    }
//    if (a == '/' && num2 != 0) {
//        sum = num1 / num2;
//        printf("%.4f/%.4f=%.4f\n", num1, num2, sum);
//    }
//    else if (a == '+') {
//        sum = num1 + num2;
//        printf("%.4f+%.4f=%.4f\n", num1, num2, sum);
//    }
//    else if (a == '-') {
//        sum = num1 - num2;
//        printf("%.4f-%.4f=%.4f\n", num1, num2, sum);
//    }
//    if (a == '*') {
//        sum = num1 * num2;
//        // float round = (int)(sum * 10+5) /10.0;
//        printf("%.4f*%.4f=%.4f\n", num1, num2, sum);
//    }
//}
//int main() 
//{
//    double num1 = 0;
//    char a = 0;
//    double num2 = 0;
//    scanf("%lf%c%lf", &num1, &a, &num2);
//    calculate(num1, a, num2);
//}


//第78题
//描述
//2020年来到了,KiKi要对他的n位好朋友说n遍"Happy new year!Good luck!"的祝福语。
//输入描述:
//输入只有一行,其中含有一个正整数n(1≤n≤20),代表KiKi说祝福话的遍数。
//输出描述:
//输出n行"Happy new year!Good luck!"。
//#include <stdio.h>
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int i = 0;
//    for (i = 0;i < num;i++)
//    {
//        printf("Happy new year!Good luck!\n");
//    }
//    return 0;
//}


//第79题
//输入描述:
//输入一个正整数n(1≤n≤109)
//输出描述:
//输出一个值,为求和结果
//#include <stdio.h>
//int main() 
//{
//    long long num = 0;
//    scanf("%lld", &num);
//    int i = 0;
//    long long sum = 0;
//    for (i = 1; i <= num; i++) 
//    {
//        sum = sum + i;
//    }
//    printf("%lld\n", sum);
//    return 0;
//}


//第80题
//描述
//任意输入一个正整数N,统计1~N之间奇数的个数和偶数的个数,并输出。
//输入描述:
//一行,一个正整数N。(1≤N≤100,000)
//输出描述:
//一行,1~N之间奇数的个数和偶数的个数,用空格分开。
//#include <stdio.h>
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int i = 1;
//    int count = 0;
//    for (i = 1;i <= num;i++)
//    {
//        if (i % 2 == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d %d", count, num - count);
//    return 0;
//}


//第81题
//KiKi知道了什么是质数(只能被1和他自身整除的数)
//他现在想知道所有三位整数中，有多少个质数。
//输入描述:
//无
//输出描述:
//一行,一个整数,表示所有三位整数中,有多少个质数
//方法一:
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100;i <= 999;i++)
//    {
//        int j = 0;
//        for (j = 2;j < i - 1;j++)
//        {
//            if (i % j == 0)
//            {
//                count++;
//                break;
//            }
//        }
//    }
//    printf("%d\n", 900 - count);
//    return 0;
//}


//方法2:
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 101;i <= 999;i+=2)
//    {
//        int j = 0;
//        int flag = 0;
//        for (j = 2;j <= sqrt(i);j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


//第82题
//输出九九乘法表
//#include <stdio.h>
//
//int main() 
//{
//    int i = 0;
//    int j = 0;
//    for (i = 1; i <= 9; i++) 
//    {
//        int sum = 0;
//        for (j = 1; j <= i; j++) 
//        {
//            if (j == 9 && i == 9) 
//            {
//                sum = i * j;
//                printf("%d*%d=%2d", j, i, sum);
//            }
//            else 
//            {
//                sum = i * j;
//                printf("%d*%d=%2d ", j, i, sum);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}


//第83题
//牛牛开始学习数列啦
//现在他想知道1-2+3-4...+n的值
//输入描述:
//输入一个整数n
//输出描述:
//输出一个整数
//#include <stdio.h>
//
//int main() 
//{
//    int i = 0;
//    int num = 0;
//    int sum = 0;
//    scanf("%d", &num);
//    for (i = 1; i <= num; i++) 
//    {
//        if (i % 2 == 0) 
//        {
//            sum = sum - i;
//        }
//        else 
//        {
//            sum = sum + i;
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}


//第84题
//这次牛牛又换了个数列,他想计算:1+1/2+1/3+…+1/N的值。
//(保留6位小数)
//输入描述:
//输入一个整数,范围在0到1000
//输出描述:
//输出一个浮点数
//#include <stdio.h>
//int main() 
//{
//    int num = 0;
//    int i = 1;
//    double sum = 0;
//    scanf("%d", &num);
//    for (i = 1; i <= num; i++) 
//    {
//        sum = sum + 1.0 / i;
//    }
//    printf("%lf\n", sum);
//    return 0;
//}


//第85题
//牛牛准备继续进阶，计算更难的数列
//输入一个整数n,计算1+1/(1-3)+1/(1-3+5)+...+1/(1-3+5-...((-1)^(n-1))*(2n-1))的值
//输入描述:
//输入一个整数
//输出描述:
//输出一个浮点数,保留3位小数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int num = 0;
//    int i = 0;
//    double sum = 0;
//    scanf("%d", &num);
//    int num1 = 1;
//    int flag = 1;
//    for (i = 1;i <= num;i++)
//    {
//        if (i != 1)
//        {
//            if (flag == 1)
//            {
//                num1 = num1 - (2 * i - 1);
//                flag = 0;
//            }
//            else 
//            {
//                num1 = num1 + (2 * i - 1);
//                flag = 1;
//            }
//        }
//        sum = sum + 1.0 / num1;
//    }
//    printf("%.3lf", sum);
//    return 0;
//}


//第86题
//描述
//帮助牛牛计算1+(1+2)+(1+2+3)+...+(1+2+3+...+n)
//输入描述:
//输入一个整数
//输出描述:
//输出一个整数
//#include <stdio.h>
//
//int main() 
//{
//    int i = 0;
//    int num = 0;
//    int sum = 0;
//    scanf("%d", &num);
//    int j = 0;
//    for (i = 1;i <= num;i++)
//    {
//        int sum1 = 0;
//        for (j = 1;j <= i;j++)
//        {
//            sum1 = sum1 + j;
//        }
//        sum = sum + sum1;
//    }
//    printf("%d\n", sum);
//    return 0;
//}


//第87题
//描述
//求一个整数的所有数位之和
//输入描述:
//输入一行,包含一个整数
//输出描述:
//一个整数,int范围内
//#include <stdio.h>
//
//int main() 
//{
//    long long num = 0;
//    scanf("%d", &num);
//    int sum = 0;
//    long long num1 = 0;
//    while (num)
//    {
//        num1 = num % 10;
//        sum = sum + num1;
//        num = num / 10;
//    }
//    printf("%d\n", sum);
//    return 0;
//}


//第88题
//有一个数字魔法,给你一个正整数n
//如果n为偶数,就将他变为n/2
//如果n为奇数,就将他变为乘3加1不断重复这样的运算,经过有限步之后,一定可以得到1
//牛牛为了验证这个魔法决定用一个整数来计算几步能变成1
//输入描述:
//输入一个正整数n,范围在100以内
//输出描述:
//输出一个整数
//#include <stdio.h>
//int is_one(int num)
//{
//    int count = 0;
//    while (num != 1 && num > 0)
//    {
//        if (num % 2 == 0)
//        {
//            num = num / 2;
//        }
//        else
//        {
//            num = 3 * num + 1;
//        }
//        count++;
//        if (num == 1)
//        {
//            break;
//        }
//    }
//    return count;
//}
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int ret = is_one(num);
//    printf("%d\n", ret);
//    return 0;
//}


//第89题
//今年是2019年,KiKi想知道1~2019中有多少个包含数字9的数
//包含数字的数是指有某一位是9的数
//输入描述:
//无
//输出描述:
//一行,一个整数,表示1~2019中共有多少个数包含数字9
//#include <stdio.h>
//int is_nine(int i)
//{
//    int num = 0;
//    int flag = 0;
//    while (i >= 9)
//    {
//        num = i % 10;
//        if (num == 9)
//        {
//            flag = 1;
//            break;
//        }
//        i = i / 10;
//    }
//    if (flag == 1)
//    {
//        return 1;
//    }
//    return 0;
//}
//int main() {
//    int i = 0;
//    int ret = 0;
//    int count = 0;
//    for (i = 1;i <= 2019;i++)
//    {
//        ret = is_nine(i);
//        if (ret == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


//第90题
//输入描述:
//共n+1行
//第一行,输入一个数n,代表小乐乐的班级中有n个同学。
//在接下来的n行中每行输入三个整数代表班级中一个同学的三科成绩(语文,数学,外语),用空格分隔。
//输出描述:
//一行,一个整数,代表班级中需要被请家长的人数。
//#include <stdio.h>
//int is_jia(int a, int b, int c)
//{
//    int flag = 0;
//    int d = (a + b + c )/ 3;
//    if (d < 60)
//    {
//        flag = 1;
//    }
//    if (flag == 1)
//    {
//        return 1;
//    }
//    return 0;
//}
//int main() 
//{
//    int num = 0;
//    scanf("%d", &num);
//    int a, b, c;
//    int i = 0;
//    int count = 0;
//    for (i = 0;i < num;i++)
//    {
//        scanf("%d %d %d", &a, &b, &c);
//        int ret = is_jia(a, b, c);
//        if (ret == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


//第91题
//描述
//春天是鲜花的季节,水仙花就是其中最迷人的代表,数学上有个水仙花数
//"水仙花数"是指一个三位数,它的各位数字的立方和等于其本身
//比如:153=1^3+5^3+3^3
//现在要求输出所有在m和n范围内的水仙花数。
//输入描述:
//输入数据有多组,每组占一行,包括两个整数m和n(100≤m≤n≤999)
//输出描述:
//对于每个测试实例,要求输出所有在给定范围内的水仙花数
//输出的水仙花数必须大于等于m, 并且小于等于n,
//如果有多个,则要求从小到大排列在一行内输出,之间用一个空格隔开; 
//如果给定的范围内不存在水仙花数,则输出no; 
//每个测试实例的输出占一行。
//#include <stdio.h>
//#include<math.h>
//int is_water(int a)
//{
//    int sum = 0;
//    int temp = a;
//    while (a > 0)
//    {
//        int num = a % 10;
//        sum = pow(num, 3) + sum;
//        a = a / 10;
//    }
//    if (sum == temp)
//    {
//        return 1;
//    }
//    return 0;
//}
//void sort(int arr[], int sz)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0;i < sz - 1;i++)
//    {
//        for (j = 0;j < sz - 1 - i;j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                arr[j] = arr[j + 1] + arr[j];
//                arr[j + 1] = arr[j] - arr[j + 1];
//                arr[j] = arr[j] - arr[j + 1];
//            }
//        }
//    }
//}
//int main()
//{
//    int a, b;
//    int arr[30] = { 0 };
//    while (scanf("%d %d", &a, &b) != EOF) 
//    {
//        int i = 0;
//        int j = 0;
//        int ret = 0;
//        for (i = a;i <= b;i++)
//        {
//            ret = is_water(i);
//            if (ret == 1)
//            {
//                arr[j] = i;
//                j++;
//            }
//        }
//        if (j == 0) 
//        {
//            printf("no\n");
//        }
//        else 
//        {
//            sort(arr, j);
//            for (i = 0;i < j;i++)
//            {
//                printf("%d ", arr[i]);
//            }
//        }
//    }
//    return 0;
//}