#pragma once
#include<vector>
#include<set>
using namespace std;
class SetMatrixZeroes {
public:
	void setZeroes(vector<vector<int>>& matrix) {
		if (matrix.empty() || matrix[0].empty()) return;
		set<int> row, col;
		int m = matrix.size(), n = matrix[0].size();
		for (int i = 0; i <m; i++)
			for (int j = 0; j <n; j++)
				if (matrix[i][j] == 0) {
					row.insert(i);
					col.insert(j);
				}
		for (set<int>::iterator it = row.begin();
			it != row.end(); it++)
			for (int i = 0; i <n; i++)
				matrix[*it][i] = 0;
		for (set<int>::iterator it = col.begin();
			it != col.end(); it++)
			for (int i = 0; i <m; i++)
				matrix[i][*it] = 0;
	}
};