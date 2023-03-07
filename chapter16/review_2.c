#define NEW(X) (X + 5)

int main(void)
{

    int y = 2;
    int berg = 3;
    int lob = 4;
    double est;
    int nlip;
    

    y = NEW(y); // error
    berg = NEW(berg) * lob;
    est = NEW(berg) / NEW(y);
    nlip = lob * NEW(-berg);

    return 0;
}
