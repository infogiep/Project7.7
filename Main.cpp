#include <iostream>
#include "IntegerArray.h"

int main()
{
    // Declare an array with 10 elements
    IntegerArray array(10);// размер должен быть  >=0 --- меняем 10 на -10


    // Fill the array with numbers 1 through 10
    for (int i{ 0 }; i < 10; ++i)// проверка размера массива---меняем 10- 12 строка 52
        array[i] = i + 1;

    // Resize the array to 8 elements
    array.resize(8);// проверка изменения длины--- меняем - 8 - 12

    // Insert the number 20 before element with index 5
    array.insertBefore(20, 5);// проверка правильности вставки ---меняем 5 - 12 строка 135

    // Remove the element with index 3
    array.remove(3);// убрать element с номером за пределами массива---меняем 3 - 12 строка 160

    // Add 30 and 40 to the end and beginning
    array.insertAtEnd(30);
    array.insertAtBeginning(40);

    // A few more tests to ensure copy constructing / assigning arrays
    // doesn't break things
    {
        IntegerArray b{ array };
        b = array;
        b = b;
        array = array;
    }

    // Print out all the numbers
    for (int i{ 0 }; i < array.getLength(); ++i)
        std::cout << array[i] << ' ';

    std::cout << '\n';

    return 0;
}
