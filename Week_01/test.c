#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{
    int score;
    char name[128];
};

int main()
{
    // ��ͨ�Ľṹ��ʹ��
    struct Student stu1;
    stu1.score = 100;
    strcpy(stu1.name,"����");
    printf("���֣�%s,������%d\n",stu1.name,stu1.score);
    
    // �ṹ��ָ���ʹ��
    struct Student *p;//����Ұָ��
    p = (struct Student *)malloc(sizeof(struct Student));//��Ұָ����ָ��ָ���ڴ�ռ�
    p->score = 98;//�ṹ��ָ��������ݲ���.��Ҫ��->
    strcpy(p->name,"����");
    printf("���֣�%s,������%d\n",p->name,p->score);
    
    // �ṹ��ָ��Ҳ��ָ�������ṹ��
    free(p);//�ͷ���malloc����Ŀռ�Ͳ�������ڴ�й©��
    p = &stu1;//ָ�������ṹ��
    printf("���֣�%s,������%d\n",p->name,p->score);
    
    return 0;
}