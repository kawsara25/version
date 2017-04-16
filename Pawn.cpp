//**********************************************
//COMP345 BUILD 1
//Winter 2017
//Team Buffalos
//**********************************************
//
//Pawn.cpp

#include "Pawn.h"
#include <string>




Pawn::Pawn(){}

Pawn::Pawn(std::string color, City* c, string playerName) {
    this->color=color;
    this->pawncity=c;
	this->playerName = playerName;
}


//Pawn::Pawn(std::string color, Player* p) {
//    this->color=color;
//    this->p=p;
//    //pplayer=pplayer;
//}

Pawn::~Pawn(){

}

void Pawn::printPawn(){
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"Pawn: " << this->color <<std::endl;
    std::cout<<"Player: " << this->playerName <<std::endl;
    std::cout<<"Location: "<<pawncity->getCityName()<<std::endl;
    std::cout<<"----------------------------------------\n\n"<<std::endl;
    
}

std::string Pawn::getPawnColor(){
    return color;
}


City* Pawn::getPawnCity(){
    return pawncity;
}

void Pawn::setPawnCity(City* newpawncity){
    pawncity=newpawncity;
}

void Pawn::setPawnCityString(string citystringname, City* acities[]){

    for(int i=0;i<48;i++){
        if(citystringname==acities[i]->getCityName()){
           this->setPawnCity(acities[i]);
        }
    }
    
}


string Pawn::getPlayerName() {
	return playerName;
}
void Pawn::setPlayerName(string playerName) {
	this->playerName = playerName;
}
