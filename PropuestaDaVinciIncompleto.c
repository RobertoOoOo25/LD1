#include <iostream>

const int CONSTANTE = 16;

//aAaAaaA prueba actualizar en git

using namespace std;

void leer_datos(int *regresa_n, int combinacion_num[], char combinacion_palabra[]);

void ordenar(int n, int combinacion_num[], char combinacion_palabra[]);

void mostrar(int n, int combinacion_num[], char combinacion_palabra[]);


int main()

{

    int n;
	
    int combinacion_num[CONSTANTE];
	
    char combinacion_palabra[CONSTANTE];
	

    leer_datos(&n, combinacion_num, combinacion_palabra);
	
    ordenar(n, combinacion_num, combinacion_palabra);
	
    mostrar(n, combinacion_num, combinacion_palabra);
	
}

void leer_datos(int *regresa_n, int combinacion_num[], char combinacion_palabra[] {

	cout << "Ingresar cantidad de Fibonaccis a leer: ";
	
    cin >> *regresa_n;
	
    for (int contador = 0; contador < *regresa_n; contador++) {
	
        cin >> combinacion_num[contador];
		
    }
	
    cin >> combinacion_palabra;

}

void ordenar(int n, int combinacion_num[], char combinacion_palabra[]) {



}

void mostrar(int n, int combinacion_num[], char combinacion_palabra[]) {



}
