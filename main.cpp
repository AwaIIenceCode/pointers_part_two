#include <iostream>
using namespace std;

int main()
{
    int M, N;

    cout << "Enter the size of array A (M): ";
    cin >> M;
    cout << "Enter the size of array B (N): ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    cout << "Enter elements of array A:\n";
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
    }

    cout << "Enter elements of array B:\n";
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    int* C = new int[M + N];
    int k = 0;

    for (int i = 0; i < M; i++)
    {
        bool found = false;
        for (int j = 0; j < k; j++)
        {
            if (C[j] == A[i])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            C[k] = A[i];
            k++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        bool found = false;
        for (int j = 0; j < k; j++)
        {
            if (C[j] == B[i])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            C[k] = B[i];
            k++;
        }
    }

    cout << "Merged array without duplicates:\n";
    for (int i = 0; i < k; i++)
    {
        cout << C[i] << " ";
    }

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
