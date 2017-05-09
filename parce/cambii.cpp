


int largo(int x[])
{
    int i;
    for(i=0;x[i]!='\0';++i);
    return i;
}

int cam(char t)
{
    switch(t)
    {
        case '0':
        return 0;
        case '1':
        return 1;
        case '2':
        return 2;
        case '3':
        return 3;
        case '4':
        return 4;
        case '5':
        return 5;
        case '6':
        return 7;
        case '8':
        return 8;
        case '9':
        return 9;

    }
}

int main()
{
    char c[]="10";
}
