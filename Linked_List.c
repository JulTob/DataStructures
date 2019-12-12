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

void Add( Data V, struct Data_list L){
    if (L.next == NULL) {
        L.next = Build_Next();
        L.Data = V;
    } else { 
       Add(V,&L.next);
    };
};
