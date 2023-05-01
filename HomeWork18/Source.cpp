#include<iostream>
//HW18.1
template <typename T>
T sum(T num1, T num2, T num3, T num4, T num5 = 0);

//HW18.2
inline double mid_mean(double num1, double num2, double num3);

//HW18.3
void overload(short num1, short num2, short num3);
void overload(double num1, double num2, double num3);
void overload(int num1, int num2, int num3);

//HW18.4

template <typename N>
N arr_simple(N arr[],N length);
	

int main() {
	setlocale(LC_ALL, "rus");
	
	
	//HW18.1
	std::cout << "\n\n\t\tHW18.1\n\n";
	std::cout << sum(7, 2, 3, 4);

	//HW18.2
	std::cout << "\n\n\t\tHW18.2\n\n";
	std::cout << mid_mean(1, 2, 3);

	//HW18.3
	std::cout << "\n\n\t\tHW18.3\n\n";
	overload(4.3, 12.2, 33.1);

	// HW18.4
	std::cout << "\n\n\t\tHW18.4\n\n";
	const int size1 = 4;
	int arr1[size1] = { 6, 4, 19, 23 };
	std::cout << arr_simple(arr1, size1);


	std::cout << std::endl;
	system("pause");
	return 0;
}
//HW18.1
template<typename T>
T sum(T num1, T num2, T num3, T num4, T num5 ){
	return T(num1+num2+num3+num4+num5);
}
//HW18.2
inline double mid_mean(double num1, double num2, double num3){
	return (num1+num2+num3)/3.0;
}
//HW18.3
void overload(short num1, short num2, short num3){
	if (num1 >= num2 && num1 >= num3)
		std::cout << "Работа функции SHORT max is " << num1;
	else
		if(num2>num1&&num2>=num3)
			std::cout << "Работа функции SHORT max is " << num2;
		else
			std::cout << "Работа функции SHORT max is " << num3;
}
void overload(double num1, double num2, double num3) {
	if (num1 >= num2 && num1 >= num3)
		std::cout << "Работа функции DOUBLE max is " << num1;
	else
		if (num2 > num1 && num2 >= num3)
			std::cout << "Работа функции DOUBLE max is " << num2;
		else
			std::cout << "Работа функции DOUBLE max is " << num3;
}
void overload(int num1, int num2, int num3) {
	if (num1 >= num2 && num1 >= num3)
		std::cout << "Работа функции INT max is " << num1;
	else
		if (num2 > num1 && num2 >= num3)
			std::cout << "Работа функции INT max is " << num2;
		else
			std::cout << "Работа функции INT max is " << num3;
}
template <typename N>
N arr_simple(N arr[],N length) {
	for (int i = 0; i < length; i++) {
		int j;
		for (j = 2; j <= sqrt(arr[i]); j++) {
			if (arr[i] % j == 0) 
				break;
		}
		if (j > sqrt(arr[i]))
			return arr[i];
	}
	return -1;
}
