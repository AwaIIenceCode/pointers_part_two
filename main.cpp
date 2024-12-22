#include <iostream>
using namespace std;

int main()
{
    int M;

    cout << "Enter the size of array A (M): ";
    cin >> M;

    int* A = new int[M];

    cout << "Enter elements of array A:\n";
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
    }

    int choice;

    cout << "Choose what to remove:\n";
    cout << "1 - Remove even numbers\n";
    cout << "2 - Remove odd numbers\n";
    cin >> choice;

    cout << "Resulting array:\n";
    for (int i = 0; i < M; i++)
    {
        if ((choice == 1 && A[i] % 2 != 0) || (choice == 2 && A[i] % 2 == 0))
        {
            cout << A[i] << " ";
        }
    }

    delete[] A;

    return 0;
}