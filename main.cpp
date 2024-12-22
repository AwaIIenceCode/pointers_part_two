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

    int* C = new int[M];
    int k = 0;

    for (int i = 0; i < M; i++)
    {
        bool inB = false;
        for (int j = 0; j < N; j++)
        {
            if (A[i] == B[j])
            {
                inB = true;
                break;
            }
        }

        if (!inB)
        {
            bool inC = false;
            for (int l = 0; l < k; l++)
            {
                if (C[l] == A[i])
                {
                    inC = true;
                    break;
                }
            }

            if (!inC)
            {
                C[k] = A[i];
                k++;
            }
        }
    }

    cout << "Array C (elements of A not in B, without duplicates):\n";
    for (int i = 0; i < k; i++)
    {
        cout << C[i] << " ";
    }

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
