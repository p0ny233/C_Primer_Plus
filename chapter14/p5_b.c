#define LEN 10

struct name {
    char fname[LEN];
    char lname[LEN];
};
struct student {
    struct name fullname;
    float average;
    float gradei[];
};

int main(void)
{
    return 0;
}
