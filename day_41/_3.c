#include <stdio.h>
//数组指针与指针数组的常用用法

int main()
{
    // 数组指针
    int arr[3] = {1, 2, 3};
    int (*pArr)[3] = &arr; // 指向数组的指针

    printf("数组指针 pArr 指向的地址: %p\n", (void*)pArr);
    printf("数组元素: %d, %d, %d\n", (*pArr)[0], (*pArr)[1], (*pArr)[2]);

    // 指针数组
    int *ptrArr[3];
    for (int i = 0; i < 3; i++) {
        ptrArr[i] = &arr[i]; // 每个指针指向数组的一个元素
    }

    printf("\n指针数组 ptrArr 的内容:\n");
    for (int i = 0; i < 3; i++) {
        printf("ptrArr[%d] 指向的地址: %p, 值: %d\n", i, (void*)ptrArr[i], *ptrArr[i]);
    }

    return 0;
}

// 2. 主要区别
// 特性	普通数组/指针	数组指针
// 定义	int *p 或 int arr[5]	int (*p)[5]
// 指向对象	单个元素	整个数组
// 地址运算	p+1移动sizeof(int)字节	p+1移动sizeof(int)*5字节
// 初始化	int *p = arr	int (*p)[5] = &arr