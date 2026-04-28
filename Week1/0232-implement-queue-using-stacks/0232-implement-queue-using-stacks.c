

typedef struct {
    int a[100];
    int top;
    int pop;
    int peek;

} Stack;
typedef struct {
    Stack st1;
    Stack st2;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* qu = (MyQueue*)malloc(sizeof(MyQueue));
    qu->st1.top = 0;
    qu->st2.top = 0;
    return qu;
} 

void myQueuePush(MyQueue* obj, int x) {
  int now = obj->st1.top;
  obj->st1.a[obj->st1.top++] = x;
}

int myQueuePop(MyQueue* obj) {

    if (obj->st2.top == 0){
        while (obj->st1.top > 0){
    obj->st1.top--;
    int valu = obj->st1.a[obj->st1.top];
    obj->st2.a[obj->st2.top++ ] = valu;

    }
 }
obj->st2.top--;
return obj->st2.a[obj->st2.top];

}



int myQueuePeek(MyQueue* obj) {
    if (obj->st2.top == 0){
        while (obj->st1.top > 0){
    obj->st1.top--;
    int valu = obj->st1.a[obj->st1.top];
    obj->st2.a[obj->st2.top++ ] = valu;

    }
}
    return obj->st2.a[obj->st2.top - 1];
}


bool myQueueEmpty(MyQueue* obj) {
    return (obj->st1.top == 0 && obj->st2.top == 0);
}

void myQueueFree(MyQueue* obj) {
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/