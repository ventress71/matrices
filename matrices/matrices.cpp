#include <iostream>

int main()
{
	int matriz[3][3];


	for (int row = 0; row < (sizeof(matriz) / sizeof(matriz[0])); row++) {
		for (int column = 0; column < (sizeof(matriz[0]) / sizeof(matriz[0][0])); column++)
		{
			std::cout << "Ingresa un digito en la posicion [" << row << "]" << "[" << column << "] " << std::endl;
			std::cin >> matriz[row][column];
		}
	}


	for (int row = 0; row < (sizeof(matriz) / sizeof(matriz[0])); row++) {
		for (int column = 0; column < (sizeof(matriz[0]) / sizeof(matriz[0][0])); column++)
		{
			std::cout << "Posicion [" << row << "]" << "[" << column << "] " << matriz[row][column] << " ";
		}
		std::cout << std::endl;
	}

	//matriz personalizada
	std::cout << "Matriz personalizado" << std::endl;

	int rows = 0, cols = 0, random = 0;

	std::cout << "Ingresa el numero de filas" << std::endl;

	std::cin >> rows;

	std::cout << "Ingresa el numero de columnas" << std::endl;

	std::cin >> cols;

	srand(time(0));

	int** matrix = new int* [rows];
	for (int i = 0; i < rows; ++i)
		matrix[i] = new int[cols];;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

	delete(matrix);
}
