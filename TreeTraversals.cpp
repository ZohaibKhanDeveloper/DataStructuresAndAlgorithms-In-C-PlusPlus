#include<iostream>
#include<queue>
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
Node* buildTree(int preorder[]){
	idx++;
	if(preorder[idx]==-1)
		return NULL;
	Node* root = new Node(preorder[idx]);
	root->left = buildTree(preorder);
	root->right = buildTree(preorder);
	return root;	
}
void preOrder(Node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<"  ";
	preOrder(root->left);
	preOrder(root->right);
} 
void postOrder(Node* root){
	if(root==NULL){
		return;
	}
	preOrder(root->left);
	preOrder(root->right);
	cout<<root->data<<"  ";
} 
void InOrder(Node* root){
	if(root==NULL){
		return;
	}
	preOrder(root->left);
	cout<<root->data<<"  ";
	preOrder(root->right);
} 
void levelOrder(Node* root){
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while(q.size()>0){
		Node* curr = q.front();
		q.pop();
		if(curr==NULL){
			if(!q.empty()){
				cout<<endl;
				q.push(NULL);
				continue;
			}else{
				break;
			}
		}
		cout<<curr->data<<"  ";
		if(curr->left != NULL){
			q.push(curr->left);
		}
		if(curr->right != NULL){
			q.push(curr->right);
		}
	}
}
int main(){
	int preorder[] = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
	cout<<"Tree Implementation Code...\n";
	Node* root = buildTree(preorder);
	cout<<"Output by PreOrder Traversal...\n";
	preOrder(root);
	cout<<"\nOutput by InOrder Traversal...\n";
	InOrder(root);
	cout<<"\nOutput by PostOrder Traversal...\n";
	postOrder(root);
	cout<<"\nOutput by LevelOrder Traversal...\n";
	levelOrder(root);
	return 0;
}
