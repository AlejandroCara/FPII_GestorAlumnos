#pragma once

typedef struct {

	int day;
	int month;
	int year;

} date;

typedef struct {

	char name[50];
	char DNI[8];
	char DNI_char;
	float mark;
	date dob;

} Student;

typedef struct node {

	struct node *prev; //previous
	Student std;
	struct node *next;

} StudenNode;

void addStudent();
void searchDNI();
void searchName();