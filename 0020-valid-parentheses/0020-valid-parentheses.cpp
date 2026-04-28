bool isValid(char* s) {
    int n = strlen(s);
    char *stack = (char *)malloc(n* sizeof(char));
    int top = -1 ;


    for ( int i =0 ; i < n ; i ++){
        char c = s[i];

        if ( c == '[' || c == '('  ||  c == '{'){
            top ++ ;
            stack[top] = c;
        } else{
            if ( top == -1){
                free(stack);
                return false;
            }

            char open = stack[top];

            if ((c == ']') && (open == '[') ||
                (c == '}') && (open == '{') ||
                (c == ')') && (open == '(')) {
    
     top --;
                } else {
                    free(stack);
                    return false;
                }
        }
    }

    bool result = (top == -1);
    free(stack);
    return result;
}