#include <stdio.h>

#define LEN 10
#define CSIZE 4

struct name {
    char fname[LEN];
    char lname[LEN];
};

struct student {
    struct name info;
    float average;
    float grade[3];
};

int main(void)
{

    struct student arr[CSIZE] = 
    {
        {
            .info={.fname="fname1", .lname="lname1"}, 
            .average=0.0,
            .grade={1.1, 2.2, 3.3}
        },
        {
            .info={.fname="fname2", .lname="lname2"}, 
            .average=0.0,
            .grade={1.1, 2.2, 3.3}
        },
        {
            .info={.fname="fname3", .lname="lname3"}, 
            .average=0.0,
            .grade={1.1, 2.2, 3.3}
        },
        {
            .info={.fname="fname4", .lname="lname4"}, 
            .average=0.0,
            .grade={1.1, 2.2, 3.3}
        }
    };

    



    return 0;
}
