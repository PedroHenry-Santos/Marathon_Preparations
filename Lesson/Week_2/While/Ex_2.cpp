#include <iostream> 

using namespace std;

main ()
{

	int N, A, fix = 0, resp = 0, cont = 0;
	cin >> N;

	while (fix < N)
	{
		cin >> A;
		if (resp < 1000000)
		{
		resp = resp + A;
		cont = cont + 1;
		}
		fix = fix + 1;
	}

	cout << cont << endl;

}
