#include <iostream>
#include <ctime>
int main(){
    // generating events with random numbers .
    srand(time(0));
    int num = (rand() % 8 + 1);
    switch(num){
        case 1: std::cout<<"you tried to attack but failed and fell to the ground"; '\n'; break;
        case 2: std::cout<<"your attack landed and did 5 damage"; '\n'; break;
        case 3: std::cout<<"your attack landed and did 2 damage"; '\n'; break;
        case 4: std::cout<<"you couldnt even lift the sword."; '\n'; break;
        case 5: std::cout<<"you turn your back and start running , but get impaled by a flying spear"; '\n'; break;
        case 6: std::cout<<"you magically become the greatest swordsman of all time and slice the enemies head clean off."; '\n'; break;
        case 7: std::cout<<"A submachine gun spawns in your hand"; '\n'; break;
        case 8: std::cout<<"you become a fish, idk how that helps but yeah enjoy."; '\n'; break; 

    }
}