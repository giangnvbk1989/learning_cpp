typedef bool (*CMP)(int, int);
void swap(int&, int&);
bool larger(int a, int b);
bool smaller(int a, int b);
//void sort(int*, int, bool (*compare)(int, int));
void sort(int*, int, CMP);
