//Menu.cpp
#include "Menu.h"

void MainMenu() {
	int n{};
	int m{};
	vector<vector<int>> Matrix;
	cout << "Manual input - 1\nRandom input - 2\nInput of file - 3\nChoose: ";
	int choice = GetInputMatrix();
	cout << "Enter number of rows: ";
	n = GetInt();
	cout << "Enter number of columns: ";
	m = GetInt();
	if (choice == 1) {
		Matrix = MannualInputMatrix(Matrix, n, m);
	}
	if (choice == 2) {
		Matrix = RandomInputMatrix(Matrix, n, m);
	}
	if (choice == 3) {
		Matrix = OfFileMatrix(Matrix, n, m);
	}

	int exit{};
	while (exit == 0) {
		cout << "Test - 1\nLook on matrix - 2\nLook sorting - 3\nCheck comparative table of the effectiveness of methods - 4\nExit - 5\nChoose: ";
		int user_choice{};
		user_choice = GetInt();
		switch (user_choice) {
		case(Test_matrix): {
			//Test();
		}break;
		case(Look_matrix): {
			LookMatrix(Matrix, n, m);
		}break;
		case(Look_sort): {



			cout << "Bubble sorting" << endl;
			CBubbleSort BubbleMatrix(Matrix, n, m);
			LookMatrix(BubbleMatrix.Sort(Matrix, n, m), n, m);


			cout << "Selection sorting" << endl;
			CSelectionSort SelectionMatrix(Matrix, n, m);
			LookMatrix(SelectionMatrix.Sort(Matrix, n, m), n, m);


			cout << "Insertion sorting" << endl;
			CInsertionSort InsertionMatrix(Matrix, n, m);
			LookMatrix(InsertionMatrix.Sort(Matrix, n, m), n, m);


			cout << "Shell sorting" << endl;
			CShellSort ShellMatrix(Matrix, n, m);
			LookMatrix(ShellMatrix.Sort(Matrix, n, m), n, m);


			cout << "Quick sorting" << endl;
			CQuickSort QuickMatrix(Matrix, n, m);
			LookMatrix(QuickMatrix.Sort(Matrix, n, m), n, m);

		}break;
		case(Look_table): {
			CBubbleSort BubbleMatrix(Matrix, n, m);
			BubbleMatrix.Sort(Matrix, n, m);

			CSelectionSort SelectionMatrix(Matrix, n, m);
			SelectionMatrix.Sort(Matrix, n, m);

			CInsertionSort InsertionMatrix(Matrix, n, m);
			InsertionMatrix.Sort(Matrix, n, m);

			CShellSort ShellMatrix(Matrix, n, m);
			ShellMatrix.Sort(Matrix, n, m);

			CQuickSort QuickMatrix(Matrix, n, m);
			QuickMatrix.Sort(Matrix, n, m);
			cout << "Name sorting\tCount comparisons\tCount permutations" << endl << endl;
			cout << "Bubble\t\t\t" << BubbleMatrix.GetCountComparisons();
			cout << "\t\t\t" << BubbleMatrix.GetCountPermutations() << endl << endl;

			cout << "Selection\t\t" << SelectionMatrix.GetCountComparisons();
			cout << "\t\t\t" << SelectionMatrix.GetCountPermutations() << endl << endl;

			cout << "Insertion\t\t" << InsertionMatrix.GetCountComparisons();
			cout << "\t\t\t" << InsertionMatrix.GetCountPermutations() << endl << endl;

			cout << "Shell\t\t\t" << ShellMatrix.GetCountComparisons();
			cout << "\t\t\t" << ShellMatrix.GetCountPermutations() << endl << endl;

			cout << "Quick\t\t\t" << QuickMatrix.GetCountComparisons();
			cout << "\t\t\t" << QuickMatrix.GetCountPermutations() << endl << endl;
		}break;
		case(Exit): {
			exit = true;
		}break;
		default: {
			cout << "Error. Try again." << endl;
		}break;
		}
	}
}
