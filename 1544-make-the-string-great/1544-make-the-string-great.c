char* makeGood(char* s) {
    int n = strlen(s);

    char* result = (char*)malloc((n+1)*sizeof(char*));
    int top = 0 ;

    for (int i = 0 ; i < n ; i ++){
        char wordnow = s[i];
        if (top > 0 && abs(result[top - 1] - wordnow ) == 32){
            top--;
        } else{
            result[top] = wordnow;
            top ++ ;
        }
    }
    result[top] = '\0';
    return result;
}
