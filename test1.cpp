#include<iostream>
#define DEBUG 1

using namespace std;

struct Student
{
    int num;
    float score;

    struct Student * next;
};

int main()

{
    Student a, b, c;
    Student *p, *head;

    a.num = 10001; a.score = 90;
    b.num = 10002; b.score = 91;
    c.num = 10003; c.score = 92;

    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    p = head;

#ifdef DEBUG
    do
    {
      cout << p -> num <<" "<< p -> score << endl;
      p = p-> next;
    }while(p != NULL);
#endif

    while(p != NULL)
    {
        cout << p -> num <<" "<< p -> score << endl;
        p = p-> next;
    }

    return 0;

}