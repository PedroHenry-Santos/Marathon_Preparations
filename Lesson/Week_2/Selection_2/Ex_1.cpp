#include <iostream> 

using namespace std;

main ()
{

	int x;
	cin >> x;
	
	if (x < 0)
	{
		cout << "negativo" << endl;
	}
	else if (x > 0)
	{
		cout << "positivo" << endl;
	}
	else
	{
		cout << "nulo" << endl;
	}

}
