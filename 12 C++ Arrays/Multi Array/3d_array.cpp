#include <iostream>

int main() {
    // 3D array
    const int x = 2, y = 3, z = 4;
    int threeDArray[x][y][z];

    // Initialize and display elements of the 3D array
    int value = 1;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                threeDArray[i][j][k] = value++;
                std::cout << threeDArray[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
