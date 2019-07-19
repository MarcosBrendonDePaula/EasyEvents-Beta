#include <iostream>
#include "Events.h"
void fun(void* arg){
    int *x=(int*)arg;
    int y=*x;
    y++;
    *x=y;
    std::cout<<"Executou "<<*(x)<<std::endl;
}
int main(){
    Events s;
    int val=0;
    int v2=7;
    s.addEvent(new Event(0,&fun,&val));
    s.addEvent(new Event(1,&fun,&v2));
    s.sendSignal(0);
    s.sendSignal(0);
    Events::static_Acess->sendSignal(0);
    Events::static_Acess->sendSignal(1);
    int x;
    std::cin >> x;
    return 0;
}