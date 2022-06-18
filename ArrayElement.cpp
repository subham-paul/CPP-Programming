#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"how many user = ";
    cin>>n;

    int user[n];

    for (int i = 0; i < n; i++)
    {
        cout<< "user value "<<endl;
        cin>>user[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<< "user value "<< user[i] <<endl;
    }
    
    return 0;
}