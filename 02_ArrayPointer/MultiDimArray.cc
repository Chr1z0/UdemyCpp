#include <iostream>

int main()
{
    //1d-Array (Vector)
    int myArray[3] = {1, 2, 3};

    //2d-Array (Matrix)
    //Number of Rows = 3
    //Number of Columns = 2
    int myMatrix1[3][2] = {1, 2, 3, 4, 5, 6};
    int myMatrix2[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << myMatrix1[i][j] << std::endl;
        }
    }

    return 0;
}
