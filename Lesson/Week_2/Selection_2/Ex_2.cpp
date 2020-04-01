#include <iostream> 

using namespace std;

main ()
{

	float nota1, nota2, media;
	cin >> nota1 >> nota2;

	media = (nota1 + nota2) / 2;

	if (media < 4)
	{
		cout << "Reprovado" << endl;
	}
	else if ((media >= 4) && (media < 7))
	{
		cout << "Recuperacao" << endl;
	}
	else
	{
		cout << "Aprovado" << endl;
	}

}
