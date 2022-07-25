#include <iostream>
//#include <bits/stdc++.h>;
int addOne(int &x)
{
    return x++;
}


int main()
{
    int a = 5;
    int* aRef = &a;
    addOne(a);
    std::cout << a <<std::endl;
    std::cout << *aRef;
}