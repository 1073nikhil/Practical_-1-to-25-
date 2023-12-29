
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 100
#define MAX_ADDRESS_LEN 200
#define MAX_PEOPLE 50

    typedef struct
        {
            char name[MAX_NAME_LEN];
            char address[MAX_ADDRESS_LEN];
        }
    Person;
    
    int comparePersons(const void *a, const void *b)
        {
            Person *personA = (Person *)a;
            Person *personB = (Person *)b;
            return strcmp(personA->name, personB->name);
        }
    
    void main() 
        {
            Person people[MAX_PEOPLE];
            int n;
            printf("Enter the No. of people (max %d): ", MAX_PEOPLE);
            scanf("%d%*c", &n); 

            for (int i = 0; i < n; i++) 
                {
                    printf("Enter The name for person %d: ", i + 1);
                    fgets(people[i].name, MAX_NAME_LEN, stdin);
                    people[i].name[strcspn(people[i].name, "\n")] = 0; 
                    printf("Enter The address for person %d: ", i + 1);
                    fgets(people[i].address, MAX_ADDRESS_LEN, stdin);
                    people[i].address[strcspn(people[i].address, "\n")] = 0; 
                }
            qsort(people, n, sizeof(Person), comparePersons);
            printf("\nSorted list:\n");

            for (int i = 0; i < n; i++) 
                {
                     printf("Name: %s, Address: %s\n", people[i].name, people[i].address);
                }
    
        }
