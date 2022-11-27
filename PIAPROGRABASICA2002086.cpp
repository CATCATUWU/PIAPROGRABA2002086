#include <iostream>
#include <math.h>
#include <string.h>
#include <string>
#include <conio.h>
#include <stdio.h>

using namespace std;
string nombre[5];
int numeros[5];
char sep;
void imprimir(char separador, string nombre);
void leer();

struct michipop
{
	string nomb, clasif, genero, carac, descrip, consola;
	int codicom, codigo, fecha;
	float iva = 0.16, pretot, preuni;
	juegos[3];
};
int main() {
	
	michipop tienda[3];
	int opc, busq;

	do {

		cout<<("\t /////****-Bienvenido a MichiPop-****/////\n")<<endl;
		cout<<("\t ****-seleccione una opcion.-****\n")<<endl;
		cout << (" 1.-AGREGAR JUEGO\n 2.- MODIFICAR JUEGO\n 3.- ELIMINAR JUEGO\n")<<endl;
		cout<<("\t /////////////////////////////////\n")<<endl;
		scanf_s("%d", &opc);
		



		switch (opc)
		{
		case 1:
			for (int i = 0; i < 3; i++)
			{
				tienda[i].codicom = 3029845 + i;
				cout<<("NO. DE COMPRA; %d \n", tienda[i].codicom)<<endl;
				int sal = 1;
				do
				{
					cout<<("ingrese el codigo del juego: \n")<<endl;
					scanf_s("%d", &tienda[i].codigo);
					if (tienda[i].codigo == tienda[i - 1].codigo || tienda[i].codigo == tienda[i - 2].codigo)
					{
						cout<<("El codigo del juego ya existe, ingrese otro: \n")<<endl;
					}
					else
					{
						sal = 2;
					}
				} while (sal == 1);

				cout<<("ingrese el anio del juego: \n")<<endl;
				scanf_s("%d", &tienda[i].fecha);
				cout<<("ingrese el nombre del juego:\n")<<endl;
				cin.ignore();
				getline(cin, tienda[i].nomb);
				cout<<("ingrese la clasificacion del juego: \n")<<endl;
				cin.ignore();
				getline(cin, tienda[i].clasif);
				cout<<("ingrese el genero del juego: \n")<<endl;
				cin.ignore();
				getline(cin, tienda[i].genero);
				cout<<("ingrese las caracteristicas del juego: \n")<<endl;
				cin.ignore();
				getline(cin, tienda[i].carac);
				cout<<("ingrse la descripcion del juego: \n")<<endl;
				cin.ignore();
				getline(cin, tienda[i].descrip);
				cout<<("ingrese la consola del juego: \n")<<endl;
				cin.ignore();
				getline(cin, tienda[i].consola);
				cout<<("ingrese el precio del juego: \n")<<endl;
				scanf_s("%f", &tienda[i].preuni);
				cout<<("su impuesto de compra es de: %f \n", tienda[i].iva)<<endl;
				tienda[i].pretot = tienda[i].preuni * 1.16;
				cout<<("el precio total de su compra es de: %f\n", tienda[i].pretot)<<endl;
			}
			break;
		case 2:
			cout<<("\t /////LEYENDO... NO SALGA!! /////\n")<<endl;
			system("pause");
			break;

		case 3: cout<<("ingrese el codigo de juego que busca eliminar: \n")<<endl;
			scanf_s("%d", &busq);

			for (int i = 0; i < 3; i++)
			{
				if (busq == tienda[i].codigo)
				{
					tienda[i].codigo = 0;
				}
			}
			break;

		case 4:
			int opc2;
			cout<<(" ver los articulos vigentes: ?n")<<endl;
			cout<<("1.-codigo de juego\n 2.-lista vigente \n")<<endl;
			scanf_s("%d, $busq");

			for (int i = 0; i < 3; i++)
			{


				if (busq == tienda[i].codigo)
				{
					cout << ("NO. DE COMPRA: %d \n", tienda[i].codicom)<<endl;
					cout<<("codigo de juego: %d \n", tienda[i].codigo)<<endl;
					cout<<("fecha de lanzamiento : %d \n", tienda[i].fecha)<<endl;
					cout<<("nombre del juego: %s \n", tienda[i].nomb.c_str())<<endl;
					cout<<("clasificacion del juego: %s \n", tienda[i].clasif.c_str())<<endl;
					cout<<("genero del juego: %s \n", tienda[i].genero.c_str())<<endl;
					cout<<("caracteristicas del juego: %s \n", tienda[i].carac.c_str())<<endl;
					cout<<("descripcion del juego: %s \n", tienda[i].descrip.c_str())<<endl;
					cout<<("consola del juego: %s \n", tienda[i].consola.c_str())<<endl;
					cout<<("precio del juego: %s \n", tienda[i].preuni)<<endl;
					cout<<("precio total del juego: %f\n", tienda[i].pretot)<<endl;
					

				}
			}
			break;

		case 5:

			cout<<("\t /////***+-regresando al menu-****/////\n")<<endl;
			system("pause");
			system("cls");

			break;
		case 6:
			cout<<("\t/////-*****GRACIAS POR LA COMPRA, VUELVE PRONTO A MICHIPOP-****/////\n")<<endl;
			break;
		default:
			cout<<("\t /////****-ingrese una opcion correcta-****/////\n")<<endl;
			break;

		}
		
		system("pause");
	}
	while (opc != 6);
	ifstream archivo_entrada("archivo.txt");
	string linea = "1234";

	if (archivo_entrada.fail())
	{
		cout << "EL ARCHIVO NO SE ABRIO CORRECTAMENTE" << endl;

	}

	int i = 0;
	while (!getline(archivo_entrada, linea).eof())
	{
		juegos[i].id = stoi(linea);
		getline(archivo_entrada, linea);
		juegos[i].nombre = linea;
		i++;
		
	}
	for (int j = 0; !getline(archivo_entrada, linea).eof(); j++)
	{
		for (int j = 0; !getline(archivo_entrada, linea).eof(); j++)
	}
	archivo_entrada.clear();
	cout << "CARGA DE DATOS TERMINADA " << endl;
	archivo_entrada.close();

}
