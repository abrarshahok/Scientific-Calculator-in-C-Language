#include<stdio.h>
#include<conio.h>
#include<ncurses.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    start:

    int operand,mod1,mod2;
    double num1,num2,ans,inverse;
    char choice;

    do
    {
    system("cls");
    printf("\n\n\n                 WELCOME TO OUR SCIENTIFIC CALCULATOR \n                               with\n                          SPECIAL FEATURES\n\n");
    printf("\n                      CODED BY ABRAR AHMED SHAHOK\n\t\t\t  ROLL NO : 21BSCS-20\n\n");
    printf("\n 1:  Addition                 2:  Subtraction           3:  Multiplication\n\n 4:  Division                 5:  Square Root           6:  Cube Root\n\n 7:  Radical                  8:  Square                9:  Cube \n\n10:  Power                   11:  Modulus              12:  Inverse of Number\n\n");
    printf("13:  Sin (x) Degrees         14:  Sin (x) Radians      15:  Sinh (x)\n\n");
    printf("16:  Cos (x) Degrees         17:  Cos (x) Radians      18:  Cosh (x)\n\n");
    printf("19:  Tan (x) Degrees         20:  Tan (x) Radians      21:  Tanh (x)\n\n");
    printf("22:  Sin-1 (x) Degrees       23:  Sin-1 (x) Radians    24:  Cos-1 (x) Degrees\n\n");
    printf("25:  Cos-1 (x) Radians       26:  Tan-1 (x) Degrees    27:  Tan-1 (x) Radians\n\n");
    printf("28:  Log10 (x)               29:  Log2 (x)             30:  Ln (x) Natural Log \n\n");
    printf("\n\n                  (31) SWITCH SPECIAL FEATURES\n\n");
    printf(" 0:  Exit");
    printf("\n\nSelect an Operation to Perform : ");
    scanf("%d",&operand);


    switch(operand)
    {
        case 1:
        system("cls");
        printf("\nYou Choosed Addition\n");
        printf("\nEnter First Number :");
        scanf("%lf",&num1);
        printf("\nEnter Second Number :");
        scanf("%lf",&num2);
        printf("\n%.2lf + %.2lf = %.2lf",num1,num2,(num1+num2));
        break;

        case 2:
        system("cls");
        printf("\nYou Choosed Subtraction\n");
        printf("\nEnter First Number :");
        scanf("%lf",&num1);
        printf("\nEnter Second Number :");
        scanf("%lf",&num2);
        printf("\n%.2lf - %.2lf = %.2lf",num1,num2,(num1-num2));
        break;

        case 3:
        system("cls");
        printf("\nYou Choosed Multiplication\n");
        printf("\nEnter First Number :");
        scanf("%lf",&num1);
        printf("\nEnter Second Number :");
        scanf("%lf",&num2);
        printf("\n%.2lf * %.2lf = %.2lf",num1,num2,(num1*num2));
        break;

        case 4:
        system("cls");
        printf("\nYou Choosed Division\n");
        printf("\nEnter First Number :");
        scanf("%lf",&num1);
        printf("\nEnter Second Number :");
        scanf("%lf",&num2);
        printf("\n%.2lf/%.2lf = %.2lf",num1,num2,(num1/num2));
        break;
         
        case 5:
        system("cls");
        printf("\nYou Choosed to Find Square Root\n");
        printf("\nEnter Number to Find Square Root :");
        scanf("%lf",&num1);
        ans=sqrt(num1);
        printf("\nSquare Root of %.2lf = %.2lf ",num1,ans);
        break;
            
        case 6:
        system("cls");
        printf("\nYou Choosed to Find Cube Root\n");
        printf("\nEnter Number to Find its Cube Root :");
        scanf("%lf",&num1);
        ans=cbrt(num1);
        printf("\nThe Cube Root of %.2lf = %.2lf",num1,ans);
        break;

        case 7:
        system("cls");
        printf("\nYou Choosed to Find Radical\n");
        printf("\nEnter Power on Radical :");
        scanf("%lf",&num1);
        printf("\nEnter Number Under Radical :");
        scanf("%lf",& num2);
        ans=num1*sqrt(num2);
        printf("\n%.2lf UnderRoot %.2lf = %.2lf",num1,num2,ans);
        break;

        case 8:
        system("cls");
        printf("\nYou Choosed to Find Square\n");
        printf("\nEnter Number to Find Square :");
        scanf("%lf",&num1);
        ans=pow(num1,2);
        printf("\nThe Square of %.2lf = %.2lf",num1,ans);
        break;

        case 9:
        system("cls");
        printf("\nYou Choosed to Find Cube\n");
        printf("\nEnter Number to Find its Cube :");
        scanf("%lf",&num1);
        ans=pow(num1,3);
        printf("\nThe Cube of %.2lf = %.2lf",num1,ans);
        break;


        case 10:
        system("cls");
        printf("\nYou Choosed to Find Power\n");
        printf("\nEnter Base :");
        scanf("%lf",&num1);
        printf("\nEnter Power :");
        scanf("%lf",&num2);
        ans=pow(num2,num1);
        printf("\n%.2lf pow %.2lf = %.2lf",num1,num2,ans);
        break;

        case 11:
        system("cls");
        printf("\nYou Choosed to Find Modulus\n");
        printf("\nEnter Dividend :");
        scanf("%d",&mod1);
        printf("\nEnter Divisor :");
        scanf("%d",&mod2);
        ans=(mod1%mod2);
        printf("\n%d %% %d = %.2lf",mod1,mod2,ans);
        break;

        case 12:
        system("cls");
        printf("\nYou Choosed to Find Inverse of Number\n");
        printf("\nEnter Number :");
        scanf("%lf",&num1);
        ans=1/num1;
        printf("\n1/%.2lf = %.2lf",num1,ans);
        break;

        case 13:
        system("cls");
        printf("\nYou Choosed to Find Sin (x) Degrees\n");
        printf("\nSin ");
        scanf("%d",&mod1);
        ans=sin(mod1*3.14159265/180);
        printf("\nSin (%d) Degrees = %.2lf",mod1,ans);
        break;

        case 14:
        system("cls");
        printf("\nYou Choosed to Find Sin (x) Radians\n");
        printf("\nSin ");
        scanf("%d",&mod1);
        ans=sin(mod1);
        printf("\nSin (%d) Radians = %.2lf",mod1,ans);
        break;

        case 15:
        system("cls");
        printf("\nYou Choosed to Find Sin Hyperbolic of (x)\n");
        printf("\nSinh  ");
        scanf("%d",&mod1);
        ans=sinh(mod1);
        printf("\nSinh (%d) = %.2lf",mod1,ans);
        break;

        case 16:
        system("cls");
        printf("\nYou Choosed to Find Cos (x) Degrees\n");
        printf("\nCos ");
        scanf("%d",&mod1);
        ans=cos(mod1*3.14159265/180);
        printf("\nCos (%d) Degrees = %.2lf",mod1,ans);
        break;

        case 17:
        system("cls");
        printf("\nYou Choosed to Find Cos (x) Radians\n");
        printf("\nCos ");
        scanf("%d",&mod1);
        ans=cos(mod1);
        printf("\nCos (%d) Radians = %.2lf",mod1,ans);
        break;
        
        case 18:
        system("cls");
        printf("\nYou Choosed to Find Cos Hyperbolic of (x)\n");
        printf("\nCosh  ");
        scanf("%d",&mod1);
        ans=cosh(mod1);
        printf("\nCosh (%d) = %.2lf",mod1,ans);
        break;

        case 19:
        system("cls");
        printf("\nYou Choosed to Find Tan (x) Degrees\n");
        printf("\nTan ");
        scanf("%d",&mod1);
        ans=tan(mod1*3.14159265/180);
        printf("\nTan (%d) Degrees = %.2lf",mod1,ans);
        break;

        
        case 20:
        system("cls");
        printf("\nYou Choosed to Find Tan (x) Radians\n");
        printf("\nTan ");
        scanf("%d",&mod1);
        ans=tan(mod1);
        printf("\nTan (%d) Radians = %.2lf",mod1,ans);
        break;
        
        case 21:
        system("cls");
        printf("\nYou Choosed to Find Tan Hyperbolic of (x)\n");
        printf("\nTanh  ");
        scanf("%d",&mod1);
        ans=tanh(mod1);
        printf("\nTanh (%d) = %.2lf",mod1,ans);
        break;

        case 22:
        system("cls");
        printf("\nYou Choosed to Find Sin Inverse(x) Degrees\n");
        printf("\nSin-1 ");
        scanf("%lf",&num1);
        ans=asin(num1);
        inverse=(ans*180)/3.14159265;
        printf("\nSin-1 (%.2lf) = %.2lf Degrees",num1,inverse);
        break;

        case 23:
        system("cls");
        printf("\nYou Choosed to Find Sin Inverse(x) Radians\n");
        printf("\nSin-1 ");
        scanf("%lf",&num1);
        ans=asin(num1);
        printf("\nSin-1 (%.2lf) = %.2lf Radians",num1,ans);
        break;

        case 24:
        system("cls");
        printf("\nYou Choosed to Find Cos Inverse(x) Degrees\n");
        printf("\nCos-1 ");
        scanf("%lf",&num1);
        ans=acos(num1);
        inverse=(ans*180)/3.14159265;
        printf("\nCos-1 (%.2lf) = %.2lf Degrees",num1,inverse);
        break;

        case 25:
        system("cls");
        printf("\nYou Choosed to Find Cos Inverse(x) Radians\n");
        printf("\nCos-1 ");
        scanf("%lf",&num1);
        ans=acos(num1);
        printf("\nCos-1 (%.2lf) = %.2lf Radians",num1,ans);
        break;

        case 26:
        system("cls");
        printf("\nYou Choosed to Find Tan Inverse(x) Degrees\n");
        printf("\nTan-1 ");
        scanf("%lf",&num1);
        ans=atan(num1);
        inverse=(ans*180)/3.14159265;
        printf("\nTan-1 (%.2lf) = %.2lf Degrees",num1,inverse);
        break;

        case 27:
        system("cls");
        printf("\nYou Choosed to Find Tan Inverse(x) Radians\n");
        printf("\nTan-1 ");
        scanf("%lf",&num1);
        ans=atan(num1);
        printf("\nTan-1 (%.2lf) = %.2lf Radians",num1,ans);
        break;

        
        case 31:
        do
        {   
        system("cls");
        printf("\n       WELCOME TO SPECIAL FEATURES\n");
        printf("\n1:  Find Factorial                     2:  Prime or Not\n\n3:  Multiplication Table Generator     4:  Percentage Calculator");
        printf("\n\n0:  Go Back to Scientfic Calculator\n");
        printf("\n\nSelect any Feature : ");
        scanf("%d",&operand);
        switch (operand)
        {

        case 0:
        goto start;

        case 1:
        system("cls");
        double a,b,c=1;
        printf("\nYou Choosed to Find Factorial\n");
        printf("\nEnter Number to Get Factorial : ");
        scanf("%lf",&b);
        for(a=1;a<=b;a++)
        c=c*a;
        printf("\nFactorial of %.2lf = %.2lf",b,c);
        break;

        case 2:
        system("cls");
        int num5, check=0;
        printf("\nYou Choosed to Find Prime or Not\n");
        printf("\nEnter Number to Check Prime or Not :");
        scanf("%d",&num5);
        for (int i = 1; i <= num5; i++)
        {
        if (num5 % i == 0)
        {
        check++;
        }
        }
        if (check==2)
        printf("\nPrime Number");
        else
        printf("\nNot Prime");
        break;
        
        case 3:
        system("cls");
        int i,num;
        printf("\nYou Choosed to Generate Multiplication Table\n");
	    printf("\nEnter Number to print table: ");
	    scanf("%d" , &num);

		for(i=1; i<=10; i++)
	    {
		printf("%d * %d = %d\n" , num, i, (num*i));
        }
        break;

        case 4:
        system("cls");
        double total,obt,per;
        printf("\nYou Choosed to Find Percentage\n");
        printf("\nEnter Total Marks : ");
        scanf("%lf",&total);
        printf("\nEnter Obtained Marks : ");
        scanf("%lf",&obt);
        per=(obt/total)*100;
        printf("\nPercentage = %.2lf %%",per);
        break;

        default:
        printf("\n\nInvalid Choice!!");
        
        }
        
        printf("\n\nPress (Y) to Perform an Operation in Special Features\nPress (N) to go back to Scientific Calculator\n\n");
        scanf("%c",&choice);
        if(choice=='N'||choice=='n')
        {
            goto start;
        }
        }
        while(choice=='Y'||choice=='y');

        case 0:
        system("cls");
        printf("               \n\nTHANKS FOR USING OUR CALCULATOR \nHAVE A NICE DAY.....\nCOPYRIGHT CREDITS @ ABRAR AHMED SHAHOK\n\n");
        exit(0);

        default:
        printf("\n\nInvalid Choice!!");

    }

    printf("\n\nPress (Y) to Perform an Other Operation\nPress (N) to Exit...");
    scanf("%c",&choice);

    if(choice=='N'||choice=='n')
    {
        system("cls");
        printf("               \n\nTHANKS FOR USING OUR CALCULATOR \nHAVE A NICE DAY.....\nCOPYRIGHT CREDITS @ ABRAR AHMED SHAHOK\n\n");
    }

    }
    while(choice=='Y'||choice=='y');

    return 0;
}