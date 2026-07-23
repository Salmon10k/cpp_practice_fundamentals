#include<iostream>
#include<ctime>
int main(){
int num;
int tries=0;
int guess;
srand(time (0));
num=rand() %100 + 1;
std::cout<<"*************NUMBER GUESSING GAME*************\n";
do{
std::cout<<"state your guess between (1-100) =";
std::cin>>guess;
tries++;
if(guess>num){
std::cout<<"too high.\n";
}
else if (guess<num){
    std::cout<<"too low.\n";
}
else{
 std::cout<<"CORRECT.\n";
std::cout<<"No of tries = "<<tries <<'\n';
}

}
while(guess!=num);
std::cout<<"**********************************************";
}
