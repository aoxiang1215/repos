#include<iostream>
using namespace std;
int main()
{
	int a, b, result1,result2,result3;
	cout << "这是一个加减乘除程序，请将两个整数输入在下两行";
	cin >> a >> b;
	result1 = a + b;
	result2 = a - b;
	result3 = a * b;
	float result4 = 1.0 * a / b;
	cout << "两数的和是" << result1<<"差是" << result2 <<"积是" << result3 <<"商是" << result4<<endl;
	printf("商是\(%9.3f\)\n", result4);
}

