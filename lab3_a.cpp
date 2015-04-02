#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <cstdlib>
using namespace std;
vector<int>cows;

int main()
{
	/* open file.in */
	ifstream infile("file.in", ios::in);
	if(!infile)
	{
		cerr << "Failed to open file.in" << endl;
		exit(1);
	}
	/* number of cows */
	int n;
	infile >> n;
	int temp;
	/* cows information */
	for(int i=0; i<n; i++)
	{
		infile >> temp;
		cows.push_back(temp);
	}
	/* sort from large to small */
	sort(cows.begin(), cows.begin()+n);
	/* calculate total */
	int total = 0;
	for(int i=n-1; i>=n-5; i--)
		total += cows[i];
	/* output to file.out */
	ofstream outfile("file.out", ios::out);
	if(!outfile)
	{
		cerr << "Failed to open file.out" << endl;
		exit(1);
	}
	outfile << total << endl; 
	return 0;
}
