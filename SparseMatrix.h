#define MAXSIZE 100
#define OK 1
#define ERROR 0

typedef int ElemType;

typedef struct
{
    int i,j;
    ElemType e;
}Triple;


typedef struct
{
    Triple data[MAXSIZE+1];
    int mu,nu,tu;
}TSMatrix;


    
