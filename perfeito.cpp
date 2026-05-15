#include <iostream>
#include <cmath>
bool primo(unsigned long long n)
{
if(n <= 1)
{
return 0;
}
if(n == 2)
{
return 1;
}
if(n % 2 == 0)
{
return 0;
}
for(unsigned long long i = 3; i * i < n; i += 2)
{
if(n % i == 0)
{
return 0;
}
}
return 1;
}
void perfeito(unsigned long long iter)
{
unsigned long long m,np;
for(unsigned long long p = 2;p < iter;p++)
{
if(primo(p) == 1)
{
m = round(pow(2,p)) - 1;
if(primo(m) == 1)
{
np = round(pow(2,p-1)) * m;
std::cout << "\nO número perfeito = " << np << " , para n = " << p;
}
}
}
}
int main()
{
unsigned long long limite;
std::cout << "\nDefina o limite para imprimir a quantidade de números primos: ";
std::cin >> limite;
std::cout << "\n Tabela dos primeiros números perfeitos: ";
perfeito(limite);
return 0;
}
 
