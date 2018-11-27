typedef double znach;

struct node
{
	znach key;
	node *left;
	node *right;
};

class binary_tree
{
private:
	node *root;
	void ForPrint(node *t);
	void AddElement(znach el, node *&t);
	void for_VievWayToMax(node *t);
public:

	binary_tree();
	bool IsEmpty();
	znach Search(znach searchedKey, node *&sheet);//вводится искомый ключ и соственно дерево или лист(узел)
	//void Push(znach a, node **uz);
	void Print();
	znach MaxElem(node *t);
	void DeleteNode(node *&t);
	void Insert(znach el);
	void VievRightNodes();
	~binary_tree();
};
