#include<iostream> 
#include<cstring> 
#inlcdue<vector> 
#include<iomanip
#include<fstream>


using namespace std; 

struct Node{

char firstname[100]; 
char lastname[100];
float gpa;
int id; 


Node* next = NULL; 


}
 



Node** addpeople(Node** table, int &currentid, int &size);
 
