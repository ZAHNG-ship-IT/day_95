#include <stdio.h>
//字符指针

int main()
{
    // // 字符指针
    // char str[] = "Hello, World!";
    // char *pStr = str; // 指向字符串的指针

    // printf("字符串内容: %s\n", pStr);
    // printf("字符串地址: %p\n", (void*)pStr);

    // // 修改字符串中的字符
    // pStr[7] = 'C';
    // printf("修改后的字符串内容: %s\n", pStr);

    // // 演示字符指针的遍历
    // printf("遍历字符串:\n");
    // for (int i = 0; pStr[i] != '\0'; i++) {
    //     printf("字符 %d: %c, 地址: %p\n", i, pStr[i], (void*)&pStr[i]);
    // }


    // char* p = "Hello, World!";
    // printf("字符串内容: %s\n", p);//输出是8，因为在64位系统中，指针大小为8字节
    // printf(" %zu\n", sizeof(p));

    
    char p = "Hello, World!";
    printf("字符串内容: %s\n", &p); // 输出字符串内容


    return 0;
// 2. 打印逻辑步骤
// 获取指针值：printf获取参数p的值（即字符串首地址）
// 逐字符读取：从该地址开始，逐个读取字符
// 直到结束符：读取到\0（空字符）时停止
// 输出字符：将读取到的字符依次输出到终端

}