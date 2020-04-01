#include <iostream> 

using namespace std; 

main ()
{

	int N, I, A = 0, B = 0; //Para A e B se o valor for 'par' esta apagado
	//se o valor for 'impar' esta acesa.
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> I;
		if (I == 1)
		{
			A = A + 1;
		}
		else
		{
			A = A + 1;
			B = B + 1;
		}
	}

	A = A % 2;
	B = B % 2;

	cout << A << endl << B << endl;
	
}
