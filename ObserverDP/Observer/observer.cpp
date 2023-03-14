#include<iostream>
#include<string>
#include "../Headers/observer.h"

using namespace std;

Observer::Observer(int id){
    userId = id;
}

void Observer::update(string message){
    cout<<"Message: "<<message<<" sent to user "<<userId<<endl;
}