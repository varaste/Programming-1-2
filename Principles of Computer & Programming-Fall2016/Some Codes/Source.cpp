//how meny zeros does n! have

#include <iostream>
using namespace std;

int main() {
	int n, nzero = 0;
	cout << "please enter a number:";
	cin >> n;

	int i = 5;
	while (i <= n) {
		nzero += n / i;
		i *= 5;
	}
	cout << n << "! has " << nzero << "zero(s)." << endl;
	system("pause");
	return 0;
}
