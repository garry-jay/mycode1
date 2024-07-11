#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream ifs("test.txt");
	ofstream ofs("text.txt");
	while (!ifs.eof())
	{
		char ch1 = ifs.get();
		char ch2 = ifs.get();
		if (ch1 == '/' && ch2 == '/')
		{
			while (ch2 != '\n')
			{
				ch2 = ifs.get();//一直读读到换行符
				cout << ch2;
				ofs << ch2;
			}
			ofs << ch2;
			cout << endl;
		}
		else if (ch1 == '/' && ch2 == '*')// /* 8*/
		{
			while (1)
			{
				ch2 = ifs.get();
				if (ch2 == '*')
				{
					ch1 = ifs.get();
					if (ch1 == '/')
						break;
					else
					{
						cout << ch2 << ch1;
						ofs << ch2 << ch1;
					}
						
				}
				else
				{
					cout << ch2; 
					ofs<<ch2;
				}
				
			}
			cout << endl;
		}
	}
	ifs.close();
	ofs.close();
	return 0;
}

//haha
/*hello world!
hello wolrd! */
