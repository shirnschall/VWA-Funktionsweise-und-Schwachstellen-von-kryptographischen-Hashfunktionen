void getGuess(const vector<string>& charlist){
    vector<string> chars{"a", "b", "c", "d", "e", "f", "g", "h", "i",
                         "j", "k", "l", "m", "n", "o", "p", "q", "r",
                         "s", "t", "u", "v", "w", "x", "y", "z", "A",
                         "B", "C", "D", "E", "F", "G", "H", "I", "J",
                         "K", "L", "M", "N", "O", "P", "Q", "R", "S",
                         "T", "U", "V", "W", "X", "Y", "Z", "0", "1",
                         "2", "3", "4", "5", "6", "7", "8", "9", "!",
                         "@", "#", "$", "%", "^", "&", "*", "(", ")",
                         "-", "_", "+", "=", "~", "`", "[", "]", "{",
                         "}", "|","\\", ":", ";","\"", "'", "<", ">",
                         ",", ".", "?", "/", " "};

    for(unsigned long k=0; k<charlist.size(); chars.push_back(charlist[k++]));

    int i;
    int guessc[MAX_SIZE] = {0};
    string guess{""};

    for(i = 1; i < MAX_SIZE ; guessc[i++] = -1);

    while(1)
    {
        guess="";

        i=0;
        while(guessc[i]==CHAR_COUNT)
        {
            guessc[i]=0;
            guessc[++i]+=1;
        }

        i=0;
        while(guessc[i]!=-1 && i< MAX_SIZE)
        {
            guess+=chars[guessc[i]];
            ++i;
        }

        printf("%s\n",guess.c_str());

        ++guessc[0];
    }
}
