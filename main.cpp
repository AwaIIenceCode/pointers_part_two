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

    int* C = new int[M > N ? M : N];
    int k = 0;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i] == B[j])
            {
                bool found = false;

                for (int l = 0; l < k; l++)
                {
                    if (C[l] == A[i])
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
                break;
            }
        }
    }

    cout << "Common elements without duplicates:\n";
    for (int i = 0; i < k; i++)
    {
        cout << C[i] << " ";
    }

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
