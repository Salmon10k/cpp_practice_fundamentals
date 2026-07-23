#include <iostream>
int main(){
int rows;
int coloums;
char symbol;
std::cout<<"How many rows ?";
std::cin>>rows;
std::cout<<"How many coloumns ?";
std::cin>>coloums;
std::cout<<"input symbol";
std::cin>>symbol;
for(int i= 1; i<= rows; i++ ){
  for(int j=1; j<=coloums; j++){
    std::cout<< symbol;
  }
  std::cout<<'\n';
}

}