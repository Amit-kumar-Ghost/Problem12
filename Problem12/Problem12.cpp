/*finding absolute value of the given integer

example:-  -7
          |-7|=7
		  |7|=7

*/



#include<iostream>
using namespace std;
int main() {


	int a;
	cout << " please enter integer :: " << endl;
	cin >> a;

		if (a < 0) {
			a = -a;
			cout << "Absoulte value of the integer is = " << a;
		
		}

		else
		{
			cout << " Absoulte value = " << a << endl;
		}



	return 0;
}