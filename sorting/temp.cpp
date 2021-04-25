// Exercise 7B: Oscar Villagrana

#include <string>
using namespace std;

int main {

    int num = NULL;

    cout << "How many types store in num?" << endl;
    cin >> num >> endl;


    string *burritoPtr = new string [num];

    cout << "Enter burrito types: " << num endl;
    for (int i=0; i<num; i++)
        cin >> *(burritos+i);
}


string getData() {
    
    string numBurritos = NULL;


}

write
int *ptr


string names[3] = {"Carnitas", "Pollo", "Veggies"};
float prices[3] = {6.95, 6.25, 5.95};

int *namePtr = names[];
int *pricePtr = prices[]; 


for (int i = 0; i < 3; i++)
{    
    *(namePtr+i) = names[i] + "Especial";
    *(pricePtr+i) += 2;
}


// testReview.cpp


// 13?
int main2()
{
    int array[] = {2, 6, 8};
    cout << countMult(array,3);
}

int countMult(const int array[], int size)
{
    int count =0;

    for (int i=0; i<size; i++)
    {
        if (array[i] % 3 == 0)
            count += 1;
    }
    return count;
}

// 19

int total =0;

for (int i= 0; i < NUM_PLAYERS; i++)
{
    for (int j = 0; j<NUM_CARDS; j++)
    {
        total += cards [i][j];
    }
}

// 24

int findMax (int array [], int size)
{
    int max = array[0];

    for(int i=0; i<size; i++)
    {
        if(array[1] > max)
            max = array[i];
    }
    return max;
    
}


// ex.overload-operator.cpp

Student Student::operator==(Student newStudent)
this -> id == newStudent.get_id();

Student operator >(stydebt& s){
    return this -> gpa() > s.getgpt()
}



// b12 review for exam

// question 12
// counts how many words there are in one string by counting spaces
int wordCounter(char *str)
{
    int counter = 0;
    // count the spaces
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
            counter++;
    }
    // return the # spaces +1
    return counter +1;
}

// question 16
// function to change values of struct
void changeResort(Resort &r) // strickly known as pass by reference
{
    cout << ;
    cin >> r.resortName;
}

//
void changeResort(Resort *r) // strickly known as pass by pointer
{
    cout << ;
    cin >> r->resortName;
}

// question 24
//
class Date
{
    private:
        int month;
        int day;
        int year;
    public:
        Date(int,int,int);
        void displayDate() const;
}
//
void Date::displayDate() const
{
    cout << month << "/" << day << "/" << year;
}
//
Date::Date(int m,int d,int y)
{
    if(d>31 || d<1)
    {
        cout << "Error, bad day!";
        day=0;
    }
    else
    {
        day=d;
    }
    if(m<1 || m>12)
    {
        cout << "Error, bad month!";
        month=0;
    }
    else
    {
        month=d;
    }
}

//
int main3()
{
    date input(11,12,2019);
    input.displayDate();
}


//Ex.2B.cpp Oscar Villagrana
// This program checks your grades


#include <iostream>
using namespace std;


int main4()
{

    int num_assgmts = 0
    int total = 0
    int score = 0
    int avrg_score = 0
    
    cout << "How many assignments are there?: " << endl;
    cin << num_assgmts << endl;

    for ( int i = 1; i < num_assgmts + 1; ++1)
    {        
        cout << "What was your grade for assignment number " << i << " ? " << endl;
        cin >> real_score;
        int real_score = '0';
        while (real_score <= 0 && real_score >= 100)
        {
            cout << "Thats not a real score " << endl;
            cout << "What was your real grade for that assignment? " << endl;
            cin >> real_score;
        }
        total + real_score = total
    }



    // print out the total points scored and average score
    cout << "Total points: " << total << endl;
    total % num_assgmts = avrg_score
    cout << "Average Score: " << avrg_score << endl;

    // print out letter grade for the average score
    // standard grading formila:

    if (avrg_score <= 90 && >= 100)
        cout << "You get an A! Way to go " << endl;
    if (avrg_score <= 80 && >= 100)
        cout << "You get an B! That works " << endl;
    if (avrg_score <= 70 && >= 100)
        cout << "You get an C! Fair enough " << endl;
    if (avrg_score <= 60 && >= 100)
        cout << "You get an D! Good try " << endl;
    if (avrg_score >= 59 && >= 0)
        cout << "You get an F! Bummer " << endl;

}



    
