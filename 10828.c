#include <stdio.h>
#include <string.h>

#define maxsize 10000

typedef struct Stack {
	int arry[maxsize];
	int top;
} Stack;

void StackInit(Stack *);
void StackPush(Stack *, int);
int StackPop(Stack *);
int StackSize(Stack *);
int StackEmpty(Stack *);
int StackTop(Stack *);

int main () {
	int n, num;
	char command[6];
	Stack stack;
	scanf("%d", &n);
	StackInit(&stack);
	for (int i=0;i<n;i++) {
		scanf("%s", command);
		if (!strcmp(command, "push")) {
			scanf("%d", &num);
			StackPush(&stack, num);
		}
		else if (!strcmp(command, "pop")){
			printf("%d\n", StackPop(&stack));
		}
		else if (!strcmp(command, "size")) {
			printf("%d\n", StackSize(&stack));
		}
		else if (!strcmp(command, "empty")) {
			printf("%d\n", StackEmpty(&stack));
		}
		else if (!strcmp(command, "top")){
			printf("%d\n", StackTop(&stack));
		}

	}
	return 0;
}

void StackInit(Stack *stack) {
	stack->top=-1;
}

void StackPush(Stack *stack, int num) {
	stack->top++;
	stack->arry[stack->top]=num;
}

int StackPop(Stack *stack) {
	if(stack->top==-1) return -1;
	return stack->arry[(stack->top)--];
}

int StackSize(Stack *stack) {
	return stack->top+1;
}

int StackEmpty(Stack *stack) {
	if(stack->top==-1) return 1;
	else return 0;
}

int StackTop(Stack *stack) {
	if(stack->top==-1) return -1;
	return stack->arry[stack->top];
}
