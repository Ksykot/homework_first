#include <iostream>
#include <fstream>
#include <string>


int main() {
	std::ifstream file("in.txt");
	char size_1_arr[100];
	char size_2_arr[100];

	file >> size_1_arr;
	int size1 = atoi(size_1_arr);
	int* array1 = new int[size1];
	for (int i = 0; i < size1; i++) {
		file >> array1[i];
	}

	file >> size_2_arr;
	int size2 = atoi(size_2_arr);
	int* array2 = new int[size2];
	for (int i = 0; i < size2; i++) {
		file >> array2[i];
	}

	std::ofstream file_out("out.txt ");
	file_out << size2 << std::endl;
	for (int i = size2 - 1; i >= 0; i--) {
		file_out << array2[i] << " ";
	}
	file_out << std::endl;
	file_out << size1 << std::endl;
	for (int i = size1 - 1; i >= 0; i--) {
		file_out << array1[i] << " ";
	}

	delete[] array1;
	delete[] array2;

}