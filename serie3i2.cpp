//Juan Pablo Salazar Barrios 0909-20-10990 
//Programacion I Semestre III Ciclo 2021 
//Parcial 2 Serie III Inciso 2 

//Declaración de Librerias a utilizar
#include <iostream> 
#include <conio.h> 

using namespace std; 

//Declaración de Variables
int vector_a[3], vector_b[3], vector_c[3]; //Vectores 
float promedio_c; //Variable de promedio 
int pntro, suma_c; //Variable de punteros y suma

//Funcion para ingresar el vector A
void in_datos_a(){ 
    for ( pntro = 0; pntro <= 2; pntro++ ){ //Movimientos en cada espacio del vector 
        cout << "Ingrese el dato " << pntro + 1 << " del Vector A: ";  
        cin >> vector_a[pntro]; //Ingreso de Datos 
    } 
} 

//Funcion para ingresar el vector B
void in_datos_b(){ 
    for ( pntro = 0; pntro <= 2; pntro++ ){ //Movimientos en cada espacio del vector 
        cout << "Ingrese el dato " << pntro + 1 << " del Vector B: ";  
        cin >> vector_b[pntro]; //Ingreso de Datos 
    } 
} 

//Funcion para restar el vector A y B
void resta_v(){ 
    for ( pntro = 0; pntro <= 2; pntro++ ){ //Movimientos en cada espacio del vector 
        vector_c[pntro] = vector_a[pntro] - vector_b[pntro]; 
    } 
} 

//Funcion para promediar el vector C 
void prom_vec_c(){ 
    for ( pntro = 0; pntro <= 2; pntro++ ){ //Movimientos en cada espacio del vector 
        suma_c += vector_c[pntro]; 
    } 
    promedio_c = suma_c / 3; 
} 

//Funcion principal de C++
int main(){	 
    cout << "Bienvenido al programa operaciones de vectores" << endl << endl; 
    in_datos_a(); //Funcion de ingreso de datos al vector A 
    in_datos_b(); //Funcion de ingreso de datos al vector B 
    resta_v(); //Funcion de resta del vector C 
    prom_vec_c(); //Funcion para promediar el vector C	 
    cout << endl; 
    //Imprimimos en pantalla 
    cout << "   Vector A" << endl; 
    cout << "  " << vector_a [0] << "  " << vector_a [1] << "  " << vector_a [2] << endl << endl; 
    cout << "   Vector B" << endl; 
    cout << "  " << vector_b [0] << "  " << vector_b [1] << "  " << vector_b [2] << endl << endl; 
    cout << "   Vector C" << endl; 
    cout << "  " << vector_c [0] << "  " << vector_c [1] << "  " << vector_c [2] << endl << endl; 
    cout << "\nPromedio del Vector C = " << promedio_c; 
    getch(); //Detenemos la ejecucion del programa
} 