void getGuess(int start, vector<string> charlist) {

    //all chars
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

    //add words to chars
    for (unsigned long long k = 0; k < charlist.size(); ++k) {
        chars.push_back(charlist[k]);
    }

    int count{0};
    unsigned long long size{chars.size()};

    string guess{""};

    //j = pw-zeichen anzahl
    for (int j = minLength; j <= maxlength; ++j) {

        //Guess:
        for (unsigned long long x = 0; x < pow(size, j); ++x) {

            guess = "";
            for (int h = 1; h < j; ++h) {
                guess += chars[(int) (x / pow(size, j - h)) % size];
            }
            guess += chars[x % size];
            //print guess
            printf("%s\n", guess.c_str());
            //}
        }
    }
}


