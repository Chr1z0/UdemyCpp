#include <iostream>
#include <vector>

void print_matrix(const std::vector<std::vector<int>>& matrix)
{
    // matrix.size() = Anzahl von numRows (3)
    for(std::size_t i = 0; i < matrix.size(); i++)
    {
                                // i = 0,1,2... jeder Eintrag besitzt eigenen Vektor, auf welchen .size() angewendet werden kann
        for(std::size_t j = 0; j <matrix[i].size(); j++)
        {
            std::cout << "Matrix[" << i << "," << j << matrix[i][j] << std::endl;
        }
    }
}

int main()
{
    // 2D Array
    const std::size_t numRows = 3;
    const std::size_t numCols = 2;

    int array[numRows][numCols] {{0,1}, {2,3}, {4,5}};

    // 2D Vektor
    std::vector<std::vector<int>> matrix(numRows, std::vector<int>(numCols, 0));
    print_matrix(matrix);


    return 0;
}
