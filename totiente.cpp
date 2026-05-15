#include <iostream>
int mdc(int a,int b)
{
int r;
while(b != 0)
{
r = a % b;
a = b;
b = r;
}
return a;
}
int totiente(int n)
{
int soma = 0;
for(int i = 0;i < n;i++)
{
if(mdc(n,i) == 1)
{
soma += 1;
}
}
return soma;
}
int main()
{
int p,q,n;
std::cout << "\nDigite um valor para p: ";
std::cin >> p;
std::cout << "\nDigite um valor para q: ";
std::cin >> q;
n = p * q;
std::cout << "\nO produto de p e q : " << n;
std::cout << "\nTotiente de n: " << totiente(n);
return 0;
}

