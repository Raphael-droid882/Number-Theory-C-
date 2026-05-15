#include <iostream>
#include <cmath>
int mdc(int a,int b)
{
int r;
while(b !=0)
{
r = a % b;
a = b;
b = r;
}
return a;
}
int main()
{
int p,q;
std::cout << "\nDigite um valor para p: ";
std::cin >> p;
std::cout << "\nDigite um valor para q: ";
std::cin >> q;
//chama a função mdc
std::cout << "\nO mdc é " << abs(mdc(p,q));
return 0;
}
