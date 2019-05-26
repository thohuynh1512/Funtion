//tim uoc chung lon nhat cua 2 so

#include <iostream>
using namespace std;
//call function UCLN
int UCLN(int a, int b);

int main()
{
	int x, y, result;
	cout << "type value of x = ";
	cin >> x;
	cout << "type value of y = ";
	cin >> y;
	result = UCLN(x, y);
	cout << "UCLN of x & y is " << result << endl;
	return 0;
}

int UCLN(int a, int b) {
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}	
	return a;
}

