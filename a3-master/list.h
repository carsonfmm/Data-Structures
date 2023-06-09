#define STRINGLENGTH		50

struct Node {

        void *data;
        struct Node *next;

};

struct Performance {

        unsigned int reads;
        unsigned int writes;
        unsigned int mallocs;
        unsigned int frees;

};

struct Performance *newPerformance();
void push ( struct Performance *performance, struct Node **list_ptr, void *src, unsigned int width );
void readHead ( struct Performance *performance, struct Node **list_ptr, void *dest, unsigned int width );
void pop ( struct Performance *performance, struct Node **list_ptr, void *dest, unsigned int width );
struct Node **next ( struct Performance *performance, struct Node **list_ptr );
int isEmpty ( struct Performance *performance, struct Node **list_ptr );

void freeList ( struct Performance *performance, struct Node **list_ptr );
void readItem ( struct Performance *performance, struct Node **list_ptr, unsigned int index, void *dest, unsigned int width );
void appendItem ( struct Performance *performance, struct Node **list_ptr, void *src, unsigned int width );
void insertItem ( struct Performance *performance, struct Node **list_ptr, unsigned int index, void *src, unsigned int width );
void prependItem ( struct Performance *performance, struct Node **list_ptr, void *src, unsigned int width );
void deleteItem ( struct Performance *performance, struct Node **list_ptr, unsigned int index );

int findItem ( struct Performance *performance, struct Node **list_ptr, int (*compar)(const void *, const void *), void *target, unsigned int width );
