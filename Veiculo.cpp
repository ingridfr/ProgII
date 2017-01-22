#include "Veiculo.h"
#include<iostream>
using namespace std;

Veiculo::Veiculo(){
}
Veiculo::Veiculo(float peso,float velmax,float preco){
	this->peso=peso;
	this->velmax=velmax;
	this->preco=preco;
}
Veiculo::~Veiculo(){
}
void Veiculo::setPeso(float pe){
  peso=pe;
}
void Veiculo::setVelmax(float v){
  velmax=v;
}
void Veiculo::setPreco(float pr){
  preco=pr;
}
float Veiculo::getPeso(){
  return peso;
}
float Veiculo::getVelmax(){
  return velmax;
}
float Veiculo::getPreco(){
  return preco;
}
void Veiculo::print(){
  cout<<"DADOS DO VEICULO: \n\n";
  setPeso(peso);
  cout<<"PESO: "<<getPeso()<<"Kg\n";
  setVelmax(velmax);
  cout<<"VELOCIDADE MÁXIMA: "<<getVelmax()<<"Km/h\n";
  setPreco(preco);
  cout<<"PRECO: R$"<<getPreco();
}
