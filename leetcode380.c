
typedef struct {
    int  *arr;
    int top;
} RandomizedSet;


RandomizedSet* randomizedSetCreate() {
    int size = 10000;
    RandomizedSet *set = (RandomizedSet*)malloc(sizeof(RandomizedSet));
    set->arr = (int*)malloc(sizeof(int)*size);
   
    
        set->top=-1;
        return set;
    
  
}

bool randomizedSetInsert(RandomizedSet* obj, int val) {
    for(int i =0;i<obj->top + 1;i++){
        if(obj->arr[i]==val){
            return false;
        }
    }
    obj->top += 1;
    obj->arr[obj->top]=val;
    return true;
}

bool randomizedSetRemove(RandomizedSet* obj, int val) {
    for(int i =0;i<obj->top + 1;i++){
        if(obj->arr[i]==val){
            /*
            for(int j = i;j<obj->top;j++){
                obj->arr[j]=obj->arr[j+1];//shifting the array // O of N
            }
            */
            obj->arr[i] = obj->arr[obj->top]; // O of 1
            obj->top -= 1;
            return true;
        }
    }
    return false;
}

int randomizedSetGetRandom(RandomizedSet* obj) {
    int random = rand()%(obj->top+1);
    return obj->arr[random];
}

void randomizedSetFree(RandomizedSet* obj) {
    free(obj->arr);
    free(obj);
}

/**
 * Your RandomizedSet struct will be instantiated and called as such:
 * RandomizedSet* obj = randomizedSetCreate();
 * bool param_1 = randomizedSetInsert(obj, val);
 
 * bool param_2 = randomizedSetRemove(obj, val);
 
 * int param_3 = randomizedSetGetRandom(obj);
 
 * randomizedSetFree(obj);
*/