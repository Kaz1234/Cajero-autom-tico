#include <iostream>
#include <iomanip>

using namespace std;
//Declaracion de funciones

int selec, num;
string cedula, cuenta;
float monto;

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

void RetiroEfectivo(){
	cout<<"Ingrese el nro de cuenta \n\n";
	cin>>cuenta;
	system("cls");
	
	if(cuenta.length() == 12){
		cout<<"Ingrese el nro de cedula \n\n";
		cin>>cedula;
		system("cls");
		
		if(cedula.length() >=7 || cuenta.length() <=9){
			cout<<"Ingrese el monto que desea retirar \n\n";
			cin>>monto;
			system("cls");
			
			cout<<"Retire el monto de la ranura \n\n";
			system("PAUSE");
			system("cls");
		}else{
			cout<<"El nro de cedula es incorrecto \n";
			system("PAUSE");
			system("cls");
			cout<<"La operacion ha sido cancelada";
		}
	}else{
		cout<<"El nro de cuenta es incorrecto \n";
		system("PAUSE");
		system("cls");
		cout<<"La operacion ha sido cancelada";
	}
}

void DepositoEfectivo(){
	cout<<"Ingrese el nro de cuenta \n\n";
	cin>>cuenta;
	system("cls");
	
	if(cuenta.length() == 12){
		cout<<"Ingrese el nro de cedula \n\n";
		cin>>cedula;
		system("cls");
		
		if(cedula.length() >=7 || cedula.length() <=9){
			cout<<"Ingrese el monto a depositar en la ranura \n\n";
			cin>>monto;
			system("cls");
			cout<<"El monto que ingreso: "<<monto<<endl<<endl;
			cout<<"1) SI \n 2) NO \n";
			cin>>num;
			
			do{
				if(num <= 0){
					cout<<"Opcion no valida \n\n Ingrese una Opcion valida";
					system("PAUSE");
					system("cls");
				}else if(num == 1){
					cout<<"Elija la opcion a realizar \n\n";
					cout<<"1) Depositar dinero \n 2) Cancelar \n";
					cin>>num;
					system("cls");
					
					switch(num){
						
					do{
						case 1:
							cout<<"El dinero se ha depositado con exito!! \n\n";
							system("PAUSE");
							system("cls");
							
						case 2:
							cout<<"Retire su dinero!! \n\n";
							system("PAUSE");
							system("cls");
							cout<<"La operacion ha sido cancelada!! \n\n";
							system("PAUSE");
							system("cls");
							
					}while(num ==2);
					}
				}else if(num >= 3){
					cout<<"Opcion no valida \n\n Ingrese una Opcion valida";
					system("PAUSE");
					system("cls");
				}
			}while(num ==2);
		}else{
			cout<<"El nro de cedula no es correcto \n\n";
			system("PAUSE");
			system("cls");
			cout<<"La operacion ha sido cancelada!! \n\n";
			system("PAUSE");
			system("cls");
		}
	}else{
		cout<<"El nro de cuenta no es correcto \n\n";
		system("PAUSE");
		system("cls");
		cout<<"La operacion ha sido cancelada!! \n\n";
		system("PAUSE");
		system("cls");
	}
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
		cin>>num;
		system("cls");

		if(num==1){
			RetiroEfectivo();
		}else if(num==2){
			DepositoEfectivo();
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
		cin>>num;
		system("PAUSE");
	}else
	
	if(num == 3){
		system("PAUSE");
	}
}


int main(int argc, char** argv) {
	bienvenida();
	seleccion();
	cout<<"**********Gracias por su Visita Regrese Pronto!**********";
	return 0;
}
