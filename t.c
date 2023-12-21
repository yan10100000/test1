#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef debug
typedef struct stu
{
    char name[21];
    int ID;
    char gender;
    struct stu *next;
} Stu, Stua[5];

typedef enum weekday{sun, mon, tue, wed, thu, fri, sat} Weekday;



int main()
{
    Stu John;
    Stu *pStu;

    //John.name = " ";
    scanf("%s", John.name);
    scanf(" %d %c", &John.ID, &John.gender);
    printf("%-20s%-5c%-10d\n", John.name, John.gender, John.ID);
}
#endif

char tmpstr[10000] = " ";

struct stu
{
	int ID;
	char gender;
	char *name;
}j = {554555, 'M', tmpstr}, d = {.name = "adsj", .gender = 'M', .ID = 12345};

typedef struct stu Stu; //將 struct stu 定義為新的資料型態 Stu

typedef struct
{
	int ID;
	char gender;
	char *name;
}Stu;

void main()
{
    Stu a;
    strcpy(tmpstr, "hlkjhlkjh");
    printf("d(prev) : %d\t%c\t%s\n", d.ID, d.gender, d.name);
    d = j;
    printf("d : %d\t%c\t%s\n", d.ID, d.gender, d.name);
}