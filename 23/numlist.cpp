#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Call getCall();
void print(struct Call);

struct Call {
	char name[100];
	char num[100];
	char age[30];
};



int main() {
	int i = 0, n = 2;
	int k;
	struct Call person[10];

	do {
		printf("How many people do you want (1-10) = ");
		scanf("%d", &k);
	} while (k < 0 || k>10);

	n = k;
	printf("Add contect\n");
	for (i = 0; i < n; i++) {

		person[i] = getCall();

	}
	printf("\nList\n");
	for (i = 0; i < n; i++) {
		print(person[i]);

	}
	printf("----successful----\n");

}

struct Call getCall() {
	struct Call calling;

	printf("Name : ");
	scanf("%s", &calling.name);

	printf("Phone number : ");
	scanf("%s", &calling.num);

	printf("Age : ");
	scanf("%s", &calling.age);

	return calling;

}
void print(struct Call call_list) {


	printf("%s :  %s  %s year old\n", call_list.name, call_list.num, call_list.age);

}

