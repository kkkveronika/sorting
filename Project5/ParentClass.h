//Class.h
#pragma once
#include<vector>
#include "Menu.h"
#include <iostream>
using namespace std;

class CISort {
protected:
	int N{};
	int M{};
	vector<vector<int>> matrix;
	int Count_comparison{};
	int Count_permutation{};
public:
	CISort(vector<vector<int>> Matrix, int N, int M);
	CISort();
	virtual ~CISort();
	virtual vector<vector<int>> Sort(vector<vector<int>> Matrix, int n, int m);
	void Show(vector<vector<int>> Matrix, int N, int M);
	int GetCountComparisons() {
		return Count_comparison;
	}
	int GetCountPermutations() {
		return Count_permutation;
	}
};

class CBubbleSort : public CISort {
public:
	vector<vector<int>> Sort(vector<vector<int>> Matrix, int N, int M) override;
	CBubbleSort(vector<vector<int>> Matrix, int N, int M);
	~CBubbleSort();
};

class CSelectionSort : public CISort {
public:
	vector<vector<int>> Sort(vector<vector<int>> Matrix, int N, int M) override;
	CSelectionSort(vector<vector<int>> Matrix, int N, int M);
	~CSelectionSort();
};

class CInsertionSort : public CISort {
public:
	vector<vector<int>> Sort(vector<vector<int>> Matrix, int N, int M) override;
	CInsertionSort(vector<vector<int>> Matrix, int N, int M);
	~CInsertionSort();
};

class CShellSort : public CISort {
public:
	vector<vector<int>> Sort(vector<vector<int>> Matrix, int N, int M) override;
	CShellSort(vector<vector<int>> Matrix, int N, int M);
	~CShellSort();
};

class CQuickSort : public CISort {
public:
	CQuickSort(vector<vector<int>> Matrix, int N, int M);
	vector<vector<int>> Sort(vector<vector<int>> Matrix, int N, int M) override;
	vector<int> RecurtionSort(vector<int>& Column, int left, int right);
	~CQuickSort();
};
