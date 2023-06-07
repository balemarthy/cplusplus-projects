#include <iostream>

using namespace std;

const int MAX = 5;

class array{
  private:
    int arr[MAX];
  
  public:
    void insert(int pos, int num);
    void del(int pos);
    void revers();
    void display();
    void search(int num);
};

// inserts an element num at given position pos
void array::insert(int pos, int num) {
  int i;
  // shift elements to right
  for(i=MAX-1; i>=pos; i--) {
    arr[i] = arr[i-1];
  }
  
  arr[i] = num;
}

// deletes an element from the given position pos
void array::del(int pos) {
  int i;
  
  //skip to the desired position
  for(i=pos; i<MAX; i++) {
    arr[i-1] = arr[i]; 
  }
  
  arr[i-1] = 0;
}

