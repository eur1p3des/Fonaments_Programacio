#include "sumOfTree.hpp"

typedef BinaryTree<int> BT;


//DESC:
//PRE:
//POST: Retorna la suma dels valors de t.
//TERMINACIÓ: Cada crida recursiva es fa amb un arbre més petit que l'arbre anterior.
int sumOfTreeRec(BT& t)
{
	if (t.isEmpty()) return 0;
	//HI: sumLeft conté la suma dels valors del fill esquerre de t.
	int sumLeft = sumOfTreeRec(t.getLeft());
	//HI: sumRight conté la suma dels valors del fill dret de t.
	int sumRight = sumOfTreeRec(t.getRight());
	
	return t.getRoot() + sumLeft + sumRight;
}

int sumOfTree(BT t)
{
	return sumOfTreeRec(t);
}
