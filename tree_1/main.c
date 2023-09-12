#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode {
	int data;
	struct TreeNode* left, * right;
} TreeNode;

//링크 노드 값입력
TreeNode n1 = { 4, NULL, NULL };
TreeNode n2 = { 5, NULL, NULL };
TreeNode n3 = { 3, &n1, &n2 };
TreeNode n4 = { 6, NULL, NULL };
TreeNode n5 = { 2, &n3, &n4 };
TreeNode n6 = { 10, NULL, NULL };
TreeNode n7 = { 11, NULL, NULL };
TreeNode n8 = { 9, &n6, &n7 };
TreeNode n9 = { 8, NULL, NULL };
TreeNode n10 = { 7, &n9, &n8 };
TreeNode n11 = { 1, &n5, &n10 };
TreeNode* root = &n11;

int array[11] = {1,2,3,4,5,6,7,8,9,10,11};


//링크 방식 중위 순회
linked_inorder(TreeNode* root) {
	if (root) {
		linked_inorder(root->left);	// 왼쪽서브트리 순회
		printf("%d ", root->data); 	// 노드 방문
		linked_inorder(root->right);	// 오른쪽서브트리 순회
	}
}
//링크 방식 전위 순회
linked_preorder(TreeNode* root) {
	if (root) {
		printf("%d ", root->data); 	// 노드 방문
		linked_preorder(root->left);	// 왼쪽서브트리 순회
		linked_preorder(root->right);	// 오른쪽서브트리 순회
	}
}
//링크 방식 후위 순회
linked_postorder(TreeNode* root) {
	if (root) {
		linked_postorder(root->left);	// 왼쪽 서브 트리 순회
		linked_postorder(root->right);	// 오른쪽 서브 트리 순회
		printf("%d ", root->data); 	// 노드 방문
	}
}

//배열 방식 중위 순회
array_inorder() {
	
}
//배열 방식 전위 순회
array_preorder() {

}
//배열 방식 후위 순회
array_postorder() {
	
}

void  main()
{
	printf("[Linked Tree]\n");

	printf("1.전위 순회\n");
	linked_preorder(root);
	printf("\n\n");

	printf("2.중위 순회\n");
	linked_inorder(root);
	printf("\n\n");

	printf("3.후위 순회\n");
	linked_postorder(root);
	printf("\n\n\n");

	printf("[Array Tree]\n");

	printf("1.전위 순회\n");
	array_preorder();
	printf("\n\n");

	printf("2.중위 순회\n");
	array_inorder();
	printf("\n\n");

	printf("3.후위 순회\n");
	array_postorder();
	printf("\n\n");
	return 0;


	
}
