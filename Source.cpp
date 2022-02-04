#include <iostream>
#include <conio.h>
using namespace std;
void main() {
	int num1, num2, num3, max;
		cout << "please inter your first number\n";
		cin >> num1;
		cout << "please inter your seccond number\n";
		cin >> num2;
		cout << "please inter your third number\n";
		cin >> num3;
		max = num1;
		//int max_total = max(max(num1,num2),num3);
		if (max < num2) {
			max = num2;
			if (max < num3) {
				max = num3;
			}
		}
		cout << "your miax number is:"<< max;
	}

