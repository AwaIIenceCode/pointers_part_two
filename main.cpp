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

    int* C = new int[M + N]; // Максимальный размер массива C — объединённый размер A и B
    int k = 0;

    // Добавляем элементы из A, которые не входят в B
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

    // Добавляем элементы из B, которые не входят в A
    for (int i = 0; i < N; i++)
    {
        bool inA = false;
        for (int j = 0; j < M; j++)
        {
            if (B[i] == A[j])
            {
                inA = true;
                break;
            }
        }

        if (!inA)
        {
            bool inC = false;
            for (int l = 0; l < k; l++)
            {
                if (C[l] == B[i])
                {
                    inC = true;
                    break;
                }
            }

            if (!inC)
            {
                C[k] = B[i];
                k++;
            }
        }
    }

    cout << "Array C (unique elements of A and B, without duplicates):\n";
    for (int i = 0; i < k; i++)
    {
        cout << C[i] << " ";
    }

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
