#include <iostream> 

using namespace std;

main ()
{

	int N, L, C, fix = 0, resp = 0;
	cin >> N;

	while (fix < N)
	{

		cin >> L >> C;
		if (L > C)
		{
			resp = resp + C;
		}
		fix = fix + 1;

	}
	
	cout << resp << endl;

}