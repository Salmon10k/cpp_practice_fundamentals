#include <iostream>
#include <cmath> 
int main() {
double z;
double x;
double y;
std::cout << "base=";
std::cin >> x;
std::cout << "perpendicular=";
std::cin >> y;
z =sqrt(pow(x,2)+pow(y,2));
std::cout << "the hypotenuse is " << z << "\n";
return 0;
}