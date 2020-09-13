#include<stdio.h>
int sitnum(int, int, int *);
int main() {
	int a, b;
	int arr[40] = { 0, };
	//printf("첫 줄의 자릿 수를 입력 : ");
	scanf("%d", &a);
	//printf("고정석의 갯수 입력 : ");
	scanf("%d", &b);
	for (int i = 0; i < b; i++) {
		//printf("고정석 입력 : ");
		scanf("%d", &arr[i]);
	}
	printf("%d",sitnum(a, b, &arr[0]));
	return 0;
}
int sitnum(int a, int b, int *arr) {
	int o = 1, p = 1, sum = 0, count = 1, ae = 1;
	if (a == b) {
		return 1;
	}
	if (b==0) {
		while (count < a) {
			sum = o + p;
			o = p;
			p = sum;
			count++;
		}
		ae *= p;
	}
	else {
		for (int i = 0; i < b; i++) {
			if (i == 0) {
				while (count < arr[i] - 1) {
					sum = o + p;
					o = p;
					p = sum;
					count++;
				}
				ae *= p;
			}
		}
		for (int i = 1; i < b; i++) {
			if (i > 0 && (arr[i] > arr[i - 1] || arr[i] == arr[b - 1])) { //고정석과 고정석 사이
			o = 1, p = 0;
				while (arr[i - 1] < arr[i]) {
					sum = o + p;
					o = p;
					p = sum;
					arr[i - 1] += 1;
				}
				ae *= p ;
			}
		}
		if(arr[b-1]<a) {
			o = 1, p = 1;
			while (arr[b - 1] < a-1) {
				sum = o + p;
				o = p;
				p = sum;
				arr[b - 1] += 1;
			}
				ae *= p;
		}
	}
	return ae;
}
