#include <iostream>
#include <random>
#include <ctime>

int main() {
    system("chcp 1251");
    system("cls");
    std::default_random_engine generator(static_cast<unsigned>(std::time(nullptr)));
    std::uniform_int_distribution<int> distribution(0, 50);

    const int rows = 5;
    const int col1 = 10;
    const int col2 = 5;

   
    int array1[rows][col1];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col1; j++) {
            array1[i][j] = distribution(generator);
        }
    }

    int array2[rows][col2];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col2; j++) {
     
            array2[i][j] = array1[i][2 * j] + array1[i][2 * j + 1];
        }
    }

    
    std::cout << "Перший масив:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col1; j++) {
            std::cout << array1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    
    std::cout << "Другий масив:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col2; j++) {
            std::cout << array2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

