#include <iostream>

class Cell {
    public:
    void * value;
    Cell * next;
    Cell(void * val){
      value = val;
      next = NULL;
    }
};


class ArrayList{
  private:
  Cell * first;
  int size;
  public:
   ArrayList(){
     first = NULL;
     size = 0;
   }
   void append(int i){
     int *pt = new int;
     *pt = i;
   
     append(pt);
    
   }
   void append(void * val){
      

      Cell * newCell = new Cell(val);
    
      if(first == NULL){
        first = newCell;
      } else {
        Cell * pt;
        pt = first;
        while (pt->next != NULL){
            pt = pt->next;     
        }
        pt->next = newCell;
      }
      size += 1;
   }
   void * get(int i){

        if(i < 0 || i >= size){
            return NULL;
        }
        int j = 0;
        Cell * pt;
        pt  = first;
        while(j != i){
            pt = pt->next;
            j++;
        }
 
        return pt->value;
   }
   void * pop(){
        Cell * pt = first;
        if(size == 1){
           void * val = first->value;
            first = NULL;
            size = 0;
            return val;
        } else {
            while (pt->next->next != NULL){
                pt = pt->next;
            }
            Cell * last = pt->next;
            void * value = last->value;
            size -= 1;
            return value;
        }
   }
     void * pop(int i){
        if(i < 0 || i >= size){
            return NULL;
        }
        if(size == 1){
            void * val = first->value;
            first = NULL;
            size = 0;
            return val;
        } else if(i==0) {
          void * val = first->value;
         first = first->next;
         size -= 1;
         return val;
        } else {
        int j = 0;
        Cell * pt ;
        while(j != i){
            if(j == 0){
              pt = first;
            } else {
                pt = pt->next;
            }
            j++;
        }
        Cell * toRemove = pt->next;
        void * value = toRemove->value;
        return value;
        }
    }

   int getSize(){
    return size;
   }
};


int main(){
    //std::cout << "before calling constructor\n";
    ArrayList myArray;
    //std::cout << "after calling constructor\n";
    //std::cout << "after append\n";
    for(int i=0; i <10;i++){
      myArray.append(i);
    }
    std::cout << *(int *)(myArray.pop(0));
    std::cout << "\n";
    std::cout << *(int *)(myArray.get(0));
    std::cout << "\n";
    std::cout << *(int *)(myArray.pop());
    std::cout << "\n";
    std::cout << myArray.getSize();
    return 0;
}