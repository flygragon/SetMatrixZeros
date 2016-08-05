// SetMatrixZeros.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"SetMatrixZeros.h"

int main()
{
	int m, n;
	cin >> m >> n;
	vector<vector<int> > num(m);
	for (int i = 0; i < m; i ++) {
		num[i].resize(n);
		for (int j = 0; j < n; cin >> num[i][j],j ++) {}
	}
	SetMatrixZeroes s;
	s.setZeroes(num);
	for (int i = 0, row = num.size(); i < row;cout <<'\n',i++)
		for (int j = 0, col = num[i].size(); j < col; j++)
			cout << num[i][j] << ' ';
    return 0;
}

