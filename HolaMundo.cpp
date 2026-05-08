#include <iostream>

int main() {  

   double temp;
   char op;

   std::cout << "***** conversor de temperatura *****\n";
   std::cout << "F = Fahrenheit" << std::endl;
   std::cout << "C = Celsius" << std::endl;
   std::cout << "A que unidad te gustaría convertir?";
   std::cin >> op;

   switch(op){
      case 'f':
      case 'F':
      std::cout << "Ingresa la temperatura en Celsius: ";
      std::cin >> temp;

      temp = 1.8 * temp + 32;
      std::cout << "La temperatura en Fahrenheit es: " << temp << "\n";
      break;

      case 'c':
      case 'C':

      std::cout << "Ingresa la temperatura en Fahrenheit: ";
      std::cin >> temp;

      temp = (temp - 32) / 1.8;
      std::cout << "La temperatura en Celsius es: " << temp << "\n";
      break;

      default:
      std::cout <<"Ingrese solo c o f\n"; 
   
   }

std::cout << "*************************************\n";

   return 0;

}

