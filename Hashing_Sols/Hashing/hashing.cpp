//First version of the code
#include <stdio.h>
#include <string.h>
#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
	char name[MAX_NAME];
	int age;
	//we can more things later
}person;

person	*hash_table[TABLE_SIZE];

unsigned int hash(const char *name) {
	int lenght = strlen(name);
	unsigned int hash_value = 0;
	for (int i = 0; i < lenght;i++) {
		hash_value += name[i];
		hash_value *= name[i];
	}
	//hash_value %= 10;
	return hash_value;
}
void init_hash_table() {
	for (int i = 0;i < TABLE_SIZE;i++) {
		hash_table[i] = NULL;
	}
	// it make hash table empty;
}
void print_table() {
	printf("___Start___ \t \n");
	for (int i = 0; i < TABLE_SIZE;i++) {
		if (hash_table[i] == NULL) {
			printf("\t%i\t---\n",i);
		}
		else {
			printf("\t%i\t%s\n", i,hash_table[i]->name);
		}
	}
	printf("___End___ \t \n");
}
bool insert_To_hashtable(person* p) {
	if (p == NULL) return false;
	int index = hash(p->name);
	if (hash_table[index] != NULL) {

		return false;
	}
	hash_table[index] = p;
	return true;

}
person *delete_from_hashtable(char *name) {
	int index = hash(name);	
	if (hash_table[index]!=NULL &&
		strcmp(hash_table[index]->name, name)==0) {
			
		person *tmp = hash_table[index];
		hash_table[index] = NULL;
		return tmp;
	}
	else {
		return NULL;
	}
}
person* lookup_hashtable(char* name) {
	int index = hash(name);
	if (hash_table[index] != NULL && strcmp((hash_table[index]->name), name) == 0) {
		return hash_table[index];
	}
	else {
		return NULL;
	}
}
int main(void) {
	printf("Omer ==> %u \n", hash("Omer"));// we use %u because it's for unsigned integer
	printf("Faruk ==> %u \n", hash("Faruk"));
	printf("Emre ==> %u \n", hash("Emre"));
	printf("Gulcan ==> %u \n", hash("Gulcan"));
	printf("Mustafa Ilhan ==> %u \n", hash("Mustafa Ilhan"));
	printf("Kenan ==> %u \n", hash("Kenan"));
	printf("Cakir ==> %u \n", hash("Cakir"));
	printf("Taylan ==> %u \n", hash("Taylan"));
	/*
	init_hash_table();
	print_table();

	person omer = { "Omer" , 19};
	person faruk = {"Faruk" ,26 };
	person emre = { "Emre" ,  16 };

	insert_To_hashtable(&omer);
	insert_To_hashtable(&faruk);
	insert_To_hashtable(&emre);

	print_table();

	insert_To_hashtable(&omer);
	char name[] = "omer";
	delete_from_hashtable(name);
	insert_To_hashtable(&faruk);
	insert_To_hashtable(&emre);
	print_table();
	
	*/


	return 0;
}