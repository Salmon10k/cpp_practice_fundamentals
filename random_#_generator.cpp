#include <iostream>

//pseudo random = not truely random but close
//rand(); can generate numbers ranging from 0-32767
//mostly you dont need that many numbers so (rand() % x)+1 ; // gives you a range of 0-x.
int main(){
    srand(time(NULL));
    int num1= (rand() % 6)+1;
    int num2= (rand() % 6)+1;
    int num3= (rand() % 6)+1;
std::cout<<num1 <<'\n';
std::cout<<num2 <<'\n';
std::cout<<num3 <<'\n';


}