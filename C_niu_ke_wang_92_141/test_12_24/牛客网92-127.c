#define _CRT_SECURE_NO_WARNINGS 1 
//https://www.nowcoder.com/exam/oj?page=1&tab=%E8%AF%AD%E6%B3%95%E7%AF%87&topicId=290
//第92题
//变种水仙花数-Lily Number
//把任意的数字,从中间拆分成两个数字,比如1461可以拆分成(1和461),(14和61),(146和1)
//如果所有拆分后的乘积之和等于自身,则是一个Lily Number。
//例如:
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//求出5位数中的所有Lily Number。
//#include <stdio.h>
//void is_bian(int i) 
//{
//    if (i == (i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10)) 
//    {
//        printf("%d ", i);
//    }
//}
//int main() 
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++) {
//        is_bian(i);
//    }
//    return 0;
//}


//第93题
//描述
//公务员面试现场打分。
//有7位考官,从键盘输入若干组成绩,每组7个分数(百分制),去掉一个最高分和一个最低分,输出每组的平均成绩。
//(注:本题有多组输入)
//输入描述:
//每一行,输入7个整数(0~100),代表7个成绩,用空格分隔。
//输出描述:
//每一行,输出去掉最高分和最低分的平均成绩,小数点后保留2位,每行输出后换行。
//#include <stdio.h>
//float average(int* arr, int sz) {
//    arr[0] = 0;
//    arr[6] = 0;
//    int j = 0;
//    float sum = 0;
//    for (j = 0; j < sz; j++) {
//        sum = sum + arr[j];
//    }
//    sum = sum / 5.0;
//    return sum;
//}
//void sort(int* arr, int sz) {
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < sz - 1; i++) {
//        for (j = 0; j < sz - 1 - i; j++) {
//            if (arr[j] > arr[j + 1]) {
//                arr[j] = arr[j + 1] + arr[j];
//                arr[j + 1] = arr[j] - arr[j + 1];
//                arr[j] = arr[j] - arr[j + 1];
//            }
//        }
//    }
//}
//int main() {
//    int arr[7] = { 0 };
//    int i = 0;
//    while (scanf("%d%d%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6]) != EOF) 
//    {
//        int sz = sizeof(arr) / sizeof(arr[0]);
//        sort(arr, sz);
//        float ret = average(arr, sz);
//        printf("%.2f\n", ret);
//    }
//    return 0;
//}


//第94题
//描述
//将一个四位数反向输出
//输入描述:
//一行,输入一个整数n(1000<=n<=9999)
//输出描述:
//针对每组输入,反向输出对应四位数
//#include <stdio.h>
//void four(int n)
//{
//    while (n)
//    {
//        printf("%d", n % 10);
//        n = n / 10;
//    }
//}
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    four(num);
//    return 0;
//}


//第95题
//描述
//小乐乐在课上学习了二进制八进制与十六进制后,对进制转换产生了浓厚的兴趣。
//因为他的幸运数字是6,所以他想知道一个数表示为六进制后的结果。
//请你帮助他解决这个问题。
//输入描述:
//输入一个正整数n(1≤n≤109)
//输出描述:
//输出一行,为正整数n表示为六进制的结果
//#include <stdio.h>
//void six(int n)
//{
//    if (n > 5)
//    {
//        six(n / 6);
//    }
//    printf("%d", n % 6);
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    six(n);
//    return 0;
//}


//第96题
//描述
//国王将金币作为工资, 发放给忠诚的骑士。
//第一天, 骑士收到一枚金币; 之后两天(第二天和第三天), 每天收到两枚金币
//之后三天(第四、五、六天), 每天收到三枚金币
//之后四天(第七、八、九、十天), 每天收到四枚金币……;
//这种工资发放模式会一直这样延续下去
//当连续N天每天收到N枚金币后,骑士会在之后的连续N+1天里,每天收到N+1枚金币。
//请计算在前K天里,骑士一共获得了多少金币。
//输入描述:
//输入只有1行,包含一个正整数K,表示发放金币的天数。
//输出描述:
//输出只有1行,包含一个正整数,即骑士收到的金币数。
//#include <stdio.h>
//void money(int num)
//{
//    int i = 1;
//    int sum = 0;
//    int n = 1;
//    int m = 0;
//    while (num > 0)
//    {
//        n = i;
//        while (n)
//        {
//            sum = i + sum;
//            n--;
//            num--;
//            if (num == 0)
//            {
//                break;
//            }
//        }
//        i++;
//    }
//    printf("%d\n", sum);
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    money(n);
//    return 0;
//}


//#include <stdio.h>
//#include<math.h>
//int print(int n,int* arr)
//{
//    int temp = n;
//    int count = 0;
//    while (n > 0)
//    {
//        n = n / 10;
//        count++;
//    }
//    int temp1 = count;
//    while (temp > 0)
//    {
//        arr[count - 1] = temp % 10;
//        count--;
//        temp = temp / 10;
//    }
//    return temp1;
//}
//
//int back_num(int* arr,int count)
//{
//    int left = 0;
//    int average = count / 2;
//    count = count - 1;
//    int flag = 0;
//    while (flag == 0)
//    {
//        if (arr[left] == arr[count])
//        {
//            left++;
//            count--;
//        }
//        if (left < 0 || count < 0)
//        {
//            flag = 2;
//        }
//        else
//        {
//            flag = 1;
//        }
//    }
//    if (flag == 0||flag == 2)
//    {
//        return 1;
//    }
//}
//int main() {
//    int num = 0;
//    scanf("%d", &num);
//    int j = 0;
//    for (j = 1;j <= num;j++)
//    {
//        int arr[10] = { 0 };
//        int count = print(j, arr);
//        int ret = back_num(arr, count);
//        if (ret == 1)
//        {
//            int i = 0;
//            int temp = 0;
//            int temp1 = count;
//            for (i = 0;i < temp1;i++)
//            {
//                temp = pow(10, i) * arr[count-1] + temp;
//                count--;
//            }
//            printf("%d ", temp);
//        }
//    }
//    return 0;
//}


//第97题
//描述
//今天牛牛学到了回文串,他想在数字里面找回文,即回文数
//回文数是正着读与倒着读都一样的数,比如1221,343是回文数,433不是回文数。
//请输出不超过n的回文数。
//输入描述:
//输入一个整数n(1<=n<=100000)
//输出描述:
//从1开始按从小到大的顺序输出所有回文数
//#include <stdio.h>
//#include<math.h>
//int print(int n, int* arr) {
//    int temp = n;
//    int count = 0;
//    while (n > 0) {
//        n = n / 10;
//        count++;
//    }
//    int temp1 = count;
//    while (temp > 0) {
//        arr[count - 1] = temp % 10;
//        count--;
//        temp = temp / 10;
//    }
//    return temp1;
//}
//
//int back_num(int* arr, int count) {
//    int left = 0;
//    int temp = count;
//    int average = count / 2;
//    count = count - 1;
//    int flag = 0;
//    while (flag == 0) {
//        if (arr[left] == arr[count]) {
//            left++;
//            count--;
//        }
//        else
//        {
//            flag = 1;
//        }
//        if (left > temp  || count < 0) {
//            break;
//        }
//    }
//    if (flag == 0) {
//        return 1;
//    }
//    return 0;
//}
//int main() {
//    int num = 0;
//    scanf("%d", &num);
//    int j = 0;
//    for (j = 1; j <= num; j++) {
//        int arr[10] = { 0 };
//        int count = print(j, arr);
//        int ret = back_num(arr, count);
//        if (ret == 1) {
//            int i = 0;
//            int temp = 0;
//            int temp1 = count;
//            for (i = 0; i < temp1; i++) {
//                temp = pow(10, i) * arr[count - 1] + temp;
//                count--;
//            }
//            printf("%d ", temp);
//        }
//    }
//    return 0;
//}


//第98题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的线段图案。
//输入描述:
//多组输入,一个整数(1~100),表示线段长度,即"*"的数量。
//输出描述:
//针对每行输入,输出占一行,用"*"组成的对应长度的线段。
//#include <stdio.h>
//
//int main() 
//{
//    int i = 0;
//    int num = 0;
//    while (scanf("%d", &num) != EOF)
//    {
//        for (i = 0;i < num;i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//第99题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的正方形图案
//输入描述:
//多组输入,一个整数(1~20),表示正方形的长度,也表示输出行数。
//输出描述:
//针对每行输入,输出用"*"组成的对应边长的正方形,每个"*"后面有一个空格。
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int num = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        for (i = num;i > 0;i--)
//        {
//            for (j = 0;j < num;j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//第100题
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的直角三角形图案。
//输入描述:
//多组输入,一个整数(2~20),表示直角三角形直角边的长度,即"*"的数量,也表示输出行数。
//输出描述:
//针对每行输入,输出用"*",组成的对应长度的直角三角形,每个"*"后面有一个空格。
//5
//*
//**
//***
//****
//*****
//#include <stdio.h>
//int main() 
//{
//    int num = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &num) != EOF) {
//        for (i = 1;i <= num;i++)
//        {
//            for (j = 1;j <= i;j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//第101题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的翻转直角三角形图案。
//输入描述:
//多组输入,一个整数(2~20),表示翻转直角三角形直角边的长度,即"*"的数量
//也表示输出行数。
//输出描述:
//针对每行输入,输出用"*"组成的对应长度的翻转直角三角形,每个"*"后面有一个空格。
//#include <stdio.h>
//
//int main() {
//    int num = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        for (i = num; i > 0; i--) 
//        {
//            for (j = 0; j < i; j++) 
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//第102题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的带空格直角三角形图案。
//输入描述:
//多组输入,一个整数(2~20),表示直角三角形直角边的长度,即"*"的数量,也表示输出行数。
//输出描述:
//针对每行输入,输出用"*"组成的对应长度的直角三角形,每个"*"后面有一个空格。
//#include <stdio.h>
//int main() 
//{
//    int num = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        for (i = 1;i <= num;i++)
//        {
//            for (j = 1;j <= num - i;j++)
//            {
//                printf("  ");
//            }
//            for (k = 1;k <= i;k++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//第103题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的金字塔图案
//输入描述:
//多组输入,一个整数(2~20),表示金字塔边的长度,即"*"的数量,也表示输出行数。
//输出描述:
//针对每行输入,输出用"*"组成的金字塔, 每个"*"后面有一个空格。
//#include <stdio.h>
//int main() 
//{
//    int num = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    int l = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        for (i = 1;i <= num;i++)
//        {
//            for (j = 1;j <= num - i;j++)
//            {
//                printf(" ");
//            }
//            for (k = 1;k <= i;k++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//第104题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的翻转金字塔图案。
//输入描述:
//多组输入,一个整数(2~20),表示翻转金字塔边的长度,即"*"的数量,也表示输出行数。
//输出描述:
//针对每行输入,输出用"*"组成的金字塔,每个"*"后面有一个空格。
//#include <stdio.h>
//int main() 
//{
//    int i = 0;
//    int num = 0;
//    int j = 0;
//    int k = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        int temp = num;
//        for (i = 1;i <= num;i++)
//        {
//            for (j = 1;j <= i-1;j++)
//            {
//                if (i == 1)
//                {
//                    continue;
//                }
//                printf(" ");
//            }
//            for (k = 1;k <= temp;k++)
//            {
//                printf("* ");
//            }
//            temp--;
//            printf("\n");
//        }
//    }
//    return 0;
//}


//第105题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的菱形图案。
//输入描述:
//多组输入,一个整数(2~20)
//输出描述：
//针对每行输入,输出用"*"组成的菱形,每个"*"后面有一个空格。
//2
//  *
// * *
//* * *
// * *
//  *
//#include <stdio.h>
//
//int main() 
//{
//    int num = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        int temp = 1;
//        int temp1 = num;
//        int temp2 = num;
//        //打印上三角
//        for (i = 1; i <= num; i++) 
//        {
//            for (j = 1; j <= temp1; j++) 
//            {
//                printf(" ");
//            }
//            for (k = 1; k <= temp; k++) 
//            {
//                printf("* ");
//            }
//            temp1--;
//            temp++;
//            printf("\n");
//        }
//        for (i = 1; i <= num + 1; i++) 
//        {
//            printf("* ");
//        }
//        printf("\n");
//        for (i = 1; i <= num; i++) 
//        {
//            for (j = 1; j <= i; j++) 
//            {
//                printf(" ");
//            }
//            for (k = 1; k <= temp2; k++) 
//            {
//                printf("* ");
//            }
//            temp2--;
//            printf("\n");
//        }
//    }
//    return 0;
//}


//第106题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的K形图案
//输入描述:
//多组输入,一个整数(2~20)
//输出描述:
//针对每行输入,输出用"*"组成的K形,每个"*"后面有一个空格
//2
//***
//**
//*
//**
//***
//#include <stdio.h>
//
//int main() {
//    int num = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        for (i = num + 1;i > 1;i--)
//        {
//            for (j = 1;j <= i;j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        printf("*\n");
//        for (i = 1;i <= num;i++)
//        {
//            for (j = 1;j <= i + 1;j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//第107题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的箭形图案。
//输入描述:
//本题多组输入,每行一个整数(2~20)。
//输出描述:
//针对每行输入,输出用"*"组成的箭形。
//#include <stdio.h>
//
//int main() 
//{
//    int num = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        int temp1 = num;
//        int temp2 = num;
//        for (i = 1;i<=num;i++)
//        {
//            for (j = temp1;j > 0;j--)
//            {
//                printf("  ");
//            }
//            for (k = 1;k <= i;k++)
//            {
//                printf("*");
//            }
//            temp1--;
//            printf("\n");
//        }
//        for (i = 1;i <= num + 1;i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//        for (i = 1;i <= num;i++)
//        {
//            for (j = 1;j <= i;j++)
//            {
//                printf("  ");
//            }
//            for (k = temp2;k > 0;k--)
//            {
//                printf("*");
//            }
//            temp2--;
//            printf("\n");
//        }
//    }
//    return 0;
//}


//第108题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的反斜线形图案。
//输入描述:
//多组输入,一个整数(2~20),表示输出的行数,也表示组成反斜线的"*"的数量
//输出描述:
//针对每行输入,输出用"*"组成的反斜线。
//#include <stdio.h>
//
//int main() 
//{
//    int i = 0;
//    int num = 0;
//    int j = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        for (i = 1; i <= num; i++) 
//        {
//            for (j = 1; j < i; j++) 
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}


//第109题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的正斜线形图案。
//输入描述:
//多组输入,一个整数(2~20),表示输出的行数,也表示组成正斜线的"*"的数量
//输出描述:
//针对每行输入,输出用"*"组成的正斜线。
//#include <stdio.h>
//int main() {
//    int num = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        for (i = num;i > 0;i--)
//        {
//            for (j = 1;j <= i - 1;j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}


//第110题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的X形图案。
//输入描述:
//多组输入,一个整数(2~20),表示输出的行数
//也表示组成"x"的反斜线和正斜线的长度。
//输出描述:
//针对每行输入,输出用"*"组成的X形图案。
//5
//*   *
// * *
//  *
// * *
//*   *
//7
//*     *
// *   *
//  * *
//   *
//  * *
// *   *
//*     *
//6
//*    *
// *  *
//  **
//  **
// *  *
//*    *
//4
//*  *
// **
// **
//*  *
//#include <stdio.h>
//int main() 
//{
//    int num = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        if (num % 2 == 0) 
//        {
//            num = (num - 2) / 2;
//            int temp1 = num;
//            int temp2 = num;
//            for (i = 1; i <= num; i++) 
//            {
//                for (j = 0;j < i;j++)
//                {
//                    if (j == 0)
//                    {
//                        continue;
//                    }
//                    printf(" ");
//                }
//                printf("*");
//                for (j = 1; j <= 2 * temp1; j++)
//                {
//                    printf(" ");
//                }
//                printf("*\n");
//                temp1--;
//            }
//            for (j = 1;j <= 2;j++)
//            {
//                for (i = 1; i <= num; i++)
//                {
//                    printf(" ");
//                }
//                printf("**\n");
//            }
//            for (i = 1; i <= num; i++) 
//            {
//                for (j = 1;j < temp2;j++)
//                {
//                    printf(" ");
//                }
//                temp2--;
//                printf("*");
//                for (j = 1; j <= 2 * i; j++) 
//                {
//                    printf(" ");
//                }
//                printf("*\n");
//            }
//            temp2--;
//        }
//        else 
//        {
//            num = (num - 1) / 2;
//            int temp3 = num;
//            int temp4 = num;
//            for (i = 1; i <= num; i++) 
//            {
//                for (j = 0; j < i; j++) 
//                {
//                    if (j == 0)
//                    {
//                        continue;
//                    }
//                    printf(" ");
//                }
//                printf("*");
//                for (j = 1; j <= 2 * temp3 - 1; j++) 
//                {
//                    printf(" ");
//                }
//                printf("*\n");
//                temp3--;
//            }
//            for (i = 1;i <= num;i++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//            for (i = 1; i <= num; i++) 
//            {
//                for (j = 1;j < temp4;j++)
//                {
//                    printf(" ");
//                }
//                printf("*");
//                for (j = 1; j <= 2 * i - 1; j++) 
//                {
//                    printf(" ");
//                }
//                printf("*\n");
//                temp4--;
//            }
//        }
//    }
//    return 0;
//}


//第111题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的"空心"正方形图案
//输入描述:
//多组输入,一个整数(3~20),表示输出的行数,也表示组成正方形边的"*"的数量。
//输出描述:
//针对每行输入,输出用"*"组成的"空心"正方形,每个"*"后面有一个空格。
//3
//* * *
//*   *
//* * *
//4
//* * * *
//*     *
//*     *
//* * * *
//#include <stdio.h>
//int main()
//{
//    int num = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        for (i = 1;i <= num;i++)
//        {
//            if (i == 1 || i == num)
//            {
//                for (j = 1;j <= num;j++)
//                {
//
//                    printf("* ");
//                }
//                printf("\n");
//            }
//            else
//            {
//                printf("* ");
//                for (k = 1;k <= num - 2;k++)
//                {
//                    printf("  ");
//                }
//                printf("*");
//                printf("\n");
//            }
//        }
//    }
//    return 0;
//}


//第112题
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用"*"组成的“空心”三角形图案。
//输入描述:
//多组输入,一个整数(3~20),表示输出的行数,也表示组成三角形边的"*"的数量。
//输出描述:
//针对每行输入,输出用"*"组成的“空心”三角形, 每个"*"后面有一个空格。
//4
//* 
//* *
//*   *
//* * * *
//5
//*
//* *
//*   *
//*     *
//* * * * *
//#include <stdio.h>
//int main() 
//{
//    int num = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        for (i = 1;i <= num - 1;i++)
//        {
//            for (j = 1;j <= i;j++)
//            {
//                if (j == i || j == 1)
//                {
//                    printf("* ");
//                }
//                else {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//        for (k = 1;k <= num;k++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//第113题
//描述
//KiKi学习了循环,BoBo老师给他出了一系列打印图案的练习
//该任务是打印用数字组成的数字三角形图案。
//输入描述:
//多组输入,一个整数(3~20),表示数字三角形边的长度,即数字的数量,也表示输出行数。
//输出描述:
//针对每行输入,输出用数字组成的对应长度的数字三角形,每个数字后面有一个空格。
//4
//1
//1 2
//1 2 3
//1 2 3 4
//5
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//#include <stdio.h>
//
//int main() 
//{
//    int num = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &num) != EOF) 
//    {
//        for (i = 1; i <= num; i++) 
//        {
//            for (j = 1; j <= i; j++) 
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//第114题
//今天是圣诞节,牛牛要打印一个漂亮的圣诞树送给想象中的女朋友,
//请你帮助他实现梦想。
//输入描述:
//输入圣诞树的高度h
//输出描述:
//输出对应的圣诞树
//2
//     *
//    * *
//   * * *
//  *     *
// * *   * *
//* * * * * *
//     *
//     *
//#include<stdio.h>
//int main()
//{
//	int num2 = 2;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int p = 0;
//	int q = 0;
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		int temp1 = 3*num-1;
//		int count = 1;
//		int count1 = 1;
//		for (q = 1;q <= num;q++)
//		{
//			int temp2 = 2;
//			for (i = 1;i <= 3;i++)
//			{
//				count = 0;
//				for (j = 1;j <= temp1;j++)
//				{
//					printf(" ");
//				}
//				temp1--;
//			again:
//				for (k = 1;k <= i;k++)
//				{
//					printf("* ");
//				}
//				for (p = 1;p <= temp2;p++)
//				{
//					printf("  ");
//				}
//				count++;
//				if (count < count1)
//				{
//					goto again;
//				}
//				else
//				{
//					temp2--;
//					printf("\n");
//				}
//			}
//			count1++;
//		}
//		for (i = 1;i <= num;i++)
//		{
//			for (j = 1;j <= 3*num-1;j++)
//			{
//				printf(" ");
//			}
//			printf("*\n");
//		}
//	}
//	return 0;
//}


//第116题
//试计算在区间1到n的所有整数中,数字x(0≤x≤9)共出现了多少次？
//例如,在1到11中,即在1、2、3、4、5、6、7、8、9、10、11中
//数字1出现了4次。
//输入描述:
//输入共1行,包含2个整数n、x,之间用一个空格隔开。
//输出描述:
//输出共1行,包含一个整数,表示x出现的次数。
//#include<stdio.h>
//int print(int num,int num1)
//{
//	int count = 0;
//	int temp = 0;
//	while (num)
//	{
//		temp = num % 10;
//		if (temp == num1)
//		{
//			count++;
//		}
//		num = num / 10;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	int num1 = 0;
//	scanf("%d %d", &num, &num1);
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= num;i++)
//	{
//		int ret = print(i, num1);
//		count = ret + count;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//第117题
//描述
//输入10个整数,要求按输入时的逆序把这10个数打印出来。
//逆序输出,就是按照输入相反的顺序打印这10个数。
//输入描述:
//一行,输入10个整数(范围-231~231-1),用空格分隔。
//输出描述:
//一行,逆序输出输入的10个整数,用空格分隔。
//#include<stdio.h>
//void back(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		for (j = 0;j < sz - i - 1;j++)
//		{
//			int temp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = temp;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = 10;
//	back(arr, sz);
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//第118题
//描述
//输入数字N,然后输入N个数,计算这N个数的和
//输入描述:
//第一行输入一个整数N(0≤N≤50),第二行输入用空格分隔的N个整数
//输出描述:
//输出为一行,为第二行输入的"N个整数之和"的计算结果
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &num);
//	int j = 0;
//	for (j = 0;j < num;j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	int i = 0;
//	int sum = 0;
//	for (i = 0;i < num;i++)
//	{
//		sum = sum + arr[i];
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//第119题
//描述
//输入n个成绩,换行输出n个成绩中最高分数和最低分数的差
//输入描述:
//两行,第一行为n,表示n个成绩,不会大于10000
//第二行为n个成绩(整数表示,范围0~100),以空格隔开
//输出描述:
//一行,输出n个成绩中最高分数和最低分数的差
//#include<stdio.h>
//void sort(int* arr, int num1)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < num1 - 1;i++)
//	{
//		for (j = 0;j < num1 - i - 1;j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	printf("%d\n", arr[0] - arr[num1-1]);
//}
//int main()
//{
//	int num1 = 0;
//	scanf("%d", &num1);
//	int i = 0;
//	int arr[50] = { 0 };
//	for (i = 0;i < num1;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	sort(arr, num1);
//	return 0;
//}


//第120题
//描述
//期中考试开始了,大家都想取得好成绩,争夺前五名。
//从键盘输入n个学生成绩,输出每组排在前五高的成绩。
//数据范围:5≤n≤50,成绩采取百分制并不会出现负数
//输入描述:
//两行,第一行输入一个整数,表示n个学生(n>=5)
//第二行输入n个学生成绩(整数表示,范围0~100),用空格分隔。
//输出描述:
//一行,输出成绩最高的前五个,用空格分隔。
//#include<stdio.h>
//void sort(int* arr, int num1)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < num1 - 1;i++)
//	{
//		for (j = 0;j < num1 - i - 1;j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int arr1[50] = { 0 };
//	int i = 0;
//	scanf("%d", &num1);
//	for (i = 0;i < num1;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	sort(arr1, num1);
//	return 0;
//}


//第121题
//描述
//输入两个升序排列的序列,将两个序列合并为一个有序序列并输出。
//数据范围:1≤n,m≤1000
//序列中的值满足0≤val≤30000
//输入描述:
//输入包含三行
//第一行包含两个正整数n,m,用空格分隔。
//n表示第二行第一个升序序列中数字的个数
//m表示第三行第二个升序序列中数字的个数。
//第二行包含n个整数,用空格分隔。
//第三行包含m个整数,用空格分隔。
//#include<stdio.h>
//void sort(int* arr1, int* arr2,int num1,int num2)
//{
//	int arr[2000] = { 0 };
//	int num = num1 + num2;
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < num1;i++)
//	{
//		arr[i] = arr1[i];
//	}
//	for (j = num1;j < num;j++)
//	{
//		arr[j] = arr2[j - num1];
//	}
//	for (i = 0;i < num - 1;i++)
//	{
//		for (j = 0;j < num - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0;i < num;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 0;
//	for (i = 0;i < num1;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0;i < num2;i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	sort(arr1, arr2, num1, num2);
//	return 0;
//}


//第122题
//描述
//输入一个整数序列,判断是否是有序序列
//有序,指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)
//数据范围:3≤n≤50
//序列中的值都满足1≤val≤100
//输入描述:
//第一行输入一个整数N(3≤N≤50)
//第二行输入N个整数,用空格分隔N个整数
//输出描述:
//输出为一行,如果序列有序输出sorted,否则输出unsorted
//#include<stdio.h>
//void sort1(int* arr1, int num)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < num - 1;i++)
//	{
//		for (j = 0;j < num - i - 1;j++)
//		{
//			if (arr1[j] > arr1[j + 1])
//			{
//				int temp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = temp;
//			}
//		}
//	}
//}
//void sort2(int* arr1, int num)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < num - 1;i++)
//	{
//		for (j = 0;j < num - i - 1;j++)
//		{
//			if (arr1[j] < arr1[j + 1])
//			{
//				int temp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int num = 0;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int arr3[100] = { 0 };
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0;i < num;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0;i < num;i++)
//	{
//		arr2[i] = arr1[i];
//		arr3[i] = arr1[i];
//	}
//	sort1(arr2, num);
//	sort2(arr3, num);
//	int flag = 1;
//	for (i = 0;i < num;i++)
//	{
//		if (arr1[i] != arr2[i] || arr1[i] != arr3[i])
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}


//第123题
//描述
//有一个有序数字序列
//从小到大排序将一个新输入的数插入到序列中
//保证插入新数后,序列仍然是升序。
//输入描述:
//第一行输入一个整数N(0≤N≤50)。
//第二行输入N个升序排列的整数,输入用空格分隔的N个整数
//第三行输入想要进行插入的一个整数
//输出描述:
//输出为一行,N+1个有序排列的整数
//#include<stdio.h>
//void sort1(int* arr1, int num1)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < num1 - 1;i++)
//	{
//		for (j = 0;j < num1 - i - 1;j++)
//		{
//			if (arr1[j] > arr1[j + 1])
//			{
//				int temp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0;i < num1;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int arr1[100] = { 0 };
//	scanf("%d", &num1);
//	int i = 0;
//	for (i = 0;i < num1;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	scanf("%d", &num2);
//	arr1[num1] = num2;
//	sort1(arr1, num1+1);
//	return 0;
//}


//第124题
//描述
//有一个整数序列(可能有重复的整数),现删除指定的某一个整数
//输出删除指定数字之后的序列,序列中未被删除数字的前后位置没有发生改变。
//数据范围:序列长度和序列中的值都满足1≤n≤50
//输入描述:
//第一行输入一个整数(0≤N≤50)。
//第二行输入N个整数,输入用空格分隔的N个整数。
//第三行输入想要进行删除的一个整数。
//输出描述:
//输出为一行,删除指定数字之后的序列。
//void back(int* arr, int num1, int num2)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0;i < num1;i++)
//	{
//		while (arr[i] == num2)
//		{
//			count++;
//			for (j = i;j < num1;j++)
//			{
//				arr[j] = arr[j + 1];
//			}
//		}
//	}
//	for (j = 0;j < num1 - count;j++)
//	{
//		printf("%d ", arr[j]);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int num1 = 0; 
//	scanf("%d", &num1);
//	int i = 0;
//	for (i = 0;i < num1;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num2 = 0;
//	scanf("%d", &num2);
//	back(arr, num1, num2);
//}


//第125题
//描述
//输入n个整数的序列, 要求对这个序列进行去重操作。
//所谓去重,是指对这个序列中每个重复出现的整数
//只保留该数第一次出现的位置,删除其余位置。
//输入描述:
//输入包含两行
//第一行包含一个正整数n(1≤n≤1000),表示第二行序列中数字的个数
//第二行包含n个整数(范围1~5000),用空格分隔。
//输出描述:
//输出为一行,按照输入的顺序输出去重之后的数字,用空格分隔。
//#include<stdio.h>
//void qu_chong(int* arr, int num)
//{
//	int i = 0;
//	int j = 0;
//	int num1 = 0;
//	int k = 0;
//	for (i = 0;i < num;i++)
//	{
//		num1 = arr[i];
//		j = i + 1;
//		while (j < num)
//		{
//			if (arr[j] == num1)
//			{
//				for (k = j;k < num - 1;k++)
//				{
//					arr[k] = arr[k + 1];
//				}
//				num--;
//			}
//			else//先进行判断,防止第j+1个元素也相同
//			{
//				j++;
//			}
//		}
//	}
//	for (i = 0;i < num;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0;i < num;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qu_chong(arr, num);
//	return 0;
//}


//第126题
//描述
//给定n个整数和一个整数x,小乐乐想从n个整数中判断x出现几次
//请编程帮他实现。
//输入描述:
//共3行
//第一行,一个整数,表示n(1<=n<=100)
//第二行,共输入n个整数,两个整数之间用空格分隔。
//第三行,输入一个整数,表示要查找的整数x。
//输出描述：
//一行，表示整数x出现的次数。
//#include<stdio.h>
//void sort(int* arr, int num1, int num2)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < num1;i++)
//	{
//		if (arr[i] == num2)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}
//int main()
//{
//	int num1 = 0;
//	scanf("%d", &num1);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0;i < num1;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num2 = 0;
//	scanf("%d", &num2);
//	sort(arr, num1, num2);
//	return 0;
//}


//第127题
//描述
//用筛选法求n以内的素数。
//筛选法求解过程为
//将2~n之间的正整数放在数组内存储,将数组中2之后的所有能被2整除的数清0
//再将3之后的所有能被3整除的数清0,以此类推,直到n为止。
//数组中不为0的数即为素数。
//输入描述:
//多组输入,每行输入一个正整数(不大于100)
//输出描述:
//针对每行输入的整数n,输出两行,第一行,输出n之内(包括n)的素数,用空格分隔
//第二行,输出数组中2之后被清0的个数。
//每行输出后换行。
//#include<stdio.h>
//int sort(int num1,int num)
//{
//	int i = 0;
//	int temp = 2;
//	int temp1 = 1;
//	int arr1[100] = { 0 };
//	int flag = 0;
//	for (i = 0;i < num - 1;i++)
//	{
//		if (temp == num + 1)
//		{
//			break;
//		}
//		arr1[i] = temp;
//		temp++;
//	}
//	for (i = 0;i < num - 1;i++)
//	{
//		temp1 = arr1[i];
//		if (num1 % temp1 == 0 && num1 != temp1)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
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
//	int i = 0;
//	int count = 0;
//	for (i = 2;i <= num;i++)
//	{
//		int ret = sort(i,num);
//		if (ret == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("%d\n", num - count - 1);
//	return 0;
//}



//#include<stdio.h>
//void print(int (*p)[5])
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 0;i < 5;i++)
//	{
//		for (j = 0;j < 5;j++)
//		{
//			sum = sum + ((*p)[i][j]);
//			printf("%d ", (*p[j] + i));
//		}
//	}
//}
//int main()
//{
//	float arr1[5] = { 0.0 };
//	float arr2[5] = { 0.0 };
//	float arr3[5] = { 0.0 };
//	float arr4[5] = { 0.0 };
//	float arr5[5] = { 0.0 };
//	float* arr[5] = { arr1,arr2,arr3,arr4,arr5 };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 5;i++)
//	{
//		for (j = 0;j < 5;j++)
//		{
//			scanf("%f", &arr[i][j]);
//		}
//	}
//	print(arr);
//	return 0;
//}


//第128题
//描述
//输入一个班级5个学生各5科成绩,输出5个学生各5科成绩及总分。
//输入描述:
//五行,每行输入一个学生各5科成绩(浮点数表示,范围0.0~100.0),用空格分隔。
//输出描述:
//五行,按照输入顺序每行输出一个学生的5科成绩及总分(小数点保留1位)
//用空格分隔。
//示例1
//输入:
//98.5 96.0 100 99 88
//60.5 77 88.5 99 60
//80 80.5 89 91 92
//93 94 95.5 96 97.5
//100 98 88.5 88 78.5
//输出:
//98.5 96.0 100.0 99.0 88.0 481.5
//60.5 77.0 88.5 99.0 60.0 385.0
//80.0 80.5 89.0 91.0 92.0 432.5
//93.0 94.0 95.5 96.0 97.5 476.0
//100.0 98.0 88.5 88.0 78.5 453.0
//#include<stdio.h>
//#define ROW 6
//#define COL 6
//void avg(double score[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row - 1; i++)
//	{
//		double sum = 0;
//		int j = 0;
//		for (j = 0; j < col - 1; j++)
//		{
//			sum += score[i][j];
//			if (j == col - 2)
//			{
//				score[i][5] = sum;
//			}
//		}
//	}
//	for (i = 0; i < row - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%.1lf ", score[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	double score[ROW][COL];
//	int i = 0;
//	double num = 0;
//	for (i = 0; i < ROW - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < COL - 1; j++)
//		{
//			scanf("%lf", &num);
//			score[i][j] = num;
//		}
//	}
//	avg(score, ROW, COL);
//	return 0;
//}


//第129题
//描述
//KiKi得到了一个n行m列的矩阵,现在他想知道第x行第y列的值是多少
//请你帮助他完成这个任务。
//数据范围:1≤n,m≤5,矩阵中的值满足1≤val≤25
//输入描述:
//第一行包含两个数n和m,表示这个矩阵包含n行m列。
//从2到n+1行,每行输入m个整数(范围-231~231-1),用空格分隔
//共输入n*m个数,表示矩阵中的元素。
//接下来一行输入x和y,用空格分隔,表示KiKi想得到的元素的位置。
//(1≤x≤n≤10，1≤y≤m≤10)
//输出描述:
//一行,输出一个整数值,为KiKi想知道的值。
//示例1
//输入:
//2 3
//1 2 3
//4 5 6
//1 2
//输出:
//2
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void find(int arr[ROW][COL], int a, int b)
//{
//	printf("%d\n", arr[a - 1][b - 1]);
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int arr[ROW][COL];
//	int i = 0;
//	int num = 0;
//	for (i = 0;i < num1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < num2;j++)
//		{
//			scanf("%d", &num);
//			arr[i][j] = num;
//		}
//	}
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	find(arr, a, b);
//	return 0;
//}


//第130题
//描述
//KiKi想从n行m列的方阵队列中找到身高最高的人的位置,请你帮助他完成这个任务
//输入描述:
//第一行包含两个整数n和m,表示这个方阵队列包含n行m列。
//从2到n+1行,每行输入m个整数(范围-231~231-1),用空格分隔
//共输入n*m个数,表示方阵中的所有人的身高(保证输入身高都不相同)。
//(1≤x≤n≤10，1≤y≤m≤10)
//输出描述:
//一行,输出两个整数,用空格分隔,表示方阵中身高最高的人所在的行号和列号。
//示例1
//输入:
//2 2
//175 180
//176 185
//输出:
//2 2
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//#define INF 1000000000
//void compare(int arr[ROW][COL], int num1, int num2)
//{
//	int max = -INF;
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < num1;i++)
//	{
//		for (j = 0;j < num2;j++)
//		{
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	for (i = 0;i < num1;i++)
//	{
//		for (j = 0;j < num2;j++)
//		{
//			if (max == arr[i][j])
//			{
//				printf("%d %d", i + 1, j + 1);
//				break;
//			}
//		}
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int i = 0;
//	int num = 0;
//	int arr[ROW][COL];
//	for (i = 0;i < num1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < num2;j++)
//		{
//			scanf("%d", &num);
//			arr[i][j] = num;
//		}
//	}
//	compare(arr, num1, num2);
//}


//第131题
//描述
//KiKi得到了两个n行m列的矩阵,他想知道两个矩阵是否相等,请你回答他。
//(当两个矩阵对应数组元素都相等时两个矩阵相等)。
//输入描述:
//第一行包含两个整数n和m,表示两个矩阵包含n行m列,用空格分隔。
//从2到n+1行,每行输入m个整数(范围-231~231-1)
//用空格分隔,共输入n*m个数,表示第一个矩阵中的元素。
//从n+2行到2n+1,每行输入m个整数(范围-231~231-1)
//用空格分隔,共输入n*m个数,表示第二个矩阵中的元素。
//1<n,m<10
//输出描述:
//一行,如果两个矩阵相等输出"Yes"并换行,否则输出"No"并换行。
//示例1
//输入:
//2 2
//1 2
//3 4
//1 2
//3 4
//输出:
//Yes
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void compare(int arr1[ROW][COL], int arr2[ROW][COL], int num1, int num2)
//{
//	int flag = 0;
//	int i = 0;
//	for (i = 0;i < num1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < num2;j++)
//		{
//			if (arr1[i][j] != arr2[i][j])
//			{
//				flag = 1;
//				break;
//			}
//		}
//	}
//	if (flag == 1)
//	{
//		printf("No\n");
//	}
//	else
//	{
//		printf("Yes\n");
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int i = 0;
//	int num = 0;
//	int arr1[ROW][COL];
//	int arr2[ROW][COL];
//	int j = 0;
//	for (i = 0;i < num1;i++)
//	{
//		for (j = 0;j < num2;j++)
//		{
//			scanf("%d", &num);
//			arr1[i][j] = num;
//		}
//	}
//	for (i = 0;i < num1;i++)
//	{
//		for (j = 0;j < num2;j++)
//		{
//			scanf("%d", &num);
//			arr2[i][j] = num;
//		}
//	}
//	compare(arr1, arr2, num1, num2);
//}


//第132题
//描述
//输入NxM矩阵,矩阵元素均为整数,计算其中大于零的元素之和。
//输入描述:
//第一行为N M(N:矩阵行数;M:矩阵列数,且M,N<=10),接下来的N行为矩阵各行。
//输出描述:
//一行,其中大于零的元素之和。
//示例1
//输入:
//3 3
//2 3 4
//- 5 - 9 - 7
//0 8 - 4
//输出:
//17
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void SUM(int arr[ROW][COL], int num1, int num2)
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 0;i < num1;i++)
//	{
//		for (j = 0;j < num2;j++)
//		{
//			if (arr[i][j] > 0)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int arr[ROW][COL];
//	int i = 0;
//	int num1 = 0;
//	int num2 = 0;
//	int num = 0;
//	scanf("%d %d", &num1, &num2);
//	for (i = 0;i < num1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < num2;j++)
//		{
//			scanf("%d", &num);
//			arr[i][j] = num;
//		}
//	}
//	SUM(arr, num1, num2);
//}


//第133题
//描述
//给你一个整数n，按要求输出n∗n的回型矩阵
//输入描述:
//输入一行,包含一个整数n
//1<=n<=19
//输出描述:
//输出n行,每行包含n个正整数
//示例1
//输入:
//4
//输出:
//1  2  3  4
//12 13 14 5
//11 16 15 6
//10 9  8  7
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void back(int num)
//{
//	int i = 0;
//	int j = -1;
//	int k = 0;
//	int arr[ROW][COL];
//	int num1 = 1;
//	int count = 1;
//	int temp = 0;
//	if (num % 2 == 0)
//	{
//		temp = num / 2;
//	}
//	else
//	{
//		temp = num / 2 + 1;
//	}
//	for (k = 0;k < temp;k++)
//	{
//		while (j < num - count && num1 <= num * num)
//		{
//			arr[i][++j] = num1++;
//		}
//		while (i < num - count && num1 <= num * num)
//		{
//			arr[++i][j] = num1++;
//		}
//		while (j > count - 1 && num1 <= num * num)
//		{
//			arr[i][--j] = num1++;
//		}
//		while (i != count && num1 <= num * num)
//		{
//			arr[--i][j] = num1++;
//		}
//		count++;
//	}
//	for (i = 0;i < num;i++)
//	{
//		for (j = 0;j < num;j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	back(num);
//}


//第134题
//描述
//给你一个整数n,输出n∗n的蛇形矩阵。
//输入描述:
//输入一行,包含一个整数n
//输出描述:
//输出n行,每行包含n个正整数,通过空格分隔。1<=n<=1000
//示例1
//输入:
//4
//输出:
//1 2 6 7
//3 5 8 13
//4 9 12 14
//10 11 15 16
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void snake(int num)
//{
//	int arr[ROW][COL];
//	int i = 0;
//	int j = 0;
//	int num1 = 1;
//	int derection = 0;
//	//二维矩阵为0
//	for (i = 0;i < num;i++)
//	{
//		for (j = 0;j < num;j++)
//		{
//			arr[i][j] = 0;
//		}
//	}
//	i = 0;
//	j = 0;
//	while (num1 <= num * num)
//	{
//		arr[i][j] = num1++;
//		//右上方向
//		if (derection == 0)
//		{
//			if (i == 0 && j < num - 1)
//			{
//				j++;//到达上边界,右移
//				derection = 1;
//			}
//			else if (j == num - 1)
//			{
//				i++;//到达右边界,下移
//				derection = 1;
//			}
//			else
//			{
//				i--;
//				j++;
//			}
//		}
//		//左下方向
//		else
//		{
//			if (j == 0 && i < num - 1)
//			{
//				i++;//到达左边界,下移
//				derection = 0;
//			}
//			else if (i == num - 1)
//			{
//				j++;//到达下边界,右移
//				derection = 0;
//			}
//			else
//			{
//				i++;
//				j--;
//			}
//		}
//	}
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


//第135题
//描述
//给出两幅相同大小的黑白图像(用0-1矩阵)表示,求它们的相似度。
//若两幅图像在相同位置上的像素点颜色相同,则称它们在该位置具有相同的像素点。
//两幅图像的相似度定义为相同像素点数占总像素点数的百分比。
//输入描述:
//第一行包含两个整数m和n,表示图像的行数和列数,用单个空格隔开。
//1≤m≤100,1≤n≤100。
//之后m行,每行n个整数0或1,表示第一幅黑白图像上各像素点的颜色
//相邻两个数用单个空格隔开。
//之后m行,每行n个整数0或1,表示第二幅黑白图像上各像素点的颜色
//相邻两个数用单个空格隔开。
//输出描述:
//一个实数,表示相似度(以百分比的形式给出),精确到小数点后两位。
//示例1
//输入:
//3 3
//1 0 1
//0 0 1
//1 1 0
//1 1 0
//0 0 1
//0 0 1
//输出:
//44.44
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void similar(int arr[ROW][COL], int a, int b)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < a;i++)
//	{
//		int j = 0;
//		for (j = 0;j < b;j++)
//		{
//			if (arr[i][j] == arr[i + a][j])
//			{
//				count += 2;
//			}
//		}
//	}
//	double sim = count / (a * b * 2.0);
//	printf("%.2f\n", sim * 100);
//}
//int main()
//{
//	int arr[ROW][COL];
//	int a = 0;
//	int b = 0;
//	int num = 0;
//	scanf("%d %d", &a, &b);
//	//数组初始化
//	int i = 0;
//	for (i = 0;i < 2 * a;i++)
//	{
//		int j = 0;
//		for (j = 0;j < b;j++)
//		{
//			arr[i][j] = 0;
//		}
//	}
//	//输入两组数
//	i = 0;
//	for (i = 0;i < 2 * a;i++)
//	{
//		int j = 0;
//		for (j = 0;j < b;j++)
//		{
//			scanf("%d", &num);
//			arr[i][j] = num;
//		}
//	}
//	//相似度处理
//	similar(arr, a, b);
//}


//第136题
//描述
//KiKi想知道一个n阶方矩是否为上三角矩阵,请帮他编程判定。
//上三角矩阵即主对角线以下的元素都为0的矩阵,主对角线为从矩阵的左上角至右下角的连线。
//输入描述:
//第一行包含一个整数n,表示一个方阵包含n行n列,用空格分隔。
//(2≤n≤10)
//从2到n+1行,每行输入n个整数(范围-231~231-1),用空格分隔,共输入n*n个数。
//输出描述:
//一行,如果输入方阵是上三角矩阵输出"YES"并换行,否则输出"NO"并换行。
//示例1
//输入:
//3
//1 2 3
//0 4 5
//0 0 6
//输出:
//YES
//示例2
//输入:
//4
//1 2 3 4
//5 6 7 8
//9 0 11 12
//13 0 0 16
//输出:
//NO
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//int upper_triangular_matrix(int arr[ROW][COL], int a)
//{
//	int i = 0;
//	int flag = 0;
//	for (i = 1;i < a;i++)
//	{
//		int j = 0;
//		for (j = 0;j < a;j++)
//		{
//			if (arr[i][j] != 0 && j < i)
//			{
//				flag = 1;
//				break;
//			}
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
//	int arr[ROW][COL];
//	int num = 0;
//	int a = 0;
//	scanf("%d", &a);
//	//初始化数组为0
//	int i = 0;
//	for (i = 0;i < a;i++)
//	{
//		int j = 0;
//		for (j = 0;j < a;j++)
//		{
//			arr[i][j] = 0;
//		}
//	}
//	//输入数组
//	for (i = 0;i < a;i++)
//	{
//		int j = 0;
//		for (j = 0;j < a;j++)
//		{
//			scanf("%d", &num);
//			arr[i][j] = num;
//		}
//	}
//	int ret = upper_triangular_matrix(arr, a);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//}


//第137题
//描述
//KiKi现在得到一个包含n*m个数的整数序列
//现在他需要把这n*m个数按顺序规划成一个n行m列的矩阵并输出,请你帮他完成这个任务。
//输入描述:
//一行,输入两个整数n和m,用空格分隔,第二行包含n*m个整数
//(范围-231~231-1)(1≤n≤10,1≤m≤10)
//输出描述:
//输出规划后n行m列的矩阵,每个数的后面有一个空格。
//示例1
//输入:
//2 3
//1 2 3 4 5 6
//输出:
//1 2 3
//4 5 6
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void matrix(int arr1[ROW], int a, int b)
//{
//	int arr2[ROW][COL];
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < a;i++)
//	{
//		int j = 0;
//		for (j = 0;j < b;j++)
//		{
//			arr2[i][j] = arr1[count++];
//		}
//	}
//	for (i = 0;i < a;i++)
//	{
//		int j = 0;
//		for (j = 0;j < b;j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int arr1[ROW] = { 0 };
//	int i = 0;
//	int num = 0;
//	for (i = 0;i < a * b;i++)
//	{
//		scanf("%d", &num);
//		arr1[i] = num;
//	}
//	matrix(arr1, a, b);
//}


//第138题
//描述
//KiKi有一个矩阵,他想知道转置后的矩阵(将矩阵的行列互换得到的新矩阵称为转置矩阵)
//请编程帮他解答。
//输入描述:
//第一行包含两个整数n和m,表示一个矩阵包含n行m列,用空格分隔。
//(1≤n≤10,1≤m≤10)
//从2到n+1行,每行输入m个整数(范围-231~231-1),用空格分隔
//共输入n*m个数,表示第一个矩阵中的元素。
//输出描述:
//输出m行n列,为矩阵转置后的结果。
//每个数后面有一个空格。
//示例1
//输入:
//2 3
//1 2 3
//4 5 6
//输出:
//1 4
//2 5
//3 6
//#include<stdio.h>
//#define ROW 100
//#define COL 100
//void zhuan_zhi_matrix(int arr1[ROW][COL], int a, int b)
//{
//	int i = 0;
//	int arr2[ROW][COL];
//	int m = 0;
//	int n = 0;
//	for (i = 0;i < b;i++)
//	{
//		int j = 0;
//		for (j = 0;j < a;j++)
//		{
//			arr2[i][j] = arr1[m][n];
//			int temp = m;
//			if (++temp < a)
//			{
//				m++;
//			}
//			else
//			{
//				m = 0;
//				n++;
//			}
//		}
//	}
//	for (i = 0;i < b;i++)
//	{
//		int j = 0;
//		for (j = 0;j < a;j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int arr1[ROW][COL];
//	//初始化矩阵为0
//	int i = 0;
//	for (i = 0;i < a;i++)
//	{
//		int j = 0;
//		for (j = 0;j < b;j++)
//		{
//			arr1[i][j] = 0;
//		}
//	}
//	int num = 0;
//	for (i = 0;i < a;i++)
//	{
//		int j = 0;
//		for (j = 0;j < b;j++)
//		{
//			scanf("%d", &num);
//			arr1[i][j] = num;
//		}
//	}
//	zhuan_zhi_matrix(arr1, a, b);
//}


//第140题
//描述
//KiKi知道什么叫杨辉三角之后对杨辉三角产生了浓厚的兴趣
//他想知道杨辉三角的前n行,请编程帮他解答。
//杨辉三角
//本质上是二项式(a + b)的n次方展开后各项的系数排成的三角形。
//其性质包括:每行的端点数为1,一个数也为1;每个数等于它左上方和上方的两数之和。
//输入描述:
//第一行包含一个整数数n。(1≤n≤30)
//输出描述:
//包含n行,为杨辉三角的前n行,每个数输出域宽为5。
//示例1
//输入:
//6
//输出:
//1
//1    1
//1    2    1
//1    3    3    1
//1    4    6    4    1
//1    5   10   10    5    1
//#include<stdio.h>
//#include<string.h>
//#define ROW 100
//#define COL 100
//void triangle(int num)
//{
//	int arr[ROW][COL];
//	memset(arr, 0, sizeof(arr));
//	int i = 0;
//	int count = 1;
//	for (i = 0;i < 2;i++)
//	{
//		int j = 0;
//		for (j = 0;j <= i;j++)
//		{
//			arr[i][j] = count;
//		}
//	}
//	for (i = 2;i < num;i++)
//	{
//		int j = 0;
//		for (j = 0;j <= i;j++)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0;i < num;i++)
//	{
//		int j = 0;
//		for (j = 0;j <= i;j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	triangle(num);
//	return 0;
//}


//第141题
//描述
//KiKi和BoBo玩"井"字棋。
//也就是在九宫格中,只要任意行、列
//或者任意对角线上面出现三个连续相同的棋子,就能获胜。
//请根据棋盘状态,判断当前输赢。
//输入描述:
//三行三列的字符元素,代表棋盘状态,字符元素用空格分开,代表当前棋盘,其中元素为K代表KiKi玩家的棋子，为O表示没有棋子，为B代表BoBo玩家的棋子。
//输出描述:
//如果KiKi获胜,输出"KiKi wins!"
//如果BoBo获胜,输出"BoBo wins!"
//如果没有获胜,输出"No winner!"。
//示例1
//输入:
//K O B
//O K B
//B O K
//输出:
//KiKi wins!
//#include<stdio.h>
//#define ROW 3
//#define COL 3
//char WIN(char arr[ROW][COL], int a, int b)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != ' ')
//		{
//			return arr[i][0];
//		}
//	}
//	for (i = 0; i < a; i++)
//	{
//		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ')
//		{
//			return arr[0][i];
//		}
//	}
//	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ')
//	{
//		return arr[0][0];
//	}
//	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != ' ')
//	{
//		return arr[0][2];
//	}
//	return ' ';
//}
//int main()
//{
//	char arr[ROW][COL];
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 3;j++)
//		{
//			scanf(" %c", &arr[i][j]);
//		}
//	}
//	char ret = WIN(arr, 3, 3);
//	if (ret == 'K')
//	{
//		printf("KiKi wins!\n");
//	}
//	else if (ret == 'B')
//	{
//		printf("BoBo wins!\n");
//	}
//	else
//	{
//		printf("No winner!\n");
//	}
//	return 0;
//}