#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<fstream>
#include<string>
using namespace std;




//struct mailList {
//    int sid;  // ѧ�� 
//    char name[20];  // ���� 
//    char Class[6];//�༶
//    char phone[20]; // �绰���� 
//    char email[25];//����
//    char address[10];//��ַ
//};
//
//int main(void) {
//
//    int n;
//    int number;
//    cin >> number;
//    printf("������༶ѧ��������:");
//    scanf("%d", &n);
//    struct mailList* ms = (struct mailList*)malloc(sizeof(struct mailList) * n); // ����洢�����ѧ����Ϣ���ڴ�ռ� 
//
//    FILE* fp = fopen("myfile.dat", "wb");
//    if (fp == NULL) {
//        printf("�ļ��򿪻򴴽�ʧ�ܣ�\n");
//        return 0;
//    }
//
//    int i;
//    // �������ȡn��ѧ������Ϣ 
//    for (i = 0; i < n; i++) {
//        printf("�������%d��ѧ������Ϣ��ѧ�� ����  �༶ �绰 ���� ��ַ����", i + 1);
//        scanf("%d %s %s %s %s %s", &ms[i].sid, ms[i].name,ms[i].Class, ms[i].phone, ms[i].email,ms[i].address);
//        fwrite(&ms[i], sizeof(struct mailList), 1, fp);
//    }
//    fclose(fp);
//
//    fp = fopen("myfile.dat", "rb");
//    if (fp == NULL) {
//        printf("�ļ��򿪻򴴽�ʧ�ܣ�\n");
//        return 0;
//    }
//
//    struct mailList* rs = (struct mailList*)malloc(sizeof(struct mailList) * n); // ����洢���ļ���ȡѧ����Ϣ���ڴ�ռ� 
//    // ���ļ�myfile.data��ȡn��ѧ������Ϣ 
//    for (i = 0; i < n; i++) {
//        fread(&rs[i], sizeof(struct mailList), 1, fp);
//        if(number==rs[i].sid)
//            printf("ѧ������Ϣ��ѧ�� ����  �༶ �绰 ���� ��ַ����%d %s %s %s %s %s\n",  ms[i].sid, ms[i].name, ms[i].Class,ms[i].phone, ms[i].email, ms[i].address);
//    }
//    fclose(fp);
//
//    return 0;
//}

