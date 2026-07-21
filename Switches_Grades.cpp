#include <iostream>
int main () {
char grade;
std::cout <<"Enter your grade =";
std::cin >> grade;
switch(grade){
    case 'A': std::cout <<"You did GREAT!!!!!!!"; break;
    case 'B,': std::cout <<"You did good !!"; break;
    case 'C': std::cout <<"You did alright!"; break;
    case 'D': std::cout <<"You did not do good."; break;
    case 'F': std::cout <<"YOU FAILED. dumbass"; break;
    default: std::cout <<"invalid input , (A-F) only ";
}

}