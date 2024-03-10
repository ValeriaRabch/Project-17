#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
	//завдання 1

	FILE* file1, * file2;
	file1 = fopen("D:\\Valeria\\file.txt", "r");
	file2 = fopen("D:\\Valeria\\file2.txt", "r");


	fclose(file1);
	fclose(file2); 

	return 0;
}