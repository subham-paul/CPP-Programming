// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, array[n];
//     cout << "enter number "; // printf("how many number you can reverse ");
//     cin >> n;

//     int reverse = 0;
//     while (n > 0)
//     {
//         int lastdigit = n % 10;
//         reverse = reverse * 10 + lastdigit;
//         n = n / 10;
//     }
//     cout << reverse << endl;

//     // for (int i = 0; i < n; i++)
//     // {
//     //     cin>>array[i];
//     //     // scanf("%d", &array[i]);
//     // }

//     // for (int i = n - 1; i >= 0; i--)
//     // {
//     //     cout<<array[i];
//     //     // printf("%d ", array[i]);
//     // }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int reverse = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
    cout << reverse << endl;

    return 0;
}