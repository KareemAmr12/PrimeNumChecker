#include <iostream>
using namespace std;

bool Factor_In_Range(int k, int n)
{
	if (k >= n) return false;

	else
		if (n % k == 0) return true;
		else
		{
			return Factor_In_Range(k + 1, n);
		}
	
	
}

bool isPrime(int n)
{
	return((n > 1 && !Factor_In_Range(2, n)));
}


int main()
{
	int n = 1000;

	for (int i = 9; i <= 21; i++)
	{
		if (isPrime(n+i) == true)
		{
			cout << n + i << " is " << "prime" << endl;
		}
		if (isPrime(n+i) == false)
		{
			cout << n + i << " is not " << "prime" << endl;
		}
	}

	system("pause");
	return 0;
}