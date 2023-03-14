#include<iostream>
#include<string>
#include "../Headers/observer.h"

using namespace std;

Observer::Observer(int id){
    userId = id;
    cout<<"created the user - "<<userId<<"\n";
}

void Observer::update(string message){
    cout<<"Message: "<<message<<" sent to user "<<userId<<endl;
}