#include <iostream>
using namespace std;
int main()
{
	int num1, num2, operation;
	cout << "please enter number 1 \n";
	cin >> num1;
	cout << "please enter number 2 \n";
	cin >> num2;
	cout << "please choice the number of operation\n";
	cout << "(1)  + \n";
	cout << "(2)  - \n";
	cout << "(3)  * \n";
	cout << "(4)  / \n";
	cin >> operation;
	if (operation == 1)
		cout << num1 + num2 << endl;
	else if (operation == 2)
		cout << num1 - num2 << endl;
	else if (operation == 3)
		cout << num1 * num2 << endl;
	else if (operation == 4)
		cout << num1 / num2 << endl;
	else
		cout << "operation is not valid \n";

	

}