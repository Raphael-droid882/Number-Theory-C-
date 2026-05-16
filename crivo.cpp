#include <iostream>
#include <cmath>
#include <vector>
int main()
{
int n;
std::cout << "\nDigite n primeiros números primos: ";
std::cin  >> n;
int raiz = sqrt(n) + 1;
std::vector<bool> lista(n+1,true);
std::vector<int> primo;
lista[0] = false;
lista[1] = false;
for(int i = 2;i < raiz;i++)
{
if(lista[i] == true)
{
for(int j = i * i;j <= n;j += i)
{
lista[j] = false;
}//fim for
}//fim if
}//fim for
for(int p = 0;p <= n;p++)
{
if(lista[p] == true)
{
primo.push_back(p);
}
}
std::cout << "\nLista dos números primos:\n";
for(int pnt : primo)
{
std::cout << "p = " << pnt << "\t";
}
return 0;
}
