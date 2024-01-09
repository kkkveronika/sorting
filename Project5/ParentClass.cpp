//Class.cpp
#include"ParentClass.h"

CISort :: ~CISort() {};

vector<vector<int>> CISort::Sort(vector<vector<int>> Matrix, int n, int m) { n; m; return Matrix; };

CISort::CISort(vector<vector<int>> Matrix, int n, int m) {
	this->matrix = Matrix;
	this->N = n;
	this->M = m;
}

CISort::CISort() {};

void CISort::Show(vector<vector<int>> Matrix, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << Matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

CBubbleSort::CBubbleSort(vector<vector<int>> Matrix, int n, int m) {
	this->matrix = Matrix;
	this->N = n;
	this->M = m;
}

vector<vector<int>> CBubbleSort::Sort(vector<vector<int>> Matrix, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 1; k < n; k++) {
				Count_comparison += 1;
				if (Matrix[k][j] < Matrix[k - 1][j]) {
					int temp = Matrix[k - 1][j];
					Matrix[k - 1][j] = Matrix[k][j];
					Matrix[k][j] = temp;
					Count_permutation += 1;
				}
			}
		}
	}
	return Matrix;
}

CBubbleSort::~CBubbleSort() {}



CSelectionSort::CSelectionSort(vector<vector<int>> Matrix, int n, int m) {
	this->matrix = Matrix;
	this->N = n;
	this->M = m;
}
vector<vector<int>> CSelectionSort::Sort(vector<vector<int>> Matrix, int n, int m) {

	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n - 1; i++) {
			int min = i;
			for (int k = i + 1; k < n; k++) {
				Count_comparison += 1;
				if (Matrix[k][j] < Matrix[min][j]) {
					min = k;
				}
			}
			int temp = Matrix[i][j];
			Matrix[i][j] = Matrix[min][j];
			Matrix[min][j] = temp;
			Count_permutation += 1;
		}
	}
	return Matrix;
}
CSelectionSort::~CSelectionSort() {}



CInsertionSort::CInsertionSort(vector<vector<int>> Matrix, int n, int m) {
	this->matrix = Matrix;
	this->N = n;
	this->M = m;
}
vector<vector<int>> CInsertionSort::Sort(vector<vector<int>> Matrix, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 1; k < n; k++) {
				int value = Matrix[k][j];
				int index = k;
				Count_comparison += 1;
				while (index > 0 && Matrix[index - 1][j] > value) {
					Matrix[index][j] = Matrix[index - 1][j];
					index--;
				}
				Matrix[index][j] = value;
				Count_permutation += 1;
			}
		}
	}
	return Matrix;
}
CInsertionSort::~CInsertionSort() {}



CShellSort::CShellSort(vector<vector<int>> Matrix, int n, int m) {
	this->matrix = Matrix;
	this->N = n;
	this->M = m;
}
vector<vector<int>> CShellSort::Sort(vector<vector<int>> Matrix, int n, int m) {
	int increment = n;
	while (increment > 0) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				Count_comparison += 1;
				int i = k;
				int temp = Matrix[k][j];
				if (i < increment) {
					Count_comparison -= 1;
				}
				while ((i >= increment) && (Matrix[i - increment][j] > temp)) {
					Matrix[i][j] = Matrix[i - increment][j];
					i = i - increment;
				}
				Matrix[i][j] = temp;
				Count_permutation += 1;
			}
		}
		if (increment > 1) {
			increment = increment - 1;
		}
		else {
			if (increment == 1) {
				break;
			}
		}
	}
	return Matrix;
}
CShellSort::~CShellSort() {}

CQuickSort::CQuickSort(vector<vector<int>> Matrix, int n, int m) {
	this->matrix = Matrix;
	this->N = n;
	this->M = m;
}

vector<vector<int>> CQuickSort::Sort(vector<vector<int>> Matrix, int n, int m) {
	int Left = 0;
	int count_temp = 0;
	int Right = n - 1;
	vector<int> Column;
	vector<vector<int>> temp;
	for (int f = 0; f < m; f++) {
		for (int k = 0; k < n; k++) {
			Column.push_back(Matrix[k][f]);
		}
		temp.push_back(RecurtionSort(Column, Left, Right));
		count_temp++;
		for (int i = count_temp - 1; i < count_temp; i++) {
			for (int j = 0; j < n; j++) {
				Matrix[j][i] = temp[i][j];
			}
		}

		Column.clear();
	}
	return Matrix;
}

vector<int> CQuickSort::RecurtionSort(vector<int>& Column, int left, int right) {
	int i = left, j = right;
	int tmp{};
	int Middle = Column[(left + right) / 2];

	while (i <= j) {
		while (Column[i] < Middle) {
			i++;
		}
		while (Column[j] > Middle) {
			j--;
		}
		Count_comparison += 1;
		if (i <= j) {
			tmp = Column[i];
			Column[i] = Column[j];
			Column[j] = tmp;
			Count_permutation += 1;
			i++;
			j--;
		}
	}

	if (left < j)
		RecurtionSort(Column, left, j);
	if (i < right)
		RecurtionSort(Column, i, right);
	return Column;
}

CQuickSort::~CQuickSort() {}

