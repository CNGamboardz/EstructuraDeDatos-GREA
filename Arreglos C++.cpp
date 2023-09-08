#include <iostream>
using namespace std;
const int num = 8;

int main()
{
        int nums[num];
        int total = 0;
        for (int i = 0; i < num; i++)
        {
            cout<<"Por favor, Introduza el numero: ";
            cin>>nums[i];
            total += nums[i];
        }
        cout<<"El total de numero es: "<< total << endl;
        return 0;
}
