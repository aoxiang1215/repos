#include<iostream>
#include"axpack.h"

using namespace std;

int main()
{
	int x, y, z, a, b,c,d,e,f;
	cin >> x>> y>> z;
	a = max(x, y);
	b = max(a, z);
	c = min(x, y);
	d = min(c, z);
	e = aoxiang(b, d);
	cout << d << "����Сֵ" << b << "�����ֵ"<<e<<"�ǰ�����";
	return 0;
}