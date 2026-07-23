#include <iostream>
void supersmash();
void supersmash(std::string attack);
void supersmash(std::string attack,std::string attack2);
int main(){
 supersmash("SUPER SLAP","SUUUUUPERR SLAMMM!!!");

}
void supersmash(){
std::cout<<"SSUUUPERRSMASHHHH!";
}
void supersmash(std::string attack){
std::cout<<"SSUUUPERRSMASHHHH! followed up with a "<< attack <<'\n';
}
void supersmash(std::string attack,std::string attack2){
std::cout<<"SSUUUPERRSMASHHHH! followed up with a "<< attack <<" and then you fly into the sky and "<<attack2;
}