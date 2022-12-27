char * s_gets1(char * s, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(s, n, stdin);

    if (ret_val)
    {
        while (*(s + i))
        {
            if (s[i] == '\n')
                s[i] = '\0';

            if (s[i] == '\0')
                while (getchar());

            i++;
        }
                
    }
    return s;
}

char * s_gets2(char * s, int n)
{

    char * ret_val;
    int i = 0;

    ret_val = fgets(s, n, stdin);

    if (ret_val)
    {
        while (s[i] != '\n' && s[i] != '\0')
            i++;

        if (s[i] == '\n')
            s[i] = '\0';
        else
            while (getchar())

    }


    return s;

}
