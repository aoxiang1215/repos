#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int endnum = 0;

	cout << "put in the end number: "  ;
	cin >> endnum;
	for (int i = 1; i <= endnum;i++) {
		sum += i;
	}
	cout << "the sum from 1 to " << endnum << " is " << sum << endl;
}