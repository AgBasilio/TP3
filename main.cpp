#include <iostream>
#include <stdlib.h>

using namespace std;

/* TP3
*  Agustin Basilio
*  30/04/2015
*/
int main ()
{
	int cantCorrectas = 0;
	char resp1, resp2, resp3, resp4, resp5;

	cout<<"Juego de preguntas"<<endl<<endl;
	cout<<"Responda escribiendo la letra de la respuesta correcta"<<endl;
	cout<<"Cada respuesta correcta suma 10 puntos"<<endl<<endl;

	cout<<"Preguta 1: Cual es el cuarto planeta del sistema solar, contando desde el sol?"<<endl<<endl;
	cout<<"a) Rta: Marte"<<endl;
	cout<<"b) Rta: Venus"<<endl;
	cout<<"c) Rta: Jupiter"<<endl;
	cout<<"d) Rta: Pluton"<<endl;
	cout<<"e) Rta: Neptuno"<<endl;
    cout<<endl;

    cout<<"Elija una letra: ";

	cin>>resp1;
    system("cls");
	cout<<endl;

	if (resp1 == 'a' || resp1 == 'A')
		cantCorrectas++;
    else
        cout<<"La respuesta correcta era 'a'"<<endl<<endl<<endl;

	cout<<"Preguta 2: Cual es el equipo argentino con mas copas internacionales de futbol?"<<endl<<endl;
    cout<<"a) Rta: Real Madrid"<<endl;
	cout<<"b) Rta: Racing"<<endl;
	cout<<"c) Rta: Boca"<<endl;
	cout<<"d) Rta: Independiente"<<endl;
	cout<<"e) Rta: River"<<endl;
	cout<<endl;
	cout<<"Elija una letra: ";

	cin>>resp2;
	system("cls");
	cout<<endl;

	if (resp2 == 'c' || resp2 == 'C')
		cantCorrectas++;
    else
        cout<<"La respuesta correcta era 'c'"<<endl<<endl<<endl;

    cout<<"Preguta 3: Cual es la capiral de la Prov. de Bs As?"<<endl<<endl;
	cout<<"a) Rta: Buenos Aires"<<endl;
	cout<<"b) Rta: Cordoba"<<endl;
	cout<<"c) Rta: Neuquen"<<endl;
	cout<<"d) Rta: La Plata"<<endl;
	cout<<"e) Rta: San Luis"<<endl;
    cout<<endl;
    cout<<"Elija una letra: ";

	cin>>resp3;
    system("cls");
	cout<<endl;

	if (resp3 == 'd' || resp3 == 'D')
		cantCorrectas++;
    else
        cout<<"La respuesta correcta era 'd'"<<endl<<endl<<endl;

    cout<<"Preguta 4: Los miembros permanentes del consejo de seguridad de la ONU son:  Francia, Federacion de Rusia, el Reino Unido de Gran Bretaña e Irlanda del Norte, los Estados Unidos de América y...?"<<endl<<endl;
	cout<<"a) Rta: Australia"<<endl;
	cout<<"b) Rta: Corea del Sur"<<endl;
	cout<<"c) Rta: Japon"<<endl;
	cout<<"d) Rta: Corea del Norte"<<endl;
	cout<<"e) Rta: China"<<endl;
    cout<<endl;
    cout<<"Elija una letra: ";

	cin>>resp4;
    system("cls");
	cout<<endl;

	if (resp4 == 'e' || resp4 == 'E')
		cantCorrectas++;
    else
        cout<<"La respuesta correcta era 'e'"<<endl<<endl<<endl;

    cout<<"Preguta 5: A cual de estos investigadores se le atribuye el descubrimiento de la Penicilina?"<<endl<<endl;
	cout<<"a) Rta: Fleming"<<endl;
	cout<<"b) Rta: Koch"<<endl;
	cout<<"c) Rta: Jenner"<<endl;
	cout<<"d) Rta: Pasteur"<<endl;
	cout<<"e) Rta: Houssay"<<endl;
    cout<<endl;
    cout<<"Elija una letra: ";

	cin>>resp5;
    system("cls");
	cout<<endl;

	if (resp5 == 'a' || resp5 == 'A')
		cantCorrectas++;
    else
        cout<<"La respuesta correcta era 'a'"<<endl<<endl<<endl;

	cout<<"El puntaje por sus "<< cantCorrectas <<" preguntas correctas es: ";
	cout<< (cantCorrectas*10)<<"."<<endl;

	system("pause");


	return 0;

}
