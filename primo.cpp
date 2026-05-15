#include <iostream>
#include <cmath>
bool primo(int n)
{
if(n <= 1)
{
return false;
}
if(n == 2)
{
return true;
}
if(n % 2 == 0)
{
return false;
}
for(int i = 3;i < sqrt(n) + 1;i++)
{
if(n % i == 0)
{
return false;
}
}
return true;
}
int main()
{
int p;
std::cout << "\nDigite um valor para p: ";
std::cin >> p;
std::cout << "\np = " << p << " é primo? " << primo(p);
return 0;
}

