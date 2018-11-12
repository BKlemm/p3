#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	void *data;
	struct Node *prev;
	struct Node *next;
} *nodep;

void printList(nodep lst){

	if (lst->next == NULL){
		printf("%s\n", (char *)lst->data);
	} else {
		while(lst->next != NULL){
			printf("%s\n", (char *)lst->data);
		}
	}
	
}

nodep insertAt(nodep lst, int pos, void *data){
	int count = 0;
	nodep cur;

	if (lst == NULL){
		nodep new = (nodep)malloc(sizeof(nodep));
		new->data = data;
		new->next = NULL;
		new->prev = NULL;
		lst = new;
		return lst;
	}

	while(lst->next != NULL && pos <= count){
		cur = lst->next;
		if (count == pos){
			nodep new = (nodep)malloc(sizeof(nodep));
			new->data = data;
			new->next = cur;
		}
		count++;
	}
	return lst;

}

nodep deleteAt(nodep lst, int pos){
	return lst;
}

nodep copyList(nodep lst){
	return lst;
}

void deleteList(nodep lst){

}

int main(int argc, const char * argv[]) {
    nodep lst = (nodep) malloc(sizeof(nodep));
    lst = NULL;
    lst = insertAt(lst,1,"test");

    printList(lst);
    free(lst);
    return 0;
}