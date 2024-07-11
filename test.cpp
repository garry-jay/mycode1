#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<fstream>
#include<string>
using namespace std;




//struct mailList {
//    int sid;  // 学号 
//    char name[20];  // 姓名 
//    char Class[6];//班级
//    char phone[20]; // 电话号码 
//    char email[25];//邮箱
//    char address[10];//地址
//};
//
//int main(void) {
//
//    int n;
//    int number;
//    cin >> number;
//    printf("请输入班级学生的人数:");
//    scanf("%d", &n);
//    struct mailList* ms = (struct mailList*)malloc(sizeof(struct mailList) * n); // 申请存储输入的学生信息的内存空间 
//
//    FILE* fp = fopen("myfile.dat", "wb");
//    if (fp == NULL) {
//        printf("文件打开或创建失败！\n");
//        return 0;
//    }
//
//    int i;
//    // 从输入获取n个学生的信息 
//    for (i = 0; i < n; i++) {
//        printf("请输入第%d个学生的信息（学号 姓名  班级 电话 邮箱 地址）：", i + 1);
//        scanf("%d %s %s %s %s %s", &ms[i].sid, ms[i].name,ms[i].Class, ms[i].phone, ms[i].email,ms[i].address);
//        fwrite(&ms[i], sizeof(struct mailList), 1, fp);
//    }
//    fclose(fp);
//
//    fp = fopen("myfile.dat", "rb");
//    if (fp == NULL) {
//        printf("文件打开或创建失败！\n");
//        return 0;
//    }
//
//    struct mailList* rs = (struct mailList*)malloc(sizeof(struct mailList) * n); // 申请存储从文件读取学生信息的内存空间 
//    // 从文件myfile.data读取n个学生的信息 
//    for (i = 0; i < n; i++) {
//        fread(&rs[i], sizeof(struct mailList), 1, fp);
//        if(number==rs[i].sid)
//            printf("学生的信息（学号 姓名  班级 电话 邮箱 地址）：%d %s %s %s %s %s\n",  ms[i].sid, ms[i].name, ms[i].Class,ms[i].phone, ms[i].email, ms[i].address);
//    }
//    fclose(fp);
//
//    return 0;
//}

