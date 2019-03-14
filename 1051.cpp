#include<stdio.h>
#include<malloc.h>

struct stu
{
	char id[10];
	char name[16];
	int score[3];
	double ave_score;
};

int main()
{
	int N, i, k = -1;
	double max_score = 0;
	int course_score[3] = {0};
	scanf("%d", &N);
	struct stu *student = (struct stu *)malloc(sizeof(struct stu)*N);
	for(i = 0; i < N; i++)
	{
		scanf("%s %s %d %d %d", student[i].id, student[i].name, &student[i].score[0], &student[i].score[1], &student[i].score[2]);
		student[i].ave_score = (student[i].score[0] + student[i].score[1] + student[i].score[2]) / 3;
		if(student[i].ave_score > max_score)
		{
			max_score = student[i].ave_score;
			k = i;
		}
		course_score[0] += student[i].score[0];
		course_score[1] += student[i].score[1];
		course_score[2] += student[i].score[2]; 
	}	
	course_score[0] = course_score[0] / N;
	course_score[1] = course_score[1] / N;
	course_score[2] = course_score[2] / N; 
	printf("%d %d %d\n", course_score[0], course_score[1], course_score[2]);
	printf("%s %s %d %d %d", student[k].id, student[k].name, student[k].score[0], student[k].score[1], student[k].score[2]);
	free(student);
	return 0;	
} 
