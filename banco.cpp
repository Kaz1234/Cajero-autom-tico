#include <iostream>
#include <iomanip>

using namespace std;
//Declaracion de funciones

int selec, num;
char letra;

void bienvenida(){
	cout<<"*******BIENVENIDO AL BANCO DEL TESORO*******"<<endl;
	cout<<"**"<<setw(42)<<"**"<<endl;
	cout<<"**"<<"  Seleccione un numero para continuar"<<setw(5)<<"**"<<endl;
	cout<<"**"<<setw(42)<<"**"<<endl;
	cout<<"**"<<setw(42)<<"**"<<endl;
	cout<<"**"<<setw(42)<<"CLIENTE (1)**"<<endl;
	cout<<"**"<<setw(42)<<"NO CLIENTE (2)**"<<endl;
	cout<<"**"<<setw(42)<<"CANCELAR (3)**"<<endl;
	cout<<"**"<<setw(42)<<"**"<<endl;
	cout<<"**"<<setw(42)<<"**"<<endl;
	cout<<"********************************************"<<endl;
	cin>>num;
	system("cls");
}

void seleccion(){
	if(num == 1){
		cout<<"****************************************************************"<<endl;
		cout<<"**"<<setw(31)<<"CLIENTES"<<setw(31)<<"**"<<endl;
		cout<<"**"<<setw(62)<<"**"<<endl;
		cout<<"**"<<setw(36)<<"Elija una opcion"<<setw(26)<<"**"<<endl;
		cout<<"**"<<setw(62)<<"**"<<endl;
		cout<<"**(4) Actualizar libreta"<<setw(40)<<"Retiro de Efectivo(1)**"<<endl;
		cout<<"**(5) Revisar estado"<<setw(44)<<"Deposito en efectivo (2)**"<<endl;
		cout<<"**(6) Cancelar"<<setw(50)<<"Deposito de Cheques(3)**"<<endl;
		cout<<"**"<<setw(62)<<"**"<<endl;
		cout<<"****************************************************************"<<endl;
		cin>>letra;

		if(num==1){
		}else if(num==2){
		}else if(num==3){
		}else if(num==4){
		}else if(num==5){
		}else if(num==6){
		}
	}else 
	if(num == 2){
		cout<<"******************************************************"<<endl;
		cout<<"**"<<setw(26)<<"NO CLIENTES"<<setw(26)<<"**"<<endl;
		cout<<"**"<<setw(52)<<"**"<<endl;
		cout<<"**"<<setw(31)<<"Elija una opcion"<<setw(21)<<"**"<<endl;
		cout<<"**"<<setw(52)<<"**"<<endl;
		cout<<"**(4) Cancelar"<<setw(40)<<"Retiro de Efectivo(1)**"<<endl;
		cout<<"**"<<setw(52)<<"Deposito de Cheques (2)**"<<endl;
		cout<<"**"<<setw(52)<<"Deposito en Efectivo(3)**"<<endl;
		cout<<"**"<<setw(52)<<"**"<<endl;
		cout<<"******************************************************"<<endl;
		cin>>letra;
	}else
	if(num == 3){
		cout<<"**********Gracias por su Visita Regrese Pronto!**********";
	}
}


int main(int argc, char** argv) {
	bienvenida();
	seleccion();
	return 0;
}
