class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int tot=1;
        for(int i=0;i<=(int)sentence.length()-(int)searchWord.length();)
        {
            bool bo=1;
            for(int j=0;j<searchWord.length();j++)if(searchWord[j]!=sentence[i+j]){i+=j,bo=0;break;}
            if(bo)return tot;
            while(sentence[i]!=' '&&i<sentence.length()-1)i++;
            i++;
            tot++;
        }
        return -1;
    }
};
