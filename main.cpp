#include <iostream>
//#include "Events.h"
#include "Eventsmain.h"
using namespace std;
void teste(){
	cout<<"rodo"<<endl;
}
void teste1(){
	cout<<"rodo1"<<endl;
}
void Diego(){
	cout<<"Diego Não"<<endl;
}
int main(){
	//Eventos ev;
	EventsMain::Eventosmain.addEvent(new Evento(0,&teste));
	EventsMain::Eventosmain.addEvent(new Evento(1,&teste1));
	EventsMain::Eventosmain.addEvent(new Evento(2,&Diego));
	//_sleep(1000);
	EventsMain::Eventosmain.EnviarSinal(1);
	EventsMain::Eventosmain.EnviarSinal(0);

	int x;
	while(true){
		cin>>x;
		EventsMain::Eventosmain.EnviarSinal(x);
	}
	return 0;
}