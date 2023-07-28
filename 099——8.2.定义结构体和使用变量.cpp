// 099——8.2.定义结构体和使用变量.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
	int num;
	char name[32];
	char sex;
	int age;
	double score;
	char addr[32];
};



int main()
{
	int a;
	struct Student stu1;
	struct Student stu2;

	a = 10;
	stu1.num = 1;
	stu1.age = 10;
	stu1.score = 98.5;
	strcpy_s(stu1.name, "chenlichen");
	strcpy_s(stu1.addr, "湖南");

	printf("学号：%d,年龄：%d,分数：%lf,名字：%s,地址:%s\n",
		stu1.num, stu1.age, stu1.score, stu1.name, stu1.addr);


}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
