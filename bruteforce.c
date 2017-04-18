void getGuess()
{
    const char chars[CHAR_COUNT+1] = "abcdefghijklmnopqrstuvwxyz";
    int i, j;
    int guessc[MAX_SIZE] = {0};
    char guess[MAX_SIZE+1];

    for(i = 1; i < MAX_SIZE ; guessc[i++] = -1);
    for(i = 1; i <= MAX_SIZE ; guess[i++] = '\0');

    while(1)
    {
        i=0;
        while(guessc[i]==CHAR_COUNT)
        {
            guessc[i]=0;
            guessc[++i]+=1;
        }

        for(j=0;j<=i;++j)
        {
            if(j < MAX_SIZE)
                guess[j]=chars[guessc[j]];
        }

        printf("%s\n",guess);

        ++guessc[0];
    }
}
