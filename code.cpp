// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "number of n : ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             // cout << j << " ";
//             cout << '*' << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "number of n : ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//         cout << ch << " ";
//         for (int j = 1; j < n; j++)
//         {

//             ch = 'A' + j;
//             cout << ch << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int number = 1;
//     cout << "number of n : ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << number << " ";
//             number++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch = 'A';
    cout << "number of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}