// Nombre:Jesús David Núñez Rodriguez
// Matricula:A01634928
// Objetivo: diseñar la  clase Reloj con sus métodos set's, get's, muestra, métodos constructores

// Reflexión: qué aprendiste, qué problemas tuviste?

#include <iostream>
using namespace std;

class Reloj{
  private:
  int hora, minutos;
  public:
  void setHora(int _hora);
  void setMinutos(int _minutos);
  int getHora();
  int getMinutos();
  void muestra();
	// Constructor sin parámetors - default
	// Deben llamarse igual que la clase - 😊
  Reloj();
	Reloj(int _hora, int _minutos);
};

Reloj::Reloj(){
	hora = 0;
	minutos = 0;
}



Reloj::Reloj(int _hora, int _minutos){
	// Validar hora 0..23
	if ( (_hora >= 0) && (_hora <= 23))
			hora = _hora;
	else 
		  hora = 0;
	// Validar minutos 0..59
	if ((_minutos >= 0) && (_minutos <=59))
			minutos = _minutos;
	else
			minutos = 0;

}

void Reloj::setHora(int _hora){
  // 0..23
	if ( (_hora >= 0) && (_hora <= 23))
			hora = _hora;
	else 
		  hora = 0;
}
void Reloj::setMinutos(int _minutos){
  // 0..59
	if ((_minutos >= 0) && (_minutos <=59))
			minutos = _minutos;
	else
			minutos = 0;
  }

  int Reloj::getHora(){
  return hora;

  }

  int Reloj::getMinutos(){
    return minutos;
  }

  void Reloj::muestra(){
    if(hora < 10)
      cout<<'0'<<hora;
    else
      cout<<hora;
      cout<<':';
    if (minutos < 10)
      cout<<'0'<<minutos<<endl;
    else
      cout<<minutos<<endl;

  }

  //Aplicación
  int menu(){
    int opcion;
    cout<<""
    <<"1. setHora"
    <<"\n2. setMinutos"
    <<"\n3. getHora"
    <<"\n4. getMinutos"
    <<"\n5. desplegar"
    <<"\n6. Salir"
    <<"\nTeclea la opcion: ";

    cin >> opcion;
      return opcion;

  } 


int main() {
// Declaracion de variables e instancias de la clase

int opcion,hr,min;
Reloj hora{9,51}, hora_break{25,05};

cout << "Break =\n";
hora_break.muestra();


//Muestra el menu de opciones
opcion = menu();

while (opcion != 6){
  

switch (opcion)  {
    case 1:
        cout<<"Teclea la nueva hora: ";
        cin >> hr;
        hora.setHora(hr);
        hora.muestra();
        break;

    case 2:
        cout<<"Teclea los nuevos minutos: ";
        cin >> min;
        hora.setMinutos(min);
        hora.muestra();
        break;
    case 3:
        hr = hora.getHora();
        cout<<"la hora con getHora(): "<< hr<<endl;
        break;
    case 4:
        min = hora.getMinutos();
        cout<<"la hora con getMinutos(): "<<min<<endl;
        break;
    case 5:
        hora.muestra();
        break;
    default:
        cout<<"Opción incorrecta"
        <<endl;
}

//Actualizar la vcc dentro del ciclo
opcion = menu();

}

return 0;
  }