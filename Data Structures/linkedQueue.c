#include <stdio.h>
#include <stdlib.h>

struct qnode {
    int data;
    int prio;
    struct qnode *next;
};

void quein(struct qnode **, struct qnode **, int, int);

int quedel(struct qnode **, struct qnode **, int *, int *);

int main(void)
{
    int tab[10] = {2, 8, 3, 5, 4, 9, 6, 7, 1, 0};
    struct qnode *first = NULL;
    struct qnode *last = NULL;
    int val, prio, i;

    for (i = 0; i < 10; i++)
    {
        val = tab[i], prio = i;
        printf("Inserting: value: %d with priority: %d\n", prio, val);
        quein(&first, &last, val, prio);
    }

    printf("=-=\n");

    for (i = 0; i < 11; i++)
    {
        val = tab[i], prio = i;
        if (quedel(&first, &last, &val, &prio) != -1)
            printf("Deleting: value: %d with priority: %d\n", prio, val);
    }

    return 0;
}

int quedel(struct qnode **first, struct qnode **last, int *prio, int *val)
{
    struct qnode *tmp = NULL;

    if ((NULL == *last) && (*last == *first))
    {
        fprintf(stderr, "Empty queue.....\n");
        return -1;
    }

    *val = (*first)->data, *prio = (*first)->prio;
    tmp = *first, *first = (*first)->next;

    if (*last == tmp)
        *last = (*last)->next;
    free(tmp);

    return 0;
}

void quein(struct qnode **first, struct qnode **last, int prio, int val)
{
    struct qnode *tmp = NULL;
    struct qnode *tmp1 = NULL;

    tmp = (qnode *) malloc(sizeof(struct qnode));

    tmp->data = val;
    tmp->prio = prio;
    tmp->next = NULL;

    if (*last == NULL)
    {
        *last = tmp;
        *first = *last;
    } else
    {
        if ((*first)->prio < prio)
        {
            tmp->next = *first;
            *first = tmp;
        } else
        {
            if ((*last)->prio > prio)
            {
                (*last)->next = tmp;
                *last = tmp;
            } else
            {
                tmp1 = *first;
                while ((tmp1->next)->prio >= prio)
                {
                    tmp1 = tmp1->next;
                }
                tmp->next = tmp1->next;
                tmp1->next = tmp;
            }
        }

    }

    return;
}