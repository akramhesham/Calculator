#include <iostream>
#include "mainCalculator.h"
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<mainCalculator<int>::add(x,y);
}
