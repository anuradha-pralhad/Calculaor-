#include<iostream>  
#include<stdio.h>  
#include<conio.h>  
#include<stdlib.h> 
using namespace std; 
int main()  
{  
int opr,n;  
double sum=0;
double num, num1, num2, x;  


do  
{  
cout << "Select an operation"  
     "\n1 = Addition"  
     "\n2 = Subtraction"  
     "\n3 = Multiplication"  
     "\n4 = Division"  
     "\n5 = Square"  
     "\n6 = Exit"  
     "\n \n Make a choice: ";  
     cin >> opr;  
   
     switch (opr)  
     {  
    // Addition  
        case 1:  
    
        cout<<"How many numbers you want to enter ? ";
        cin>>n;
        cout<<"Enter "<<n<<" numbers: "; 
        for(int i=0; i<n; i++)
        {
        cin>>num;
        sum = sum+num;
        } 
         cout << "Sum of two number = " << sum;  
        break;  
     
     //  Subtraction 
        case 2:  
       
        cout << "\n Please enter the two number: \n";  
        cin >> num1 >> num2;  
        x = num1 - num2;  
        cout << "Subtraction of two number = " << x;  
        break;  
     
     
     //  Multiplication 
        case 3:  
         
        cout << "\n Please enter the two number: \n";  
        cin >> num1 >> num2;  
        x  = num1 * num2;  
        cout << "Product of two number = " << x;  
        break;  
     
     
     //  Division
        case 4:  
        cout << "\n Please enter the two number; \n";  
        cin >> num1 >> num2;  
        // divisor whether it is zero  
            while ( num2 == 0)  
             {  
            cout << "\n Divisor cannot be zero" "\n Try Again...: ";  
            cin >> num2;  
            }  
            x = num1 / num2;  
            cout << "\n Quotient = " << x;  
         break;  
      
      
    // Square
        case 5:  
        
        cout << "\n Please enter any number: \n";  
        cin >> num1;  
        x = num1 * num1;  
        cout << "Square is = " << x;  
        break;  
     
     
        case 6: exit(0);  // terminate the program  
        break;  
     
        default: 
        cout << "\n Something went wrong..!!";  
        break;  
     
     
     }  

        cout << "\n----------------------------------------- \n";  
     }

        while(opr != 6);  
        getch();  
     }  