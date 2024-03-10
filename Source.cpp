#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
	//завдання 1

	/*FILE* file1, * file2;
	file1 = fopen("D:\\Valeria\\file.txt", "r");
	file2 = fopen("D:\\Valeria\\file2.txt", "r");

	char count1, count2;
	bool audit = true;
	int index1 = 0, index2 = 0;

	count1 = getc(file1);
	count2 = getc(file2);

	for (; count1 != EOF;) {
		if (count2 == EOF) {
			break;
		}

		char arr1[50], arr2[50];


		for (int i = 0; count1 != '\n'; i++) {
			if (count2 == '\n') {
				if (count1 != '\n') {
					while (count1 != '\n') {
						count1 = getc(file1);
					}
				}
				audit = false;
				break;
			}

			arr1[i] = count1; index1++;
			arr2[i] = count2; index2++;
			if (count1 != count2) {
				audit = false;
			}
			count1 = getc(file1);
			count2 = getc(file2);
			if (count1 == EOF) {
				if (count2 != EOF) {
					audit = false;
					while (count2 != EOF) {
						arr2[i] = count2; index2++;
						count2 = getc(file2);
					}
				}
				break;
			}
			if (count2 == EOF) {
				if (count1 != EOF) {
					audit = false;
					while (count1 != EOF) {
						arr1[i] = count1; index1++;
						count1 = getc(file1);
					}
				}
				break;
			}

			if (count1 == '\n') {
				if (count2 != '\n') {
					audit = false;
					while (count2 != '\n') {
						count2 = getc(file2);
					}
				}
			}
		}
		if (audit == false) {
			for (int i = 0; i < index1; i++) {
				cout << arr1[i] << ' ';
			}
			cout << endl;
			for (int i = 0; i < index2; i++) {
				cout << arr2[i] << ' ';
			}
			cout << endl;
			audit = true;
		}
		index1 = 0; index2 = 0;
		count1 = getc(file1);
		count2 = getc(file2);
	}

	fclose(file1);
	fclose(file2); */

	return 0;
}