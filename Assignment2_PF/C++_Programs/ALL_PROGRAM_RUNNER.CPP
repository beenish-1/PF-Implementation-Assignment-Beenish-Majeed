// Output Preview Link:
// https://www.programiz.com/online-compiler/6puBzbz6BYIwe


#include<iostream>
#include <cmath>
using namespace std;

// Assign and Print Three Variables
int Program_1(){
    int a = 10, b = 20, c = 30;

    cout <<"The Value of a=" << a << ",b=" << b << " and c=" << c << "\n";   
    return 0;
}
// Display Message “C Language is Powerful...”
int Program_2(){ 
    cout << "C Language is Powerful Programming Language\n";
    return 0;
}
 //Interchange Two Variable Values
int Program_3(){
    int a = 5, b = 10 , temp;
    cout << "Before Interchange a=" << a << " and b=" << b << "\n";
    temp = a;
    a = b;
    b = temp;
    cout << "After Interchange a=" << a << " and b=" << b << "\n";
    return 0;
}
//Convert Years into Months
int Program_4(){
    int year , month;
    cout << "Enter year No.: ";
    cin >> year;
    month = year * 12;
    cout << "Month in " << year << " year is " << month << " months\n";
    return 0;
}
//Sum and Product of Two Numbers
int Program_5(){
    int x, y, sum, Product;
    cout <<" Enter two numbers: ";
    cin >> x >> y;
    sum = x+y;
    Product = x*y;
    cout << "Sum of " << x << " and " << y << " is " << sum << " \n";
    cout << "Product of " << x << " and " << y << " is " << Product << " \n";
    return 0;
}
// Input age in years, calculate age in months and print
int Program_6(){
    int age, month;
    cout << "Enter age in years: ";
    cin >> age;
    month = age * 12;
    cout << "Age in months is " << month << " \n";
    return 0;
}
// Input student marks, calculate total and average
int Program_7(){
    int roll_no, marks1, marks2, marks3,total;
    float avg;
    cout << "Enter Roll No.: ";
    cin >> roll_no;
    cout << "Enter marks of 'Programming Fundamentals' subject: ";
    cin >> marks1;
    cout << "Enter marks of ' Introduction to Computing' subject: ";
    cin >> marks2;
    cout << "Enter marks of 'Computer Graphics' subject: ";
    cin >> marks3;

    total = marks1 + marks2 + marks3;
    avg = total / 3.0;
    cout << "Total marks of all subject is: " << total << "\n";
    cout << "Average: " << avg << "\n";
    return 0;
}
// Convert Fahrenheit to Celsius and print
int Program_8(){
    float f, c;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    c = 5.0/9*(f - 32);
    cout << "Temperature in Celsius is: " << c << "\n";
    return 0;
}
// Find the maximum number among four numbers
int Program_9(){
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    int maximum = a;

    if(b > maximum) maximum = b;
    if(c > maximum) maximum = c;
    if(d > maximum) maximum = d;

    cout << "Maximum number is: " << maximum << "\n";
    return 0;
}

// Convert 2.5 miles to kilometers and print
int Program_10(){
    float mile, km;
    cout << "Enter distance in miles: ";
    cin >> mile;
    km = mile * 1.609;
    cout << "Distance in kilometers is: " << km << "\n";
    return 0;
}
// Calculate average of two integer variables
int Program_11(){
    float avg;
    int a=10, b=5;
    avg = (a+b)/2.0;
    cout<<"average of 'a' and 'b' is: "<<avg<<"\n";
    return 0;
}
// Find volume of a cylinder using const
int Program_12(){
    const double pi=3.1417;
    float radius, height, volume;
    cout<<"Enter radius of cylinder: ";
    cin>>radius;
    cout<<"Enter height of cylinder: ";
    cin>>height;
    volume = pi*radius*radius*height;
    cout<<"Volume of cylinder is: "<<volume<<"\n";
    return 0;
}
// Calculate area of a circle using #define directive
int Program_13(){
    #define pi 3.1417
    float radius, area;
    cout<<"Enter radius of circle: ";
    cin>>radius;
    area = pi*radius*radius;
    cout<<"Area of circle is: "<<area<<"\n";
    return 0;
}
// Convert millimeters to inches and print
int Program_14(){
    float mm, inch;
    cout<<"Enter distance in millimeters: ";
    cin>>mm;
    inch = mm/25.4;
    cout<<"Distance in inches is: "<<inch<<"\n";
    return 0;
}
// Swap values of two variables
int Program_15(){
    int a, b, temp;
    cout<<"Enter value of 'a': ";
    cin>>a;
    cout<<"Enter value of 'b': ";
    cin>>b;
    temp = a;
    a = b;
    b = temp;
    cout<<"Value of 'a' after swapping is: "<<a<<"\n";
    cout<<"Value of 'b' after swapping is: "<<b<<"\n";
    return 0;
}
// Multiple assignment of a, b, c and calculate product
int Program_16(){
    int a, b, c, product;
    a = b = c =3;
    product = a*b*c;
    cout<<"Product of 'a', 'b' and 'c' is: "<<product;
    return 0;
}
// Separate integral and fractional parts of a real number
int Program_17(){
    float num=15.58971;
    int integral, fractional;
    integral=num;
    fractional=num-integral;
    cout<<"Integral part of "<<num<<" is: "<<integral<<"\n";
    cout<<"Fractional part of "<<num<<" is: "<<fractional<<"\n";
    return 0;
}
// Compute s using formula with variables vi and t
int Program_18(){
    float  vi=10.0,  t=5.0, a=4.8, s;
    s=vi*t+0.5*a*t*t;
    cout<<"Value of s is: "<<s;
    return 0;
}
// Calculate age in months and days from age in yearses
int Program_19(){
    int age = 18, months, days;
    months = age * 12;
    days = age * 365;
    cout<<"Age in months is: "<<months<<"\n";
    cout<<"Age in days is: "<<days;
    return 0;
}
// Print formatted output using escape sequences
int Program_20(){
    cout<<"C:\\Windows>" <<"\n";
    cout<<"'P'\t'A'\t'K'\n";
    cout<<"\"Pakistan\""<<"\n";
    return 0;
}
// Print decreasing X pattern using '\n' escape sequence
int Program_21(){
    cout<<"XXXXX\n";
    cout<<"XXXX\n";
    cout<<"XXX\n";
    cout<<"XX\n";
    cout<<"X\n";
    return 0;
}
// Input and print student details (name, age, height, gender)
int Program_22(){
    string name;
    int age;
    float height;
    char gender;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: "; 
    cin>>age;
    cout<<"Enter height: "; 
    cin>>height;        
    cout<<"Enter gender: ";
    cin>>gender;
    cout<<"\nName: " <<name<<endl;
    cout<<"Age: " <<age<<endl;
    cout<<"Height: " <<height<<endl;
    cout<<"Gender: " <<gender<<endl;
    return 0;
}
// Input circle radius, calculate area and circumference
int Program_23(){
    #define pi 3.1417
    float radius, area, circumference; 
    cout<<"Enter radius of circle: ";
    cin>>radius;
    area = pi*radius*radius;
    circumference = 2*pi*radius;
    cout<<"\nArea of circle is: "<<area<<"\n";
    cout<<"Circumference of circle is: "<<circumference<<"\n";
    return 0;
}
// Input marks of five subjects, calculate total and average
int Program_24(){
    int a, b, c, d, e, total;
    float avg;
    cout<<"Enter marks of subject 1: ";
    cin>>a;
    cout<<"Enter marks of subject 2: ";
    cin>>b;
    cout<<"Enter marks of subject 3: ";
    cin>>c;
    cout<<"Enter marks of subject 4: ";
    cin>>d;
    cout<<"Enter marks of subject 5: ";
    cin>>e;
    total = a+b+c+d+e;
    avg = total/5.0;
    cout<<"\nTotal marks is: "<<total<<"\n";
    cout<<"Average is: "<<avg<<"\n";
    return 0;
}
// Input three sides of triangle and calculate area using Heron’s formula
int Program_25(){
    float a, b, c, s, area;
    cout<<"Enter side 1 of triangle: ";
    cin>>a;
    cout<<"Enter side 2 of triangle: ";
    cin>>b;
    cout<<"Enter side 3 of triangle: ";
    cin>>c;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"\nArea of triangle is: "<<area<<"\n";
    return 0;
}
// Convert rupees to dollars
int Program_26(){
    float rupees=12000.0, dollar;
    dollar=rupees/60.0;
    cout<<"12000 rupees into dollar is:"<<dollar<<"\n";
    return 0;
}
// Input time in hours, minutes, seconds and convert to seconds
int Program_27(){
    int hours, minutes, seconds, total_seconds;
    cout<<"Enter time in hours: ";
    cin>>hours;
    cout<<"Enter time in minutes: ";
    cin>>minutes;
    cout<<"Enter time in seconds: ";
    cin>>seconds;
    total_seconds = hours*3600+minutes*60+seconds;
    cout<<"\nTotal seconds is: "<<total_seconds<<"\n";
    return 0;
}
// Compute discriminant using formula disc = b^2 - 4ac
int Program_28(){
    float a, b, c, disc;
    cout<<"Enter value of a: "<<endl;
    cin>>a;
    cout<<"Enter value of b: "<<endl;
    cin>>b;
    cout<<"Enter value of c: "<<endl;
    cin>>c;
    disc = b*b-4*a*c;
    cout<<"Disc is: "<<disc<<"\n";
    return 0;
}
// Print message if variable n > 100
int Program_29(){
    int n;
    cout<<"Enter value of n: "<<endl;
    cin>>n;
    if(n>100){
        cout<<"n is greater than 100"<<"\n";}
    return 0;
}
// Check if a number is odd or even using if
int Program_30(){
    int n;
    cout<<"Enter value of n: "<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"n is even: "<<n<<"\n";
    }
    else{
        cout<<"n is odd: "<<n<<"\n";
    }
    return 0;
}

int main(){
    int choice;
    char choice2;
    do{
       cout<<"Select the Program to run(1 to 30): ";
       cin>>choice;
       switch(choice){
       case 1: Program_1(); break;
       case 2: Program_2(); break;
       case 3: Program_3(); break;
       case 4: Program_4(); break;
       case 5: Program_5(); break;
       case 6: Program_6(); break;
       case 7: Program_7(); break;
       case 8: Program_8(); break;
       case 9: Program_9(); break;
       case 10: Program_10(); break;
       case 11: Program_11(); break;
       case 12: Program_12(); break;
       case 13: Program_13(); break;
       case 14: Program_14(); break;
       case 15: Program_15(); break;
       case 16: Program_16(); break;
       case 17: Program_17(); break;
       case 18: Program_18(); break;
       case 19: Program_19(); break;
       case 20: Program_20(); break;
       case 21: Program_21(); break;
       case 22: Program_22(); break;
       case 23: Program_23(); break;
       case 24: Program_24(); break;
       case 25: Program_25(); break;
       case 26: Program_26(); break;
       case 27: Program_27(); break;
       case 28: Program_28(); break;
       case 29: Program_29(); break;
       case 30: Program_30(); break;
       default: cout<<"Invalid choice: \n";
}
  cout<<"Do you want to run another Program(y/n): ";
  cin>>choice2;
}while(choice2=='Y' || choice2=='y');
cout<<"Exit Program";
  return 0;
}




    


    
