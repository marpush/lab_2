#include <iostream>
#include <cmath>
#define BORDER 16
using namespace std;
double scan_x_in_range(const double border);

int main()
{
	const double border_x= 1;
	const double x = scan_x_in_range(border_x);
    double sum = 0, sign = -1;
    for (int index = 0; index < BORDER; index ++){
        sum = sum + pow(sign, index) * (index + 1) * pow(x, index);
    }
    cout << "The value of the series at x = " << x << " is equal to " << sum;

	return 0;
}

double scan_x_in_range(const double border)
{
	while (true) {
		cout << "Enter a number less than " << border << " modulo: ";
		double x = 0;
		cin >> x;

		if (cin.fail()) {
			cout << "Entered is not a number.\n";
			cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else {
			if (x < fabs(border)) {
				return x;
			}
			else {
					cout << "The entered number is greater than or equal to " << border << " modulo\n";
					cin.clear();
			}
		}
	}
}

