#include<iostream>
#include"BinaryTree.h"
using namespace std;
void menu();
int main()
{
	setlocale(LC_ALL, "rus");
	int count;
	double znachenie;
	binary_tree MyTree;

	//node *MyNode = new node();
	cout << "������� ���������� ��������� ������:"; cin >> count;
	cout << "������� ������� ������: " << endl;
	for (int i = 0; i < count; i++)
	{
		cin >> znachenie;
		MyTree.Insert(znachenie);
	}
	int count_sw;
	menu();
	
		MyTree.VievRightNodes();
		
		cout << endl;
	MyTree.~binary_tree();
	system("pause");
	return 0;
}
void menu()
{
	cout << "1.������� \n ������� �� ����� �������� � �����, ������� �� ���� �� ����� �� ���� � ������������ ���������. \n";

}
