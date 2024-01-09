//Function.cpp
#include"Function.h"
#include<fstream>
using namespace std;

vector<vector<int>> MannualInputMatrix(vector<vector<int>> Matrix, int N, int M) {
	cout << "\tLine\tColumn" << endl;
	for (int i = 0; i < N; i++) {
		vector<int> temp;
		for (int j = 0; j < M; j++) {
			int elem{};
			cout << "Element  [" << i + 1 << "] \t  [" << j + 1 << "]: ";
			elem = GetInt();
			temp.push_back(elem);
		}
		Matrix.push_back(temp);
	}
	return Matrix;
}


vector<vector<int>> RandomInputMatrix(vector<vector<int>> Matrix, int N, int M) {
	srand((unsigned)time(NULL));
	for (int i = 0; i < N; i++) {
		vector<int> temp;
		for (int j = 0; j < M; j++) {
			int elem{};
			elem = rand()%100;
			temp.push_back(elem);
		}
		Matrix.push_back(temp);
	}
	return Matrix;
}

vector<vector<int>> OfFileMatrix(vector<vector<int>> Matrix, int N, int M) {
	cout << "Enter the name of file(without file permission!): ";
	string name_file = "";
	cin >> name_file;
	ifstream file;
	file.open(name_file);
	if (!file.is_open()) {
		cout << "File opening error" << endl;
	}
	else {
		while (!file.eof()) {
			for (int i = 0; i < N; i++) {
				vector<int> temp;
				for (int j = 0; j < M; j++) {
					int elem{};
					file >> elem;
					temp.push_back(elem);
				}
				Matrix.push_back(temp);
			}
		}
	}
	file.close();
	return Matrix;
}

void LookOrigMatrix(vector<vector<int*>> Matrix, int N, int M) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << *Matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void LookOrig1Matrix(vector<vector<int>> Matrix, int N, int M) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << Matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void LookMatrix(vector<int>Matrix, int N, int M) {
	M;
	for (int i = 0; i < N; i++) {
		cout << Matrix[i] << "\t";
	}
}

vector<vector<int>> CopySortMatrix(vector<vector<int>> Matrix, int N, int M) {
	vector<vector<int>> SortMatrix;
	for (int i = 0; i < N; i++) {
		vector<int> temp;
		for (int j = 0; j < M; j++) {
			temp.push_back(Matrix[i][j]);
		}
		SortMatrix.push_back(temp);
	}
	return SortMatrix;
}