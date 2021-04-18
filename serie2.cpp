// Juan Pablo Salazar Barrios 0909-20-10990
// Proramacion I Semestre III Ciclo 2021
// Examen Parcial 2 Serie II
 
//Declaración de Librerias
#include <iostream>
#include <conio.h>
 
using namespace std;
 
//Declaración de Variables y Vectores
int curso[2][5]; //[Vector][Estudiante]
int suma_cursos[2]; //[Vector del Curso]
float promedioCurso[2]; //[Suma de Vector de curso]
int c, e, op; // Variables de puntero y seleccion de opcion
 
// <<<< Funcion para ingresar cada curso >>>>
void in_datos(){
   for ( c = 0; c <= 1; c++ ){ //Saltos en cada curso 1 y 2
       for ( e = 0; e <= 4; e++ ){ //Saltos en cada estudiante 1-5
       cout << "Nota en la clase " << c + 1 << " del estudiante " << e + 1 << " = "; 
       cin >> curso[c][e]; // Ingreso de Datos
       }
   }
}
 
// <<<< Funcion que calcula el promedio de cada curso >>>>
void calculoProm(){
   for ( c = 0; c <= 1; c++ ){ //Saltos en cada curso 1 y 2
       for ( e = 0; e <= 4; e++ ){ //Saltos en cada estudiante 1-5
           suma_cursos[c] += curso[c][e]; // Suma de cada clase 
       }
       promedioCurso[c] = suma_cursos[c] / 5; //Promedio de cada clase
   }
}
 
// <<<< Funcion para mostrar en pantalla los cursos y sus promedios >>>>>>
void mostrarCursos(){
   cout << "Curso 1"; 
   for ( e = 0; e <= 4; e++ ){ //Saltos en cada estudiante 1-5 del primer curso
       cout << "     " << curso[0][e];
   }
   cout << "\nPromedio del curso:  " << promedioCurso[0]; //Mostrar promedio
   cout << "Curso 2";
   for ( e = 0; e <= 4; e++ ){ //Saltos en cada estudiante 1-5 del segundo curso
       cout << "     " << curso[1][e];
   }
   cout << "\nPromedio del curso:  " << promedioCurso[1]; //Mostrar promedio
}
 
// <<<<<<<<<<<<<<<<<<<< Funcion Principal C++ >>>>>>>>>>>>>>>>>>>>>
int main(){ 
do{
   // Mostrar en pantalla un menu de seleccion
   cout << "Bienvenidos a EduCursos" << endl;
   cout << "1. Ingresar datos de los cursos" << endl;
   cout << "2. Mostrar la primera nota del Curso 1" << endl;
   cout << "3. Mostrar la última nota del Curso 2" << endl;
   cout << "4. Calcular promedio de los cursos." << endl;
   cout << "5. Mostrar los dos Cursos, y el resultado Promedio de cada curso." << endl;
   cout << "6. Finalizar." << endl;
   cout << "Elegir una opcion --> "; cin >> op; //Ingrese la opcion a seleccionar
   cout << endl << endl;
 
   switch ( op ){ //Condicion para llevar una accion segun la seleccion
       case 1: 
           in_datos(); //Funcion de ingreso de datos
           system ("cls");  //Limpiamos pantalla
           break; //Finalizamos el switch
       case 2: 
           cout << "La primera nota del Vector 1 es: " << curso[0][0];  // Mostrar 
           getch(); //Detenemos la ejecucion del programa
           system ("cls"); //Limpiamos los datos en pantalla 
           break;
       case 3: 
           cout << "La ultima nota del Vector 2 es: " << curso[1][4]; 
           getch(); //Detenemos la ejecucion del programa
           system ("cls"); //Limpiamos los datos en pantalla
           break; //Finalizamos el switch
       case 4: 
           calculoProm();
           cout << "El calculo se ha Realizado Exitosamente" << endl;
           system ("pause"); //Detenemos la ejecucion del programa
           system ("cls"); //Limpiamos los datos en pantalla
           break; //Finalizamos el switch
       case 5: 
           mostrarCursos();
           system ("cls"); //Detenemos la ejecucion del programa
           break; //Finalizamos el switch
       case 6: break; //Finalizamos el switch
       default: 
       cout << "\nSelecciona una de las opciones del menu" << endl;
       system ("pause"); //Detenemos la ejecucion del programa
       system ("cls"); //Limpiamos los datos en pantalla
   }
} while ( op != 6 ); // Mientras op sea diferente a 6 continuar con el do While
 
} 