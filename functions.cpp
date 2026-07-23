#include<iostream>
//functions are blocks of code you can reuse , without havbing to wirte it eachtime
void HappyBirthday(std::string name);

int main(){
std::string name = "salman";
HappyBirthday(name);

}
void HappyBirthday(std::string name){
std::cout<<"happy birthday to "<<name<<'\n';
std::cout<<"happy birthday to "<<name<<'\n';
std::cout<<"happy birthday to dear "<<name <<'\n';
std::cout<<"happy birthday to "<<name<<'\n';
}