#include <iostream>
using namespace std;

main (){
	
	//arreglos bidimencionales, matriz, tabla
	int fil=0, col=0;
	cout<<"Ingrese Filas: "<<endl;
	cin>>fil;
	cout<<"Ingrese Columnas: "<<endl;
	cin>>col;
	
	int matriz[fil][col];
	cout<<"------------Ingresar------------"<<endl;
		for (int i=0; i<fil; i++){
			for (int ii=0; ii<col; ii++){
				cout<<i<<","<<ii<<": ";
				cin>>matriz[i][ii];
			}
				cout<<"______________"<<endl;
		}
	
system("pause");
}
