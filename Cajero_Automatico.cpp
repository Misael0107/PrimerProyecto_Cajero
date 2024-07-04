 /* GRUPO # 6

INTEGRANTES:  
NOMRBRE COMPLETO                      N- DE CUENTA 
1. MARIO ROBERTO GUILLEN RODRIGUEZ   20191001472
2. MILTON MISAEL FIGUEROA LAGOS      20221030193
3. ALEXANDRA NICOLLE CERNA FUNEZ     20231000357
4. ELIANY MICHELLE REYES MOLINA      20231001137
5. MAYLYN AURORA AMADOR FLORES       20231000620*/ 

#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

// Declaración de las funciones
void menuAcreditar();
void menuDebitar();
void menuVerSaldo();
void menuTransferenicas();
void menuCanjePuntos();


//Variables del menu
int menu, shortMenu;

//Variables para datos personale y datos de los beneficiarios
string nombreCliente, nombreBeneficiarioUno, nombreBeneficiarioDos, nombreBeneficiarioTres;
char generoCliente;
int edadCliente;
long long numeroIdentidad;	

//VAriable para la cantidad con la que hara la apertura de su cuenta
int depositoApertura;

//Variable para el saldo general en la cuenta
float saldoGeneralLPS = 0;
float saldoGeneraDLR = 24.78; //Precio del dolar actualmente

//Variables para la area de acreditar
int opcionMenuAcreditar;
int cantidadAcreditar, acumuladorAcreditaciones;
int opcionUno=100, opcionDos = 200, opcionTres = 300, opcionCuatro = 400;
int a = 0, l = 0; //a = Contador de acreditaciones  l = cuenta las littecoin ganadas

//Variables para el area de debitar
int opcionMenuDebitar, cobroDosLempiras = 2;
float dosPorciento = 0.02, cobroDosPorciento, acumCobroDebito2, acum2PorCiento, acumDebitado;
int cantidadDebitar,  d = 0, dp = 0; //d = contador de 2 lempiras cargo dp = contador debito por porcentaje



//Variables de las criptomonedas
float littecoin = 495.60;
float bitcoin   = 2477.98;
float ethereum = 1238.99;	

//Variables para la area de ver saldo

int s = 0; //contador ver saldo
int cobroVerSaldo = 5;
int acumVerSaldo = 0;

//VARIABLES DE LAS TRANSFERENCIAS
int cantidadLitecoins, cantidadBitcoins, CantidadEtherum; 
int acumLitecoins, acumBitcoins, acumEtherums;
float sueldoBeneficiario1, sueldoBeneficiario2, sueldoBeneficiario3;
//acumuladores por criptomonedas y beneficiero
int acumBeneficiarioLit1, acumBeneficiarioEthe1, acumBeneficiarioBit1;
int acumBeneficiarioLit2, acumBeneficiarioEthe2, acumBeneficiarioBit2;
int acumBeneficiarioLit3, acumBeneficiarioEthe3, acumBeneficiarioBit3;



void setColor(int textColor, int backgroundColor) {
	
}




int main(int argc, char *argv[]) {
	
	int background = 112;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 112);
	
	
	//Datos personales
	cout<<  "                                                           .............................................................................................."<<endl;
	SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
	cout << "                                                           .                                   FINANCIERA PUMA BANK                                     ." << endl;
	SetConsoleTextAttribute(hConsole, 112);
	cout << "                                                           .                                       APERTURA DE CUENTA                                   ." << endl;
	cout<<  "                                                           .............................................................................................."<<endl;
	cout << "                                                           .                                   INGRESO SUS DATOS PERSONALES                             ." << endl;
	cout<<  "                                                           .............................................................................................."<<endl;
	cout << "                                                           .                           INGRESE SU PRIMER NOMBRE Y PRIMER APELLIDO                       ." << endl;
	cout << "                                                           .                                             ";
	getline(cin >> ws, nombreCliente);
	cout << "                                                           .                             INGRESE SU EDAD (EN UN RANGO DE 18 A 90)                       ." << endl;
	cout << "                                                                                                          ";                           
	cin >> edadCliente;
	
	// Validación para edad fuera del rango predeterminado
	while (edadCliente < 18 || edadCliente > 90) {
		system("cls");
		
		cout << "                                                       .............................................................................................." << endl;
		SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
		cout << "                                                       .                      ERROR : EDAD INGRESADA FUERA DEL RANGO ADMITIDO                       ." << endl;
		
		// Restaurar el color original de la consola
		SetConsoleTextAttribute(hConsole, 112);
		cout << "                                                       .............................................................................................." << endl<< endl;
		

		cout << "                                                      .                             INGRESE SU EDAD (EN UN RANGO DE 18 A 90)                       ." << endl;
		cout << "                                                                                                          ";                           
		cin >> edadCliente;
		
	}	
	cout << "                                                       .............................................................................................." << endl<< endl;
	
	cout << "                                                       .                                   INGRESE SU NUMERO DE IDENTIDAD                           . " << endl;
	cout << "                                                       .                                               ";                                              
	cin >> numeroIdentidad;
	cout << "                                                       .............................................................................................." << endl<< endl;
	// Validación para que no permita números negativos
	while (numeroIdentidad < 0) {
		system("cls");
		
		cout<<  "                                                       ..............................................................................................."<<endl;
		SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
		cout << "                                                       .                          ERROR: NO SE PUEDEN INGRESAR NUMEROS NEGATIVOS                     . " << endl;
		SetConsoleTextAttribute(hConsole, 112);
		cout<<  "                                                       ..............................................................................................."<<endl;
		cout << "                                                       .                                INGRESE SU NUMERO DE IDENTIDAD                               . " << endl;
		cout << "                                                                                                    ";
		cin >> numeroIdentidad;
		cout<<  "                                                       ..............................................................................................."<<endl;
	} 
	cout << "  "<< endl;
	cout << "                                                           .                           INGRESE SU GENERO (F - m) MUJER O (M - m) HOMBRE                  . " << endl;
	cout << "                                                                                                           ";
	cin >> generoCliente;
	cout<<  "                                                           ..............................................................................................."<<endl;  
	
	// Validación para género incorrecto
	while (generoCliente != 'F' && generoCliente != 'f' && generoCliente != 'M' && generoCliente != 'm') {
		cout<<  "                                                       .............................................................................................."<<endl;
		SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
		cout << "                                                       .                    ERROR: EL GENERO QUE INGRESO NO SIGUE LOS PARAMETROS ESTABLECIDOS       . " << endl;
		SetConsoleTextAttribute(hConsole, 112);
		cout<<  "                                                       .............................................................................................."<<endl;
		cout << "                                                       .                          INGRESE SU GENERO (F - f) MUJER O (M - m) HOMBRE                  . " << endl;
		cout << "                                                                                                        ";
		cin >> generoCliente;
		cout<<  "                                                       .............................................................................................."<<endl;
		
	}
	cout<<" "<<endl;
	system("pause");
	system("cls");
	
	
	cout<<  "                                                           .............................................................................................."<<endl;
	cout<<"                                                            .                    ¿CON CUANTO DESEA APERTURAR TU CUENTA ( MINIMO L.100.00 )?              ."<<endl;
	cout<<  "                                                           .............................................................................................."<<endl;
	cout<<"                                                                                                     L ";
	cin>>depositoApertura; 
	
	//Validacion para que el deposito no sea menor a 100
	while (depositoApertura<100) {
		cout<<""<<endl;
		cout<<  "                                                       .............................................................................................."<<endl;
		SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
		cout<<"                                                         .                ERROR: EL MINIMO PARA APERTURAR SU CUENTA ES DE LPS. 100.00                 ."<<endl;
		SetConsoleTextAttribute(hConsole, 112);
		cout<<  "                                                       .............................................................................................."<<endl;
		cout<<"                                                         .                 ¿CON CUANTO DESEA APERTURAR TU CUENTA ( MINIMO L.100.00 )?                 ."<<endl;
		
		cout<<"                                                         .                                       L "; 
		cin>>depositoApertura; 
		cout<<  "                                                       .............................................................................................."<<endl<<endl;
	}       
	
	system("pause");
	system("cls");	
	
	cout<<  " "<<endl;
	cout<<"                                                             .............................................................................................."<<endl;
	cout<<"                                                             .                           DATO : PARA LA CREACION DE SU CUENTA NECESITA                    ."<<endl;
	SetConsoleTextAttribute(hConsole, background  | FOREGROUND_INTENSITY);
	cout<<"                                                             .                                    AGREGAR 3 BENEFICIARIOS                                 ."<<endl;
	SetConsoleTextAttribute(hConsole, 112);
	cout<<  "                                                           .............................................................................................."<<endl;
	cout<<""<<endl << endl;
	
	system("pause");
	system("cls");
	
	
	
	
	
	
	
	// Datos de los beneficiarios
	cout<< "                                                            .............................................................................................."<<endl;
	SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout<<"                                                             .                                            FINANCIERA PUMA BANK                            ."<<endl;
	SetConsoleTextAttribute(hConsole, 112);
	cout<<"                                                             .                               INGRESE EL NOMBRE DE LOS TRES BENEDICIARIOS                  ."<<endl;
	cout<<"                                                                                                                                                          ."<<endl;
	cout<<"                                                             .                              INGRESE NOMBRE Y APELLIDO DEL BENEFICIARIO #1                 ."<<endl;
	
	SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout<<"                                                             .                                     "; getline(cin >> ws, nombreBeneficiarioUno); 
	SetConsoleTextAttribute(hConsole, 112);
	cout<<"                                                             .                               INGRESE NOMBRE Y APELLIDO DEL BENEFICIARIO #2                ."<<endl;
	SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout<<"                                                             .                                      "; getline(cin >> ws, nombreBeneficiarioDos);
	SetConsoleTextAttribute(hConsole, 112);
	cout<<"                                                             .                              INGRESE NOMBRE Y APELLIDO DEL BENEFICIARIO #3                 ."<<endl;
	SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout<<"                                                             .                                      "; getline(cin >> ws, nombreBeneficiarioTres); 
	SetConsoleTextAttribute(hConsole, 112);
	cout<< "                                                            .............................................................................................."<<endl<<endl<<endl;
	
	system("pause");
	system("cls");
	
	
	cout << "Creando cuenta ............." << endl;
	Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundo
	
	system("cls");
	
	// Imprimir los datos de la cuenta creada
	cout << "                                                           ..............................................................................................." << endl;
	cout << "                                                           .                                                                                              " << endl;
	SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "                                                           .                                         FINANCIERA PUMA BANK                                 " <<endl;
	cout << "                                                           .                                           DATOS PERSONALES                                   " <<endl;
	
	SetConsoleTextAttribute(hConsole, 112);
	cout << "                                                           .  NOMBRE DEL CLIENTE:  " << nombreCliente << endl;                                                          
	cout << "                                                           .  GENERO:  " << generoCliente << endl;                                                               
	cout << "                                                           .  NUMERO DE IDENTIDAD:  " << numeroIdentidad << endl;                                                                            
	cout << "                                                           .  MONTO DE APERTURA L. " << depositoApertura << endl;                                                                             
	cout << "                                                           .  NOMBRE DEL PRIMER BENEFICIARIO:   " << nombreBeneficiarioUno << endl;                                                             
	cout << "                                                           .  NOMBRE DEL SEGUNDO BENEFICIARIO:  " << nombreBeneficiarioDos << endl;                                                             
	cout << "                                                           .  NOMBRE DEL TERCER BENEFICIARIO:   " << nombreBeneficiarioTres << endl;                                                                                          
	cout << "                                                           ..............................................................................................." << endl << endl << endl;
	
	system("pause");
	system("cls");
	
	saldoGeneralLPS += depositoApertura;
	//Menu principal
	do {
		cout<< "                                                        .....................................................................................    "<<endl;
		cout<< "                                                        .                                                         ...........................    "<<endl;
		cout<< "                                                        .                                                         .  1.      ACREDITAR      .    "<<endl;
		cout<< "                                                        .                                                         ...........................    "<<endl;
		cout<< "                                                        .                                                         .                         .    "<<endl;
		cout<< "                                                        .                                                         ...........................    "<<endl;
		cout<< "                                                        .                                                         .  2.      DEBITAR        .    "<<endl;
		cout<< "                                                        .                                                         ...........................    "<<endl;
		SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
		cout<< "                                                        .                 FINANCIERA PUMA BANK                    .                         .    "<<endl;
		SetConsoleTextAttribute(hConsole, 112);
		cout<< "                                                        .                                                         ...........................    "<<endl;
		cout<< "                                                        .                                                         .  3.      VER SALDO      .    "<<endl;
		cout<< "                                                        .                .....................                    ...........................    "<<endl;
		cout<< "                                                        .                .   MENU PRINCIPAL  .                    .                         .    "<<endl;
		cout<< "                                                        .                .....................                    ...........................    "<<endl;
		cout<< "                                                        .                                                         .  4.    TRANSFERENCIAS   .    "<<endl;
		cout<< "                                                        .                                                         ...........................    "<<endl;
		cout<< "                                                        .                                                         .                         .    "<<endl;
		cout<< "                                                        .                                                         ...........................    "<<endl;
		cout<< "                                                        .                                                         .  5.   CANJE DE PUNTOS   .    "<<endl;
		cout<< "                                                        .                                                         ...........................    "<<endl;
		cout<< "                                                        .                                                         .                         .    "<<endl;
		cout<< "                                                        .                                                         ...........................    "<<endl;
		cout<< "                                                        .                                                         .  6.       SALIR         .    "<<endl;
		cout<< "                                                        .                                                         ...........................    "<<endl;
		cout<< "                                                        .....................................................................................    "<<endl;	
		cout<<" "<<endl<<endl;
		
		cout<<"¿A que area desea ingresar?"<<endl;
		cin>>menu;
		cout<<" "<<endl<<endl<<endl;
		system("cls");
		
		//Validacion para verificar que no ingrse un numero mayor a 6 o menor a 1
		while (menu < 1 || menu > 6) {
			
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
			cout<<"                                                             ERROR: El numero que usted ingreso no esta en el rango (1-6)         "<<endl<<endl;
			SetConsoleTextAttribute(hConsole, 112);
			cout<< "                                                     .....................................................................................    "<<endl;
			cout<< "                                                     .                                                         ...........................    "<<endl;
			cout<< "                                                     .                                                         .  1.      ACREDITAR      .    "<<endl;
			cout<< "                                                     .                                                         ...........................    "<<endl;
			cout<< "                                                     .                                                         .                         .    "<<endl;
			cout<< "                                                     .                                                         ...........................    "<<endl;
			cout<< "                                                     .                                                         .  2.      DEBITAR        .    "<<endl;
			cout<< "                                                     .                                                         ...........................    "<<endl;
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
			cout<< "                                                     .                 FINANCIERA PUMA BANK                    .                         .    "<<endl;
			SetConsoleTextAttribute(hConsole, 112);
			cout<< "                                                     .                                                         ...........................    "<<endl;
			cout<< "                                                     .                                                         .  3.      VER SALDO      .    "<<endl;
			cout<< "                                                     .                .....................                    ...........................    "<<endl;
			cout<< "                                                     .                .   MENU PRINCIPAL  .                    .                         .    "<<endl;
			cout<< "                                                     .                .....................                    ...........................    "<<endl;
			cout<< "                                                     .                                                         .  4.    TRANSFERENCIAS   .    "<<endl;
			cout<< "                                                     .                                                         ...........................    "<<endl;
			cout<< "                                                     .                                                         .                         .    "<<endl;
			cout<< "                                                     .                                                         ...........................    "<<endl;
			cout<< "                                                     .                                                         .  5.   CANJE DE PUNTOS   .    "<<endl;
			cout<< "                                                     .                                                         ...........................    "<<endl;
			cout<< "                                                     .                                                         .                         .    "<<endl;
			cout<< "                                                     .                                                         ...........................    "<<endl;
			cout<< "                                                     .                                                         .  6.       SALIR         .    "<<endl;
			cout<< "                                                     .                                                         ...........................    "<<endl;
			cout<< "                                                     .....................................................................................    "<<endl;	
			cout<<" "<<endl<<endl;
			cout<< "                                                     .....................................................................................    "<<endl;	
			cout<< "                                                                                   ¿A que area desea ingresar?                            "<<endl;
			cin>>menu;
			cout<<"  "<<endl<<endl<<endl;
			system("cls");
		}
		
		switch (menu) {
		case 1:
			//Opcion Acreditar
			cout<< "                                                     .....................................................................................    "<<endl;	
			cout<<"                                                                            USTED A SELECCIONADO LA OPCION:  ACREDITAR                         "<<endl<<endl;
			
			cout<<"                                                                          ........................................"<<endl;
			cout<<"                                                                          .  ¿DESEA CONTINUAR CON SU SELECCION ? ."<<endl;
			cout<<"                                                                          .              1. SI                   ."<<endl;
			cout<<"                                                                          .              2. NO                   ."<<endl;
			cout<<"                                                                          ........................................"<<endl;
			cin>>shortMenu;
			system("cls");
			while (shortMenu < 1 || shortMenu > 2) {
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
				cout<< "                                                 .....................................................................................    "<<endl;	
				cout<<"                                                               ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
				SetConsoleTextAttribute(hConsole, 112);
				cout<<"                                                                      ........................................"<<endl;
				cout<<"                                                                      .  ¿DESEA CONTINUAR CON SU SELECCION ? ."<<endl;
				cout<<"                                                                      .              1. SI                   ."<<endl;
				cout<<"                                                                      .              2. NO                   ."<<endl;
				cout<<"                                                                      ........................................"<<endl;
				cin>>shortMenu;
				system("cls");
			}
			switch (shortMenu) {
			case 1:
				menuAcreditar(); //Llama a la función para el menú de acreditar 
				break;
			case 2:
				cout<<"  "<<endl<<endl;
				cout<<"                                                                                   REGRESANDO......................."<<endl;
				Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
				system("cls");
				break;
				
			default:
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
				cout<< "                                                 .....................................................................................    "<<endl;	
				cout<<"                                                               ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
				SetConsoleTextAttribute(hConsole, 112);
			};
			
			
			break;
			
		case 2:
			
			//Opcion debitar
			
			cout<<"                                                                            USTED A SELECCIONADO LA OPCION:  DEBITAR      "<<endl<<endl;
			
			cout<<"                                                                           ......................................."<<endl;
			cout<<"                                                                           . ¿DESEA CONTINUAR CON SU SELECCION ? ."<<endl;
			cout<<"                                                                           .              1. SI                  ."<<endl;
			cout<<"                                                                           .              2. NO                  ."<<endl;
			cout<<"                                                                           ......................................."<<endl;
			cin>>shortMenu;
			system("cls");
			while (shortMenu < 1 || shortMenu > 2) {
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
				cout<< "                                                 .......................................................................................    "<<endl;	
				cout<<"                                                                ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
				SetConsoleTextAttribute(hConsole, 112);
				cout<<"                                                                         ......................................."<<endl;
				cout<<"                                                                         . ¿DESEA CONTINUAR CON SU SELECCION ? ."<<endl;
				cout<<"                                                                         .              1. SI                  ."<<endl;
				cout<<"                                                                         .              2. NO                  ."<<endl;
				cout<<"                                                                         ......................................."<<endl;
				cin>>shortMenu;
				system("cls");
			}
			switch (shortMenu) {
			case 1:
				menuDebitar(); //Llama a la función para el menú debitar 
				break;
			case 2:
				cout<<""<<endl;
				cout<<"                                                                                  REGRESANDO......................."<<endl;
				Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
				system("cls");
				break;
				
			default:
				cout<< "                                                   .....................................................................................    "<<endl;	
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
				cout<<"                                                                ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
				SetConsoleTextAttribute(hConsole, 112);
			};  
			
			
			break;
		case 3:
			//Opcion ver saldo
			
			cout<<"                                                                           USTED A SELECCIONADO LA OPCION:  VER SALDO      "<<endl<<endl;
			
			cout<<"                                                                          ......................................."<<endl;
			cout<<"                                                                          . ¿DESEA CONTINUAR CON SU SELECCION ? ."<<endl;
			cout<<"                                                                          .              1. SI                  ."<<endl;
			cout<<"                                                                          .              2. NO                  ."<<endl;
			cout<<"                                                                          ......................................."<<endl;
			cin>>shortMenu;
			system("cls");
			while (shortMenu < 1 || shortMenu > 2) {
				cout<< "                                                   .....................................................................................    "<<endl;	
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
				cout<<"                                                               ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
				SetConsoleTextAttribute(hConsole, 112);
				
				cout<<"                                                                      ......................................."<<endl;
				cout<<"                                                                      . ¿DESEA CONTINUAR CON SU SELECCION ? ."<<endl;
				cout<<"                                                                      .              1. SI                  ."<<endl;
				cout<<"                                                                      .              2. NO                  ."<<endl;
				cout<<"                                                                      ......................................."<<endl;
				cin>>shortMenu;
				system("cls");
			}
			
			switch (shortMenu) {
			case 1:
				
				menuVerSaldo(); //Llama a la función para el menu ver saldo
				
				break;
			case 2:
				cout<<""<<endl;
				cout<<"                                                                                     REGRESANDO......................."<<endl;
				Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
				system("cls");
				break;
			default:
				cout<< "                                                   .....................................................................................    "<<endl;	
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
				cout<<"                                                             ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
				SetConsoleTextAttribute(hConsole, 112);
			};
			
			break;
			
		case 4:
			//Opcion transferencias 
			
			cout<<"                                                                          USTED A SELECCIONADO LA OPCION:  TRANSFERENCIAS      "<<endl<<endl;
			
			cout<<"                                                                           ......................................."<<endl;
			cout<<"                                                                           . ¿DESEA CONTINUAR CON SU SELECCION ? ."<<endl;
			cout<<"                                                                           .              1. SI                  ."<<endl;
			cout<<"                                                                           .              2. NO                  ."<<endl;
			cout<<"                                                                           ......................................."<<endl;
			cin>>shortMenu;
			system("cls");
			while (shortMenu < 1 || shortMenu > 2) {
				cout<< "                                                   .....................................................................................    "<<endl;	
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
				cout<<"                                                             ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
				SetConsoleTextAttribute(hConsole, 112);
				cout<<"                                                                        ......................................."<<endl;
				cout<<"                                                                        . ¿DESEA CONTINUAR CON SU SELECCION ? ."<<endl;
				cout<<"                                                                        .              1. SI                  ."<<endl;
				cout<<"                                                                        .              2. NO                  ."<<endl;
				cout<<"                                                                        ......................................."<<endl;
				cin>>shortMenu;
				system("cls");
			}
			switch (shortMenu) {
			case 1:
				menuTransferenicas(); //Llama a la función para el menú de acreditar 
				break;
			case 2:
				cout<<""<<endl;
				cout<<"                                                                                     REGRESANDO......................."<<endl;
				Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
				system("cls");
				break;
				
			default:
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
				cout<< "                                                   .....................................................................................    "<<endl;	
				cout<<"                                                              ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
				SetConsoleTextAttribute(hConsole, 112);
			};
			
			break;
				
			
		case 5:
			
			break;
			
		case 6:
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_GREEN);
			cout<< "                                                   .....................................................................................    "<<endl;	
			cout<<"                                                                              GRACIAS POR PREFERIRNOS!"<<endl;
			cout<<"                                                                                LO ESPERAMOS PRONTO  "<<endl;
			cout<< "                                                   .....................................................................................    "<<endl;	
			SetConsoleTextAttribute(hConsole, 112);
			break;	
			
			
		default:
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
			cout<< "                                                   .....................................................................................    "<<endl;	
			cout<<"                                                                  ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
			SetConsoleTextAttribute(hConsole, 112);
		};
		
		
	} while (menu != 6);
	
	
	return 0;
}

// Implementación de las funciones void

void menuAcreditar() {
	int background = 112;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 112);
	
	do {
		
		cout<<"                                                              .......................................... NOTA ............................................."<<endl;
		cout<<"                                                              .                                                                                           ."<<endl;
		cout<<"                                                              .           ACREDITAR                : Por cada 3 acreditaciones, se otorga 1 Litte Coin a  ."<<endl;
		cout<<"                                                              .                                    : su saldo correspondiente en criptomonedas            ."<<endl;
		cout<<"                                                              ............................................................................................."<<endl;
		cout<<""<<endl;
		system("pause");
		system("cls");
		
		cout<<"                                                                                ............................................"<<endl;
		cout<<"                                                                                .    ¿DESEA CONTINUAR CON SU SELECCION ?   ."<<endl;
		cout<<"                                                                                .                 1. SI                    ."<<endl;
		cout<<"                                                                                .                 2. NO                    ."<<endl;
		cout<<"                                                                                ............................................"<<endl;
		cin>>shortMenu;
		system("cls");
		
		while (shortMenu < 1 || shortMenu > 2) {
			
			cout<<"                                                     ............................................................................................."<<endl;
			SetConsoleTextAttribute(hConsole,background | FOREGROUND_RED);
			cout<<"                                                                   ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
			SetConsoleTextAttribute(hConsole, 112);
			cout<<"                                                                             ............................................"<<endl;
			cout<<"                                                                             .    ¿DESEA CONTINUAR CON SU SELECCION ?   ."<<endl;
			cout<<"                                                                             .                 1. SI                    ."<<endl;
			cout<<"                                                                             .                 2. NO                    ."<<endl;
			cout<<"                                                                             ............................................"<<endl;
			cin>>shortMenu;
			system("cls");
		}
		
		switch (shortMenu) {
		case 1:
			
			cout<<"";
			
			cout<< "                                                    ...................................................................................."<<endl;
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
			cout<< "                                                    .                                FINANCIERA PUMA BANK                              ."<<endl;
			SetConsoleTextAttribute(hConsole, 112);
			cout<< "                                                    .                                                                                  ."<<endl;
			cout<< "                                                    .                 .................................................                ."<<endl;
			cout<< "                                                    .                 INGRESE LA CANTIDAD A ACREDITAR EN L. (LEMPIRAS):                ."<<endl;
			cout<< "                                                    .                 .................................................                ."<<endl;
			cout<< "                                                    .                                                                                   ."<<endl;
			cout<< "                                                    .    ....................                                ....................      ."<<endl;
			cout<< "                                                    .    .1.  L.100.00      .                                .2.   L.200.00     .      ."<<endl;
			cout<< "                                                    .    ....................                                ....................      ."<<endl;
			cout<< "                                                    .                                                                                  ."<<endl;
			cout<< "                                                    .    ....................                                ....................      ."<<endl;
			cout<< "                                                    .    .3.  L.300.00      .                                .4.   L.400.00     .      ."<<endl;
			cout<< "                                                    .    ....................                                ....................      ."<<endl;	
			cout<< "                                                    .                                                                                  ."<<endl;
			cout<< "                                                    .                                                                                  ."<<endl;
			cout<< "                                                    .                              ....................                                ."<<endl;
			cout<< "                                                    .                              .5.  OTRO MONTO    .                                ."<<endl;
			cout<< "                                                    .                              ....................                                ."<<endl;
			cout<< "                                                    ...................................................................................."<<endl;
			cout<<""<<endl;
			cin>>opcionMenuAcreditar;
			system("cls");
			
			//Validacion para que no ingrese una opcion incorrecta
			while (opcionMenuAcreditar < 1 || opcionMenuAcreditar > 5) {
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
				cout<<"                                                         ERROR: El numero que usted ingreso no esta en el rango (1-5)         "<<endl<<endl;
				SetConsoleTextAttribute(hConsole, 112);
				cout<< "                                                ...................................................................................."<<endl;
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
				cout<< "                                                .                                   FINANCIERA PUMA BANK                           ."<<endl;
				SetConsoleTextAttribute(hConsole, 112);
				cout<< "                                                .                                                                                  ."<<endl;
				cout<< "                                                .                 .................................................                ."<<endl;
				cout<< "                                                .                 INGRESE LA CANTIDAD A ACREDITAR EN L. (LEMPIRAS):                ."<<endl;
				cout<< "                                                .                 .................................................                ."<<endl;
				cout<< "                                                .                                                                                  ."<<endl;
				cout<< "                                                .    ....................                                ....................      ."<<endl;
				cout<< "                                                .    .1.  L.100.00      .                                .2.   L.200.00     .      ."<<endl;
				cout<< "                                                .    ....................                                ....................      ."<<endl;
				cout<< "                                                .                                                                                  ."<<endl;
				cout<< "                                                .    ....................                                ....................      ."<<endl;
				cout<< "                                                .    .3.  L.300.00      .                                .4.   L.400.00     .      ."<<endl;
				cout<< "                                                .    ....................                                ....................      ."<<endl;	
				cout<< "                                                .                                                                                  ."<<endl;
				cout<< "                                                .                                                                                  ."<<endl;
				cout<< "                                                .                              ....................                                ."<<endl;
				cout<< "                                                .                              .5.  OTRO MONTO    .                                ."<<endl;
				cout<< "                                                .                              ....................                                ."<<endl;
				cout<< "                                                ...................................................................................."<<endl;
				cout<<""<<endl;
				cin>>opcionMenuAcreditar;
				system("cls");
			}
			
			
			
			switch (opcionMenuAcreditar) {
			case 1:
				//Acreditar L.100 
				cout<<"                                                         ....................... INFORMACION ............................"<<endl;
				cout<< "                                                                                                                          "<<endl;
				cout<<"                                                                      SALDO DISPONIBLE: L."<<saldoGeneralLPS <<"          "<<endl;
				SetConsoleTextAttribute(hConsole, 114);
				cout<<"                                                                      SALDO ACREDITADO: L.100.                    "<<endl;
				SetConsoleTextAttribute(hConsole, 112);
				saldoGeneralLPS = saldoGeneralLPS + 100;
				cout<<"                                                                      SALDO ACTUAL:     L."<<saldoGeneralLPS <<"         "<<endl;
				cout<<"                                                         ................................................................"<<endl;
				
				acumuladorAcreditaciones = acumuladorAcreditaciones + 100;
				
				cout<<""<<endl<<endl;
				system("pause");
				system("cls");
				
				a = a + 1;//contador para que me sume las acreditaciones
				
				     // Código a ejecutar si 'a' es divisible por 3
					if ( a % 3 == 0) {
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_GREEN);
						cout<<"                                                ................................ EN HORA BUENA ..........................."<<endl;
						cout<<"                                                 ¡Felicidades! Se le ha otorgado 1 LittleCoin por cada 3 acreditaciones"<<endl;
						cout<<"                                                .........................................................................."<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout<<""<<endl<<endl<<endl;
						
						cout<<"                                               ........................... OBSERVACION .........................."<<endl;
						cout<< "                                                                                                                          "<<endl;
						cout<<"                                                 SALDO EN CUENTA:  L."<<saldoGeneralLPS<<"  $."<<saldoGeneralLPS / saldoGeneraDLR<<endl;
						saldoGeneralLPS = saldoGeneralLPS + littecoin;
						cout<<"                                                 SALDO ACTUAL:     L."<<saldoGeneralLPS<<"  $."<<saldoGeneralLPS / saldoGeneraDLR<<endl;
						cout<<"                                               .................................................................."<<endl;
						cout<<""<<endl<<endl;
						system("pause");
						system("cls");
						
						
						l++;
						
				} else {
						cout<<"                                                 .........................................................................."<<endl;
						cout<<"                                                        AVISO               : Usted ha realizado " <<a<< " acreditaciones "<<endl;
						cout<<"                                                 .........................................................................."<<endl;
						system("pause");
						system("cls");
					}
					
					cout<<"                                                                    ......................................."<<endl;
					cout<<"                                                                    .  ¿DESEA REALIZAR OTRA ACREDITACION? ."<<endl;
					cout<<"                                                                    .              1. SI                  ."<<endl;
					cout<<"                                                                    .              2. NO                  ."<<endl;
					cout<<"                                                                    ......................................."<<endl;
					cin>>shortMenu;
					system("cls");
					while (shortMenu < 1 || shortMenu > 2) {
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<< "                                                   .....................................................................................    "<<endl;	
						cout<<"                                                              ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout<<"                                                                ......................................."<<endl;
						cout<<"                                                                .  ¿DESEA REALIZAR OTRA ACREDITACION? ."<<endl;
						cout<<"                                                                .              1. SI                  ."<<endl;
						cout<<"                                                                .              2. NO                  ."<<endl;
						cout<<"                                                                ......................................."<<endl;
						cin>>shortMenu;
						system("cls");
					}
					
					switch (shortMenu) {
					case 1:
						menuAcreditar(); //Llama a la función para el menú de acreditar 
						break;
					case 2:
						cout<<""<<endl;
						cout<<"                                                                            REGRESANDO......................."<<endl;
						Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
						system("cls");
						break;
						SetConsoleTextAttribute(hConsole,background | FOREGROUND_RED);
					default:
						cout<< "                                                   .....................................................................................    "<<endl;	
						cout<<"                                                              ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
					};
				break;
				
			case 2:
				//Acreditar L.200
				cout<<"                                                             ...................... INFORMACION ............................."<<endl;
				
				cout<<"                                                                  SALDO DISPONIBLE: L."<<saldoGeneralLPS <<"                 "<<endl;
				cout<<"                                                                  SALDO ACREDITADO: L.200.                                   "<<endl;
				cout<<"                                                                  SALDO ACTUAL:     L."<<saldoGeneralLPS + opcionDos<<"      "<<endl;
				saldoGeneralLPS = saldoGeneralLPS + opcionDos;
				cout<<"                                                             ................................................................"<<endl;
				
				acumuladorAcreditaciones = acumuladorAcreditaciones + 200;
				
				cout<<""<<endl<<endl;
				system("pause");
				system("cls");
				
				a = a + 1;//contador para que me sume las acreditaciones
				
				// Código a ejecutar si 'a' es divisible por 3
				if ( a % 3 == 0) {
					
					SetConsoleTextAttribute(hConsole,background | FOREGROUND_GREEN);
					cout<<"                                                    ........................... EN HORA BUENA ............................"<<endl;
					cout<<"                                                    ¡Felicidades! Se le ha otorgado 1 LittleCoin por cada 3 acreditaciones"<<endl;
					cout<<"                                                    ......................................................................"<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout<<""<<endl<<endl<<endl;
					
					cout<<"                                                        ........................ OBSERVACION .........................."<<endl;
					cout<<"                                                           SALDO EN CUENTA:  L."<<saldoGeneralLPS<<"  $."<<saldoGeneralLPS / saldoGeneraDLR<<endl;
					saldoGeneralLPS = saldoGeneralLPS + littecoin;
					cout<<"                                                           SALDO ACTUAL:     L."<<saldoGeneralLPS<<"  $."<<saldoGeneralLPS / saldoGeneraDLR<<endl;
					cout<<"                                                        ..............................................................."<<endl;
					cout<<""<<endl<<endl;
					system("pause");
					system("cls");
					
					
					l++;
					
				} else {
					cout<<"                                                     ........................................................................"<<endl;
					cout<<"                                                      AVISO               : Usted ha realizado "<<a<<" acreditaciones "<<endl;
					cout<<"                                                     ........................................................................"<<endl;
					system("pause");
					system("cls");
				}
				
				cout<<"                                                                         ......................................."<<endl;
				cout<<"                                                                         .  ¿DESEA REALIZAR OTRA ACREDITACION? ."<<endl;
				cout<<"                                                                         .              1. SI                  ."<<endl;
				cout<<"                                                                         .              2. NO                  ."<<endl;
				cout<<"                                                                         ......................................."<<endl;
				cin>>shortMenu;
				system("cls");
				while (shortMenu < 1 || shortMenu > 2) {
					cout<<"                                                      ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout<<"                                                                     ......................................."<<endl;
					cout<<"                                                                     .  ¿DESEA REALIZAR OTRA ACREDITACION? ."<<endl;
					cout<<"                                                                     .              1. SI                  ."<<endl;
					cout<<"                                                                     .              2. NO                  ."<<endl;
					cout<<"                                                                     ......................................."<<endl;
					cin>>shortMenu;
					system("cls");
				}
				
				switch (shortMenu) {
				case 1:
					menuAcreditar(); //Llama a la función para el menú de acreditar 
					break;
				case 2:
					cout<<""<<endl;
					cout<<"                                                                               REGRESANDO......................."<<endl;
					Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
					system("cls");
					break;
				default:
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
					cout<< "                                                   .....................................................................................    "<<endl;	
					cout<<"                                                              ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
					SetConsoleTextAttribute(hConsole, 112);
				};
				break;
				
			case 3:
				
				//Acreditar L.300
				cout<<"                                                               ...................... INFORMACION ............................"<<endl;
				cout<<"                                                                 SALDO DISPONIBLE: L."<<saldoGeneralLPS <<"                   "<<endl;
				cout<<"                                                                 SALDO ACREDITADO: L.300.                                     "<<endl;
				saldoGeneralLPS = saldoGeneralLPS + 300;
				cout<<"                                                                 SALDO ACTUAL:     L."<<saldoGeneralLPS <<"                   "<<endl;
				cout<<"                                                               ................................................................"<<endl;
				
				acumuladorAcreditaciones = acumuladorAcreditaciones + 300;
				
				cout<<""<<endl<<endl;
				system("pause");
				system("cls");
				
				a = a + 1;//contador para que me sume las acreditaciones
				
				// Código a ejecutar si 'a' es divisible por 3
				if ( a % 3 == 0) {
					
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_GREEN);
					cout<<"                                                         ........................... EN HORA BUENA ............................"<<endl;
					cout<<"                                                          ¡Felicidades! Se le ha otorgado 1 LittleCoin por cada 3 acreditaciones"<<endl;
					cout<<"                                                         ......................................................................"<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout<<""<<endl<<endl<<endl;
					
					cout<<"                                                         ............................ OBSERVACION ............................."<<endl;
					cout<<"                                                            SALDO EN CUENTA:  L."<<saldoGeneralLPS<<"  $."<<saldoGeneralLPS / saldoGeneraDLR<<endl;
					saldoGeneralLPS = saldoGeneralLPS + littecoin;
					cout<<"                                                            SALDO ACTUAL:     L."<<saldoGeneralLPS<<"  $."<<saldoGeneralLPS / saldoGeneraDLR<<endl;
					cout<<"                                                         ......................................................................"<<endl;
					cout<<""<<endl<<endl;
					system("pause");
					system("cls");
					
					l++;
					
					
				} else {
					cout<<"                                                        ........................................................................"<<endl;
					cout<<"                                                               AVISO               : Usted ha realizado "<<a<<" acreditaciones "<<endl;
					cout<<"                                                        ........................................................................"<<endl;
					system("pause");
					system("cls");
				}
				
				cout<<"                                                                          ......................................."<<endl;
				cout<<"                                                                          .  ¿DESEA REALIZAR OTRA ACREDITACION? ."<<endl;
				cout<<"                                                                          .              1. SI                  ."<<endl;
				cout<<"                                                                          .              2. NO                  ."<<endl;
				cout<<"                                                                          ......................................."<<endl;
				cin>>shortMenu;
				system("cls");
				while (shortMenu < 1 || shortMenu > 2) {
					cout<<"                                                       ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
					cout<<"                                                                     ......................................."<<endl;
					cout<<"                                                                     .  ¿DESEA REALIZAR OTRA ACREDITACION? ."<<endl;
					cout<<"                                                                     .              1. SI                  ."<<endl;
					cout<<"                                                                     .              2. NO                  ."<<endl;
					cout<<"                                                                     ......................................."<<endl;
					cin>>shortMenu; 
					system("cls");
				}
				
				switch (shortMenu) {
				case 1:
					menuAcreditar(); //Llama a la función para el menú de acreditar 
					break;
				case 2:
					cout<< "                                                    .....................................................................................    "<<endl;
					cout<<""<<endl;
					cout<<"                                                                                REGRESANDO......................."<<endl;
					Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
					system("cls");
					break;
				default:
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
					cout<< "                                                   .....................................................................................    "<<endl;	
					cout<<"                                                              ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
					SetConsoleTextAttribute(hConsole, 112);
				};
				
				break;
				
			case 4:
				//Acreditar L.400
				cout<<"                                                            .......................... INFORMACION ............................"<<endl;
				cout<<"                                                             SALDO DISPONIBLE: L."<<saldoGeneralLPS <<"                       "<<endl;
				cout<<"                                                             SALDO ACREDITADO: L.400.                                         "<<endl;
				saldoGeneralLPS = saldoGeneralLPS + 400;
				cout<<"                                                             SALDO ACTUAL:     L."<<saldoGeneralLPS <<"                       "<<endl;
				cout<<"                                                            ..................................................................."<<endl;
				
				acumuladorAcreditaciones = acumuladorAcreditaciones + 400;
				
				cout<<""<<endl<<endl;
				system("pause");
				system("cls");
				
				a = a + 1;//contador para que me sume las acreditaciones
				
				// Código a ejecutar si 'a' es divisible por 3
				if ( a % 3 == 0) {
					
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_GREEN);
					cout<<"                                                        ........................... EN HORA BUENA ..........................."<<endl;
					cout<<"                                                        ¡Felicidades! Se le ha otorgado 1 LittleCoin por cada 3 acreditaciones"<<endl;
					cout<<"                                                        ......................................................................"<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout<<""<<endl<<endl<<endl;
					
					cout<<"                                                         .............................. OBSERVACION .........................."<<endl;
					cout<<"                                                          SALDO EN CUENTA:  L."<<saldoGeneralLPS<<"  $."<<saldoGeneralLPS / saldoGeneraDLR<<endl;
					saldoGeneralLPS = saldoGeneralLPS + littecoin;
					cout<<"                                                          SALDO ACTUAL:     L."<<saldoGeneralLPS<<"  $."<<saldoGeneralLPS / saldoGeneraDLR<<endl;
					cout<<"                                                         ......................................................................"<<endl;
					cout<<""<<endl<<endl;
					system("pause");
					system("cls");
					
					l++;
					
					
				} else {
					cout<<"                                                         ........................................................................"<<endl;
					cout<<"                                                               AVISO               : Usted ha realizado "<<a<<" acreditaciones  "<<endl;
					cout<<"                                                         ........................................................................"<<endl;
					system("pause");
					system("cls");
				}
				
				cout<<"                                                                        ......................................."<<endl;
				cout<<"                                                                        .  ¿DESEA REALIZAR OTRA ACREDITACION? ."<<endl;
				cout<<"                                                                        .              1. SI                  ."<<endl;
				cout<<"                                                                        .              2. NO                  ."<<endl;
				cout<<"                                                                        ......................................."<<endl;
				cin>>shortMenu;
				system("cls");
				while (shortMenu < 1 || shortMenu > 2) {
					cout<< "                                                   .....................................................................................    "<<endl;	
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
					cout<<"                                                              ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout<<"                                                                    ......................................."<<endl;
					cout<<"                                                                    .  ¿DESEA REALIZAR OTRA ACREDITACION? ."<<endl;
					cout<<"                                                                    .              1. SI                  ."<<endl;
					cout<<"                                                                    .              2. NO                  ."<<endl;
					cout<<"                                                                    ......................................."<<endl;
					cin>>shortMenu;
					system("cls");
				}
				
				switch (shortMenu) {
				case 1:
					menuAcreditar(); //Llama a la función para el menú de acreditar 
					break;
				case 2:
					cout<< "                                                    .....................................................................................    "<<endl;
					cout<<""<<endl;
					cout<<"                                                                                   REGRESANDO......................."<<endl;
					Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
					system("cls");
					break;
				default:
					cout<< "                                                   .....................................................................................    "<<endl;	
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
					cout<<"                                                              ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
					SetConsoleTextAttribute(hConsole, 112);
				};
				
				break;	
				
			case 5:
				
				cout<<"                                                         ........................................................................"<<endl;
				cout<<"                                                                    INGRESE LA CANTIDAD A ACREDITAR EN L. (LEMPIRAS)"<<endl;
				cin>>cantidadAcreditar;
				cout<<"                                                         ........................................................................"<<endl;
				cout<<""<<endl<<endl;
				
				
				cout<<"                                                          ............................... INFORMACION ............................"<<endl;
				cout<<"                                                           SALDO DISPONIBLE: L."<<saldoGeneralLPS <<"                   "<<endl;
				cout<<"                                                           SALDO ACREDITADO: L."<<cantidadAcreditar<<endl;
				saldoGeneralLPS = saldoGeneralLPS + cantidadAcreditar; //Operacion para sumar cantidad acreditada mas el saldo general
				cout<<"                                                           SALDO ACTUAL:     L."<<saldoGeneralLPS <<"                   "<<endl;
				cout<<"                                                          ........................................................................"<<endl;
				
				acumuladorAcreditaciones = acumuladorAcreditaciones + cantidadAcreditar;
				
				cout<<""<<endl<<endl;
				system("pause");
				system("cls");
				
				a = a + 1;//contador para que me sume las acreditaciones
				
				// Código a ejecutar si 'a' es divisible por 3
				if ( a % 3 == 0) {
					
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_GREEN);
					cout<<"                                                      .................................. EN HORA BUENA ............................"<<endl;
					cout<<"                                                          ¡Felicidades! Se le ha otorgado 1 LittleCoin por cada 3 acreditaciones"<<endl;
					cout<<"                                                      ............................................................................."<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout<<""<<endl<<endl<<endl;
					
					cout<<"                                                     ................................. OBSERVACION ................................"<<endl;
					cout<<"                                                       SALDO EN CUENTA:  L."<<saldoGeneralLPS<<"  $."<<saldoGeneralLPS / saldoGeneraDLR<<endl;
					saldoGeneralLPS = saldoGeneralLPS + littecoin;
					cout<<"                                                       SALDO ACTUAL:     L."<<saldoGeneralLPS<<"  $."<<saldoGeneralLPS / saldoGeneraDLR<<endl;
					cout<<"                                                     ..............................................................................."<<endl;
					cout<<""<<endl<<endl;
					system("pause");
					system("cls");
					
					
					l++;
					
				} else {
					cout<<"                                                      ..............................................................................."<<endl;
					cout<<"                                                              AVISO               : Usted ha realizado "<<a<<" acreditaciones "<<endl;
					cout<<"                                                     ................................................................................"<<endl;
					system("pause");
					system("cls");
				}
				
				cout<<"                                                                                  ......................................."<<endl;
				cout<<"                                                                                  .  ¿DESEA REALIZAR OTRA ACREDITACION? ."<<endl;
				cout<<"                                                                                  .              1. SI                  ."<<endl;
				cout<<"                                                                                  .              2. NO                  ."<<endl;
				cout<<"                                                                                  ......................................."<<endl;
				cin>>shortMenu;
				system("cls");
				while (shortMenu < 1 || shortMenu > 2) {
					cout<< "                                                   .....................................................................................    "<<endl;
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
					cout<<"                                                              ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					
					cout<<"                                                                              ......................................."<<endl;
					cout<<"                                                                              .  ¿DESEA REALIZAR OTRA ACREDITACION? ."<<endl;
					cout<<"                                                                              .              1. SI                  ."<<endl;
					cout<<"                                                                              .              2. NO                  ."<<endl;
					cout<<"                                                                              ......................................."<<endl;
					cin>>shortMenu;
					system("cls");
				}
				
				switch (shortMenu) {
				case 1:
					menuAcreditar(); //Llama a la función para el menú de acreditar 
					break;
				case 2:
					cout<<""<<endl;
					cout<< "                                                       .....................................................................................    "<<endl;
					cout<<"                                                                                       REGRESANDO......................."<<endl;
					Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
					system("cls");
					break;
				default:
					cout<< "                                                   .....................................................................................    "<<endl;
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
					cout<<"                                                              ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
					SetConsoleTextAttribute(hConsole, 112);
				};
				
				break;		
				
			default:
				cout<< "                                                       .....................................................................................    "<<endl;
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
				cout<<"                                                                  ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
				SetConsoleTextAttribute(hConsole, 112);
			};
			
			
			
			break;
		case 2:
			cout<< "                                                       .....................................................................................    "<<endl;
			cout<<""<<endl;
			cout<<"                                                                                           REGRESANDO......................."<<endl;
			Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
			break;
		default:
			cout<< "                                                       .....................................................................................    "<<endl;
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
			cout<<"                                                                    ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
			SetConsoleTextAttribute(hConsole, 112);
		};
		
		
	} while (shortMenu != 2);
	
}
	
void menuDebitar() {
	int background = 112;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 112);

	do {

	switch (shortMenu) {
	case 1:
		cout<<""<<endl;
		cout<<"                                                         ......................................................................................"<<endl;
		cout<<"                                                         .                      . CANTIDAD MINIMA EN LA CUENTA ES DE L.100.00                 . "<<endl;
		cout<<"                                                         .                      . Por cada débito se cobran L.2.00 si la cantidad a retirar   . "<<endl;
		cout<<"                                                         .         DEBITAR      . está entre L.100.00 y L.1000.00 , Arriba de L.1000.00 se    . "<<endl;
		cout<<"                                                         .                      . cobra el 2% del monto solicitado, (no aplica en 3ra edad)   . "<<endl;
		cout<<"                                                         ......................................................................................"<<endl;
		cout<<""<<endl;
		system("pause");
		system("cls");
		
		cout<<"                                                                                  ..........................................."<<endl;
		cout<<"                                                                                  . DESEA SEGUIR ADELANTE CON LA DEBITACION ."<<endl;
		cout<<"                                                                                  .                  1. SI                  ."<<endl;
		cout<<"                                                                                  .                  2. NO                  ."<<endl;
		cout<<"                                                                                  ..........................................."<<endl;
		cin>>shortMenu;
		system("cls");
		while (shortMenu < 1 || shortMenu > 2) {
			cout<< "                                                       .....................................................................................    "<<endl;
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
			cout<<"                                                                  ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
			SetConsoleTextAttribute(hConsole, 112);
			cout<<"                                                                              ..........................................."<<endl;
			cout<<"                                                                              . DESEA SEGUIR ADELANTE CON LA DEBITACION ."<<endl;
			cout<<"                                                                              .                  1. SI                  ."<<endl;
			cout<<"                                                                              .                  2. NO                  ."<<endl;
			cout<<"                                                                              ..........................................."<<endl;
			cin>>shortMenu;
			system("cls");
		}
		
		switch (shortMenu) {
		case 1:
				cout<<""<<endl;
			    cout<< "                                                  ...................................................................................."<<endl;
				cout<< "                                                  .                                       AVISO                                      ."<<endl;
				cout<< "                                                  ...................................................................................."<<endl;
				cout<< "                                                  .            Se le va a cobrar L.2 por cada retiro entre L.100 a L.1000            . "<<endl;
				cout<< "                                                  .              Se le cobrar un 3% por cada retiro mayor a L.1000                   ."<<endl;
				cout<< "                                                  ...................................................................................."<<endl;
				cout<<""<<endl;
				system("pause");
				system("cls");
				
				cout<<""<<endl;
				
				cout<< "                                                  ...................................................................................."<<endl;
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
				cout<< "                                                  .                                  FINANCIERA PUMA BANK                            ."<<endl;
				SetConsoleTextAttribute(hConsole, 112);
				cout<< "                                                  .                                                                                  ."<<endl;
				cout<< "                                                  ...................................................................................."<<endl;
				cout<< "                                                  .                 SALDO DISPONIBLE EN CUENTA : L."<< saldoGeneralLPS-100  <<"      .  "<<endl;
				cout<< "                                                  .                      INGRESE LA CANTIDAD A DEBITAR EN L. (LEMPIRAS):             ."<<endl;
				cout<< "                                                  ...................................................................................."<<endl;
				cout<< "                                                  .                                                                                  ."<<endl;
				cout<< "                                                  .    ....................                                ....................      ."<<endl;
				cout<< "                                                  .    .1.  L.100.00      .                                .2.   L.200.00     .      ."<<endl;
				cout<< "                                                  .    ....................                                ....................      ."<<endl;
				cout<< "                                                  .                                                                                  ."<<endl;
				cout<< "                                                  .    ....................                                ....................      ."<<endl;
				cout<< "                                                  .    .3.  L.300.00      .                                .4.   L.400.00     .      ."<<endl;
				cout<< "                                                  .    ....................                                ....................      ."<<endl;	
				cout<< "                                                  .                                                                                  ."<<endl;
				cout<< "                                                  .                                                                                  ."<<endl;
				cout<< "                                                  .                              ....................                                ."<<endl;
				cout<< "                                                  .                              .5.  OTRO MONTO    .                                ."<<endl;
				cout<< "                                                  .                              ....................                                ."<<endl;
				cout<< "                                                  ...................................................................................."<<endl;
				cout<<""<<endl;
				cin>>opcionMenuDebitar;
				system("cls");
				
				while (opcionMenuDebitar < 1 || opcionMenuDebitar > 5) {
					cout<<""<<endl;
					cout<< "                                               .....................................................................................    "<<endl;
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
					cout<<"                                                                  ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout<< "                                               ...................................................................................."<<endl;
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
					cout<< "                                               .                                  FINANCIERA PUMA BANK                            ."<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout<< "                                               .                                                                                  ."<<endl;
					cout<< "                                               ...................................................................................."<<endl;
					cout<< "                                               .                 SALDO DISPONIBLE EN CUENTA : L."<< saldoGeneralLPS-100  <<"      ."<<endl;
					cout<< "                                               .                 INGRESE LA CANTIDAD A DEBITAR EN L. (LEMPIRAS):                  ."<<endl;
					cout<< "                                               ...................................................................................."<<endl;
					cout<< "                                               .                                                                                  ."<<endl;
					cout<< "                                               .    ....................                                ....................      ."<<endl;
					cout<< "                                               .    .1.  L.100.00      .                                .2.   L.200.00     .      ."<<endl;
					cout<< "                                               .    ....................                                ....................      ."<<endl;
					cout<< "                                               .                                                                                  ."<<endl;
					cout<< "                                               .    ....................                                ....................      ."<<endl;
					cout<< "                                               .    .3.  L.300.00      .                                .4.   L.400.00     .      ."<<endl;
					cout<< "                                               .    ....................                                ....................      ."<<endl;	
					cout<< "                                               .                                                                                  ."<<endl;
					cout<< "                                               .                                                                                  ."<<endl;
					cout<< "                                               .                              ....................                                ."<<endl;
					cout<< "                                               .                              .5.  OTRO MONTO    .                                ."<<endl;
					cout<< "                                               .                              ....................                                ."<<endl;
					cout<< "                                               ...................................................................................."<<endl;
					cout<<""<<endl;
					cin>>opcionMenuDebitar;
					system("cls");
				}
				
				switch (opcionMenuDebitar) {
				case 1:
//					cout<<""<<endl;
//					cout<<"                 ...................... INFORMACION ............................"<<endl;
//					cout<<"                 . SALDO DISPONIBLE: L."<<saldoGeneralLPS <<"                   "<<endl;
//					cout<<"                 . SALDO DEBITADO  : L.100.                                     "<<endl;
//					saldoGeneralLPS = saldoGeneralLPS - 100;
					
					if (saldoGeneralLPS - 102 <= 100 ) {
						cout<<""<<endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<<"                                                               ..........................................."<<endl;
						cout<<"                                                               .     ERROR SU CUENTA NO PUEDE QUEDAR     ."<<endl;
						cout<<"                                                               . CON UNA CANTIDAD MENOR A LA DE L.100.00 ."<<endl;
						cout<<"                                                               ..........................................."<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						system("pause");
						system("cls");
					} else {
						if (opcionMenuDebitar = 1) {
							cout<<""<<endl;
							cout<<"                                          ............................................................................................."<<endl;
							cout<<"                                          .                                          RECIBO                                            "<<endl;
							cout<<"                                          . Cantidad de disponible en la cuenta :    "<<saldoGeneralLPS<<endl;
							cout<<"                                          . Usted debito la cantidad de L. 100.00    ."<<endl;
							cout<<"                                          . Con un cobro de: "<<cobroDosLempiras<<endl;
							cout<<"                                          . Por lo tanto el total de su debitacion es:"<<opcionUno + cobroDosLempiras<<endl;
							cout<<"                                          . SALDO ACTUAL:     L."<<saldoGeneralLPS-(opcionUno + cobroDosLempiras)<<"                   "<<endl;
							saldoGeneralLPS = saldoGeneralLPS - (opcionUno + cobroDosLempiras);
							cout<<"                                          ............................................................................................."<<endl;
							 
							d++;
							acumCobroDebito2 += 2;
							acumDebitado +=100;
							
							cout<<""<<endl<<endl;
							system("pause");
							system("cls");
							
						} else {
							
						}
					}
					
					
					
					cout<<"                                                                     ......................................."<<endl;
					cout<<"                                                                     .  ¿DESEA REALIZAR OTRA DEBITACION?   ."<<endl;
					cout<<"                                                                     .              1. SI                  ."<<endl;
					cout<<"                                                                     .              2. NO                  ."<<endl;
					cout<<"                                                                     ......................................."<<endl;
					cin>>shortMenu;
					system("cls");
					while (shortMenu < 1 || shortMenu > 2) {
						cout<< "                                               .....................................................................................    "<<endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<<"                                                                  ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout<<"                                                                  ......................................."<<endl;
						cout<<"                                                                  .  ¿DESEA REALIZAR OTRA DEBITACION?   ."<<endl;
						cout<<"                                                                  .              1. SI                  ."<<endl;
						cout<<"                                                                  .              2. NO                  ."<<endl;
						cout<<"                                                                  ......................................."<<endl;
						cin>>shortMenu;
						system("cls");
					}
					
					switch (shortMenu) {
					case 1:
						menuDebitar();//Llama a la función para el menú de acreditar 
						break;
					case 2:
						cout<< "                                               .....................................................................................    "<<endl;
						cout<<""<<endl;
						cout<<"                                                                                REGRESANDO......................."<<endl;
						Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
						system("cls");
						break;
					default:
						cout<<"                                                  ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
					};
					break;
					break;
				case 2:
					if (saldoGeneralLPS - 202 <= 100 ) {
						cout<<""<<endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<<"                                                                  ............................................"<<endl;
						cout<<"                                                                  .     ERROR SU CUENTA NO PUEDE QUEDAR      ."<<endl;
						cout<<"                                                                  . CON UNA CANTIDAD MENOR A LA DE L.100.00  ."<<endl;
						cout<<"                                                                  ..........................................."<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						system("pause");
						system("cls");
					} else {
						if (opcionMenuDebitar = 2) {
							cout<<""<<endl;
							cout<<"                                             ............................................................................................."<<endl;
							cout<<"                                             .                                    RECIBO                    ."<<endl;
							cout<<"                                             . Cantidad de disponible en la cuenta :  "<<saldoGeneralLPS<<endl;
							cout<<"                                             . Usted debito la cantidad de L. 200.00    ."<<endl;
							cout<<"                                             . Con un cobro de: "<<cobroDosLempiras<<endl;
							cout<<"                                             . Por lo tanto el total de su debitacion es: "<<opcionDos + cobroDosLempiras<<endl;
							cout<<"                                             . SALDO ACTUAL:     L."<<saldoGeneralLPS-(opcionDos + cobroDosLempiras)<<"                   "<<endl;
							saldoGeneralLPS = saldoGeneralLPS - (opcionDos + cobroDosLempiras);
							cout<<"                                             .............................................................................................."<<endl;
							cout<<""<<endl<<endl;
							
							d++;
							acumCobroDebito2 += 2;
							acumDebitado +=200;
							
							system("pause");
							system("cls");
							
						} else {
							
						}
					}
					cout<<"                                                                        ......................................."<<endl;
					cout<<"                                                                        .  ¿DESEA REALIZAR OTRA DEBITACION?   ."<<endl;
					cout<<"                                                                        .              1. SI                  ."<<endl;
					cout<<"                                                                        .              2. NO                  ."<<endl;
					cout<<"                                                                        ......................................."<<endl;
					cin>>shortMenu;
					system("cls");
					while (shortMenu < 1 || shortMenu > 2) {
						cout<< "                                               .....................................................................................    "<<endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<<"                                                                  ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout<<"                                                                    ......................................."<<endl;
						cout<<"                                                                    .  ¿DESEA REALIZAR OTRA DEBITACION?   ."<<endl;
						cout<<"                                                                    .              1. SI                  ."<<endl;
						cout<<"                                                                    .              2. NO                  ."<<endl;
						cout<<"                                                                    ......................................."<<endl;
						cin>>shortMenu;
						system("cls");
					}
					
					switch (shortMenu) {
					case 1:
						menuDebitar();//Llama a la función para el menú de acreditar 
						break;
					case 2:
						cout<<""<<endl;
						cout<< "                                               .....................................................................................    "<<endl;
						cout<<"                                                                            REGRESANDO......................."<<endl;
						Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
						system("cls");
						break;
					default:
						cout<< "                                               .....................................................................................    "<<endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<<"                                                                  ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
					};
					break;
				case 3:
					if (saldoGeneralLPS - 302 <= 100 ) {
						cout<<""<<endl; 
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<<"                                                                     ..........................................."<<endl;
						cout<<"                                                                     .     ERROR SU CUENTA NO PUEDE QUEDAR     ."<<endl;
						cout<<"                                                                     . CON UNA CANTIDAD MENOR A LA DE L.100.00 ."<<endl;
						cout<<"                                                                     ..........................................."<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						system("pause");
						system("cls");
					} else {
						if (opcionMenuDebitar = 3) {
							cout<<""<<endl;
							cout<<"                                             ......................................................................................................"<<endl;
							cout<<"                                             .                                                 RECIBO                    ."<<endl;
							cout<<"                                             . Cantidad de disponible en la cuenta : "<<saldoGeneralLPS<<endl;
							cout<<"                                             . Usted debito la cantidad de L. 300.00    .  "<<endl;
							cout<<"                                             . Con un cobro de: "<<cobroDosLempiras<<endl;
							cout<<"                                             . Por lo tanto el total de su debitacion es:  "<<opcionTres + cobroDosLempiras<<endl;
							cout<<"                                             . SALDO ACTUAL:     L."<<saldoGeneralLPS-(opcionTres + cobroDosLempiras)<<"                   "<<endl;
							saldoGeneralLPS = saldoGeneralLPS - (opcionTres + cobroDosLempiras);
							cout<<"                                             ......................................................................................................"<<endl;
							
							d++;
							acumCobroDebito2 += 2;
							acumDebitado +=300;
							
							cout<<""<<endl<<endl;
							system("pause");
							system("cls");
							
						} else {
							
						}
					}
					
					
					
					cout<<"                                                                            ......................................."<<endl;
					cout<<"                                                                            .  ¿DESEA REALIZAR OTRA DEBITACION?   ."<<endl;
					cout<<"                                                                            .              1. SI                  ."<<endl;
					cout<<"                                                                            .              2. NO                  ."<<endl;
					cout<<"                                                                            ......................................."<<endl;
					cin>>shortMenu;
					system("cls");
					while (shortMenu < 1 || shortMenu > 2) {
						cout<< "                                               .....................................................................................    "<<endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<<"                                                                  ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout<<"                                                                        ......................................."<<endl;
						cout<<"                                                                        .  ¿DESEA REALIZAR OTRA DEBITACION?   ."<<endl;
						cout<<"                                                                        .              1. SI                  ."<<endl;
						cout<<"                                                                        .              2. NO                  ."<<endl;
						cout<<"                                                                        ......................................."<<endl;
						cin>>shortMenu;
						system("cls");
					}
					
					switch (shortMenu) {
					case 1:
						menuDebitar();//Llama a la función para el menú de acreditar 
						break;
					case 2:
						cout<<""<<endl;
						cout<< "                                               .....................................................................................    "<<endl;
						cout<<"                                                                                   REGRESANDO   "<<endl;
						Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
						system("cls");
						break;
					default:
						cout<< "                                               .....................................................................................    "<<endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<<"                                                                  ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
					};
					break;
					
				case 4:
					if (saldoGeneralLPS - 102 <= 100 ) {
						cout<<""<<endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<<"                                                                        ..........................................."<<endl;
						cout<<"                                                                        .     ERROR SU CUENTA NO PUEDE QUEDAR     ."<<endl;
						cout<<"                                                                        . CON UNA CANTIDAD MENOR A LA DE L.100.00 ."<<endl;
						cout<<"                                                                        ..........................................."<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						system("pause"); 
						system("cls");
					} else {
						if (opcionMenuDebitar = 4) {
							cout<<""<<endl;
							cout<<"                                              ................................................................................................"<<endl;
							cout<<"                                              .                                           RECIBO                    ."<<endl;
							cout<<"                                              . Cantidad de disponible en la cuenta :     "<<saldoGeneralLPS<<endl;
							cout<<"                                              . Usted debito la cantidad de L. 400.00    ."<<endl;
							cout<<"                                              . Con un cobro de: "<<cobroDosLempiras<<endl;
							cout<<"                                              . Por lo tanto el total de su debitacion es:    "<<opcionCuatro + cobroDosLempiras<<endl;
							cout<<"                                              . SALDO ACTUAL:     L."<<saldoGeneralLPS-(opcionCuatro + cobroDosLempiras)<<"                   "<<endl;
							saldoGeneralLPS = saldoGeneralLPS - (opcionCuatro + cobroDosLempiras);
							cout<<"                                              ................................................................................................"<<endl;
							
							d++;
							acumCobroDebito2 += 2;
							acumDebitado +=400;
							
							cout<<""<<endl<<endl;
							system("pause");
							system("cls");
							
						} else {
							
						}
					}
					
					
					
					cout<<"                                                                              ......................................."<<endl;
					cout<<"                                                                              .  ¿DESEA REALIZAR OTRA DEBITACION?   ."<<endl;
					cout<<"                                                                              .              1. SI                  ."<<endl;
					cout<<"                                                                              .              2. NO                  ."<<endl;
					cout<<"                                                                              ......................................."<<endl;
					cin>>shortMenu;
					system("cls");
					while (shortMenu < 1 || shortMenu > 2) {
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<< "                                               .....................................................................................    "<<endl;
						cout<<"                                                    ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout<<"                                                                          ......................................."<<endl;
						cout<<"                                                                          .  ¿DESEA REALIZAR OTRA DEBITACION?   ."<<endl;
						cout<<"                                                                          .              1. SI                  ."<<endl;
						cout<<"                                                                          .              2. NO                  ."<<endl;
						cout<<"                                                                          ......................................."<<endl;
						cin>>shortMenu;
						system("cls");
					}
					
					switch (shortMenu) {
					case 1:
						menuDebitar();//Llama a la función para el menú de acreditar 
						break;
					case 2:
						cout<<""<<endl;
						cout<< "                                               .....................................................................................    "<<endl;
						cout<<"                                                                                     REGRESANDO             "<<endl;
						Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
						system("cls");
						break;
					default:
						cout<< "                                               .....................................................................................    "<<endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<<"                                                      ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
					};
					break;
				case 5:
					cout<<"                                                                               ....................................................."<<endl;
					cout<<"                                                                               .                   ¿CUANTO DESEA DEBITAR?          ."<<endl;
					cout<<"                                                                               . El saldo disponible en su cuenta es de :          ."<<saldoGeneralLPS<<endl;
					cout<<"                                                                               . Tiene disponible para debitar :                   ."<<saldoGeneralLPS-100<<endl;
					cout<<"                                                                               . Ingrese la cantidad que desea debitar             . "<<endl;
					cout<<"                                                                               ."<<endl;
					cin>> cantidadDebitar;
					
					while (cantidadDebitar <= 0 ) {
						cout<<""<<endl;
						cout<<"                                                                           ....................................................."<<endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<<"                                                                           . ERROR NO SE PUEDE INGRESAR NUMEROS                ."<<endl;
						cout<<"                                                                           . NEGATIVOS NI CERO INTENTELO DE NUEVO              ."<<endl;
						cout<<"                                                                           ....................................................."<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						system("pause");
						system("cls");
						cout<<"                                                                            ...................................................."<<endl;
						cout<<"                                                                            .             ¿CUANTO DESEA DEBITAR?               ."<<endl;
						cout<<"                                                                            . El saldo disponible en su cuenta es de :         ."<<saldoGeneralLPS<<endl;
						cout<<"                                                                            . Tiene disponible para debitar :                  ."<<saldoGeneralLPS-100<<endl;
						cout<<"                                                                            . Ingrese la cantidad que desea debitar            . "<<endl;
						cout<<"                                                                            ...................................................."<<endl;
						cin>> cantidadDebitar;
						system("pause");
						system("cls");
						
					}
					if (saldoGeneralLPS - 100 <=cantidadDebitar ) {
						cout<<""<<endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<<"                                                                            ....................................................."<<endl;
						cout<<"                                                                            .     ERROR SU CUENTA NO PUEDE QUEDAR               ."<<endl;
						cout<<"                                                                            . CON UNA CANTIDAD MENOR A LA DE L.100.00           ."<<endl;
						cout<<"                                                                            ....................................................."<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						system("pause"); 
						system("cls");
					} else {
						if (cantidadDebitar >=100 && cantidadDebitar <=1000) {
							cout<<""<<endl;
							cout<<"                                             ................................................................................................."<<endl;
							cout<<"                                             .                                              RECIBO                                          ."<<endl;
							cout<<"                                             . Cantidad de disponible en la cuenta :"<<saldoGeneralLPS<<endl;
							cout<<"                                             . Usted debito la cantidad de :"<<cantidadDebitar<<endl;
							cout<<"                                             . Con un cobro de: "<<cobroDosLempiras<<endl;
							cout<<"                                             . Por lo tanto el total de su debitacion es:"<<cantidadDebitar + cobroDosLempiras<<endl;
							cout<<"                                             . SALDO ACTUAL:     L."<<saldoGeneralLPS-(cantidadDebitar + cobroDosLempiras)<<"                   "<<endl;
							saldoGeneralLPS = saldoGeneralLPS - (cantidadDebitar + cobroDosLempiras);
							cout<<"                                             .................................................................................................."<<endl;
							
							d++;
							acumCobroDebito2 += 2;
							acumDebitado += cantidadDebitar;
							
							cout<<""<<endl<<endl;
							system("pause");
							system("cls");
							
							
							
						} else {
							if (cantidadDebitar >=1000) {
								cout<<"                                         ..................................................................................................."<<endl;
								cout<<"                                         .                                           RECIBO                                                 "<<endl;
								cout<<"                                         . Cantidad de disponible en la cuenta : "<<saldoGeneralLPS<<endl;
								cout<<"                                         . Usted debito la cantidad de :"<<cantidadDebitar<<endl;
								cobroDosPorciento = cobroDosPorciento + (cantidadDebitar * 0.02);
								cout<<"                                         . Con un cobro de: "<<cobroDosPorciento<<endl;
								cout<<"                                         . Por lo tanto el total de su debitacion es: "<<cantidadDebitar + cobroDosPorciento<<endl;
								cout<<"                                         . SALDO ACTUAL:     L."<<saldoGeneralLPS-(cantidadDebitar + cobroDosPorciento)<<"   "<<endl;
								saldoGeneralLPS = saldoGeneralLPS - (cantidadDebitar + cobroDosPorciento);
								cout<<"                                         .................................................................................................."<<endl;
								
								dp++;
								acum2PorCiento += cobroDosPorciento;
								acumDebitado += cantidadDebitar;
								
								
								cout<<""<<endl<<endl;
								system("pause");
								system("cls");
							} else {
								
							}
						}
					}
					
					
					
					break;
					
				default:
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
					cout<< "                                               .....................................................................................    "<<endl;
					cout<<"                                                        ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					
				};
				
				
			break;
		case 2:
			cout<<""<<endl;
			cout<< "                                               .....................................................................................    "<<endl;
			cout<<"                                                                                        REGRESANDO             "<<endl;
			Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
			system("cls");
			break;
		 
		default:
			cout<<" ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
		};
		
		
		cout<<"                                                                                            ......................................."<<endl;
		cout<<"                                                                                            .  ¿DESEA REALIZAR OTRA DEBITACION?   ."<<endl;
		cout<<"                                                                                            .              1. SI                  ."<<endl;
		cout<<"                                                                                            .              2. NO                  ."<<endl;
		cout<<"                                                                                            ......................................."<<endl;
		cin>>shortMenu;
		system("cls");
		while (shortMenu < 1 || shortMenu > 2) {
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
			cout<< "                                               .....................................................................................    "<<endl;
			cout<<"                                                              ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
			SetConsoleTextAttribute(hConsole, 112);
			cout<<"                                                                                        ......................................."<<endl;
			cout<<"                                                                                        .  ¿DESEA REALIZAR OTRA DEBITACION?   ."<<endl;
			cout<<"                                                                                        .              1. SI                  ."<<endl;
			cout<<"                                                                                        .              2. NO                  ."<<endl;
			cout<<"                                                                                        ......................................."<<endl;
			cin>>shortMenu;
			system("cls");
		}
		
		switch (shortMenu) {
		case 1:
			menuDebitar();//Llama a la función para el menú de acreditar 
			break;
		case 2:
			cout<<""<<endl;
			cout<<"                                                                                                REGRESANDO......................."<<endl;
			Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
			system("cls");
			break;
		default:
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
			cout<< "                                               .....................................................................................    "<<endl;
			cout<<"                                                              ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
			SetConsoleTextAttribute(hConsole, 112);
		};
		
		
		
		
	case 2:
		cout<<""<<endl;
		cout<<"                                                                                                    REGRESANDO......................."<<endl;
		Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
		system("cls");
		break;
	 
	default:
		SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
		cout<< "                                                         .....................................................................................    "<<endl;
		cout<<"                                                                  ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
		SetConsoleTextAttribute(hConsole, 112);
		
	};
	
	} while (shortMenu !=2);
}

	


void menuVerSaldo() {
	
	int background = 112;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 112);
	
	do {
		
		cout<<"                                                                   .......................................... NOTA ........................................."<<endl;
		cout<<"                                                                   .         Ver saldo            . Sólo se pueden realizar 3 visualizaciones de saldo, se ."<<endl;
		cout<<"                                                                   .                              . cobrara L.5.00 por cada una.                           ."<<endl;
		cout<<"                                                                   ........................................................................................."<<endl;
		cout<<""<<endl<<endl;
		system("pause");
		system("cls");
		
		cout<<"                                                                                                   ..........................................."<<endl;
		cout<<"                                                                                                   .     DESEA SEGUIR ADELANTE CON LA OPCION ."<<endl;
		cout<<"                                                                                                   .                  1. SI                  ."<<endl;
		cout<<"                                                                                                   .                  2. NO                  ."<<endl;
		cout<<"                                                                                                   ..........................................."<<endl;
		cin>>shortMenu;
		system("cls");
		while (shortMenu < 1 || shortMenu > 2) {
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
			cout<< "                                                      .....................................................................................    "<<endl;
			cout<<"                                                              ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
			SetConsoleTextAttribute(hConsole, 112);
			cout<<"                                                                                               ..........................................."<<endl;
			cout<<"                                                                                               . DESEA SEGUIR ADELANTE CON LA OPCION     ."<<endl;
			cout<<"                                                                                               .                  1. SI                  ."<<endl;
			cout<<"                                                                                               .                  2. NO                  ."<<endl;
			cout<<"                                                                                               ..........................................."<<endl;
			cin>>shortMenu;
			system("cls");
		}
		
		
		switch (shortMenu) {
		case 1:
			
			
			//Ver saldo
			s = s + 1;
			if (s >= 1 && s < 4 && saldoGeneralLPS > 100) {
				
				cout<<"                                                                                       ........................................."<<endl;
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
				cout<<"                                                                                       .   N°  .           OPCIONES            ."<<endl;
				SetConsoleTextAttribute(hConsole, 112);
				cout<<"                                                                                       ........................................."<<endl;
				cout<<"                                                                                       .   1   .          VER MI SALDO         ."<<endl;
				cout<<"                                                                                       ........................................."<<endl;
				cout<<"                                                                                       .   2   .  VER SALDO DE BENEFICIARIOS   ."<<endl;
				cout<<"                                                                                       ........................................."<<endl;
				cout<<"                                                                                       .   3   .            REGRESAR           ."<<endl;
				cout<<"                                                                                       ........................................."<<endl;
				cout<<""<<endl<<endl;
				cin>>shortMenu;
				switch (shortMenu) {
				case 1:
					//Ver mi saldo
					
					
					
					
					//Acumuladores de ver saldo
					acumVerSaldo = acumVerSaldo + cobroVerSaldo;
					saldoGeneralLPS = saldoGeneralLPS - cobroVerSaldo;  
					saldoGeneraDLR = saldoGeneralLPS / 24.78; //precio del dolar
					
					//Saldos criptomonedas
					/*saldoLitteCoin = acumSaldoTotal / littecoin;*/
					
					
					/* TE PONES VIVA MAYLYN A MEJORAR LA SALIDA DEL SALDO*/
					
					
					cout << ".................................................................................................................................................................................................................." << endl;
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
					cout << "                           EFECTIVO                                    CANTIDAD                           LEMPIRAS                                  DOLLARES"                                << endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout << ".................................................................................................................................................................................................................." << endl;
					cout << "                                                                                                                                                                                          " << endl;
					cout << "                       SALDO EN CUENTA                                                                    L. " << saldoGeneralLPS << "                                  $ " << saldoGeneraDLR << endl;
					cout << "                          MOVIMIENTO                                                                                                                " << endl;
					cout << "                         ACREDITACION                                    " << a << "                                L. " << acumuladorAcreditaciones << "                                     $ " << acumuladorAcreditaciones / 24.78 << endl;
					cout << "                           DEBITOS                                       " << (d + dp) << "                                L. " << acumDebitado << "                                     $ " << acumDebitado / 24.78 << endl;
					cout << "                        COBRO DE L.2                                     " << d << "                                L. " << acumCobroDebito2 << "                                     $ " << acumCobroDebito2 / 24.78 << endl;
					cout << "                        COBRO DE 2%                                      " << dp << "                                L. " << acum2PorCiento << "                                     $ " << acum2PorCiento / 24.78 << endl;
					cout << "                     LITECOINS GANADAS POR                               " << l << "                                L. " << l * littecoin << "                                     $ " << l * 20 << endl;
					cout << "                        TRANSFERENCIAS                                                                                                              " << endl;
					cout << "                           PUNTOS                                                                                                                   " << endl;
					cout << "                       CRIPTOMONEDAS                                                                                                                " << endl;
					cout << ".................................................................................................................................................................................................................." << endl;
					
					//validaciones en caso que no ingrese 
					
					
					
					
					
					//cout<<"                                                                                                                      mero barca                                                                "<<d<<endl;
					//cout<<"                                                                                                                      mero barca                                                                 "<<dp<<endl;
					
					
					
					
					
					break;
				case 2:
					//Ver  saldo beneficiarios
					break;
				case 3:					cout<<"                   "<<endl;
					cout<<"                                                                                           REGRESANDO......................."<<endl;
					Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
					system("cls");
					break;
				default:
					
					cout <<".................................................................................................................................................................................................................." << endl;
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
					cout<< "                                                                          ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					
					cout <<".................................................................................................................................................................................................................." << endl;
				};
				
				
			} else {
				
				if (saldoGeneralLPS == 100) { //Si ya solo tiene 100 en su cuenta
					
					cout<<"                                                       ............................................................................"<<endl;
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
					cout<<"                                                       .                                RECORDATORIO                              ."<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					
					cout<<"                                                       ............................................................................"<<endl;
					cout<<"                                                       . Actualmente solo cuenta con L. "<<saldoGeneralLPS<<  "en su cuenta, le   ."<<endl;
					cout<<"                                                       . recordamos que no puede dejar su cuentacon menos de L.100, por favor     ."<<endl;
					cout<<"                                                       . realice una acreditacion si desea ver su saldo.                          ."<<endl;
					cout<<"                                                       ............................................................................"<<endl;
					cout<<"    "<<endl<<endl;
					system("pause");
					system("cls");
				} else {
					if (s >= 4) {//Si ya excedio los tres intentos  
						
						cout<<"                                                   ............................................................................."<<endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
						cout<<"                                                   .                                RECORDATORIO                               ."<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						
						cout<<"                                                   ............................................................................."<<endl;
						cout<<"                                                   .                Ha alcanzado el maximo de sus intentos por dia             ."<<endl;
						cout<<"                                                   ............................................................................."<<endl;
						cout<<"    "<<endl<<endl;
						system("pause");
						system("cls");
						
					} 
				}
			}
			
			
			
			
			
			
			
			
			break;
		case 2:
			cout <<".................................................................................................................................................................................................................." << endl;
			cout<<""<<endl;
			cout<<"                                                                                             REGRESANDO......................."<<endl;
			
			Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
			system("cls");
			
		default:
			cout <<".................................................................................................................................................................................................................." << endl;
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
			cout<< "                                                              ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
			SetConsoleTextAttribute(hConsole, 112);
			
			cout <<".................................................................................................................................................................................................................." << endl;
		};
		
		
	} while (shortMenu != 2);
	
	
	
	
	
	
	
	
	
	
}




void menuTransferenicas(){
	int background = 112;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 112);
	do {
		
		cout<< "                                                                ............................................................    "<<endl;
		SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
		cout<< "                                                                .                                                          .    "<<endl;
		cout<< "                                                                .        ----  TRANSFERENCIAS A BENEFICIARIOS  -----       .    "<<endl;
		SetConsoleTextAttribute(hConsole, 112);
		
		
		cout<< "                                                                .                                                          .    "<<endl;
		cout<< "                                                                .           ---- SALDO EN LEMPIRAS Y DOLARES ----          .    "<<endl;
		cout<< "                                                                .                                                          .    "<<endl;
		cout<< "                                                                .               L. "<<saldoGeneralLPS<<"            $ "<<saldoGeneraDLR<<"     "<<endl;
		cout<< "                                                                .                                                          .    "<<endl;
		cout<< "                                                                .            ---- CRIPTOMONEDAS DISPONIBLES ----           .   "<<endl;
		cout<< "                                                                .                                                          .    "<<endl;
		cout<< "                                                                .         LITECOINS       BITCOINS       ETHEREUM          . "<<endl;
		cout<< "                                                                .         "<<trunc((saldoGeneralLPS/24.78)/20)<<"              "<<trunc((saldoGeneralLPS/24.78)/50)<<"              "<<trunc((saldoGeneralLPS/24.78)/100) ;
		cout<< "                                                                .                                                          .    "<<endl;
		cout<< "                                                                .                                                          .    "<<endl;
		cout<< "                                                                .                  .......................                 . "<<endl;
		cout<< "                                                                .                  . 1  BENEFICIARIO N-1 :  "<<nombreBeneficiarioUno <<"             "<<endl;
		cout<< "                                                                .                  .......................                 .  "<<endl;
		cout<< "                                                                .                                                          .   "<<endl;
		cout<< "                                                                .                  .......................                 . "<<endl;
		cout<< "                                                                .                  . 2  BENEFICIARIO N-2 :  "<<nombreBeneficiarioDos <<"             "<<endl;
		cout<< "                                                                .                  .......................                 .  "<<endl;
		cout<< "                                                                .                                                          .   "<<endl;
		cout<< "                                                                .                  .......................                 . "<<endl;
		cout<< "                                                                .                  . 3 BENEFICIARIO N-3  :  "<<nombreBeneficiarioTres <<"             "<<endl;
		cout<< "                                                                .                  .......................                 .  "<<endl;
		cout<< "                                                                .                                                          .    "<<endl;
		cout<< "                                                                .                  .......................                 . "<<endl;
		cout<< "                                                                .                  . 4      SALIR        :                 ."<<endl;
		cout<< "                                                                .                  .......................                 .  "<<endl;
		cout<< "                                                                .                                                          .    "<<endl;
		cout<< "                                                                ........................................................... "<<endl;	
		cout<<" "<<endl<<endl;
		cin>>menu;
		
		while (menu < 1 || menu > 4) {
			cout <<".................................................................................................................................................................................................................." << endl;
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
			cout<< "                                                                       ERROR: Seleccioness un valor correcto"   <<endl;
			SetConsoleTextAttribute(hConsole, 112);
			
			
			cout <<".................................................................................................................................................................................................................." << endl;
			cout<< "                                                            ...........................................................    "<<endl;
			cout<< "                                                            .                                                         .    "<<endl;
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
			cout<< "                                                            .         -----TRANSFERENCIAS A BENEFICIARIOS-----        .    "<<endl;
			SetConsoleTextAttribute(hConsole, 112);
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .           ---- SALDO EN LEMPIRAS Y DOLARES ----         .    "<<endl;
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .                L. "<<saldoGeneralLPS<<"            $ "<<saldoGeneraDLR<<"     "<<endl;
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .            ---- CRIPTOMONEDAS DISPONIBLES ----          .   "<<endl;
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .          LITECOINS       BITCOINS       ETHEREUM        . "<<endl;
			cout<< "                                                            .         "<<trunc((saldoGeneralLPS/24.78)/20)<<"              "<<trunc((saldoGeneralLPS/24.78)/50)<<"              "<<trunc((saldoGeneralLPS/24.78)/100) ;
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .                  .......................                . "<<endl;
			cout<< "                                                            .                  . 1  BENEFICIARIO N-1 :  "<<nombreBeneficiarioUno <<"             "<<endl;
			cout<< "                                                            .                  .......................                .  "<<endl;
			cout<< "                                                            .                                                         .   "<<endl;
			cout<< "                                                            .                  .......................                . "<<endl;
			cout<< "                                                            .                  . 2  BENEFICIARIO N-2 :  "<<nombreBeneficiarioDos <<"             "<<endl;
			cout<< "                                                            .                  .......................                .  "<<endl;
			cout<< "                                                            .                                                         .   "<<endl;
			cout<< "                                                            .                  .......................                . "<<endl;
			cout<< "                                                            .                  . 3 BENEFICIARIO N-3  :  "<<nombreBeneficiarioTres <<"             "<<endl;
			cout<< "                                                            .                  .......................                .  "<<endl;
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .                  .......................                . "<<endl;
			cout<< "                                                            .                  . 4      SALIR        :                ."<<endl;
			cout<< "                                                            .                  .......................                .  "<<endl;
			cout<< "                                                            .                                                         .    "<<endl;
			cout <<".................................................................................................................................................................................................................." << endl;
			cout<<" "<<endl<<endl;
			cin>>menu;
			
			system("cls");
			
		}
		
		
		system("cls");
		
		switch (menu) {
		case 1:
			
			cout<<" "<<endl;
			cout <<"..............................................................................................................................................................................................." << endl;
			cout<< "                                                              USTED ESTA TRANSFIRIENDO CRIPTOMONEDAS A: "<<nombreBeneficiarioUno<<endl<<endl<<endl;
			cout <<"..............................................................................................................................................................................................." << endl;
			
			
			
			cout<< "                                                            ...........................................................    "<<endl;
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .           ----- CRIPTOMONEDAS DISPONIBLES -----         .    "<<endl;
			SetConsoleTextAttribute(hConsole, 112);
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .                 .......................                 . "<<endl;
			cout<< "                                                            .                 . 1    LITECOINS      :  "<<trunc((saldoGeneralLPS/24.78)/20)<<endl;
			cout<< "                                                            .                 .......................                 .  "<<endl;
			cout<< "                                                            .                                                         .   "<<endl;
			cout<< "                                                            .                 .......................                 . "<<endl;
			cout<< "                                                            .                 . 2    ETHEREUM       :  "<<trunc((saldoGeneralLPS/24.78)/50)<<endl;
			cout<< "                                                            .                 .......................                 .  "<<endl;
			cout<< "                                                            .                                                         .   "<<endl;
			cout<< "                                                            .                 .......................                 . "<<endl;
			cout<< "                                                            .                 . 3    BITCOINS       :  "<<trunc((saldoGeneralLPS/24.78)/100)<<endl;
			cout<< "                                                            .                 .......................                 .  "<<endl;
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .                 .......................                 ."<<endl;
			cout<< "                                                            .	               . 4     SALIR        :                 ."<<endl;
			cout<< "                                                            .                 .......................                 ."<<endl;	
			cout<< "                                                            ........................................................... "<<endl;	
			cout<<" "<<endl<<endl;
			cin>>menu;
			
			
			while (menu < 1 || menu > 4) {
				cout <<"........................................................................................................................................................................................" << endl;
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
				cout<<"                                                                          ERROR: Selecione un valor correcto ";
				SetConsoleTextAttribute(hConsole, 112);
				cout <<"........................................................................................................................................................................................" << endl;
				cout<< "                                                        ...........................................................    "<<endl;
				cout<< "                                                        .                                                         .    "<<endl;
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
				cout<< "                                                        .             -----CRIPTOMONEDAS DISPONIBLES-----         .    "<<endl;
				SetConsoleTextAttribute(hConsole, 112);
				cout<< "                                                        .                                                         .    "<<endl;
				cout<< "                                                        .                   .......................               . "<<endl;
				cout<< "                                                        .                   . 1    LITECOINS      :  "<<trunc((saldoGeneralLPS/24.78)/20)<<endl;
				cout<< "                                                        .                   .......................               .  "<<endl;
				cout<< "                                                        .                                                         .   "<<endl;
				cout<< "                                                        .                   .......................               . "<<endl;
				cout<< "                                                        .                   . 2    ETHEREUM       :  "<<trunc((saldoGeneralLPS/24.78)/50)<<endl;
				cout<< "                                                        .                   .......................               .  "<<endl;
				cout<< "                                                        .                                                         .   "<<endl;
				cout<< "                                                        .                   .......................               . "<<endl;
				cout<< "                                                        .                   . 3    BITCOINS       :  "<<trunc((saldoGeneralLPS/24.78)/100)<<endl;
				cout<< "                                                        .                   .......................               .  "<<endl;
				cout<< "                                                        .                                                         .    "<<endl;
				cout<< "                                                        .                   .......................               ."<<endl;
				cout<< "                                                        .	                . 4     SALIR         :               ."<<endl;
				cout<< "                                                        .                   .......................                  ."<<endl;	
				cout<< "                                                        ........................................................... "<<endl;	
				cout<<" "<<endl<<endl;
				cin>>menu;
				
				
				system("cls");
				
			}
			
			system("cls");
			
			switch (menu) {
			case 1:
				
				if ((((saldoGeneralLPS/24.78)/20) - 1 ) < 1){
					cout<<"                                                     .........................................................."<<endl;
					cout<<"                                                     .        Usted no cuenta con litecoins suficientes       ."<<endl;
					cout<<"                                                     .           para continuar con su transferencia          ."<<endl;
					cout<<"                                                     .........................................................."<<endl<<endl<<endl;

					system("pause");
					system("cls");
					
					
				} else {
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
					cout<< "                                                                    ----------   LITECOINS  -------------   "<<endl<<endl<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< "                                                                         Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/20)<<endl;
					cout<< "                                                                         Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/20) -1)<<endl<<endl;
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< "                                                                     ¿ cuantas litecoins desea transferir ?"<<endl;
					cin>>cantidadLitecoins;
					while (cantidadLitecoins < 1) {
						cout <<"........................................................................................................................................................................................" << endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<< "                                                       ERROR: no se aceptan numero negativos"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout <<"........................................................................................................................................................................................" << endl;
						cout<< "                                                                 ¿ cuantas litecoins desea transferir ?"<<endl;
						cout <<"........................................................................................................................................................................................" << endl;
						cin>>cantidadLitecoins;
					}
					system("cls");
					
					if ((((saldoGeneralLPS/24.78)/20) - 1) < cantidadLitecoins ) {
						
						cout<<"                                                 ..........................................................."<<endl;
						cout<<"                                                 .        Usted no cuenta con lLitecoins suficientes       ."<<endl;
						cout<<"                                                 .           para continuar con su transferencia           ."<<endl;
						cout<<"                                                 .........................................................."<<endl<<endl<<endl;
					
						system("pause");
						system("cls");
						
					} else {
						
						saldoGeneralLPS = saldoGeneralLPS -  cantidadLitecoins*littecoin    ;
						
						acumBeneficiarioLit1  = acumBeneficiarioLit1 + cantidadLitecoins;
						acumLitecoins = acumLitecoins + (cantidadLitecoins*2);
						
						cout<<"                                                    ...................................................."<<endl;
						cout<<"                                                    . Su criptomonedas han sido transferidas con exito ."<<endl<<endl;
						cout<<"                                                    ...................................................."<<endl<<endl;
						cout<<"                                                              ................................"<<endl;
						cout<<"                                                              .    Criptomonedas restantes:  ."<<endl;
						cout<< "                                                             .       Cantidad Total:        .   "<<trunc((saldoGeneralLPS/24.78)/20)<<endl;
						cout<< "                                                             .     Cantidad Disponible:     . "<<trunc(((saldoGeneralLPS/24.78)/20) - 1)<<endl<<endl;
						cout<<"                                                              ................................"<<endl<<endl<<endl;
						
						cout<<"                                                    ...................................................."<<endl;
						cout<<"                                                    .                 cantidad de litcoins  "<<acumBeneficiarioLit1<<endl;
						cout<<"                                                    .                         puntos       "    <<acumLitecoins<<endl;
						cout<<"                                                    ...................................................."<<endl;
						
						
						system("pause");
						system("cls");
					}
					
					
				}
				
		
				
				
				break;
			case 2:  
				
				
				if ((((saldoGeneralLPS/24.78)/50) - 1 ) < 1){
					cout<<"                                                     .........................................................."<<endl;
					cout<<"                                                     .        Usted no cuenta con litecoins suficientes       ."<<endl;
					cout<<"                                                     .           para continuar con su transferencia          ."<<endl;
					cout<<"                                                     .........................................................."<<endl<<endl<<endl;
					system("pause");
					system("cls");
					
					
				} else {
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
					cout<< "                                                                    ----------   ETHEREUM  -------------   "<<endl<<endl<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< ".                                                                         Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/50)<<endl;
					cout<< ".                                                                         Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/50) -1)<<endl<<endl;
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< "                                                                     ¿ cuantas Ethereum desea transferir ?"<<endl;
					cin>>CantidadEtherum ;
					while (CantidadEtherum  < 1) {
						cout <<"....................................................................................................................................................................................." << endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<< "                                                               ERROR: no se aceptan numero negativos"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout <<"....................................................................................................................................................................................." << endl;
						cout<< "                                                                ¿ cuantas Ethereum desea transferir ?"<<endl;
						cout <<"....................................................................................................................................................................................." << endl;
						cin>>CantidadEtherum ;
					}
					system("cls");
					
					if ((((saldoGeneralLPS/24.78)/50) - 1) < CantidadEtherum  ) {
						
						cout<<"                                                 .........................................................."<<endl;
						cout<<"                                                 .        Usted no cuenta con Ethereum suficientes        ."<<endl;
						cout<<"                                                 .           para continuar con su transferencia          ."<<endl;
						cout<<"                                                 .........................................................."<<endl<<endl<<endl;
						system("pause");
						system("cls");
						
					} else {
						
						saldoGeneralLPS = (saldoGeneralLPS -  (CantidadEtherum *ethereum ) )   ;
						
						acumBeneficiarioEthe1    = acumBeneficiarioEthe1   + CantidadEtherum ;
						acumEtherums = acumEtherums + (CantidadEtherum *5);
						
						cout<<"                                                    ...................................................."<<endl;
						cout<<"                                                    . Su criptomonedas han sido transferidas con exito ."<<endl<<endl;
						cout<<"                                                    ...................................................."<<endl<<endl;
						cout<<"                                                    ...................................................."<<endl;
						cout<<"                                                        Criptomonedas restantes: "<<endl;
						cout<<"                                                        Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/50)<<endl;
						cout<<"                                                        Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/50) - 1)<<endl<<endl;
						cout<<"                                                    ...................................................."<<endl<<endl<<endl;
						
						cout<<"                                                    ...................................................."<<endl;
						cout<<"                                                    .        Cantidad de Etherums  "<<acumBeneficiarioEthe1<<endl;
						cout<<"                                                    .        Puntos    "<<acumEtherums<<endl;
						cout<<"                                                    ...................................................."<<endl;
						
						system("pause");
						system("cls");
					}
					
					
				}
				
				break;
			case 3:
				
				if ((((saldoGeneralLPS/24.78)/100) - 1 ) < 1){
					cout<<"                                                      .........................................................."<<endl;
					cout<<"                                                      .        Usted no cuenta con Bitcoins suficientes        ."<<endl;
					cout<<"                                                      .           para continuar con su transferencia          ."<<endl;
					cout<<"                                                      .........................................................."<<endl<<endl;
					
					system("pause");
					system("cls");
					
					
				} else {
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
					cout<< "                                                                  ------------   BITCOINS  --------------   "<<endl<<endl<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< ".                                                                        Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/100)<<endl;
					cout<< ".                                                                        Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/100) -1)<<endl<<endl;
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< "                                                                     ¿ Cuantas Bitcoins desea transferir ?"<<endl;
					cin>>cantidadBitcoins  ;
					while (cantidadBitcoins   < 1) {
						cout <<"....................................................................................................................................................................................." << endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<< "                                                               ERROR: no se aceptan numero negativos"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout <<"....................................................................................................................................................................................." << endl;
						cout<< "                                                                ¿ Cuantas Bitcoins desea transferir ?"<<endl;
						cout <<"....................................................................................................................................................................................." << endl;
						cin>>cantidadBitcoins ;
					}
					system("cls");
					
					if ((((saldoGeneralLPS/24.78)/100) - 1) < cantidadBitcoins   ) {
						
						cout<<"                                                  .........................................................."<<endl;
						cout<<"                                                  .        Usted no cuenta con Bitcoins suficientes        ."<<endl;
						cout<<"                                                  .           para continuar con su transferencia          ."<<endl;
						cout<<"                                                  .........................................................."<<endl<<endl<<endl;
						system("pause");
						system("cls");
						
					} else {
						
						saldoGeneralLPS = saldoGeneralLPS -  cantidadBitcoins  *ethereum     ;
						
						acumBeneficiarioBit1    = acumBeneficiarioBit1  + cantidadBitcoins  ;
						acumBitcoins   = acumBitcoins  + (cantidadBitcoins *10);
						
						cout<<"                                                     ........................................................."<<endl;
						cout<<"                                                     . Su criptomonedas han sido transferidas con exito      ."<<endl<<endl;
						cout<<"                                                     ........................................................."<<endl<<endl;
						cout<<"                                                     ........................................................."<<endl;
						cout<<"                                                     . Criptomonedas restantes: "<<endl;
						cout<<"                                                     . Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/100)<<endl;
						cout<<"                                                     . Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/100) - 1)<<endl<<endl;
						cout<<"                                                      ........................................................."<<endl<<endl<<endl;
						cout<<"                                                      ........................................................."<<endl;
						cout<<"                                                      . cantidad de etherums  "<<acumBeneficiarioBit1<<endl;
						cout<<"                                                      . puntos    "<<acumBitcoins <<endl;
					    cout<<"                                                      .........................................................."<<endl;
						 
						
						system("pause");
						system("cls");
					}
					
					
				}
				
				
				break;
			case 4:
				cout<<"                                                                        REGRESANDO A MENU PRINCIPAL.......  "<<endl;
				cout <<"........................................................................................................................................................................................" << endl;
				break;	
			default:
				cout<<"                                                                  El valor que usted ingreso es incorrecto"<<endl;
				cout <<"........................................................................................................................................................................................" << endl;
			};
			
			
			
			
			
			
			break;
			
		case 2:
			
			cout<< "                                                                       USTED ESTA TRANSFIRIENDO CRIPTOMONEDAS A: "<<nombreBeneficiarioDos<<endl<<endl;
			
			cout<< "                                                            ...........................................................    "<<endl;
			cout<< "                                                            .                                                         .    "<<endl;
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
			cout<< "                                                            .             -----CRIPTOMONEDAS DISPONIBLES-----         .    "<<endl;
			SetConsoleTextAttribute(hConsole, 112);
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .                  .......................                . "<<endl;
			cout<< "                                                            .                  . 1     LITECOINS     :  "<<trunc((saldoGeneralLPS/24.78)/20)<<endl;
			cout<< "                                                            .                  .......................                .  "<<endl;
			cout<< "                                                            .                                                         .   "<<endl;
			cout<< "                                                            .                  .......................                . "<<endl;
			cout<< "                                                            .                  . 2     ETHEREUM      :  "<<trunc((saldoGeneralLPS/24.78)/50)<<endl;
			cout<< "                                                            .                  .......................                .  "<<endl;
			cout<< "                                                            .                                                         .   "<<endl;
			cout<< "                                                            .                  .......................                . "<<endl;
			cout<< "                                                            .                  . 3     BITCOINS      :  "<<trunc((saldoGeneralLPS/24.78)/100)<<endl;
			cout<< "                                                            .                  .......................                .  "<<endl;
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .                  .......................                ."<<endl;
			cout<< "                                                            .	               . 4      SALIR        :                ."<<endl;
			cout<< "                                                            .                  .......................                ."<<endl;	
			cout<< "                                                            ........................................................... "<<endl;	
			cout<<" "<<endl<<endl;
			cin>>menu;
			
			
			while (menu < 1 || menu > 4) {
				cout <<"........................................................................................................................................................................................" << endl;
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
				cout<<"                                                          ERROR: Selecione un valor correcto ";
				SetConsoleTextAttribute(hConsole, 112);
				cout<< "                                                        ...........................................................    "<<endl;
				cout<< "                                                        .                                                         .    "<<endl;
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
				cout<< "                                                        .             -----CRIPTOMONEDAS DISPONIBLES-----         .    "<<endl;
				SetConsoleTextAttribute(hConsole, 112);
				cout<< "                                                        .                                                         .    "<<endl;
				cout<< "                                                        .                  .......................                . "<<endl;
				cout<< "                                                        .                  . 1     LITECOINS     :  "<<trunc((saldoGeneralLPS/24.78)/20)<<endl;
				cout<< "                                                        .                  .......................                .  "<<endl;
				cout<< "                                                        .                                                         .   "<<endl;
				cout<< "                                                        .                  .......................                . "<<endl;
				cout<< "                                                        .                  . 2     ETHEREUM      :  "<<trunc((saldoGeneralLPS/24.78)/50)<<endl;
				cout<< "                                                        .                  .......................                .  "<<endl;
				cout<< "                                                        .                                                         .   "<<endl;
				cout<< "                                                        .                  .......................                . "<<endl;
				cout<< "                                                        .                  . 3     BITCOINS      :  "<<trunc((saldoGeneralLPS/24.78)/100)<<endl;
				cout<< "                                                        .                  .......................                .  "<<endl;
				cout<< "                                                        .                                                         .    "<<endl;
				cout<< "                                                        .                  .......................                ."<<endl;
				cout<< "                                                        .	               . 4      SALIR        :                ."<<endl;
				cout<< "                                                        .                  .......................                ."<<endl;	
				cout<< "                                                        ........................................................... "<<endl;	
				cout<<" "<<endl<<endl;
				cin>>menu;
				
				
				system("cls");
				
			}
			
			system("cls");
			
			switch (menu) {
			case 1:
				
				if ((((saldoGeneralLPS/24.78)/20) - 1 ) < 1){
					cout<<"                                                       .........................................................."<<endl;
					cout<<"                                                       .        Usted no cuenta con Litecoins suficientes       ."<<endl;
					cout<<"                                                       .          para continuar con su transferencia           ."<<endl;
					cout<<"                                                       .........................................................."<<endl<<endl<<endl;
					
					system("pause");
					system("cls");
					
					
				} else {
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
					cout<< "                                                               ----------   LITECOINS  -------------   "<<endl<<endl<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< ".                                                                   Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/20)<<endl;
					cout<< ".                                                                   Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/20) -1)<<endl<<endl;
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< "                                                                 ¿ cuantas litecoins desea transferir ?"<<endl;
					cin>>cantidadLitecoins;
					while (cantidadLitecoins < 1) {
						cout <<"........................................................................................................................................................................................" << endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<< "                                                            ERROR: no se aceptan numero negativos"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout<< "                                                           ¿ cuantas Litecoins desea transferir ?"<<endl;
						cout <<"........................................................................................................................................................................................" << endl;
						cin>>cantidadLitecoins;
					}
					system("cls");
					
					if ((((saldoGeneralLPS/24.78)/20) - 1) < cantidadLitecoins ) {
						
						cout<<"                                                    .........................................................."<<endl;
						cout<<"                                                    .        Usted no cuenta con Litecoins suficientes       ."<<endl;
						cout<<"                                                    .          para continuar con su transferencia           ."<<endl;
						cout<<"                                                    .........................................................."<<endl<<endl<<endl;
						system("cls");
						
					} else {
						
						saldoGeneralLPS = saldoGeneralLPS -  cantidadLitecoins*littecoin    ;
						
						acumBeneficiarioLit2   = acumBeneficiarioLit2  + cantidadLitecoins;
						acumLitecoins = acumLitecoins + (cantidadLitecoins*2);
					
						cout<<"                                                        ...................................................."<<endl;
						cout<<"                                                        . Su criptomonedas han sido transferidas con exito ."<<endl<<endl;
						cout<<"                                                        ...................................................."<<endl<<endl;
						cout<<"                                                        ...................................................."<<endl;
						cout<<"                                                        .   Criptomonedas restantes: "<<endl;
						cout<< "                                                       .   Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/20)<<endl;
						cout<< "                                                       .   Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/20) - 1)<<endl<<endl;
						cout<<"                                                        ...................................................."<<endl<<endl<<endl;
						
						cout<<"cantidad de litcoins  "<<acumBeneficiarioLit2 <<endl;
						cout<<"puntos    "<<acumLitecoins<<endl;
						
						
						system("pause");
						system("cls");
					}
					
					
				}
				
				
				
				
				
////				
				
				break;
			case 2:  
				
				
				if ((((saldoGeneralLPS/24.78)/50) - 1 ) < 1){
					cout<<"                                                        .........................................................."<<endl;
					cout<<"                                                        .          Usted no cuenta con litecoins suficientes     ."<<endl;
					cout<<"                                                        .             para continuar con su transferencia        ."<<endl;
					cout<<"                                                        .........................................................."<<endl<<endl<<endl;
					
					system("pause");
					system("cls");
					
					
				} else {
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
					cout<< "                                                             ----------------- ETHEREUM  ---------------   "<<endl<<endl<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< ".                                                                   Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/50)<<endl;
					cout<< ".                                                                   Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/50) -1)<<endl<<endl;
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< "                                                                ¿ Cuantas Ethereum desea transferir ?"<<endl;
					cout <<"........................................................................................................................................................................................" << endl<<endl<<endl;
					cin>>CantidadEtherum ;
					while (CantidadEtherum  < 1) {
						cout <<"........................................................................................................................................................................................" << endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<< "                                                              ERROR: no se aceptan numero negativos"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout<< "                                                             ¿ Cuantas Ethereum desea transferir ?"<<endl;
						cout <<"........................................................................................................................................................................................" << endl;
						cin>>CantidadEtherum ;
					}
					system("cls");
					
					if ((((saldoGeneralLPS/24.78)/50) - 1) < CantidadEtherum  ) {
						
						
						
						cout<<"                                                   ........................................................."<<endl;
						cout<<"                                                   .        Usted no cuenta con lEthereum suficientes       ."<<endl;
						cout<<"                                                   .          para continuar con su transferencia           ."<<endl;
						cout<<"                                                   .........................................................."<<endl<<endl<<endl;
						system("pause");
						system("cls");
						
					} else {
						
						saldoGeneralLPS = (saldoGeneralLPS -  (CantidadEtherum *ethereum ) )   ;
						
						acumBeneficiarioEthe2     = acumBeneficiarioEthe2    + CantidadEtherum ;
						acumEtherums = acumEtherums + (CantidadEtherum *5);
						
						cout<<"                                                       ....................................................."<<endl;
						cout<<"                                                       . Su criptomonedas han sido transferidas con exito  ."<<endl<<endl;
						cout<<"                                                       ....................................................."<<endl<<endl;
						cout<<"                                                       ...................................................."<<endl;
						cout<<"                                                       .    Criptomonedas restantes: "<<endl;
						cout<< "                                                      .    Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/50)<<endl;
						cout<< "                                                      .    Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/50) - 1)<<endl<<endl;
						cout<<"                                                       ......................................................."<<endl;
						
						cout<<"cantidad de etherums  "<<acumBeneficiarioEthe2 <<endl;
						cout<<"puntos    "<<acumEtherums<<endl;
						
						
						system("pause");
						system("cls");
					}
					
					
				}
				
				break;
			case 3:
				
				if ((((saldoGeneralLPS/24.78)/100) - 1 ) < 1){
					cout<<"                                                       ........................................................."<<endl;
					cout<<"                                                       .         Usted no cuenta con Bitcoins suficientes     ."<<endl;
					cout<<"                                                       .            para continuar con su transferencia        ."<<endl;
					cout<<"                                                       ........................................................."<<endl<<endl<<endl;
					
					system("pause");
					system("cls");
					
					
				} else {
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
					cout<< "                                                             ----------------- BITCOINS  ---------------   "<<endl<<endl<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< ".                                                                     Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/100)<<endl;
					cout<< ".                                                                     Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/100) -1)<<endl<<endl;
					cout <<"........................................................................................................................................................................................" << endl<<endl<<endl;
					cout<< "                                                                ¿ Cuantas Bitcoins desea transferir ?"<<endl;
					cout <<"........................................................................................................................................................................................" << endl;
					cin>>cantidadBitcoins  ;
					while (cantidadBitcoins   < 1) {
						cout <<"....................................................................................................................................................................................." << endl<<endl<<endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<< "                                                           ERROR: no se aceptan numero negativos"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout <<"......................................................................................................................................................................................" << endl<<endl<<endl;
						cout<< "                                                            ¿ Cuantas Bitcoins desea transferir ?"<<endl;
						cout <<"......................................................................................................................................................................................" << endl<<endl<<endl;
						cin>>cantidadBitcoins  ;
						
					}
					system("cls");
					
					if ((((saldoGeneralLPS/24.78)/100) - 1) < cantidadBitcoins   ) {
						
						cout<<"                                                   ........................................................."<<endl;
						cout<<"                                                   .         Usted no cuenta con Bitcoins suficientes     ."<<endl;
						cout<<"                                                   .            para continuar con su transferencia        ."<<endl;
						cout<<"                                                   ........................................................."<<endl <<endl<<endl;
						system("pause");
						system("cls");
						
					} else {
						
						saldoGeneralLPS = saldoGeneralLPS -  cantidadBitcoins  *ethereum     ;
						
						acumBeneficiarioBit2    = acumBeneficiarioBit2  + cantidadBitcoins  ;
						acumBitcoins   = acumBitcoins  + (cantidadBitcoins *10);
						
						cout<<"                                                        ...................................................."<<endl;
						cout<<".                                                       . Su criptomonedas han sido transferidas con exito ."<<endl<<endl;
						cout<<"                                                        ...................................................."<<endl<<endl;
						cout<<"                                                        ...................................................."<<endl;
						cout<<"                                                        . Criptomonedas restantes: "<<endl;
						cout<<"                                                        . Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/100)<<endl;
						cout<<"                                                        . Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/100) - 1)<<endl<<endl;
						cout<<"                                                        ...................................................."<<endl<<endl<<endl;
						cout<<"                                                        ...................................................."<<endl;
						cout<<"                                                        .  cantidad de Etherums  "<<acumBeneficiarioBit2<<endl;
						cout<<"                                                        .  Puntos    "<<acumBitcoins <<endl;
						cout<<"                                                        ...................................................."<<endl;
						
						
						system("pause");
						system("cls");
					}
					
					
				}
				
				
				break;
			case 4:
				cout <<"........................................................................................................................................................................................" << endl;
				cout<<"                                                                          REGRESANDO A MENU PRINCIPAL.......  "<<endl;
				
				break;	
				
			default:
				cout <<"........................................................................................................................................................................................" << endl;
				cout<<                                                                       "El valor que usted ingreso es incorrecto"<<endl;
				cout <<"........................................................................................................................................................................................" << endl;
			};
			
			
			
			break;
		case 3:
			
			cout <<"........................................................................................................................................................................................" << endl;
			cout<< "                                                                         USTED ESTA TRANSFIRIENDO CRIPTOMONEDAS A: "<<nombreBeneficiarioTres<<endl<<endl;
			cout <<"........................................................................................................................................................................................" << endl;
			
			
			cout<< "                                                            ...........................................................    "<<endl;
			SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .            ----CRIPTOMONEDAS DISPONIBLES -----          .    "<<endl;
			SetConsoleTextAttribute(hConsole, 112);
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .                .......................                  . "<<endl;
			cout<< "                                                            .                . 1    LITECOINS      :  "<<trunc((saldoGeneralLPS/24.78)/20)<<endl;
			cout<< "                                                            .                .......................                  .  "<<endl;
			cout<< "                                                            .                                                         .   "<<endl;
			cout<< "                                                            .                .......................                  . "<<endl;
			cout<< "                                                            .                . 2    ETHEREUM       :  "<<trunc((saldoGeneralLPS/24.78)/50)<<endl;
			cout<< "                                                            .                .......................                  .  "<<endl;
			cout<< "                                                            .                                                         .   "<<endl;
			cout<< "                                                            .                .......................                  . "<<endl;
			cout<< "                                                            .                . 3    BITCOINS       :  "<<trunc((saldoGeneralLPS/24.78)/100)<<endl;
			cout<< "                                                            .                .......................                  .  "<<endl;
			cout<< "                                                            .                                                         .    "<<endl;
			cout<< "                                                            .                .......................                  ."<<endl;
			cout<< "                                                            .	              . 4     SALIR        :                  ."<<endl;
			cout<< "                                                            .                .......................                  ."<<endl;	
			cout<< "                                                            ........................................................... "<<endl;	
			cout<<" "<<endl<<endl;
			cin>>menu;
			
			
			while (menu < 1 || menu > 4) {
				cout <<"........................................................................................................................................................................................" << endl;
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
				cout<<"                                                                 ERROR: Selecione un valor correcto ";
				SetConsoleTextAttribute(hConsole, 112);
				cout <<"........................................................................................................................................................................................" << endl;
				cout<< "                                                        ...........................................................    "<<endl;
				SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
				cout<< "                                                        .                                                         .    "<<endl;
				cout<< "                                                        .            ----CRIPTOMONEDAS DISPONIBLES -----          .    "<<endl;
				SetConsoleTextAttribute(hConsole, 112);
				cout<< "                                                        .                                                         .    "<<endl;
				cout<< "                                                        .                .......................                  . "<<endl;
				cout<< "                                                        .                . 1    LITECOINS      :  "<<trunc((saldoGeneralLPS/24.78)/20)<<endl;
				cout<< "                                                        .                .......................                  .  "<<endl;
				cout<< "                                                        .                                                         .   "<<endl;
				cout<< "                                                        .                .......................                  . "<<endl;
				cout<< "                                                        .                . 2    ETHEREUM       :  "<<trunc((saldoGeneralLPS/24.78)/50)<<endl;
				cout<< "                                                        .                .......................                  .  "<<endl;
				cout<< "                                                        .                                                         .   "<<endl;
				cout<< "                                                        .                .......................                  . "<<endl;
				cout<< "                                                        .                . 3    BITCOINS       :  "<<trunc((saldoGeneralLPS/24.78)/100)<<endl;
				cout<< "                                                        .                .......................                  .  "<<endl;
				cout<< "                                                        .                                                         .    "<<endl;
				cout<< "                                                        .                .......................                  ."<<endl;
				cout<< "                                                        .	              . 4     SALIR        :                  ."<<endl;
				cout<< "                                                        .                .......................                  ."<<endl;	
				cout<< "                                                        ........................................................... "<<endl;	
				cout<<" "<<endl<<endl;
				cin>>menu;
				
				
				system("cls");
				
			}
			
			system("cls");
			
			switch (menu) {
			case 1:
				
				if ((((saldoGeneralLPS/24.78)/20) - 1 ) < 1){
					cout<<"                                                       ........................................................."<<endl;
					cout<<"                                                       .         Usted no cuenta con litecoins suficientes     ."<<endl;
					cout<<"                                                       .            para continuar con su transferencia        ."<<endl;
					cout<<"                                                       ........................................................."<<endl <<endl<<endl;
					system("pause");
					system("cls");
					
					
				} else {
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
					cout<< "                                                             ----------------- LITECOINS  ---------------   "<<endl<<endl<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< "                                                            Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/20)<<endl;
					cout<< "                                                            Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/20) -1)<<endl<<endl;
					cout <<"........................................................................................................................................................................................" <<endl<<endl;
					cout<< "                                                                ¿ Cuantas litecoins desea transferir ?"<<endl;
					cin>>cantidadLitecoins;
					while (cantidadLitecoins < 1) {
						cout <<"........................................................................................................................................................................................" << endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<< "                                                       ERROR: no se aceptan numero negativos"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout <<"........................................................................................................................................................................................" << endl;
						cout<< "                                                           ¿ cuantas litecoins desea transferir ?"<<endl;
						cout <<"........................................................................................................................................................................................" << endl;
						cin>>cantidadLitecoins;
					}
					system("cls");
					
					if ((((saldoGeneralLPS/24.78)/20) - 1) < cantidadLitecoins ) {
						
						cout<<"                                                    ........................................................."<<endl;
						cout<<"                                                    .         Usted no cuenta con Litecoins suficientes     ."<<endl;
						cout<<"                                                    .            para continuar con su transferencia        ."<<endl;
						cout<<"                                                    ........................................................."<<endl <<endl<<endl;
						system("pause");
						system("cls");
						
					} else {
						
						saldoGeneralLPS = saldoGeneralLPS -  cantidadLitecoins*littecoin    ;
						
						acumBeneficiarioLit3    = acumBeneficiarioLit3   + cantidadLitecoins;
						acumLitecoins = acumLitecoins + (cantidadLitecoins*2);
						
						cout<<"                                                      ...................................................."<<endl;
						cout<<"                                                      . Su criptomonedas han sido transferidas con exito ."<<endl<<endl;
						cout<<"                                                      ...................................................."<<endl<<endl;
						cout<<"                                                      ...................................................."<<endl;
						cout<<"                                                      .  Criptomonedas restantes: "<<endl;
						cout<< "                                                     .  Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/20)<<endl;
						cout<< "                                                     .  Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/20) - 1)<<endl<<endl;
						cout<<"                                                      ...................................................."<<endl<<endl<<endl;
						cout<<"                                                      ...................................................."<<endl;
						cout<<"                                                      .  cantidad de litcoins  "<<acumBeneficiarioLit3  <<endl;
						cout<<"                                                      .  Puntos    "<<acumLitecoins<<endl;
						cout<<"                                                      ...................................................."<<endl;
						
						
						system("pause");
						system("cls");
					}
					
					
				}
				
				
				
				
				
				
				
				break;
			case 2:  
				
				
				if ((((saldoGeneralLPS/24.78)/50) - 1 ) < 1){
					cout<<"                                                       ........................................................."<<endl;
					cout<<"                                                       .         Usted no cuenta con litecoins suficientes     ."<<endl;
					cout<<"                                                       .            para continuar con su transferencia        ."<<endl;
					cout<<"                                                       ........................................................."<<endl <<endl<<endl;
					
					system("pause");
					system("cls");
					
					
				} else {
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
					cout<< "                                                             ----------------- ETHEREUM ---------------   "<<endl<<endl<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< "                                                             Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/50)<<endl;
					cout<< "                                                             Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/50) -1)<<endl<<endl;
					cout <<"........................................................................................................................................................................................" <<endl<<endl;
					cout<< "                                                                ¿ Cuantas Ethereum desea transferir ?"<<endl;
					cin>>CantidadEtherum ;
					while (CantidadEtherum  < 1) {
						cout <<"........................................................................................................................................................................................" << endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<< "                                                       ERROR: no se aceptan numero negativos"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout <<"........................................................................................................................................................................................" << endl;
						cout<< "                                                             ¿ Cuantas Ethereum  desea transferir ?"<<endl;
						cout <<"........................................................................................................................................................................................" << endl;

						cin>>CantidadEtherum ;
					}
					system("cls");
					
					if ((((saldoGeneralLPS/24.78)/50) - 1) < CantidadEtherum  ) {
						
						cout<<"                                                    ........................................................."<<endl;
						cout<<"                                                    .         Usted no cuenta con Ethereum suficientes     ."<<endl;
						cout<<"                                                    .            para continuar con su transferencia        ."<<endl;
						cout<<"                                                    ........................................................."<<endl <<endl<<endl;
						
						system("pause");
						system("cls");
						
					} else {
						
						saldoGeneralLPS = (saldoGeneralLPS -  (CantidadEtherum *ethereum ) )   ;
						
						acumBeneficiarioEthe3      = acumBeneficiarioEthe3     + CantidadEtherum ;
						acumEtherums = acumEtherums + (CantidadEtherum *5);
						
						cout<<"                                                      ...................................................."<<endl;
						cout<<"                                                      . Su criptomonedas han sido transferidas con exito ."<<endl<<endl;
						cout<<"                                                      ...................................................."<<endl<<endl;
						cout<<"                                                      ...................................................."<<endl;
						cout<<"                                                      .  Criptomonedas restantes: "<<endl;
						cout<< "                                                     .  Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/50)<<endl;
						cout<< "                                                     .  Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/50) - 1)<<endl<<endl;
						cout<<"                                                      ...................................................."<<endl<<endl<<endl;
						cout<<"                                                      ...................................................."<<endl;
						cout<<"                                                      .  Cantidad de etherums  "<<acumBeneficiarioEthe3  <<endl;
						cout<<"                                                      .  Puntos    "<<acumEtherums<<endl;
						cout<<"                                                      ...................................................."<<endl;
						
						
						system("pause");
						system("cls");
					}
					
					
				}
				
				break;
			case 3:
				
				if ((((saldoGeneralLPS/24.78)/100) - 1 ) < 1){
					cout<<"                                                        ........................................................."<<endl;
					cout<<"                                                        .         Usted no cuenta con Litecoins suficientes     ."<<endl;
					cout<<"                                                        .            para continuar con su transferencia        ."<<endl;
					cout<<"                                                        ........................................................."<<endl <<endl<<endl;
					
					system("pause");
					system("cls");
					
					
				} else {
					SetConsoleTextAttribute(hConsole, background | FOREGROUND_BLUE);
					cout<< "                                                             ----------------- BITCOIN ---------------   "<<endl<<endl<<endl;
					SetConsoleTextAttribute(hConsole, 112);
					cout <<"........................................................................................................................................................................................" << endl;
					cout<< ".                                                            Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/100)<<endl;
					cout<< ".                                                            Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/100) -1)<<endl<<endl;
					cout <<"........................................................................................................................................................................................" <<endl<<endl;
					cout<< "                                                                   ¿ Cuantas Bitcoins desea transferir ?"<<endl;
					
					cin>>cantidadBitcoins  ;
					while (cantidadBitcoins   < 1) {
						cout <<"........................................................................................................................................................................................" << endl;
						SetConsoleTextAttribute(hConsole, background | FOREGROUND_RED);
						cout<< "                                                       ERROR: no se aceptan numero negativos"<<endl;
						SetConsoleTextAttribute(hConsole, 112);
						cout <<"........................................................................................................................................................................................" << endl;
						cout<< "                                                               ¿ Cuantas Bitcoins desea transferir ?"<<endl;
						cout <<"........................................................................................................................................................................................" << endl;   
						cin>>cantidadBitcoins  ;
					}
					system("cls");
					
					if ((((saldoGeneralLPS/24.78)/100) - 1) < cantidadBitcoins   ) {
						
						cout<<"                                                     ........................................................."<<endl;
						cout<<"                                                     .         Usted no cuenta con Bitcoins suficientes     ."<<endl;
						cout<<"                                                     .            para continuar con su transferencia        ."<<endl;
						cout<<"                                                     ........................................................."<<endl <<endl<<endl;
						
						system("pause");
						system("cls");
						
					} else {
						
						saldoGeneralLPS = saldoGeneralLPS -  cantidadBitcoins  *ethereum     ;
						
						acumBeneficiarioBit3    = acumBeneficiarioBit3  + cantidadBitcoins  ;
						acumBitcoins   = acumBitcoins  + (cantidadBitcoins *10);
						
						cout<<"                                                     ....................................................."<<endl;
						cout<<"                                                     .  Su criptomonedas han sido transferidas con exito ."<<endl<<endl;
						cout<<"                                                     ....................................................."<<endl<<endl;
						cout<<"                                                     ....................................................."<<endl;
						cout<<"                                                     .  Criptomonedas restantes: "<<endl;
						cout<<"                                                     .  Cantidad Total:       "<<trunc((saldoGeneralLPS/24.78)/100)<<endl;
						cout<<"                                                     .  Cantidad Disponible:  "<<trunc(((saldoGeneralLPS/24.78)/100) - 1)<<endl<<endl;
						cout<<"                                                     ...................................................."<<endl<<endl<<endl;
						cout<<"                                                     ....................................................."<<endl;
						cout<<"                                                     . cantidad de etherums  "<<acumBeneficiarioBit2<<endl;
						cout<<"                                                     . Puntos    "<<acumBitcoins <<endl;
						cout<<"                                                     ....................................................."<<endl;
						
						
						system("pause");
						system("cls");
					}
					
					
				}
				
				
				break;
			case 4:
				cout <<"........................................................................................................................................................................................" << endl;
				cout<<"                                                                        REGRESANDO A MENU PRINCIPAL.......  "<<endl;
				
				break;	
				
			default:
				cout <<"........................................................................................................................................................................................" << endl;
				cout<<"                                                                 El valor que usted ingreso es incorrecto"<<endl;
				cout <<"........................................................................................................................................................................................" << endl;
			};
			
			
			
			break;
			
		case 4:
			cout <<"........................................................................................................................................................................................" << endl;
			cout<<                                                                            "REGRESANDO AL MENU PRINCIPAL........... ";
			Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
			system("cls");
			
			break;
			 
		default:
			cout <<"........................................................................................................................................................................................" << endl;
			cout<<"                                                                     El valor que usted ingreso es incorrecto"<<endl;
			cout <<"........................................................................................................................................................................................" << endl;
			
		};
		
		
		
	} while (menu != 4 );
}
	
	
	
	void menuCanjePuntos() {
		
		do {
			
			
			cout<<"............................................ NOTA ................................................"<<endl;
			cout<<".        Canje de puntos            . Permite selecionar una de nuestras promociones de acuerdo  ."<<endl;
			cout<<".                                   . con los puntos acumulados que obtenga en cada transferencia."<<endl;
			cout<<".................................................................................................."<<endl;
			cout<<""<<endl<<endl<<endl;
			system("pause");
			system("cls");
			
			
			
			cout<<"                      ............................. INFORMACION ............................."<<endl;
			cout<<"                      .          OBSERVACION             .         PUNTOS ACUMULADOS        ."<<endl;
			cout<<"                      ......................................................................."<<endl;
			cout<<"                      .   Por cada BTC transeferido.     .         Acumulas 10 puntos.      ."<<endl;
			cout<<"                      ......................................................................."<<endl;
			cout<<"                      .   Por cada ETH transeferido.     .         Acumulas 5 puntos.       ."<<endl;
			cout<<"                      ......................................................................."<<endl;
			cout<<"                      .   Por cada LTC transeferido.     .         Acumulas 2 puntos.      ."<<endl;
			cout<<"                      ......................................................................."<<endl;
			cout<<""<<endl<<endl<<endl;
			system("pause");
			system("cls");
			
			
			
			cout<<"                                ......................................."<<endl;
			cout<<"                                . ¿DESEA CONTINUAR CON SU SELECCION ? ."<<endl;
			cout<<"                                .              1. SI                  ."<<endl;
			cout<<"                                .              2. NO                  ."<<endl;
			cout<<"                                ......................................."<<endl;
			cin>>shortMenu;
			system("cls");
			while (shortMenu < 1 || shortMenu > 2) {
				cout<<"                          ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
				cout<<"                                ......................................."<<endl;
				cout<<"                                . ¿DESEA CONTINUAR CON SU SELECCION ? ."<<endl;
				cout<<"                                .              1. SI                  ."<<endl;
				cout<<"                                .              2. NO                  ."<<endl;
				cout<<"                                ......................................."<<endl;
				cin>>shortMenu;
				system("cls");
			}
			
			p = p + 1; //Se utiliza para que los calculos solo se hagan una vez al entrar en el bloque
			switch (shortMenu) {
			case 1:
				
				
				cout<<"                 ................... PUNTOS ACUMULADOS ..................."<<endl;
				cout<<"                 . PUNTOS DE LITTE COIN        . "<< acumLitecoins<<endl;
				cout<<"                 ........................................................."<<endl;
				cout<<"                 . PUNTOS DE BITCOIN           . "<< acumBitcoins <<endl;
				cout<<"                 ........................................................."<<endl;
				cout<<"                 . PUNTOS DE ETHEREUM          . "<< acumEtherums <<endl;
				cout<<"                 ........................................................."<<endl;
				
				if (p == 1) {
					acuPuntosTotales = ((acumLitecoins) + (acumBitcoins) + (acumEtherums) ); //Sumamos todos los puntos
				} else {
					acuPuntosTotales == acuPuntosTotales;
				}
				
				
				cout<<"                 . SUS PUNTOS TOTALES SON: "<< acuPuntosTotales <<endl;
				cout<<"                 ........................................................."<<endl;
				cout<<""<<endl<<endl<<endl;
				system("pause");
				system("cls");
				
				
				
				cout<<"          ........................ AVISO ........................"<<endl;
				cout<<"          . Sus puntos totales son: "<< acuPuntosTotales << "   ."<<endl;
				cout<<"          ......................................................."<<endl;
				cout<<""<<endl<<endl;
				
				cout<<"         ........................................................."<<endl;
				cout<<"         .  N  .           OPCION       .      VALOR DE PUNTOS   ."<<endl;
				cout<<"         ........................................................."<<endl;
				cout<<"         .  1  .      Viaje a Roatan    .        100 Puntos      ."<<endl;
				cout<<"         ........................................................."<<endl;
				cout<<"         .  2  .     Sorteo de 1 casa   . 40 Puntos ( un boleto) ."<<endl;
				cout<<"         ........................................................."<<endl;
				cout<<"         .  3  .     Sorteo 1 carro     . 30 Puntos ( un boleto) ."<<endl;
				cout<<"         ........................................................."<<endl;
				cout<<"         .  4  .                  Regresar                       ."<<endl;
				cout<<"         ........................................................."<<endl;
				cout<<""<<endl<<endl;
				
				cout<<"¿EN QUE OPCION DESEA CANJEAR SUS PUNTOS?"<<endl;
				cin>>opcionPuntos;
				system("cls");
				while (opcionPuntos < 1 || opcionPuntos > 4) {
					cout<<"                          ERROR: El numero que usted ingreso no esta en el rango (1-3)"<<endl<<endl;
					cout<<"         ........................................................."<<endl;
					cout<<"         .  N  .           OPCION       .      VALOR DE PUNTOS   ."<<endl;
					cout<<"         ........................................................."<<endl;
					cout<<"         .  1  .      Viaje a Roatan    .        100 Puntos      ."<<endl;
					cout<<"         ........................................................."<<endl;
					cout<<"         .  2  .     Sorteo de 1 casa   . 40 Puntos ( un boleto) ."<<endl;
					cout<<"         ........................................................."<<endl;
					cout<<"         .  3  .     Sorteo 1 carro     . 30 Puntos ( un boleto) ."<<endl;
					cout<<"         ........................................................."<<endl;
					cout<<""<<endl<<endl;
					
					cout<<"¿EN QUE OPCION DESEA CANJEAR SUS PUNTOS?"<<endl;
					cin>>opcionPuntos;
					system("cls");
				}
				
				switch (opcionPuntos) {
				case 1:
					//Viaje a Roatan
					
					
					cout<<"                     HA SELECCIONADO VIAJE A ROATAN     "<<endl<<endl;
					cout<<"           Verificando si usted califica..."<<endl;
					cout<<"           Este proceso podria tardar algunos segundos"<<endl;
					Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
					system("cls");
					
					
					
					if (acuPuntosTotales >= 100) {
						cout<<"                    ¡Felicidades! Usted aplica a esta promocion"<<endl<<endl;
						system("pause");
						system("cls");
						
						cout<<"                          ........................."<<endl;
						cout<<"                          .   ¿Desea canjearlo?   ."<<endl;
						cout<<"                          . 1-Si                  ."<<endl;
						cout<<"                          . 2-No                  ."<<endl;
						cout<<"                          ........................."<<endl;
						cin>>opcionPuntos;
						system("cls");
						
						while (opcionPuntos < 1 || opcionPuntos > 2 ) {
							cout<<"    ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
							cout<<"            ¿Desea canjearlo?"<<endl;
							cout<<"1-Si"<<endl;
							cout<<"2-No"<<endl;
							cin>>opcionPuntos;
							system("cls");
						}
						switch (opcionPuntos) {
						case 1:
							
							cout<<"                 ............... EN HORA BUENA ................"<<endl;
							cout<<"                 . ¡Felicidades! a obtenido un viaje a Roatan ."<<endl;
							cout<<"                 .............................................."<<endl<<endl;
							
							acuPuntosTotales = (acuPuntosTotales - 100);
							
							system("pause");
							system("cls");
							shortMenu = 2; // Salir del bucle do-while después de canjear
							
							break;
						case 2:
							cout<<""<<endl<<endl;
							cout<< "REGRESANDO AL MENU PRINCIPAL........... ";
							Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
							system("cls");
							shortMenu = 2; // Salir del bucle do-while después de canjear
							break;
						default:
							cout<<" ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
						};
						
						
						
					} else {
						cout<<" ...................................................... "<<endl;
						cout<<" . LAMENTAMOS INFORMARLE QUE NO CUENTA CON LOS PUNTOS . "<<endl;
						cout<<" . SUFICIENTES PARA ESTA PROMOCION :(                 . "<<endl;
						cout<<" ...................................................... "<<endl;
						cout<<""<<endl<<endl;
						system("pause");
						system("cls");
						shortMenu = 2; // Salir del bucle do-while después de canjear
					}
					
					break;
				case 2:
					
					//Sorteo casa
					
					
					cout<<"                     HA SELECCIONADO SORTEO DE UNA CASA     "<<endl<<endl;
					cout<<"           Verificando si usted califica..."<<endl;
					cout<<"           Este proceso podria tardar algunos segundos"<<endl;
					Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
					system("cls");
					
					
					
					if (acuPuntosTotales >= 40) {
						cout<<"                    ¡Felicidades! Usted aplica a esta promocion"<<endl<<endl;
						system("pause");
						system("cls");
						
						cout<<"                          ........................."<<endl;
						cout<<"                          .   ¿Desea canjearlo?   ."<<endl;
						cout<<"                          . 1-Si                  ."<<endl;
						cout<<"                          . 2-No                  ."<<endl;
						cout<<"                          ........................."<<endl;
						cin>>opcionPuntos;
						system("cls");
						
						while (opcionPuntos < 1 || opcionPuntos > 2 ) {
							cout<<"    ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
							cout<<"            ¿Desea canjearlo?"<<endl;
							cout<<"1-Si"<<endl;
							cout<<"2-No"<<endl;
							cin>>opcionPuntos;
							system("cls");
						}
						switch (opcionPuntos) {
						case 1:
							
							cout<<"                 .......................... EN HORA BUENA ........................"<<endl;
							cout<<"                 . ¡Felicidades! a obtenido un boleto para el sorteo de una casa ."<<endl;
							cout<<"                 ................................................................."<<endl<<endl;
							
							acuPuntosTotales = (acuPuntosTotales - 40);
							
							system("pause");
							system("cls");
							shortMenu = 2; // Salir del bucle do-while después de canjear
							
							break;
						case 2:
							cout<<""<<endl<<endl;
							cout<< "REGRESANDO AL MENU PRINCIPAL........... ";
							Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
							system("cls");
							shortMenu = 2; // Salir del bucle do-while después de canjear
							break;
						default:
							cout<<" ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
						};
						
						
						
					} else {
						cout<<" ...................................................... "<<endl;
						cout<<" . LAMENTAMOS INFORMARLE QUE NO CUENTA CON LOS PUNTOS . "<<endl;
						cout<<" . SUFICIENTES PARA ESTA PROMOCION :(                 . "<<endl;
						cout<<" ...................................................... "<<endl;
						cout<<""<<endl<<endl;
						system("pause");
						system("cls");
						shortMenu = 2; // Salir del bucle do-while después de canjear
					}
					
					
					break;
				case 3:
					//Sorteo carro
					
					
					cout<<"                     HA SELECCIONADO SORTEO DE UN CARRO     "<<endl<<endl;
					cout<<"           Verificando si usted califica..."<<endl;
					cout<<"           Este proceso podria tardar algunos segundos"<<endl;
					Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
					system("cls");
					
					
					
					if (acuPuntosTotales >= 30) {
						cout<<"                    ¡Felicidades! Usted aplica a esta promocion"<<endl<<endl;
						system("pause");
						system("cls");
						
						cout<<"                          ........................."<<endl;
						cout<<"                          .   ¿Desea canjearlo?   ."<<endl;
						cout<<"                          . 1-Si                  ."<<endl;
						cout<<"                          . 2-No                  ."<<endl;
						cout<<"                          ........................."<<endl;
						cin>>opcionPuntos;
						system("cls");
						
						while (opcionPuntos < 1 || opcionPuntos > 2 ) {
							cout<<"    ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl<<endl;
							cout<<"            ¿Desea canjearlo?"<<endl;
							cout<<"1-Si"<<endl;
							cout<<"2-No"<<endl;
							cin>>opcionPuntos;
							system("cls");
						}
						switch (opcionPuntos) {
						case 1:
							
							cout<<"                 .......................... EN HORA BUENA ........................"<<endl;
							cout<<"                 . ¡Felicidades! a obtenido un boleto para el sorteo de una casa ."<<endl;
							cout<<"                 ................................................................."<<endl<<endl;
							
							acuPuntosTotales = (acuPuntosTotales - 30);
							
							system("pause");
							system("cls");
							shortMenu = 2; // Salir del bucle do-while después de canjear
							
							break;
						case 2:
							cout<<""<<endl<<endl;
							cout<< "REGRESANDO AL MENU PRINCIPAL........... ";
							Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
							system("cls");
							shortMenu = 2; // Salir del bucle do-while después de canjear
							break;
						default:
							cout<<" ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
						};
						
						
						
					} else {
						cout<<" ...................................................... "<<endl;
						cout<<" . LAMENTAMOS INFORMARLE QUE NO CUENTA CON LOS PUNTOS . "<<endl;
						cout<<" . SUFICIENTES PARA ESTA PROMOCION :(                 . "<<endl;
						cout<<" ...................................................... "<<endl;
						cout<<""<<endl<<endl;
						system("pause");
						system("cls");
						shortMenu = 2; // Salir del bucle do-while después de canjear
					}
					
					break;
					
				case 4:
					//Regresar
					cout<<""<<endl<<endl;
					cout<< "REGRESANDO AL MENU PRINCIPAL........... ";
					Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
					system("cls");
					shortMenu = 2; // Salir del bucle do-while después de canjear
					break;	
					
				default:
					cout<<" ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
				};
				
				
				break;
			case 2:
				//Regresar
				cout<<""<<endl;
				cout<<"     REGRESANDO......................."<<endl;
				Sleep(2000);  // Pausa la ejecución por 2000 milisegundos (2 segundos)
				system("cls");
				
				break;
			default:
				cout<<" ERROR: El numero que usted ingreso no esta en el rango (1-2)"<<endl;
			};
			
			
		} while (shortMenu != 2);
		
	}
	
