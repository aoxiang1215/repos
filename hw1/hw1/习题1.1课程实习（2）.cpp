#include<iostream>
using namespace std;
int main()
{
	int a, b, result1,result2,result3;
	cout << "����һ���Ӽ��˳������뽫��������������������";
	cin >> a >> b;
	result1 = a + b;
	result2 = a - b;
	result3 = a * b;
	float result4 = 1.0 * a / b;
	cout << "�����ĺ���" << result1<<"����" << result2 <<"����" << result3 <<"����" << result4<<endl;
	printf("����\(%9.3f\)\n", result4);
}

