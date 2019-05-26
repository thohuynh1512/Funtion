//Viết chương trình C++ nhắc người dùng nhập 3 số nguyên và sau đó in các số nhỏ nhất và
//lớn nhất bởi sử dụng hàm trong C++.

#include <iostream>
using namespace std;

void Note();
int MinF(int, int, int);
int MaxF(int, int, int);

int main()
{
	int a, b, c, max, min;
	Note();
	cin >> a >> b >> c;
	min = MinF(a, b, c);
	cout << "Min of 3 numbers is " << min << endl;
	max = MaxF(a, b, c);
	cout << "Max of 3 numbers is " << max << endl;
	return 0;
}

//funtion reminding user typing value
void Note() {
	int a, b, c;
	cout << "Type 3 interger numbers: " << endl;
}

//funtion returing min of 3 numbers
int MinF(int a, int b, int c) {
	int min = a;
	if (b < min) {
		min = b;
		if (c < min) {
			min = c;
		}
	}
	else
	{
		if (c < min) {
			min = c;
		}
	}
	return min;
}

//funtion returing max of 3 numbers
int MaxF(int a, int b, int c) {
	int max = a;
	if (b > max) {
		max = b;
		if (c > max) {
			max = c;
		}
	}
	else
	{
		if (c > max) {
			max = c;
		}
	}
	return max;
}


