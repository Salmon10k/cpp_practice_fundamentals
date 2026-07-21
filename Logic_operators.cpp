#include <iostream>
int main (){
//&&  checking If both conditions are true (and)
// || checking if atleast one condition is true (or)
// ! reverses the logical state 

int temperature;
//std::cout <<"whats the temperature =";
//std::cin >> temperature;
//if(temperature>0 && temperature<30){
    //std::cout<<"The temperture is good .";
//}
//else{
//std::cout <<"temperature is not good";
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
std::cout <<"whats the temperature =";
std::cin >> temperature;
if(temperature<0 || temperature>=30){
std::cout<<"The temperture is bad .";
}
else{
std::cout <<"temperature is good";
}
}