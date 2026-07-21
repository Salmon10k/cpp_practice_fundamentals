#include <iostream>
int main(){
char op;
double num1;
double num2;
double result;
std::cout<<"############ CALCULATOR ############" "\n";
std::cout<<"Select an operator (+,-,*,/)";
std::cin>>op;
std::cout<<"Enter number =";
std::cin >>num1;
std::cout<<"Enter second number =";
std::cin >>num2;
switch(op){
 case '+': result=num1+num2; std::cout<<"result is "<<result << '\n'; break;
 case '-': result=num1-num2; std::cout<<"result is "<<result << '\n'; break;
 case '*': result=num1*num2; std::cout<<"result is "<<result << '\n'; break;
 case '/': result=num1/num2; std::cout<<"result is "<<result << '\n'; break;
default: std::cout<<" ERROR! invalid input";
}
std::cout<<"####################################";
}