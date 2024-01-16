//
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() 
{
    const int n=5;
    const int& m=n;
    //n++;
    m++;
    cout<<m<<" "<<n<<"\n";
return 0;
}