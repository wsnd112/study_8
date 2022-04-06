#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//typedef struct stu
//{
//	char name[20];
//	int age;
//}stu;
//int main()
//{
//	stu s1 = { "zjl",20 };
//	printf("%s\n",s1.name);
//	return 0;
//
//}
//struct Node
//{
//	int data;
//	//struct Node n;  error;
//	struct Node* next;
//};
//int main()
//{
//	printf("%d", sizeof(struct Node));
//	return 0;
//}
void* my_memcpy(void* e1, const void* e2, size_t sz)
{
    assert(e1 && e2);
    void* ret = e1;
    while (sz--)
    {
        *(char*)e1 = *(char*)e2;
        ++(char*)e1;
        ++(char*)e2;
    }
    return ret;
}
void* my_memmove(void* e1, void* e2, size_t sz)
{
    assert(e1 && e2);
    void* ret = e1;
    if (e1 > e2)
    {
        while (sz--)
        {
            *((char*)e1 + sz) = *((char*)e2 + sz);
        }
    }
    else
    {
        while (sz--)
        {
            *(char*)e1 = *(char*)e2;
            ++(char*)e1;
            ++(char*)e2;
        }
    }
    return ret;
}

typedef struct stu
{
    char name[20];
    int age;
}s;
int main()
{
    /*s arr1[] = { {"zhangsan",20},{"lisi",18} };
    s arr2[5] = { 0 };*/
    /* int arr1[] = { 1,2,3,4,5 };
     int arr2[6] = { 0,0,0,0,0,9 };
     my_memcpy(arr2, arr1, sizeof(arr1));*/
     /* int i;
      for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
      {
          printf("%d ", arr2[i]);
      }*/
    int arr[] = { 1,2,3,4,5,6,7,8,9 };
    //my_memcpy(&arr[2], arr, 20);
    my_memmove(&arr[2], arr, 20);
    //my_memmove(arr, &arr[2], 20);
    int i = 0;
    for (i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}