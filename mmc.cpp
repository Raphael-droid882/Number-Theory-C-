#include <iostream>
#include <cmath>
int calcmmc(int a,int b)
{
int mdc,r;
int n1 = a , n2 = b;
while(b != 0)
{
r = a % b;
a = b;
b = r;
}
mdc = a;
int mmc;
mmc = abs(n1 * n2)/mdc;
return mmc;
}
int main()
{
int p,q;
std::cout << "\nDigite um valor para p: ";
std::cin >> p;
std::cout << "\nDigite um valor para q: ";
std::cin >> q;
std::cout << "\nO mmc = " << calcmmc(p,q);
return 0;
}

