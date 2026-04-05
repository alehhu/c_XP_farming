// Forward declaration: User knows it exists but not what's inside
typedef struct List List; 

// Public API
List* list_create();
void  list_add(List *l, int value);
void  list_destroy(List *l);
