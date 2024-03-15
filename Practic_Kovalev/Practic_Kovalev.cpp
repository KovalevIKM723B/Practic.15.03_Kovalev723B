/*
#include <iostream>
using namespace std;
const int n = 10;

int main()
{
    int a[n], sum=0, min = 0, max = 0, b, pair=0,nonpair=0, temp;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 20;
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (a[i] >= max)
        {
            max = a[i];
        }
        if (a[i] <= min)
        {
            min = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << '\t';
    }
    float average, sum2 = sum, n2 = n;
    average = sum2 / n2;
    cout << endl;
    cout << "What number do you want to check?\n";
    cin >> b;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b)
            cout << "Yes, such an element is in the array\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < 9; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << '\t';
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        {
            if (a[i] % 2 == 0)
                pair++;
            else
                nonpair++;
        }
        for (int o = 0; o < n; o++)
        {
            if (a[i] == a[o] && i != o)
                cout << "Repeating element - " << a[i] << endl;
        }
    }

    cout << " Sum = " << sum << endl;
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;
    cout << "Pair = " << pair << endl;
    cout << "Nonpair = " << nonpair << endl;
    cout << "Average = " << average << endl;

}
*/

/*
#include <iostream>
using namespace std;
const int row = 5;
const int col = 5;

int main()
{
    int a[row][col], temp=0, sum1=0, sum2=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = rand() % 20;
        }
    }
    cout << "Base matrix\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    cout << endl;
    cout << "Transposed matrix\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        sum1 = sum1 + a[i][i];
    }
    cout << "The sum on the main diagonal = " << sum1 << endl;
    int j = 0;
    for (int i = 4; i >= 0; i--)
    {
        sum2 = sum2 + a[i][j];
        j++;
    }
    cout << "The sum on the main diagonal = " << sum2;
}
*/