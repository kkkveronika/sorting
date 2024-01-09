//#include"Test.h"
//const int N = 3;
//const int M = 4;
//
//vector<int*>Orig_matrix{ {5, 2, 7, 4}, {1, 3, 6, 10}, {3, 1, 2, 5} };
//vector<int*>Matrix_result{ {1, 1, 2, 4}, {3, 2, 6, 5}, {5, 3, 7, 10} };
//
//bool TestBubble(vector<int*>orig_matrix, vector<int*>Result_matrix, int n, int m) {
//	vector<int*>Matrix_of_work;
//	CBubbleSort BubbleMatrix(orig_matrix, n, m);
//	Matrix_of_work = CopySortMatrix(BubbleMatrix.Sort(orig_matrix, n, m), n, m);
//	bool testing = true;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (Matrix_of_work[i][j] != Result_matrix[i][j]) {
//				testing = false;
//			}
//		}
//	}
//	if (testing == false) {
//		cout << endl << "Bubble sorting failed." << endl << endl;
//		cout << "The result of the work:" << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cout << Matrix_of_work[i][j] << "\t";
//			}
//			cout << endl;
//		}
//		cout << endl << "Expected result:" << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cout << Result_matrix[i][j] << "\t";
//			}
//			cout << endl;
//		}
//	}
//	return testing;
//}
//
//
//bool TestSelect(vector<int*>orig_matrix, vector<int*>Result_matrix, int n, int m) {
//	vector<int*>Matrix_of_work;
//	CSelectionSort SelectionMatrix(orig_matrix, n, m);
//	Matrix_of_work = CopySortMatrix(SelectionMatrix.Sort(orig_matrix, n, m), n, m);
//	bool testing = true;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (Matrix_of_work[i][j] != Result_matrix[i][j]) {
//				testing = false;
//			}
//		}
//	}
//	if (testing == false) {
//		cout << endl << "Selection sorting failed." << endl << endl;
//		cout << "The result of the work:" << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cout << Matrix_of_work[i][j] << "\t";
//			}
//			cout << endl;
//		}
//		cout << endl << "Expected result:" << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cout << Result_matrix[i][j] << "\t";
//			}
//			cout << endl;
//		}
//	}
//	return testing;
//}
//
//bool TestInsert(vector<int*>orig_matrix, vector<int*>Result_matrix, int n, int m) {
//	vector<int*>Matrix_of_work;
//	CInsertionSort InsertionMatrix(orig_matrix, n, m);
//	Matrix_of_work = CopySortMatrix(InsertionMatrix.Sort(orig_matrix, n, m), n, m);
//	bool testing = true;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (Matrix_of_work[i][j] != Result_matrix[i][j]) {
//				testing = false;
//			}
//		}
//	}
//	if (testing == false) {
//		cout << endl << "Insertion sorting failed." << endl << endl;
//		cout << "The result of the work:" << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cout << Matrix_of_work[i][j] << "\t";
//			}
//			cout << endl;
//		}
//		cout << endl << "Expected result:" << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cout << Result_matrix[i][j] << "\t";
//			}
//			cout << endl;
//		}
//	}
//	return testing;
//}
//
//bool TestShell(vector<int*>orig_matrix, vector<int*>Result_matrix, int n, int m) {
//	vector<int*>Matrix_of_work;
//	CShellSort ShellMatrix(orig_matrix, n, m);
//	Matrix_of_work = CopySortMatrix(ShellMatrix.Sort(orig_matrix, n, m), n, m);
//	bool testing = true;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (Matrix_of_work[i][j] != Result_matrix[i][j]) {
//				testing = false;
//			}
//		}
//	}
//	if (testing == false) {
//		cout << endl << "Shell sorting failed." << endl << endl;
//		cout << "The result of the work:" << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cout << Matrix_of_work[i][j] << "\t";
//			}
//			cout << endl;
//		}
//		cout << endl << "Expected result:" << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cout << Result_matrix[i][j] << "\t";
//			}
//			cout << endl;
//		}
//	}
//	return testing;
//}
//
//bool TestQuick(vector<int*>orig_matrix, vector<int*>Result_matrix, int n, int m) {
//	vector<int*>Matrix_of_work;
//	CQuickSort QuickMatrix(orig_matrix, n, m);
//	Matrix_of_work = CopySortMatrix(QuickMatrix.Sort(orig_matrix, n, m), n, m);
//	bool testing = true;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (Matrix_of_work[i][j] != Result_matrix[i][j]) {
//				testing = false;
//			}
//		}
//	}
//	if (testing == false) {
//		cout << endl << "Quick sorting failed." << endl << endl;
//		cout << "The result of the work:" << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cout << Matrix_of_work[i][j] << "\t";
//			}
//			cout << endl;
//		}
//		cout << endl << "Expected result:" << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cout << Result_matrix[i][j] << "\t";
//			}
//			cout << endl;
//		}
//	}
//	return testing;
//}
//
//void Test() {
//	if (TestBubble(Orig_matrix, Matrix_result, N, M) == true && TestSelect(Orig_matrix, Matrix_result, N, M) == true && TestInsert(Orig_matrix, Matrix_result, N, M) == true && TestShell(Orig_matrix, Matrix_result, N, M) == true && TestQuick(Orig_matrix, Matrix_result, N, M) == true) {
//		cout << endl << "Test was successful." << endl << endl;
//	}
//}