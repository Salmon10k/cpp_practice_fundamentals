#include <iostream> 
int main(){
double Matricmarks;
double Intermarks;
double ITUmarks;
double Totalmatric;
double Totalinter;
double Totalitu;
double Matricpercentage;
double Interpercentage;
double ITUpercentage;
double FINALAGGREGATE;
std::cout << "Enter your Matric marks: ";
std::cin >> Matricmarks;
std::cout << "Enter your Total Matric marks: ";
std::cin >> Totalmatric;
std::cout << "Enter your Inter marks: ";
std::cin >> Intermarks;
std::cout << "Enter your Total Inter marks: ";
std::cin >> Totalinter;
std::cout << "Enter your ITU marks: ";
std::cin >> ITUmarks;
std::cout << "Enter your Total ITU marks: ";
std::cin >> Totalitu;
Matricpercentage = (Matricmarks / Totalmatric) * 100;
Interpercentage = (Intermarks / Totalinter) * 100;
ITUpercentage = (ITUmarks / Totalitu) * 100;
FINALAGGREGATE = (Matricpercentage*0.15) + (Interpercentage*0.35) + (ITUpercentage*0.50);
std::cout << "Your FINAL AGGREGATE is: " << FINALAGGREGATE << "%" << std::endl; 
}