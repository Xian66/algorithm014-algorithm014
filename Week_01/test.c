#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{
    int score;
    char name[128];
};

int main()
{
    // 普通的结构体使用
    struct Student stu1;
    stu1.score = 100;
    strcpy(stu1.name,"张三");
    printf("名字：%s,分数：%d\n",stu1.name,stu1.score);
    
    // 结构体指针的使用
    struct Student *p;//这是野指针
    p = (struct Student *)malloc(sizeof(struct Student));//给野指针或空指针指明内存空间
    p->score = 98;//结构体指针访问数据不用.而要用->
    strcpy(p->name,"李四");
    printf("名字：%s,分数：%d\n",p->name,p->score);
    
    // 结构体指针也能指向其他结构体
    free(p);//释放了malloc申请的空间就不会造成内存泄漏了
    p = &stu1;//指向其他结构体
    printf("名字：%s,分数：%d\n",p->name,p->score);
    
    return 0;
}