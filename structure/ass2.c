#include <stdio.h>
struct Student
{
	char name[30];
	int roll;
	int marks[5];
	int totalMarks;
	float percent;
};
// a.   Find  total  marks  and  percent  of  all  n  students.
void totalmarkpercent(struct Student students[], int n_stud)
{
	int i, m;
	for (i = 0; i < n_stud; i++)
	{
		students[i].totalMarks = 0;
		students[i].percent = 0.0;
		for (m = 0; m < 5; m++)
		{
			students[i].totalMarks += students[i].marks[m];
			students[i].percent += students[i].marks[m] * 0.2;
		}
	}
}

// b.   Display  details  of  a  student  with  a  given  roll  number.
void displaydetailbyroll(struct Student students[], int n_stud, int roll)
{
	int i, m;
	for (i = 0; i < n_stud; i++)
	{
		if (roll == students[i].roll)
		{
			printf("The student's name: %s\n", students[i].name);
			printf("The student's roll number: %d\n", students[i].roll);
			printf("The student's marks\n");
			for (m = 0; m < 5; m++)
			{
				printf("%d ", students[i].marks[m]);
			}
			printf("\nThe student's total marks: %d\n", students[i].totalMarks);
			printf("The student's percent: %.2f\n", students[i].percent);
			printf("\n");
			break;
		}
	}
}
// c.   Display  the  details  for  all  the  students  having  percent  in  a  given range.
void displaydetailpercent(struct Student students[], int n_stud, float pct1, float pct2)
{
	int i, m;
	for (i = 0; i < n_stud; i++)
	{
		if (students[i].percent >= pct1 && students[i].percent <= pct2)
		{
			printf("The student's name: %s\n", students[i].name);
			printf("The student's roll number: %d\n", students[i].roll);
			printf("The student's marks\n");
			for (m = 0; m < 5; m++)
			{
				printf("%d ", students[i].marks[m]);
			}
			printf("\nThe student's total marks: %d\n", students[i].totalMarks);
			printf("The student's percent: %.2f\n", students[i].percent);
			printf("\n");
		}
	}
}
// d.   Sort  the  array  in  ascending order of marks.
void sortarr(struct Student students[], int n_stud)
{
	int i, j, m;
	for (i = 0; i < n_stud - 1; i++)
	{
		for (j = 0; j < n_stud - i - 1; j++)
		{
			if (students[j].totalMarks > students[j + 1].totalMarks)
			{
				// swap temp and elements[i]
				struct Student temp = students[j];
				students[j] = students[j + 1];
				students[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < n_stud; i++)
	{
		printf("The student's name: %s\n", students[i].name);
		printf("The student's roll number: %d\n", students[i].roll);
		printf("The student's marks\n");
		for (m = 0; m < 5; m++)
		{
			printf("%d ", students[i].marks[m]);
		}
		printf("\nThe student's total marks: %d\n", students[i].totalMarks);
		printf("The student's percent: %.2f\n", students[i].percent);
		printf("\n");
	}
}

int main()
{
	struct Student students[100];
	int n_stud, roll, i, m;
	float pct1, pct2;
	printf("Enter the number of students: ");
	scanf("%d", &n_stud);

	for (i = 0; i < n_stud; i++)
	{
		fflush(stdin);
		printf("Enter the student's name: \n");
		scanf("%s", students[i].name);
		printf("Enter the student's roll number: \n");
		scanf("%d", &students[i].roll);
		for (m = 0; m < 5; m++)
		{
			printf("Enter the student's mark %d \n: ", (m + 1));
			scanf("%d", &students[i].marks[m]);
		}
		printf("\n");
	}
	totalmarkpercent(students, n_stud);
	printf("Enter the student's roll number to search: ");
	scanf("%d", &roll);
	displaydetailbyroll(students, n_stud, roll);

	printf("Enter the student's percent 1 to search: ");
	scanf("%f", &pct1);
	printf("Enter the student's percent 2 to search: ");
	scanf("%f", &pct2);
	displaydetailpercent(students, n_stud, pct1, pct2);

	printf("\nSort  the  array  in  ascending order of marks.\n");
	sortarr(students, n_stud);
	printf("\n");
	return 0;
}