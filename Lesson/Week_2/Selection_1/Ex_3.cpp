#include <iostream> 

using namespace std;

main ()
{
	
	int B, C, resp;
	cin >> B >> C;

	resp = (B + C) % 2;

	if (resp == 0)
	{
		cout << "Bino" << endl;
	}
	else
	{
		cout << "Cino" << endl;
	}

}
