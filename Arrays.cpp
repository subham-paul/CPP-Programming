#include<iostream>
using namespace std;
int main(){

    // int arrays[5] = {10, 20, 30, 40, 50};
    // cout<<"your array variable is "<<arrays[4];

    // int n;
    // cout<<"how many student ";
    // cin>>n;
    // int marks[n];
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<"Enter the marks of "<< i <<"th student" << endl;
    //     cin>>marks[i];
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<"Marks of "<< i <<"th student is "<<marks[i] << endl;
    // }

    int arr2d[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"the value at "<<i<<" , "<<j<<" is "<<arr2d[i][j]<<endl;
        }
        
    }
    

    return 0;
}