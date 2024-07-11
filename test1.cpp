#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Ratio {
	int num;
	int den;
public:
	Ratio(int n=0, int d=1) { num = n; den = d; }
	void disp()
	{
		cout << "num/den=" << num / den << endl;
	}
};

int main()
{
	Ratio* r = new Ratio;
	r->disp();
	cout << endl;
	Ratio* r1 = new Ratio(2);
	r1->disp();
	cout << endl;
	Ratio* r2 = new Ratio(4,3);
	r2->disp();
	cout << endl;
	system("pause");
	return 0;
}
