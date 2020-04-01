#include <iostream> 

using namespace std;

main ()
{

	int x, result;
	cin >> x;

	for (int i = 1; i <= x; ++i)
	{	
		result = x % i;
		if (result == 0)
		{
			cout << i << " ";
		}
	}

}
