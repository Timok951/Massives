// Massives.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
	string a;
	int nums[3][5]{
	{ 1,2,3,4,5 },
	{ 1,2,3,4,5 },
	{ 1,2,3,4,5 } };			
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {

			cin >> nums[i][j];
		}
	}
	cout << "Massive elements" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {

			cout << nums[i][j] << endl;
		}
	}
	float sum;
	float avgsum;
	for (int i = 0; i < 3; i++) {
		float sum = 0;

		for (int j = 0; j < 5; j++) {

			 sum = sum + nums[i][j];
		}
		float avgsum = sum/5;
		cout << "average sum" << endl;
		cout <<  avgsum << endl;

	}



}


