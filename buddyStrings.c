bool buddyStrings(char* s, char* goal) {
    int slen = strlen(s);
    int glen = strlen(goal);
    if(slen!=glen){
        return false;
    }
    if(strcmp(s,goal)==0){
        int freq[26]={0};
        for(int i=0;i<slen;i++){
            freq[s[i]-'a']++;
            if(freq[s[i]-'a']>1){
                return true;
            }
        }
    }
    int first = -1;
    int second = -1;
    for(int i=0;i<slen;i++){
        if(s[i]!=goal[i]){
            if(first==-1){
                first = i;
            }
            else if(second==-1){
                second = i;
            }
            else{
                return false;
            }
        }
    }
    return (second != -1 && s[first] == goal[second] && s[second] == goal[first]);
}
