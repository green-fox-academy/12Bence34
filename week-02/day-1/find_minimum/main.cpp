#include <iostream>

int *mini(int[], int);
int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int  size = sizeof(numbers) / sizeof(int);
    int *minimum = mini(numbers, size);

    std::cout<<*minimum<<std::endl;

    return 0;
}
int *mini(int numbers[], int size) {
    int *temp = &numbers[0];
    for (int i = 0; i < size; ++i) {
        if (numbers[i] < *temp) {
            *temp = numbers[i];
        }
    }
    return temp;
}