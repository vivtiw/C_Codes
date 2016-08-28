int compare_int(void *p,void *q)        // Compare ints
{
        int ele1 = *(int *)p;
        int ele2 = *(int *)q;
        if(ele1<ele2)
                return -1;
        if(ele1>ele2)
                return 1;
        return 0;
}

int compare_float(void *p,void *q)      // Compre Floats
{
        float ele1 = *(float *)p;
        float ele2 = *(float *)q;
        if(ele1<ele2)
                return -1;
        if(ele1>ele2)
                return 1;
        return 0;
}
