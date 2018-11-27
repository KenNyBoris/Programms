#include "BinaryTree.h"
#include<iostream>
#include<iomanip>
using namespace std;
binary_tree::binary_tree()
{
	root = NULL;
}
bool binary_tree::IsEmpty()
{
	return root == NULL;
}
znach binary_tree::Search(znach searchedKey, node *&sheet)//����� ��-�� �� �����
{
	if (IsEmpty())
	{
		return searchedKey;
	}
	if ((sheet)->key > searchedKey)		Search(searchedKey, sheet->left);//������- �����
	if ((sheet)->key < searchedKey)			Search(searchedKey, sheet->right);//������-������
	if (sheet->key == searchedKey)		return sheet->key;
	return 0;
}
void binary_tree::Print()
{
	ForPrint(root);
}
znach binary_tree::MaxElem(node *t)//����������� ������� ������
{
	if (t->left == NULL && t->right == NULL) return t->key;
	if (t->right != NULL) MaxElem(t->right);
	if (t->right == NULL)
	{
		if (t->left != NULL) MaxElem(t->left);
		else return t->key;
	}
}
void binary_tree::DeleteNode(node * &t)//������� ��� ������
{
	if (!IsEmpty())
	{
		if (t->left != NULL) DeleteNode(t->left);
		if (t->right != NULL) DeleteNode(t->right);
	}
	delete t;
}
void binary_tree::Insert(znach el)
{
	AddElement(el, root);
}
void binary_tree::VievRightNodes()
{
	for_VievWayToMax(root);
}
void binary_tree::ForPrint(node * t)
{
	cout << "���� ������: " << t->key << endl;
	if (t->left != NULL) 	ForPrint(t->left);
	if (t->right != NULL) 	ForPrint(t->right);
}
void binary_tree::AddElement(znach el, node *&t)//�������� �� � ������
{
	if (t == NULL)
	{
		t = new node();
		t->key = el;
	}
	if (el < t->key) AddElement(el, t->left);
	if (el > t->key) AddElement(el, t->right);
}
void binary_tree::for_VievWayToMax(node * t)
{
	cout << t->key << " ";
	if (t->right == NULL)
	{
		return;
	}
	if (t->right != NULL)
	{
		for_VievWayToMax(t->right);
	}
}
binary_tree::~binary_tree()
{

	/*DeleteNode(root);*/

}
