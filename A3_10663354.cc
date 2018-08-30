#include <iostream>
using namespace std;

int main()

{

float  examScore;
string Grade;

 cout<<"Enter your exam score: ";
 cin >> examScore;

if (examScore >= 80  && examScore < 101)

{
  Grade = "A";

 cout<< "Excellent,you scored an A";

}

 else if (examScore >=75 && examScore < 81)
{
 Grade= "B+";

 cout << "Good, you scored a B+";
}

 else if (examScore >=70 && examScore < 76)
{
 Grade = "B";

 cout<< "You scored a B";
}

 else if ( examScore >=65 && examScore < 71)
{
  Grade = "C+";

  cout << "You scored a C+";
}

 else if (examScore >=60 && examScore <66)

{
 Grade = "C";

 cout << "You scored a C";
}

 else if (examScore >=55 && examScore <61)
{
 Grade ="D+";

 cout << "You scored a D+";
}

 else if (examScore >= 50 && examScore <56)
{
 Grade = "D";

 cout << "You scored a D";
}

 else if (examScore >= 40 && examScore <51)

{
 Grade = "E";

 cout<< "You scored an E";

}


 else 

{

 Grade = "F";
 cout <<  "Better luck next time, you got an F";
}

return 0;
}
