#include <iostream>

int main() {

   double pi = 3.14159;
   double radio;
   std::cout << "Dime el radio de tu círculo";
   std::cin >> radio;
   double circunferencia = 2 * pi * radio;

   std::cout << "Tu circulo tiene un perímetro de" << circunferencia << " centímetros.";

   return 0;
}

