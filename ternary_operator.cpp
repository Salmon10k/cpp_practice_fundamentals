#include <iostream>
int main(){
    //ternary operator is used as replacement of if else , usually cleaner to work with depending on the usecase
    //contion? expression1:expression2
    //int grade=70;
    //grade>=60 ? std::cout<<"you pass!": std::cout <<"You Failed.";
    bool hungry=true;
    //hungry ? std::cout <<"get him food":std::cout<<"dont order food .";
   std::cout<<( hungry? "get him food":"dont order food");
}