for(k=1;k<length;++k)
{
    x=(rand()/RAND_MAX);

    for(j=0;j<128;++j)
    {
        if(x<=(stochMatrix[i][j]+totalProb))
        {
            guess[k]=j;
            i=j;
            totalProb=0;
            break;
        }
        totalProb+=stochMatrix[i][j];
    }
}

