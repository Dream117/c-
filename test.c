#include<stdio.h>
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main(void)
//{
//	int (*p)(int x, int y) = max;
//	int a, b, c;
//	int d = 0;
//
//	printf("请输入三个数字：");
//	scanf_s("%d %d %d", &a, &b, &c);
//	d = p(p(a, b), c);
//	printf("最大数字是：%d\n", d);
//	return 0;
//	
//}

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//数组的大小sizeof(a)=16 sizeof(a[0])=4
//	printf("%d\n", sizeof(a + 0));//
//	printf("%d\n", sizeof(*a));//
//	printf("%d\n", sizeof(a + 1));//+4
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//	printf("%d\n", sizeof(&a + 1));
//	printf("%d\n", sizeof(&a[0]));
//	printf("%d\n", sizeof(&a[0] + 1));
//}



//int main()
//{
//char arr[] = { 'a','b','c','d','e','f' };
//printf("%d\n", sizeof(arr));
//printf("%d\n", sizeof(arr + 0));
//printf("%d\n", sizeof(*arr));
//printf("%d\n", sizeof(arr[1]));
//printf("%d\n", sizeof(&arr));
//printf("%d\n", sizeof(&arr + 1));
//printf("%d\n", sizeof(&arr[0] + 1));
//}




#include<stdlib.h>
#include<string.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//
//int cmp_float(const void* el, const void* e2)
//{
//	/*if (*(float*)el == *(float*)e2)
//		return 0;
//	else if (*(float*)el > *(float*)e2)
//		return 1;
//	else
//		return -1;*/
//	//return	((int)(*(float*)e1-*(float*)e2))//要考虑小数点的问题
//	return ((int)(*(float*)el) - ((int)*(float*)e2));
//}
//struct stu
//{
//	char name[10];
//	int age;
//};
//int cmp_stu_by_name(const void* el, const void* e2)
//{
//	return strcmp(((struct stu*)el)->name , ((struct stu*)e2)->name);
//}
//int cmp_stu_by_age(const void* el, const void* e2)
//{
//	return strcmp(((struct stu*)el)->age, ((struct stu*)e2)->age);
//}
//void test1()//排序整数
//{
//	int a[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//void test2()//排序浮点数
//{
//	float f[] = { 1.1,3.2,5.0,7.9,2.1,4.5 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%.1f ", f[i]);
//	}
//}
//
//void test3()
//{
//	struct stu s[] = { {"zhangsan",20},{"lisi",10},{"wangwu",30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//
//	
//}
//int main(void)
//{
//	//test1();//排序整数
//	//test2();
//	test3();
//}
//void swap(const void* e1, const* e2,int width)
//{
//	int i= 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *((char*)e1 + i);
//		*((char*)e1 + i) = *((char*)e2 + i);
//		*((char*)e2 + i) = tmp;
//	}
//}
//void Qsort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{ 
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) < 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//
//int cmp_float(const void* el, const void* e2)
//{
//	/*if (*(float*)el == *(float*)e2)
//		return 0;
//	else if (*(float*)el > *(float*)e2)
//		return 1;
//	else
//		return -1;*/
//		//return	((int)(*(float*)e1-*(float*)e2))//要考虑小数点的问题
//	return ((int)(*(float*)el) - ((int)*(float*)e2));
//}
//struct stu
//{
//	char name[10];
//	int age;
//};
//int cmp_stu_by_name(const void* el, const void* e2)
//{
//	return strcmp(((struct stu*)el)->name, ((struct stu*)e2)->name);
//}
//int cmp_stu_by_age(const void* el, const void* e2)
//{
//	return ((struct stu*)el)->age- ((struct stu*)e2)->age;
//}
//void test1()//排序整数
//{
//	int a[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	Qsort(a, sz, sizeof(a[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//void test2()//排序浮点数
//{
//	float f[] = { 1.1,3.2,5.0,7.9,2.1,4.5 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%.1f ", f[i]);
//	}
//}
//
//void test3()
//{
//	struct stu s[] = { {"zhangsan",20},{"lisi",10},{"wangwu",30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	 
//
//}
//int main(void)
//{
//	test1();//排序整数
//	//test2();
//	//test3();
//}
//int main(void)
//{
//	//数组名是首元素地址
//	//1.sizeof(数组名)--数组名表示整个数组(单独)
//	//&数组名--数组名表示整个数组
//
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//4/8
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//4/8
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//4/8
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));//4/8
//	printf("%d\n", sizeof(&a[0]));//4/8
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr + 0));//随机值
//	//printf("%d\n", strlen(*arr));//error
//	//printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//}

//
//int main()
//{
//	char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8

//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//6
//	//printf("%d\n", strlen(arr[1]));//6
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//12
//	printf("%d\n", strlen(&arr[0] + 1));//5
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d", *(a + 1), *(ptr - 1));
//}

int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);
}