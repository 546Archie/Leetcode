typedef struct {
    int in_cnt;
    int in[30000];
    int min[1000];
    int min_cnt;
} MinStack;


MinStack* minStackCreate() {
    MinStack* stack;
    stack = (MinStack*)malloc(sizeof(MinStack));
    stack->in_cnt = 0;
    stack->min_cnt = 0;
    return stack;
}

void minStackPush(MinStack* obj, int val) {
    obj->in[obj->in_cnt] = val;
    obj->in_cnt++;
    if(obj->min_cnt==0){
        obj->min[obj->min_cnt] = val;
        obj->min_cnt++;
    }
    else{
        if(obj->min[obj->min_cnt-1] >= val){
            obj->min[obj->min_cnt] = val;        
            obj->min_cnt++;
        }
    }
}

void minStackPop(MinStack* obj) {
    if(obj->in_cnt==0)
        return;
    if(obj->min_cnt==0)
        ;//nothing
    else if(obj->in[obj->in_cnt-1]==obj->min[obj->min_cnt-1]){
        obj->min_cnt--;
    }
    obj->in_cnt--;
}

int minStackTop(MinStack* obj) {
    return obj->in[obj->in_cnt-1];
}

int minStackGetMin(MinStack* obj) {
    if(obj->min_cnt==0)
        return 0;
    return obj->min[obj->min_cnt-1];
}

void minStackFree(MinStack* obj) {
    free(obj);
}
