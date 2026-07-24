#include <iostream>
#include <iomanip>
void Showbalance(double balance);
double Withdraw(double balance);
double deposit();


int main(){
    double balance=0;
    int choice;
    do{   
    std::cout<<"--------------------\n";
    std::cout<<" Welcome to the bank\n";
    std::cout<<"--------------------\n";
    std::cout<<".Pick your desired option.\n";
    std::cout<<"1.Show Balance.\n";
    std::cout<<"2.Deposit money.\n";
    std::cout<<"3.Withdraw money.\n";
    std::cout<<"4.Exit.\n";
    std::cin>>choice;
    std::cin.clear();
    fflush(stdin);
    switch(choice){
    case 1: Showbalance(balance);break;
    case 2: balance += deposit(); Showbalance(balance); break;
    case 3: balance -= Withdraw(balance); Showbalance(balance);break;
    case 4:std::cout<<"Thank you for visiting\n";break;
    default: std::cout<<"Pls pick a valid option (1-4)\n";
    return 0;
    }
}while(choice!=4);
   return 0;
}
void Showbalance(double balance){
    std::cout<<"your balance is = " << std::setprecision(2)<< std::fixed <<balance<< " pkr\n";
}
double Withdraw(double balance){
    double amount=0;
    std::cout<<"Enter amount to be Withdrawn: ";
    std::cin>>amount;
    if(amount>balance){
        std::cout<<"Insufficient funds.\n";
        return 0;
    }   
     else if(amount<0){
        std::cout<<"Error , Invalid amount.\n";
        return 0;
     }else{

        return amount;
     }

   }
double deposit(){
    double amount=0;
    std::cout<<"Enter amount to be deposited: ";
    std::cin>>amount;
    if(amount>0){
     return amount;
    }
    else{
        std::cout<<"Thats not a valid amount.\n";
        return 0;
    }

    
}