#include<iostream>
#include<vector>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		Node(int val){
			data = val;
			left = right = NULL;
		}
};
static int idx = -1;
Node* buildTree(vector<int> preorder){
	idx++;
	if(preorder[idx]==-1)
		return NULL;
	Node* root = new Node(preorder[idx]);
	root->left = buildTree(preorder);
	root->right = buildTree(preorder);
	return root;	
}
int main(){
	vector<int> preorder;
	preorder.push_back(1);
	preorder.push_back(2);
	preorder.push_back(-1);
	preorder.push_back(-1);
	preorder.push_back(3);
	preorder.push_back(4);
	preorder.push_back(-1);
	preorder.push_back(-1);
	preorder.push_back(-1);
	preorder.push_back(5);
	preorder.push_back(-1);
	preorder.push_back(-1);
	cout<<"Tree Implementation Code...\n";
	Node* root = buildTree(preorder);
	cout<<root->data<<endl;
	cout<<root->left->data<<endl;
	cout<<root->right->data<<endl;	
	return 0;
}
