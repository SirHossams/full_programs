#include <iostream>

using namespace std;

void insert(float A[][10],int n)
{
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
		cin >> A[i][j];
}

namespace elementary_row_oper {
void row_reduce(float A[][10],int row,int dividend_no)
{
	for (int i=0;i<10;i++)
		A[row-1][i]/=dividend_no;
}
void zero_adding(float A[][10],int row_addend_no,int row_augend_no)
{
	row_augend_no--;row_addend_no--;
	float first_val=A[row_addend_no][0];
	for (int i=0;i<10;i++) {
		A[row_addend_no][i]+=-first_val*A[row_augend_no][i];
	}
}
void row_exchange(float A[][10],int row1,int row2)
{
	row1--;row2--;
	//how to swap two numbers by a temp variable
	float swap_tar;
	for (int i=0;i<10;i++) {
		swap_tar=A[row1][i];
		A[row1][i]=A[row2][i];
		A[row2][i]=swap_tar;
	}
}
};

void display(float A[][10],int n)
{
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++)
		cout << A[i][j] << " ";
	cout << endl;
	}
}

int main()
{
	using namespace elementary_row_oper;
	float A[10][10]={0};
	insert(A,3);
	zero_adding(A,2,1);
	display(A,3);
	system("pause");
	return 0;
}