#include <iostream>
using namespace std;

void max(int arr[]);
void min(int arr[]);
void rev(int arr[]);

int main()
{
    int numbers[100];
    cout << "Enter numbers: " << endl;

    for (int i = 0; i < 100; ++i) {
        cin >> numbers[i];
    }
    max(numbers);
    min(numbers);
    rev(numbers);
    return 0;
}

void max(int arr[])
{
    int max;
    max = arr[0];
    for (int i = 0; i < 100; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    cout << "Maximun number is : " << max << endl;

}

void min(int arr[])
{
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Minimum number is : " << min << endl;
}

void rev(int arr[])
{
    int i = 0, j = 99;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    cout << "Reversed array is" << endl;
    for (int k = 0; k < 100; k++)
           cout << arr[k] << " ";

    cout << endl;
}
