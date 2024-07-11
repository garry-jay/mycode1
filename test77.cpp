#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char arr[20] = {0};
	char arr1[20] = { 0 };
	char ch; int pos = 0;
	while ((ch = cin.get()) != '#')
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			ch=((ch - 65) + 4) % 26 + 65;
		}
		if (ch >= 'a' && ch <= 'z')
		{
			ch = ((ch - 97) + 4) % 26 + 97;
		}
		arr[pos] = ch;
		pos++;
	}
	ofstream ofs("file.txt", ios::out | ios::binary);
	ofs.write(arr, sizeof(arr));
	ifstream ifs("file.txt", ios::in | ios::binary);
	ifs.read(arr1, sizeof(arr));
	pos = 0;
	while (arr[pos] != '\0')
	{
		ch = arr[pos];
		if (ch >= 'A' && ch <= 'Z')
		{
			ch = ((ch - 65)-4+26) % 26 + 65;
		}
		if (ch >= 'a' && ch <= 'z')
		{
			ch = ((ch - 97) -4+26) % 26 + 97;
		}
		cout << ch;
		pos++;
	}
	system("pause");
	return 0;
}