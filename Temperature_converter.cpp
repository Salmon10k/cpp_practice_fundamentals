#include <iostream>

int main(){
char unit;
double temperature;
std::cout<<"F=Fahrenheit\n";
std::cout<<"C=Celcius\n";
std::cout<<"K=kelvin\n";
std::cout<<"What Unit would you like to convert to? ";
std::cin >>unit;
if(unit =='F'|| unit == 'f'){
std::cout<<"temperature in celcius? =";
std::cin >> temperature;
temperature=(1.8*temperature)+32.0;
std::cout<<"the Temperature is c"<<temperature<<"F";
}
else if(unit=='C' ||unit=='c'){
std::cout<<"Temperature in Fahrenheit? =";
std::cin>>temperature;
temperature=(0.5556)*(temperature-32);
std::cout<<"the Temperature is "<<temperature<<"C";
}
else if(unit=='k'|| unit=='K'){
std::cout<<"temperature in Celcius? =";
std::cin>>temperature;
temperature=temperature+273;
std::cout<<"the Temperature is "<<temperature<<"K";
}
}