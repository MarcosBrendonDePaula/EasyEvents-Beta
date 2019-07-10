#include <iostream>
#include "Events.h"
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
	Eventos ev;
	ev.addEvent(new Evento(0,&teste));
	ev.addEvent(new Evento(1,&teste1));
	ev.addEvent(new Evento(2,&Diego));
	//_sleep(1000);
	int x;
	ev.EnviarSinal(1);
	ev.EnviarSinal(0);
	
	while(true){
		cin>>x;
		ev.EnviarSinal(x);
	}
	return 0;
}