#define Data int
struct Data_List
{
    Data val;
    struct Data_List * next;
};

struct Data_list* Build_Next(){
   struct Data_list *ptr = (struct Data_list*)malloc(sizeof(struct Data_list));
   return ptr;
}

void Add( Data V, struct Data_list * L){
    if (L == NULL) {
        L = Build_Next();
        L->val = V;
        L->next = NULL;
    } else { 
       Add(V,L.next);
    };
};

void Insert( Data V, struct Data_list * N){
     struct Data_list * L;
        L = Build_Next();
        L->val = V;
        L->next = N;
};


boolean Is_In_List( Data V, struct Data_list * L){
    if (L==NULL){
        return false;
    } else if(L->val == V){
        return true;   
    } else {
        return Is_In_List(V,L->next);    
    }
}
