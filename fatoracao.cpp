#include <iostream>
#include <cmath>
int main()
{
int numero,divisor;
std::cout << "\nDigite o número para ser fatorado: ";
std::cin  >> numero;
divisor = 2;
while(numero > 1)
{
while(numero % divisor == 0)
{
std::cout << "\nDivisor = " << divisor;
numero /= divisor;
}
divisor += 1;
}
return 0;
}


