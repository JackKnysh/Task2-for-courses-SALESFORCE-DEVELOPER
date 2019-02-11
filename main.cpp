#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "Enter Number: ";
	cin >> num;

	cout << "Divider:" << endl;
	int a = 0;
	for (int i = 1; i <= num/2; i++)
	{
		if ((num%i) == 0)
		{
			a = num / i;
			if (i > a)
			{
				break;
			}
			if (i == a)
			{
				cout << i << endl;
				break;
			}
			cout << i << endl;
			cout << a << endl;
		}
	}
	
	system("pause");
	return 0;
}
