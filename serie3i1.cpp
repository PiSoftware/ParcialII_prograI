//Juan Pablo Salazar Barrios 0909-20-10990
//Programacion I Semestre III Ciclo 2021
//Parcial 2 Serie III Inciso 1
 
//Declaración de Librerias a utilizar
#include <iostream>
#include <conio.h>
 
using namespace std;
 
//Declaración de Variables
int alfa[3][3]; //Filas][Columnas]
int total[3]; //[Filas]
int f, c, op; //Variables de puntero y seleccion de opciones 
 
//Estructura para Ingreso de cada Curso
void in_datos(){
   for ( f = 0; f <= 2; f++ ){ //Movimientos en cada fila
       for ( c = 0; c <= 2; c++ ){ //Movimientos en cada columna
           cout << "Ingreso dato dentro de la fila " << f + 1 << " columna " << c + 1 << " = "; 
           cin >> alfa[f][c]; //Ingreso de Datos
       }
   }
}
 
//Estructura para sumar filas de la matriz ALFA
void s_total(){
   total[0] = alfa[0][0] + alfa[1][1] + alfa[2][2];
   total[1] = alfa[2][0] + alfa[2][1] + alfa[2][2];
   total[2] = alfa[2][0] + alfa[1][1] + alfa[0][2];
}
 
//Estructura para mostrar matriz ALFA y vector TOTAL
void mostrarMV(){
   cout << "Matriz ALFA" << endl;
   for ( f = 0; f <= 2; f++ ){ //Movimientos en cada fila
       cout << "  " << alfa[f][0] << "  " << alfa[f][1] << "  " << alfa[f][2] << endl;
   }
   cout << endl << endl << endl << endl << endl; //dejamos 5 espacios
   cout << "Vector TOTAL" << endl;
   cout << "  " << total[0] << "  " << total[1] << "  " << total[2] << endl;
}
 
//Estructura Principal C++
int main(){ 
   do{
       // Mostramos el menu principal en pantalla
       cout << "Bienvenido al programa matrices y vectores" << endl;
       cout << "1. Ingresar datos a la matriz ALFA" << endl;
       cout << "2. Calculo de sumas de filas de la matriz" << endl;
       cout << "3. Mostrar la matriz ALFA y el vector TOTAL" << endl;
       cout << "4. Finalizar" << endl;
       cout << "Elegir una opcion: "; cin >> op; //Seleccion de una opcion
       cout << endl << endl;
       switch ( op ){ //Condicionamos las acciones segun la opcion seleccionada
           case 1: 
               in_datos(); // Llamado de la funcion de ingreso de datos
               system ("cls");  //Limpiamos la pantalla
               break; //Finalizamos el switch
           case 2: 
               s_total(); //Funcion Sumar filas de la matriz ALFA
               cout << "Las operaciones se han realizado con exito" << endl;
               system ("pause"); //Detenemos la ejecucion del programa
               system ("cls"); //Limpiamos la pantalla 
               break;
           case 3: 
               mostrarMV(); //Funcion mostrar matriz ALFA y vector TOTAL
               getch(); //Detenemos la ejecucion del programa
               system ("cls"); //Limpiamos la pantalla
               break; //Finalizamos el switch
           case 4: break; //Finalizamos el switch
           default: 
               cout << "\nPor favor ingrese una opcion del menu" << endl;
               system ("pause"); //Detenemos la ejecucion del programa
               system ("cls"); //Limpiamos la pantalla
       }
   } while ( op != 4 ); // Mientras op sea diferente a 4 continuar con la ejecucion del do While