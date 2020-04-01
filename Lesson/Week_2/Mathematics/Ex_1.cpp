#include <iostream> 
#include <math.h>

using namespace std;

main ()
{

	float N, Nu, resp;
	cin >> N;

	cout.precision(4);
	cout.setf(ios::fixed);

	for (int i = 0; i < N; ++i)
	{
		cin >> Nu;
		cout << sqrt(Nu) << endl;
	}
	
}
