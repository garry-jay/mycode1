#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<fstream>
//#include<cstdio>
//using namespace std;


//struct Person {
//
//	char name[15];
//	char job[15];
//}a;
//int main()
//{
//	int n;
//	cout << "�������������:";
//	cin >> n;
//	Person* p = new Person[n];
//	Person* ans = new Person[n];
//	int pos = 0,tmp=n;
//	while (tmp--)
//	{
//		cout << "��������Ա������(#��ʾ����)"<<endl;
//		char ch=cin.get();
//		int pos1=0;
//		while ((ch = cin.get()) != '#')
//		{
//			p[pos].name[pos1]=ch;
//			pos1++;
//		}
//		p[pos].name[pos1] = '\0';
//		cout << "��������Ա�Ĺ�������#��ʾ������" << endl;
//		pos1 = 0;
//		ch = cin.get();
//		while ((ch = cin.get()) != '#')
//		{
//			p[pos].job[pos1]=ch;
//			pos1++;
//		}
//		p[pos].job[pos1] = '\0';
//		pos++;
//	}
//
//	
//	cout << "----------------------------------" << endl;
//	cout << "----------------------------------" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		int pos = 0;
//		while (ans[i].name[pos] != '\0')
//		{
//			cout << ans[i].name[pos];
//			pos++;
//		}
//		cout << endl;
//		pos = 0;
//		while (ans[i].job[pos] != '\0')
//		{
//			cout << ans[i].job[pos];
//			pos++;
//		}
//		cout << endl;
//		cout << "-----------------------" << endl;
//	}
//
//
//	return 0;
//}

#include<iostream>  
#include<fstream>  
#include<string>  

using namespace std;

struct Person {
    string name;
    string job;
};

int main() {
    int n;
    cout << "�������������:";
    cin >> n;
    cin.ignore(); // ���Ի��з�  

    Person* p = new Person[n];
    Person* ans = new Person[n];

    for (int i = 0; i < n; i++) {
        cout << "��������Ա��������#��ʾ������" << endl;
        getline(cin, p[i].name, '#');
        cin.ignore();
        cout << "��������Ա�Ĺ�������#��ʾ������" << endl;
        getline(cin, p[i].job, '#');
        cin.ignore();
    }

    ofstream ofs("person.txt");
    for (int i = 0; i < n; i++)
    {
        ofs << p[i].name << " " << p[i].job << endl;
    }

    ifstream ifs("person.txt");
    cout << "-------------------------------------------"<<endl;
    for (int i = 0; i < n; i++)
    {
        ifs >> ans[i].name>> ans[i].job;
        cout << ans[i].name << " " << ans[i].job << endl;
        cout << "-------------------------------------------" << endl;
    }
  

    delete[] p;
    delete[] ans;

    system("pause");
    return 0;
}