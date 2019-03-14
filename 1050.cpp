#include<stdio.h>
#include<malloc.h>
struct stu
{
    char id[16];        
    char name[32];      
    int score[3];       
};
void input(struct stu *s)
{
    scanf("%s %s %d %d %d", s->id, s->name, &(s->score[0]), &(s->score[1]), &(s->score[2]));
}
void print(struct stu *s)
{
    printf("%s,%s,%d,%d,%d\n", s->id, s->name, s->score[0], s->score[1], s->score[2]);
}
int main()
{
    int n, i = 0;
    scanf("%d", &n);
	struct stu *student = (struct stu *)malloc(sizeof(struct stu)*n);
    for(i = 0; i < n; i++)
    {
        input(&student[i]);
    }
    for(i = 0; i < n; i++)
    {
        print(&student[i]);
    }
    free(student);
    return 0;
}

