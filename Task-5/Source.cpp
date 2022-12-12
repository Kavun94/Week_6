#include <iostream>
using namespace std;
int main() {
	int N, i = 0;
	cout << "Entre value N: ";
	cin >> N;
	while (N != 0);
		if (N % 10 > 3) i++;
	N /= 10;
	cout << "" << i << endl;
	return 0;

	} 
