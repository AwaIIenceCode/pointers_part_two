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

    cout << "Enter elements of array A ->\n";

    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
    }

    cout << "Enter elements of array B ->\n";

    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    int* C = new int[M + N];

    for (int i = 0; i < M; i++)
    {
        C[i] = A[i];
    }

    for (int i = 0; i < N; i++)
    {
        C[M + i] = B[i];
    }

    cout << "Merged array ->\n";

    for (int i = 0; i < M + N; i++)
    {
        cout << C[i] << " ";
    }

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
