#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=2;i++){
        cout<<"Outer: "<<i<<"\n";
        for(int i=1;i<=4;i++)
            cout<<" Inner: "<<i<<"\n";    
    }

    return 0;
}
