struct sorting
{
        void *array;
        int size_array,size_element;
        int (*compare)(void *,void *);

};


void init(struct sorting *,void *,int,int,int (*)(void *,void *));
int compare_int(void *,void *);
int compare_float(void *,void *);

