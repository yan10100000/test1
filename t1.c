#include <stdio.h>

char tmpfn[] = " ", tmpln[] = " ";
char tmpph[] = " ";

typedef struct 
{
    char fn[51];
    char ln[51];
}Name;

typedef struct 
{
    Name name;
    char phone[11];
}Contact;

void showName(Name n)
{
    printf("%s %s\t", n.ln, n.fn);
}

void showContact(Contact c)
{
    showName(c.name);
    printf("%s\n", c.phone);
}

void main()
{
    Contact a;
    scanf("%s %s %s", a.name.ln, a.name.fn, a.phone);
    showContact(a);
}