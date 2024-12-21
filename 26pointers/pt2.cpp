#include <iostream>

using namespace std;

int main() {
    /*
    // Your code here
    int arr[5] = {1, 2, 3, 4, 5};
    cout<< "address of 1st memmory bllock is "<<arr<<endl;//direct name represents addr of arr
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;//actually the addr of 1st element in arr is the addr of whole arr

    cout<< "address of 1st memory block is " << &arr[0]<<endl;

    cout<<"4th"<<*arr<<endl; // * derefrence the value it carries & gives reference 
    cout<<"5th"<<*arr +1<<endl;// value at arr plus 1[1st position +1]
    cout<<"6th"<<*(arr+1)<<endl;// value at 2nd posion +1
    cout<<"7th"<<*(arr)+1<<endl;//
    cout<<"8th"<<arr[2]<<endl;  // arr[i]= *(arr+i)
    cout<<"9th"<<*arr+2<<endl; //  i[arr]= *(i+arr)
    

   int temp[10];
   cout << sizeof(temp)<<endl;
   
    cout << (&temp)<<endl;
    cout << sizeof(&temp)<<endl;
    cout << sizeof(*temp)<<endl;
    int *ptr = &temp[0];
    cout << sizeof(ptr)<<endl; 
    cout << sizeof(*ptr)<<endl;
    cout << sizeof(&ptr)<<endl;
    
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p = a;
    cout <<&a<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    //symbol table is a table that stores the address of the variables
    //symbol table contents cannot be changed
    //pointer is a variable that stores the address of another variable
    //a=a+1; //this is not possible
    p=p+1; //this is possible
    cout<<a<<endl;

    //char array
    char arr[6] = {'a', 'b', 'c', 'd', 'e'};
    char arr1[6] = "abcde";//both are same
    cout << arr1 << endl;
    //when we print the char array it prints the whole array
    // when we print number array it prints the address of the array
    char *c = &arr[0];
    cout << c << endl;
    cout << &c<< endl;
    
    char temp='a';
    char *ptr = &temp;
    cout << ptr<<endl;
    //prints the value of temp will not stopp untill it finds null

    di
    

    return 0;
}