#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode {
	int data;
	struct TreeNode* left, * right;
} TreeNode;

//��ũ ��� ���Է�
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


//��ũ ��� ���� ��ȸ
linked_inorder(TreeNode* root) {
	if (root) {
		linked_inorder(root->left);	// ���ʼ���Ʈ�� ��ȸ
		printf("%d ", root->data); 	// ��� �湮
		linked_inorder(root->right);	// �����ʼ���Ʈ�� ��ȸ
	}
}
//��ũ ��� ���� ��ȸ
linked_preorder(TreeNode* root) {
	if (root) {
		printf("%d ", root->data); 	// ��� �湮
		linked_preorder(root->left);	// ���ʼ���Ʈ�� ��ȸ
		linked_preorder(root->right);	// �����ʼ���Ʈ�� ��ȸ
	}
}
//��ũ ��� ���� ��ȸ
linked_postorder(TreeNode* root) {
	if (root) {
		linked_postorder(root->left);	// ���� ���� Ʈ�� ��ȸ
		linked_postorder(root->right);	// ������ ���� Ʈ�� ��ȸ
		printf("%d ", root->data); 	// ��� �湮
	}
}

//�迭 ��� ���� ��ȸ
array_inorder() {
	
}
//�迭 ��� ���� ��ȸ
array_preorder() {

}
//�迭 ��� ���� ��ȸ
array_postorder() {
	
}

void  main()
{
	printf("[Linked Tree]\n");

	printf("1.���� ��ȸ\n");
	linked_preorder(root);
	printf("\n\n");

	printf("2.���� ��ȸ\n");
	linked_inorder(root);
	printf("\n\n");

	printf("3.���� ��ȸ\n");
	linked_postorder(root);
	printf("\n\n\n");

	printf("[Array Tree]\n");

	printf("1.���� ��ȸ\n");
	array_preorder();
	printf("\n\n");

	printf("2.���� ��ȸ\n");
	array_inorder();
	printf("\n\n");

	printf("3.���� ��ȸ\n");
	array_postorder();
	printf("\n\n");
	return 0;


	
}
