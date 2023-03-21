#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x[5][4];
    int rSum[5] = { 0 };
    int cSum[4] = { 0 };

    int k = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //x[i][j] = i * j;
            x[i][j] = k;
            k++;
        }
    }

    cout << "1 --> ---------------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << setw(3) << x[i][j];
        }
        cout << endl;
    }

    // ----------------
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            rSum[i] = rSum[i] + x[i][j];
        }
    }

    cout << "2 --> ------Row Sum---------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << setw(5) << rSum[i];
    }
    cout << endl;


    // ----------------
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            cSum[j] = cSum[j] + x[i][j];
        }
    }

    cout << "3 --> ------Col Sum A---------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << setw(5) << cSum[i];
    }
    cout << endl;


    // ----------------
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cSum[j] = cSum[j] + x[i][j];
        }
    }

    cout << "4 --> ------Col Sum B---------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << setw(5) << cSum[i];
    }
    cout << endl;
}