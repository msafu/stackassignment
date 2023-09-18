#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Give me size of array \n";
    cin >> n;
    int a[n];
    cout << "How many elements at first you want to take?\n";
    int fs;
    cin >> fs;
    cout << "Input array element \n";
    for (int i = 0; i < fs; i++)
    {
        cin >> a[i];
    }
    int in = 0, top = fs;
    while (1)
    {

        cout << "\nEnter 1 to Push \nEnter 2 to Pop \nEnter 3 to end\n\n";
        cin >> in;
        if (in == 3)
        {
            break;
        }
        if (in == 1)
        {
            top++;
           
            if (top > n)
            {
                cout << "stack overflow\n\n";
            }
            else

            {   cout<<"Push your element:\n";
                 cin >> a[top - 1];
                cout << "Result after push:\n";
                for (int i = 0; i < top; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
        if (in == 2 && top >= 0)
        {
            top--;
            if (top+1< 0)
            {
                cout << "Stack Underflow\n";
            }
            else
            {
                cout << "Result after pop:\n";
                for (int i = 0; i < top; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
    }
}