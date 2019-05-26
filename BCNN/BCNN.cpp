//tim boi chung nho nhat cua 2 so

#include <iostream>
using namespace std;

//call function BCNN
int BCNN(int, int);
int Max(int, int);

int main()
{
	int x, y, result;
	cout << "Type of value of x = ";
	cin >> x;
	cout << "Type of value of y = ";
	cin >> y;
	result = BCNN(x, y);
	cout << "BCNN of x & y = " << result << endl;
	return 0;
}

//function returning BCNN of 2 numbers
int BCNN(int a, int b) {
	int max_a_b = Max(a, b);
	for (int i = max_a_b; i <= a * b ; i++)
	{
		if ((i % a == 0) and (i % b == 0)) {
			return i;
		}
	}
}

 //function returning max of 2 numbers
int Max(int a, int b) {
	int maxValue;
	if (a > b)
	{
		maxValue = a;
	}
	else
	{
		maxValue = b;
	}
	return maxValue;
}


