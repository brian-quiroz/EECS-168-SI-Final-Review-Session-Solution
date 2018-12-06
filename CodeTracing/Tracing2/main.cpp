#include <iostream>

using namespace std;

char* reverse(char* arr, int& size) {
	size = 7;
	char* newArr = new char[size];
	for (int i = 0; i < size; i++) {
		newArr[i] = arr[size - 1 - i];
  	}
  	return newArr;
}

int main() {
	int size = 7; //This is a correction, this was supposed to be 7.
	string myStr = "kwahyaj";
	char* myArr = new char[size];
	char* myOtherArr = nullptr;

	for (int i = 0; i < myStr.length(); i++)
	{
	  myArr[i] = myStr.at(myStr.length() - i - 1);
	}

	myOtherArr = reverse(myArr, size);

	for (int i = 0; i < size; i++)
	{
	  cout << myArr[i];
	}
	cout << '\n';
	cout << myStr << endl;

	char** my2DArr = new char*[size];
	for (int i = 0; i < size; i++)
	{
		my2DArr[i] = reverse(myOtherArr, size);
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i >= j) {
				cout << my2DArr[i][j];
			}

		}
		cout << endl;
	}

	delete[] myArr;
	delete[] myOtherArr;
	for (int i = 0; i < size; i++)
	{
		delete[] my2DArr[i];
	}
	delete[] my2DArr;
	return 0;
}
