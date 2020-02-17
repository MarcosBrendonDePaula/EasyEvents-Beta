#include <iostream>
#include "Events.h"
using namespace std;
/*
    Estrotura Basica para uma função Event
    void Nome_função(void *arg)
*/
void fun(void* arg)
{
    string *variavel = (string*)arg;
    cout<<*variavel<<endl;
}

int main(){
    //Criando objeto controlador de eventos
    Events Evs;
    /*  se setado como true Eventos serão desparados por threads 
        caso false eventos serão executados sequencialmente.
    */
    Evs.Paralel = true;
    //variavel para passar a fun
    string sfun{"Ola mundo"};
    //criando evento Event(ID_escolhida,endereço_função,parametros_a_passar)
    Evs.addEvent(new Event(1,&fun,&sfun));
    //disparando evento cujo a id seja 1 onde foi definida a cima.
    Evs.sendSignal(1);
    //pausando thread principal para esperara a execução dos eventos
    int x;
    cin>>x;
    
    return 0;
}