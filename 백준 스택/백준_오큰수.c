#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

//�ٽ� ���̵�� : ������ ž�� ���� �Է¹��� ������ �۴ٸ�,
//                ������ ž�� ��ū���� ���� �Է¹��� ���̴�. 
typedef struct node {
	int elem;
	int idx;
	struct node* next;
}NODE;
void push(NODE** stack, int i, int e) {
	NODE* nn = (NODE*)malloc(sizeof(NODE));
	nn->elem = e;
	nn->idx = i;
	nn->next = *stack;
	*stack = nn;
}
int main() {
	int n, e, * nge;
	NODE* stack = NULL; //����
	scanf("%d", &n);
	nge = (int*)malloc(n * sizeof(int)); //�̰Ŵ� ��ū���� ���� �迭 
	for (int i = 0; i < n; i++) {
		scanf("%d", &e); //���� �Է¹����� 
		while (stack != NULL) { //������ ���ƶ�
			if (stack->elem < e) { //������ ���鼭 �Է¹��� ���� ������ ž���� �� ũ�ٸ�
				nge[stack->idx] = e; //������ ž�� ��ū���� �Է¹��� ���� ����
				stack = (stack)->next; //pop
			}
			else //�Է¹��� ���� ������ ž�� ��ū���� �ƴ϶��
				break;
		}
		push(&stack, i, e); //�Է¹��� ���� ��ū���� ã�ƾ� �ϱ� ������ ���ÿ� ����
	}
	while (stack != NULL) { //���ÿ� ���� ������ �� ��ū���� -1
		nge[stack->idx] = -1;
		stack = stack->next;
	}
	for (int i = 0; i < n; i++) //��ū�� ���
		printf("%d ", nge[i]);

}