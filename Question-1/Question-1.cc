/// <summary>
/// Question 1: This question requests you to fix all compile errors in the main function and any classes. Address 
/// the comments given inside the code. 
/// Your code should run and compile without any warnings or errors.
/// </summary>
/// <returns></returns>

#include <iostream>
#include <map>
#include <vector>
#include <initializer_list>

const int values[] = { 1,2,3,4,5 };
const int NVALS = sizeof values / sizeof(int);



class Foo {
    std::vector<int> mElements;
public:
    Foo(std::initializer_list<int> list)
    : mElements(list) {}
};

struct {
    int age;
    float weight;
} person;


void fn(const int** pp)
{
    printf("%p : %p : %d", pp, *pp, **pp);
}



int main() {

    int x = 10;
    int y = 15;
    cout << " " << (x,y) << std::endl;

    typedef map<int, double> valmap;

    valmap m;

    for (int i = 0; i < NVALS; i++)
        m.insert(make_pair(values[i], pow(values[i], .5)));

    m.insert(1, 2);

    int i = 1, j = 1;
    if ((i = !3) && (j == 1))
    {
        cout << "inside if statement\n";
    }

    int n = 1;
    int* p = &n;
    fn(p);

    // Initialise a person on the heap with the use of smart pointers (unique_ptr) instead.
    struct person* ptr;
    ptr = (struct person*)malloc(sizeof(struct person));
    ptr->age = 10;
    ptr->weight = 55.5;

    // Initialise with 5 integers 
    Foo foo;

    return 0;

}