//Function.h
#pragma once

#include "ParentClass.h"
#include "CorrectInput.h"
#include<vector>
#include<ctime>

vector<vector<int>> MannualInputMatrix(vector<vector<int>> Matrix, int N, int M);

vector<vector<int>> RandomInputMatrix(vector<vector<int>> Matrix, int N, int M);

vector<vector<int>> OfFileMatrix(vector<vector<int>> Matrix, int N, int M);

void LookMatrix(vector<vector<int>> Matrix, int N, int M);

vector<vector<int>> CopySortMatrix(vector<vector<int>> Matrix, int N, int M);


vector<vector<int>> SortMatrix;
