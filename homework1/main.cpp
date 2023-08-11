#include <iostream>
#include <fstream>
#include <string>


void print(int number[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << number[i] << " " << std::endl;
	}
}


void revers(int number[], int size) {
	int value;
	for (int i = 0; i < size; i++) {
		value = number[i];
		number[i] = number[size - i - 1];
		number[size - i - 1] = value;
	}
}




int main() {
	std::ifstream file("in.txt");
	std::string size_1_arr;
	std::string size_2_arr;
	std::string array1;
	std::string array2;

	std::getline(file, size_1_arr);
	 std::cout << size_1_arr << std::endl;
	 std::getline(file, array1);
	 std::cout << array1 << std::endl;

    std::getline(file, size_2_arr);
	 std::cout << size_2_arr << std::endl;
	 std::getline(file, array2);
	 std::cout << array2 << std::endl;

	 std::cout << std::endl;
	 std::cout << std::endl;

	
	 int size_1 = stoi(size_1_arr);
	 int size_2 = stoi(size_2_arr);
	std::cout << size_1 << " " << size_2 << std::endl;
	 int** array_1 = new int* [size_1];
	for (int i = 0; i < size_1; i++) {
		// ???
	}
	 
	 


  std::ofstream file_out("out,txt");
   file_out << size_2 << std::endl;
   file_out << " " << std::endl;
   file_out << size_1 << std::endl;
   file_out << " " << std::endl;
	
}


