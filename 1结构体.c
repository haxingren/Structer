#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//结构体类型
struct Peo
{
	//成员变量
	char name[20];
	char tele[12];
	char sex[5];
	int height;
};

//struct Peo
//{
//	//成员变量
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int height;
//}p1, p2;
////pi,p2是用结构体类型struct Peo创建的变量
////好比int a;里的a
//当然这不是必须的，也可以等使用时再创建

struct St
{
	struct Peo p;
	int a;
	float f;
};
//结构体类型里可以有其他结构体类型

//结构体传参
void print1(struct Peo p1)
{
	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.height);
}

//结构体地址传参
void print2(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->height);
}

//传地址比较好，因为结构体的内存较大，如果直接传参，就需要再创建一个同样大小的形参，造成对内存的浪费
int main()
{
	struct Peo p1 = { "xiaoming", "0123456789", "boy", 177 };//创建结构体变量
	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.height);
	struct St p2 = { {"xiaomei", "0123456778", "girl", 167}, 10, 1.23f };
	printf("%s %s %s %d %d %f\n", p2.p.name, p2.p.tele, p2.p.sex, p2.p.height, p2.a, p2.f);

	print1(p1);
	print2(&p1);
	return 0;
}