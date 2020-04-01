#include <iostream> 

using namespace std;

main (){

	int N, Vn, i, tmp, resp = 0, cont = 1;
	cin >> N;

	for (i = 1; i <= N; i++){
		cin >> Vn;
		if (i < 2){
			tmp = Vn;
			continue;
		}
		else{
			if (Vn == tmp){
				cont = cont + 1;
				tmp = Vn;
				continue;
			}
			if (Vn != tmp)
			{
				if (cont > resp){
					resp = cont;
				}
				cont = 1;
				tmp = Vn;
				continue;
			}
		}
	}

	if (cont > resp){
		resp = cont;
		
	}
	cout << resp << endl;

}
