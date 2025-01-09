#define _CRT_SECURE_NO_WARNINGS 1 


//求圆周率
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	const double pi = acos(-1.0);
//	return 0;
//}


//交换两个数
//数字太大会超范围
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}


//交换两个数
//可读性差
//效率低
//只能交换整数
//b^b=0
//a^0=a
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;//a^b^b
//	a = a ^ b;//a^b^a
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//两个数求平均值
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int mid = a + (b - a) / 2;
//	printf("%d\n", mid);
//	return 0;
//}


//在⼀个升序的数组中查找指定的数字n,找到了就打印下标,找不到就打印找不到
//遍历数组
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int flag = 0;
//	for (i = 0;i < sz;i++)
//	{
//		if (k == arr[i])
//		{
//			flag = 1;
//			printf("找到了,下标是: %d\n", i);
//			break;
//		}
//	}
//	if(flag == 0)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//二分查找(折半查找) ---- 有序
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	printf("请输入你要找的数:");
//	scanf("%d", &k);
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int flag = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//排序
//冒泡排序 --- 升序
//两两相邻的元素进行比较
//n个数字需要n - 1次
//#include<stdio.h>
//void sort(int arr[], int x)
//{
//	int i = 0;
//	int j = 0;
//	for (j = 0;j < x - 1;j++)
//	{
//		//一次冒泡排序,进行多少对比较
//		for (i = 0;i < x - 1 - j;i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				arr[i] = arr[i] + arr[i + 1];
//				arr[i + 1] = arr[i] - arr[i + 1];
//				arr[i] = arr[i] - arr[i + 1];
//				/*int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;*/
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2,3,0,5,1,4,7,6,9,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//每一本正式出版的图书都有一个ISBN号码与之对应
//ISBN码包括9位数字、1位识别码和3位分隔符
//其规定格式如"x-xxx-xxxxx-x"
//其中符号"-"是分隔符(键盘上的减号)
//最后一位是识别码,例如0-670-82162-4就是一个标准的ISBN码。
//ISBN码的首位数字表示书籍的出版语言,例如0代表英语;
//第一个分隔符"-"之后的三位数字代表出版社,例如670代表维京出版社
//第二个分隔之后的五位数字代表该书在出版社的编号
//最后一位为识别码。
//识别码的计算方法如下:
//首位数字乘以1加上次位数字乘以2……以此类推, 用所得的结果 % 11, 所得的余数即为识别码
//如果余数为10,则识别码为大写字母X。
//例如ISBN号码0-670-82162-4中的识别码4是这样得到的:
//对067082162这9个数字,从左至右,分别乘以1,2,…,9,再求和,即0×1+6×2+……+2×9=158
//然后取158%11的结果4作为识别码。
//你的任务是编写程序判断输入的ISBN号码中识别码是否正确
//如果正确, 则仅输出"Right";如果错误,则输出你认为是正确的ISBN号码。
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
//        sum = (arr[i] - '0') * j + sum;//重要
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

//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	return 0;
//}



