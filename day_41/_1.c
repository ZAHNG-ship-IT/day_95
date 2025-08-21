#include <stdio.h>
//数组指针，指针数组区别
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


// 指针数组 int *p[5]：
// p是数组名
// p包含5个元素，每个元素都是int*类型的指针
// 可以分别指向不同的int变量或数组


// 数组指针 int (*p)[5]：
// p是指针变量
// p只能指向包含5个int元素的数组
// p本身只占用一个指针的内存空间