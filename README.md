# CPP

# BEGINEER TRACK FOR C++_FINAL

*BEGINEER TRACK FOR C++ (with project)*

- *INSTALLATION OF IDE AND COMPILER (VS code)*

*[https://youtu.be/0yn7irrHzM8](https://youtu.be/0yn7irrHzM8) (follow this link)*

## LEVEL 1: C++ Program Structure

> Let us look at a simple code that would print the words Hello World.


```
#include <iostream>
using namespace std;

// main() is where program execution begins.
int main() {
    cout << "Hello World"; // prints Hello World
    return 0;
}
```
  

> Let us look at the various parts of the above program −
> 
- The C++ language defines several headers, which contain information that is either necessary or useful to your program. For this program, the header **<iostream>** is needed.
- The line **using namespace std;** tells the compiler to use the std namespace. Namespaces are a relatively recent addition to C++.
- The next line '**// main() is where program execution begins.**' is a single-line comment available in C++. Single-line comments begin with // and stop at the end of the line.
- The line **int main()** is the main function where program execution begins.
- The next line **cout << "Hello World";** causes the message "Hello World" to be displayed on the screen.
- The next line **return 0;** terminates main( )function and causes it to return the value 0 to the calling process.

## TASK 1: Print Hello! Google Developers Club.

(attach .cpp file &make pull request)

## LEVEL 2: DATA TYPES

> While writing program in any language, you need to use various variables to store various information. Variables are nothing but reserved memory locations to store values. This means that when you create a variable you reserve some space in memory.You may like to store information of various data types like character, wide character, integer, floating point, double floating point, boolean etc. Based on the data type of a variable, the operating system allocates memory and decides what can be stored in the reserved memory.
> 

### Primitive Built-in Types

> C++ offers the programmer a rich assortment of built-in as well as user defined data types. Following table lists down seven basic C++ data types −
![image](https://user-images.githubusercontent.com/81976330/135765556-50d91a45-091a-44e7-a27f-6047a548a9a2.png)



> Several of the basic types can be modified using one or more of these type modifiers −
> 
- signed
- unsigned
- short
- long

> The following table shows the variable type, how much memory it takes to store the value in memory, and what is maximum and minimum value which can be stored in such type of variables.
> 

![image](https://user-images.githubusercontent.com/81976330/135765730-207aaee6-387f-4d41-8c32-75ab8048fe8c.png)



## TASK 2: Write a program to print correct memory size of any 5 data types(hint: use .size() function.)

(attach .cpp file and make a pull request)

## LEVEL 3: CONDITIONALS AND LOOPS:

> Decision making structures require that the programmer specify one or more conditions to be evaluated or tested by the program, along with a statement or statements to be executed if the condition is determined to be true, and optionally, other statements to be executed if the condition is determined to be false.Following is the general form of a typical decision making structure found in most of the programming languages −
> 

![image](https://user-images.githubusercontent.com/81976330/135765791-5e845731-abfa-4017-9ce9-d9df99402d44.png)

> C++ programming language provides following types of decision making statements.
> 

![image](https://user-images.githubusercontent.com/81976330/135765900-593650d6-5f8c-4348-85c1-323cadf23e6a.png)


> −LOOPS:There may be a situation, when you need to execute a block of code several number of times. In general, statements are executed sequentially: The first statement in a function is executed first, followed by the second, and so on.Programming languages provide various control structures that allow for more complicated execution paths.A loop statement allows us to execute a statement or group of statements multiple times and following is the general from of a loop statement in most of the programming languages −
> 




> C++ programming language provides the following type of loops to handle looping requirements.
> 
![image](https://user-images.githubusercontent.com/81976330/135765940-40d066e3-afa4-4854-8405-8589f37dfb91.png)


For syntax go through: [https://www.w3schools.com/cpp/cpp_for_loop.asp](https://www.w3schools.com/cpp/cpp_for_loop.asp)

## TASK 3: PRINT A ISOCALES TRIANGLE USING STARS “*”

(attach .cpp file and make a pull request)

## LEVEL 4: FUNCTIONS AND POINTERS:

> A function is a group of statements that together perform a task. Every C++ program has at least one function, which is main(), and all the most trivial programs can define additional functions.You can divide up your code into separate functions. How you divide up your code among different functions is up to you, but logically the division usually is such that each function performs a specific task.A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.The C++ standard library provides numerous built-in functions that your program can call. For example, function strcat() to concatenate two strings, function memcpy() to copy one memory location to another location and many more functions.A function is known with various names like a method or a sub-routine or a procedure etc.
> 

### Defining a Function

> The general form of a C++ function definition is as follows −
> 

```
return_type function_name( parameter list ) {

    body of the function

}
  ```

> A C++ function definition consists of a function header and a function body. Here are all the parts of a function −
> 
- **Return Type** − A function may return a value. The **return_type** is the data type of the value the function returns. Some functions perform the desired operations without returning a value. In this case, the return_type is the keyword **void**.
- **Function Name** − This is the actual name of the function. The function name and the parameter list together constitute the function signature.
- **Parameters** − A parameter is like a placeholder. When a function is invoked, you pass a value to the parameter. This value is referred to as actual parameter or argument. The parameter list refers to the type, order, and number of the parameters of a function. Parameters are optional; that is, a function may contain no parameters.
- **Function Body** − The function body contains a collection of statements that define what the function does.

### Pointers:

> C++ pointers are easy and fun to learn. Some C++ tasks are performed more easily with pointers, and other C++ tasks, such as dynamic memory allocation, cannot be performed without them.As you know every variable is a memory location and every memory location has its address defined which can be accessed using ampersand (&) operator which denotes an address in memory. Consider the following which will print the address of the variables defined −
> 

```
#include <iostream>
using namespace std;
int main () {
    int var1;
    char var2[10];
    
    cout << "Address of var1 variable: ";
    cout << &var1 << endl;
    cout << "Address of var2 variable: ";
    cout << &var2 << endl;

    return 0;
}
```
> When the above code is compiled and executed, it produces the following result −
> 

```
Address of var1 variable: 0xbfebd5c0
Address of var2 variable: 0xbfebd5b6
```

### What are Pointers?

> A pointer is a variable whose value is the address of another variable. Like any variable or constant, you must declare a pointer before you can work with it. The general form of a pointer variable declaration is −
> 

type *var-name;

> Here, type is the pointer's base type; it must be a valid C++ type and var-name is the name of the pointer variable. The asterisk you used to declare a pointer is the same asterisk that you use for multiplication. However, in this statement the asterisk is being used to designate a variable as a pointer. Following are the valid pointer declaration −
> 

```
int *ip; // pointer to an integer  
double *dp; // pointer to a double
float *fp; // pointer to a float
char *ch // pointer to character
```

## TASK 4: MAKE A FUNCTION WHICH RETURNS SUM UPTO N NUMBERS:

(attach .cpp file and make a pull request)

## LEVEL 4: CLASSES &OBJECTS :

> The main purpose of C++ programming is to add object orientation to the C programming language and classes are the central feature of C++ that supports object-oriented programming and are often called user-defined types.A class is used to specify the form of an object and it combines data representation and methods for manipulating that data into one neat package. The data and functions within a class are called members of the class.
> 

### C++ Class Definitions

> When you define a class, you define a blueprint for a data type. This doesn't actually define any data, but it does define what the class name means, that is, what an object of the class will consist of and what operations can be performed on such an object.A class definition starts with the keyword class followed by the class name; and the class body, enclosed by a pair of curly braces. A class definition must be followed either by a semicolon or a list of declarations. For example, we defined the Box data type using the keyword class as follows −
> 
```
class Box {
public:
    double length; // Length of a box
    double breadth; // Breadth of a box
    double height; // Height of a box
};
```

> The keyword public determines the access attributes of the members of the class that follows it. A public member can be accessed from outside the class anywhere within the scope of the class object. You can also specify the members of a class as private or protected which we will discuss in a sub-section.
> 

### Define C++ Objects

> A class provides the blueprints for objects, so basically an object is created from a class. We declare objects of a class with exactly the same sort of declaration that we declare variables of basic types. Following statements declare two objects of class Box −
> 
```
Box Box1; // Declare Box1 of type Box
Box Box2; // Declare Box2 of type Box
 ```

> Both of the objects Box1 and Box2 will have their own copy of data members.
> 

### Accessing the Data Members

> The public data members of objects of a class can be accessed using the direct member access operator (.). Let us try the following example to make the things clear −
> 

```
#include <iostream>
using namespace std;

class Box {
public:
    double length; // Length of a box
    double breadth; // Breadth of a box
    double height; // Height of a box
};

int main() {
    Box Box1; // Declare Box1 of type Box
    Box Box2; // Declare Box2 of type Box

    double volume = 0.0; // Store the volume of a box here
    
    // box 1 specification
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;
    
    // box 2 specification
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    // volume of box 1
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Volume of Box1 : " << volume <<endl;

    // volume of box 2
    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "Volume of Box2 : " << volume <<endl;

    return 0;
}
```

> When the above code is compiled and executed, it produces the following result −
> 

```
Volume of Box1 : 210
Volume of Box2 : 1560
```

> It is important to note that private and protected members can not be accessed directly using direct member access operator (.). We will learn how private and protected members can be accessed.
> 

### Classes and Objects in Detail

> So far, you have got very basic idea about C++ Classes and Objects. There are further interesting concepts related to C++ Classes and Objects which we will discuss in various sub-sections listed below −
> 

	Concept & Description
1  	Class Member Functions:A member function of a class is a function that has its definition or its prototype within the class definition like any other variable.
	
2	Class Access Modifiers:A class member can be defined as public, private or protected. By default members would be assumed as private.
	
3	Constructor & Destructor:A class constructor is a special function in a class that is called when a new object of the class is created. A destructor is also a special function which is called when created object is deleted.
4	Copy Constructor:The copy constructor is a constructor which creates an object by initializing it with an object of the same class, which has been created previously.
	
5	Friend Functions:A friend function is permitted full access to private and protected members of a class.
	
6	Inline Functions:With an inline function, the compiler tries to expand the code in the body of the function in place of a call to the function.
	
7	this Pointer:Every object has a special pointer this which points to the object itself.
	
8	Pointer to C++ Classes:A pointer to a class is done exactly the same way a pointer to a structure is. In fact a class is really just a structure with functions in it.
	
9	Static Members of a Class:Both data members and function members of a class can be declared as static.


More resources on : [https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm](https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm)

## TASK 5: MAKE A CLASS WHICH RETURNS THE STDENT DATA:WHICH INCLUDES NAME,CLASS,ROLL NO. ,E-MAIL.

(attach .cpp file and make a pull request)

## LEVEL 6: FILE HANDELING

> So far, we have been using the iostream standard library, which provides cin and cout methods for reading from standard input and writing to standard output respectively.This tutorial will teach you how to read and write from a file. This requires another standard C++ library called fstream, which defines three new data types −
> 

![image](https://user-images.githubusercontent.com/81976330/135795452-1f594adf-3a70-48b5-a7aa-de4d95952558.png)


> To perform file processing in C++, header files <iostream> and <fstream> must be included in your C++ source file.
> 

### Opening a File

> A file must be opened before you can read from it or write to it. Either ofstream or fstream object may be used to open a file for writing. And ifstream object is used to open a file for reading purpose only.Following is the standard syntax for open() function, which is a member of fstream, ifstream, and ofstream objects.
> 

void open(const char *filename, ios::openmode mode);

> Here, the first argument specifies the name and location of the file to be opened and the second argument of the open() member function defines the mode in which the file should be opened.
> 

![image](https://user-images.githubusercontent.com/81976330/135795513-9cc91df2-daa2-422f-b7cc-85db3e860f04.png)


> You can combine two or more of these values by ORing them together. For example if you want to open a file in write mode and want to truncate it in case that already exists, following will be the syntax −
> 

ofstream outfile;

outfile.open("file.dat", ios::out | ios::trunc );

> Similar way, you can open a file for reading and writing purpose as follows −
> 

fstream afile;

afile.open("file.dat", ios::out | ios::in );

### Closing a File

> When a C++ program terminates it automatically flushes all the streams, release all the allocated memory and close all the opened files. But it is always a good practice that a programmer should close all the opened files before program termination.Following is the standard syntax for close() function, which is a member of fstream, ifstream, and ofstream objects.
> 

void close();

### Writing to a File

> While doing C++ programming, you write information to a file from your program using the stream insertion operator (<<) just as you use that operator to output information to the screen. The only difference is that you use an ofstream or fstream object instead of the cout object.
> 

### Reading from a File

> You read information from a file into your program using the stream extraction operator (>>) just as you use that operator to input information from the keyboard. The only difference is that you use an ifstream or fstream object instead of the cin object.
> 

### Read and Write Example

> Following is the C++ program which opens a file in reading and writing mode. After writing information entered by the user to a file named afile.dat, the program reads information from the file and outputs it onto the screen −
> 

More resources on: *[https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm](https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm)*

**PROJECT: STUDENT REPORT SYSTEM**

**SOURCE CODE:**

Through this project, we can learn a lot about input/output streams and the file management system of C++. Our program collects student details like name, roll number, marks in each subject, and calculates their grade. This is a simple console app. Note that we focus only on the correct inputs in this project, and you can enhance it to handle wrong inputs. Here is the source code:
```
#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

// the class that stores data
class student {
  int rollno;
  char name[50];
  int eng_marks, math_marks, sci_marks, lang2_marks, cs_marks;
  double average;
  char grade;
public:
  void getdata();
  void showdata() const;
  void calculate();
  int retrollno() const;
}; //class ends here

void student::calculate() {
  average = (eng_marks + math_marks + sci_marks + lang2_marks + cs_marks) / 5.0;
  if (average >= 90)
    grade = 'A';
  else if (average >= 75)
    grade = 'B';
  else if (average >= 50)
    grade = 'C';
  else
    grade = 'F';
}
void student::getdata() {
  cout << "\nEnter student's roll number: ";
  cin >> rollno;
  cout << "\n\nEnter student name: ";
  cin.ignore();
  cin.getline(name, 50);
  cout << "\nAll marks should be out of 100";
  cout << "\nEnter marks in English: ";
  cin >> eng_marks;
  cout << "\nEnter marks in Math:  ";
  cin >> math_marks;
  cout << "\nEnter marks in Science:  ";
  cin >> sci_marks;
  cout << "\nEnter marks in 2nd language:  ";
  cin >> lang2_marks;
  cout << "\nEnter marks in Computer science:  ";
  cin >> cs_marks;
  calculate();
}
void student::showdata() const {
  cout << "\nRoll number of student : " << rollno;
  cout << "\nName of student : " << name;
  cout << "\nEnglish : " << eng_marks;
  cout << "\nMaths : " << math_marks;
  cout << "\nScience : " << sci_marks;
  cout << "\nLanguage2 : " << lang2_marks;
  cout << "\nComputer Science :" << cs_marks;
  cout << "\nAverage Marks :" << average;
  cout << "\nGrade of student is :" << grade;
}
int student::retrollno() const {
  return rollno;
}

//function declaration
void create_student();
void display_sp(int); //display particular record
void display_all(); // display all records
void delete_student(int); //delete particular record
void change_student(int); //edit particular record

//MAIN
int main() {
  char ch;
  cout << setprecision(2);
  do {
    char ch;
    int num;
    system("cls");
    cout << "\n\n\n\tMENU";
    cout << "\n\n\t1.Create student record";
    cout << "\n\n\t2. Search student record";
    cout << "\n\n\t3. Display all students records ";
    cout << "\n\n\t4.Delete student record";
    cout << "\n\n\t5.Modify student record";
    cout << "\n\n\t6.Exit";
    cout << "\n\n\What is your Choice (1/2/3/4/5/6) ";
    cin >> ch;
    system("cls");
    switch (ch) {
    case '1':
      create_student();
      break;
    case '2':
      cout << "\n\n\tEnter The roll number ";
      cin >> num;
      display_sp(num);
      break;
    case '3':
      display_all();
      break;
    case '4':
      cout << "\n\n\tEnter The roll number: ";
      cin >> num;
      delete_student(num);
      break;
    case '5':
      cout << "\n\n\tEnter The roll number ";
      cin >> num;
      change_student(num);
      break;
    case '6':
      cout << "Exiting, Thank you!";
      exit(0);
    }
  } while (ch != '6');
  return 0;
}

//write student details to file
void create_student() {
  student stud;
  ofstream oFile;
  oFile.open("student.dat", ios::binary | ios::app);
  stud.getdata();
  oFile.write(reinterpret_cast < char * > ( & stud), sizeof(student));
  oFile.close();
  cout << "\n\nStudent record Has Been Created ";
  cin.ignore();
  cin.get();
}
// read file records
void display_all() {
  student stud;
  ifstream inFile;
  inFile.open("student.dat", ios::binary);
  if (!inFile) {
    cout << "File could not be opened !! Press any Key to exit";
    cin.ignore();
    cin.get();
    return;
  }
  cout << "\n\n\n\t\tDISPLAYING ALL RECORDS\n\n";
  while (inFile.read(reinterpret_cast < char * > ( & stud), sizeof(student))) {
    st.showdata();
    cout << "\n\n====================================\n";
  }
  inFile.close();
  cin.ignore();
  cin.get();
}
//read specific record based on roll number
void display_sp(int n) {
  student stud;
  ifstream iFile;
  iFile.open("student.dat", ios::binary);
  if (!iFile) {
    cout << "File could not be opened... Press any Key to exit";
    cin.ignore();
    cin.get();
    return;
  }
  bool flag = false;
  while (iFile.read(reinterpret_cast < char * > ( & stud), sizeof(student))) {
    if (stud.retrollno() == n) {
      stud.showdata();
      flag = true;
    }
  }
  iFile.close();
  if (flag == false)
    cout << "\n\nrecord does not exist";
  cin.ignore();
  cin.get();
}
// modify record for specified roll number
void change_student(int n) {
  bool found = false;
  student stud;
  fstream fl;
  fl.open("student.dat", ios::binary | ios:: in | ios::out);
  if (!fl) {
    cout << "File could not be opened. Press any Key to exit...";
    cin.ignore();
    cin.get();
    return;
  }
  while (!fl.eof() && found == false) {
    fl.read(reinterpret_cast < char * > ( & stud), sizeof(student));
    if (stud.retrollno() == n) {
      stud.showdata();
      cout << "\n\Enter new student details:" << endl;
      stud.getdata();
      int pos = (-1) * static_cast < int > (sizeof(stud));
      fl.seekp(pos, ios::cur);
      fl.write(reinterpret_cast < char * > ( & stud), sizeof(student));
      cout << "\n\n\t Record Updated";
      found = true;
    }
  }
  File.close();
  if (found == false)
    cout << "\n\n Record Not Found ";
  cin.ignore();
  cin.get();
}
//delete record with particular roll number
void delete_student(int n) {
  student stud;
  ifstream iFile;
  iFile.open("student.dat", ios::binary);
  if (!iFile) {
    cout << "File could not be opened... Press any Key to exit...";
    cin.ignore();
    cin.get();
    return;
  }
  ofstream oFile;
  oFile.open("Temp.dat", ios::out);
  iFile.seekg(0, ios::beg);
  while (iFile.read(reinterpret_cast < char * > ( & stud), sizeof(student))) {
    if (stud.retrollno() != n) {
      oFile.write(reinterpret_cast < char * > ( & stud), sizeof(student));
    }
  }
  oFile.close();
  iFile.close();
  remove("student.dat");
  rename("Temp.dat", "student.dat");
  cout << "\n\n\tRecord Deleted ..";
  cin.ignore();
  cin.get();
}
```
