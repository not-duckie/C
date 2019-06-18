int main()
{
    int i,j;
    i=65;
    j=97;
    do
    {
        printf("%c=%d\t%c=%d\n",i,i,j,j);
        i++;
        j++;
    }

    while(i<=90&&j<=122);
    return 0;
}
