#include <iostream>

// void getInput(int size_array, int pos, double value);
void sortArray(double arr[], int size_array);
void insertValue(double arr[], int pos, double value, int size_array);
void displayResult(double arr[], int size_array);
int main()
{
    double List[] = {5, 9, 3, 8, 1};
    int position = 2;
    double value = 20;
    int size_array = 6;

    displayResult(List, size_array);
    sortArray(List, size_array);
    insertValue(List, position, value, size_array);
    displayResult(List, size_array);

    return 0;
}

void sortArray(double arr[], int size_array)
{
    for (int pass = 0; pass < size_array - 1; pass++)
    {
        for (int i = 0; i < size_array - 1 - pass; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

void insertValue(double arr[], int pos, double value, int size_array)
{
    for (int i = size_array; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
}

void displayResult(double arr[], int size_array)
{
    for (int i = 0; i < size_array + 1; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}