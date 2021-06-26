#include <stdio.h>
#include <string.h>

typedef struct QueueType{
	int arry[10000];
	int front, back;
} QueueType;

void QueueInit(QueueType *);
void QueuePush(QueueType *, int);
int QueuePop(QueueType *);
int QueueSize(QueueType *);
int QueueEmpty(QueueType *);
int QueueFront(QueueType *);
int QueueBack(QueueType *);

int main () {
	char command[6];
	int n, num;
	QueueType queue;
	scanf("%d", &n);
	QueueInit(&queue);
	for (int i=0;i<n;i++) {
		scanf("%s", command);
		if(!strcmp(command, "push")){
			scanf("%d", &num);
			QueuePush(&queue, num);
		}
		else if (!strcmp(command, "pop")){
			printf("%d\n", QueuePop(&queue));
		}
		else if (!strcmp(command, "size")){
			printf("%d\n", QueueSize(&queue));
		}
		else if (!strcmp(command, "empty")){
			printf("%d\n", QueueEmpty(&queue));
		}
		else if (!strcmp(command, "front")){
			printf("%d\n", QueueFront(&queue));
		}
		else if (!strcmp(command, "back")){
			printf("%d\n", QueueBack(&queue));
		}
	}
	return 0;
}

void QueueInit(QueueType *queue){
	queue->front=0;
	queue->back=0;
}

void QueuePush(QueueType *queue, int num){
	queue->arry[queue->back]=num;
	queue->back++;
}

int QueuePop(QueueType *queue){
	if(queue->back==queue->front) return -1;
	return queue->arry[queue->front++];
}

int QueueSize(QueueType *queue){
	if(queue->back==queue->front) return 0;
	return queue->back-queue->front;
}

int QueueEmpty(QueueType *queue){
	if(queue->back==queue->front) return 1;
	return 0;
}

int QueueFront(QueueType *queue){
	if(queue->back==queue->front) return -1;
	return queue->arry[queue->front];
}

int QueueBack(QueueType *queue){
	if(queue->back==queue->front) return -1;
	return queue->arry[queue->back-1];
}
