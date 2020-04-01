#include <iostream> 

using namespace std;

main ()
{

	int P1, P2, C1, C2, resp1, resp2;
	cin >> P1 >> C1 >> P2 >> C2;

	resp1 = C1*P1;
	resp2 = C2*P2;

	if (resp1 > resp2)
	{
		cout << "-1" << endl;
	}
	else if (resp1 < resp2)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}

}
