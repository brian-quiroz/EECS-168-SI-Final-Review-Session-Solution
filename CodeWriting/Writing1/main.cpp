#include <iostream>

int* getEvenArray(int** grid, int rows, int cols, int& size)
/*We're assuming "size" is declared in main and is passed in by reference so that it can be
  used by whoever called this function.*/
{
	int* array = nullptr; //We still don't know the size so we still can't create the array.
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (grid[i][j] % 2 == 0)
			{
				size++; //We increase the count ("size") every time we encounter an even number.
			}
		}
	}

	array = new int[size]; //Now that we know the size, we can create the array.

	int index = 0; //"index" will be the index of the 1D array.
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (grid[i][j] % 2 == 0)
			{
				array[index] = grid[i][j]; //We copy the value from grid[i][j] into array[index]
				index++; //We increase the index so that we don't overwrite what we just stored into the array.
			}
		}
	}

	return array;
}

/*Note: If they ask you a question like this you most likely will only have to write the function.
 I'm providing this main so you can test the function.*/
int main()
{
	int rows = 0;
	int cols = 0;
	int size = 0;
	int* arr = nullptr;

	std::cout << "Input number of rows: ";
	std::cin >> rows;
	std::cout << "Input number of cols: ";
	std::cin >> cols;

	//Creating 2D array:
	int** arr2D = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr2D[i] = new int[cols];
	}

	//Filling 2D array with input from the user:
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << "Input value for (" << i << ", " << j << "): ";
			std::cin >> arr2D[i][j];
		}
	}

	arr = getEvenArray(arr2D, rows, cols, size); //We call our function, which returns a pointer to an array of the even numbers in arr2D.

	//Printing 1D array of even numbers:
	std::cout << "Array of even numbers:\n[";
	for (int i = 0; i < size - 1; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << arr[size - 1] << "]\n";

	delete[] arr;

	for (int i = 0; i < rows; i++)
	{
		delete[] arr2D[i];
	}
	delete[] arr2D;

	return 0;
}
