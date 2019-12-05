#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void clrscr()
{
    system("cls");
}
void delay()
{
    int a,b;
    for (a = 1; a <= 32767; a++)
        for (b = 1; b <= 32767; b++)
                {}
}
void dec_to_bin()
{
    int i,num,t,r[100],j;
    clrscr();
    printf("So you want to use the decimal to binary converter, alright\n");
    printf("\nEnter the decimal number: ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        t=num%2;
        r[i]=t;
        num=num/2;
    }
    printf("\nThe binary number is: ");
    for(j=i-1;j>=0;j--)
        printf("%d",r[j]);
}
void dec_to_oct()
{
    int i,num,t,r[100],j;
    clrscr();
    printf("So you want to use the decimal to octal converter, alright\n");
    printf("\nEnter the decimal number: ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        t=num%8;
        r[i]=t;
        num=num/8;
    }
    printf("\nThe octal number is: ");
    for(j=i-1;j>=0;j--)
        printf("%d",r[j]);
}
void dec_to_hex()
{
    int i,num,t,r[100],j;
    clrscr();
    printf("So you want to use the decimal to hexadecimal converter, alright\n");
    printf("\nEnter the decimal number: ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        t=num%16;
        r[i]=t;
        num=num/16;
    }
    printf("\nThe octal number is: ");
    for(j=i-1;j>=0;j--)
    {
        if(r[j]<=9)
            printf("%d",r[j]);
        else if(r[j]==10)
            printf("A");
        else if(r[j]==11)
            printf("B");
        else if(r[j]==12)
            printf("C");
        else if(r[j]==13)
            printf("D");
        else if(r[j]==14)
            printf("E");
        else if(r[j]==15)
            printf("F");
    }
}
void bin_to_dec()
{
    int i,num,t,r=0,j;
    clrscr();
    printf("So you want to use the binary to decimal converter, alright\n");
    printf("\nEnter the binary number: ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        t=num%10;
        r=r+t*pow(2,i);
        num=num/10;
    }
    printf("\nThe decimal number is: %d",r);

}
void oct_to_dec()
{
    int i,num,t,r=0,j;
    clrscr();
    printf("So you want to use the octal to decimal converter, alright\n");
    err1:
    printf("\nEnter the octal number: ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        t=num%10;
        if(t>=8)
        {
            printf("\n\nInvalid input octal cannot have symbols more than 7\n\n");
            goto err1;
        }
        r=r+t*pow(8,i);
        num=num/10;
    }
    printf("\nThe decimal number is: %d",r);
}
void hex_to_dec()
{
    int i,j,c=0,r=0,t;
    char num[500];
    clrscr();
    printf("So you want to use the hexadecimal to decimal converter, alright\n");
    printf("\nEnter the hexadecimal number: (Alphabets only in caps)");
    scanf("%s",&num);
    for(j=0;num[j]!='\0';j++)
            c++;
    c--;
    for(i=0;num[i]!='\0';i++)
    {
        if(num[i]>='0'&&num[i]<='9')
            t=num[i]-48;
        else if(num[i]>='A'&&num[i<='F'])
            t=num[i]-65+10;
        r=r+t*pow(16,c);
        c--;
    }
    printf("\nThe decimal number is: %d",r);
}
void bin_to_oct()
{
    int i,num,t,r=0,j,rx[100],num1,x,y,z;
    clrscr();
    printf("So you want to use the binary to octal converter, alright\n");
    printf("\nEnter the binary number: ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        t=num%10;
        r=r+t*pow(2,i);
        num=num/10;
    }
    num1=r;
    for(x=0;num1!=0;x++)
    {
        z=num1%8;
        rx[x]=z;
        num1=num1/8;
    }
    printf("\nThe octal number is: ");
    for(y=x-1;y>=0;y--)
        printf("%d",rx[y]);
}
void bin_to_hex()
{
    int i,num,t,r=0,j,num1,x,y,z,rx[100];
    clrscr();
    printf("So you want to use the binary to hexadecimal converter, alright\n");
    printf("\nEnter the binary number: ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        t=num%10;
        r=r+t*pow(2,i);
        num=num/10;
    }
    num1=r;
    for(x=0;num1!=0;x++)
    {
        z=num1%16;
        rx[x]=z;
        num1=num1/16;
    }
    printf("\nThe hexadecimal number is: ");
    for(y=x-1;y>=0;y--)
    {
        if(rx[y]<=9)
            printf("%d",rx[y]);
        else if(rx[y]==10)
            printf("A");
        else if(rx[y]==11)
            printf("B");
        else if(rx[y]==12)
            printf("C");
        else if(rx[y]==13)
            printf("D");
        else if(rx[y]==14)
            printf("E");
        else if(rx[y]==15)
            printf("F");
    }
}
void oct_to_bin()
{
    int i,num,t,r=0,j,num1,x,y,z,rx[100];
    clrscr();
    printf("So you want to use the octal to binary converter, alright\n");
    err1:
    printf("\nEnter the octal number: ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        t=num%10;
        if(t>=8)
        {
            printf("\n\nInvalid input octal cannot have symbols more than 7\n\n");
            goto err1;
        }
        r=r+t*pow(8,i);
        num=num/10;
    }
    num1=r;
    for(x=0;num1!=0;x++)
    {
        z=num1%2;
        rx[x]=z;
        num1=num1/2;
    }
    printf("\nThe binary number is: ");
    for(y=x-1;y>=0;y--)
        printf("%d",rx[y]);
}
void hex_to_bin()
{
  int i,j,c=0,r=0,t,num1,x,y,z,rx[100];
    char num[500];
    clrscr();
    printf("So you want to use the hexadecimal to binary converter, alright\n");
    printf("\nEnter the hexadecimal number: (Alphabets only in caps)");
    scanf("%s",&num);
    for(j=0;num[j]!='\0';j++)
            c++;
    c--;
    for(i=0;num[i]!='\0';i++)
    {
        if(num[i]>='0'&&num[i]<='9')
            t=num[i]-48;
        else if(num[i]>='A'&&num[i<='F'])
            t=num[i]-65+10;
        r=r+t*pow(16,c);
        c--;
    }
    num1=r;
    for(x=0;num1!=0;x++)
    {
        z=num1%2;
        rx[x]=z;
        num1=num1/2;
    }
    printf("\nThe binary number is: ");
    for(y=x-1;y>=0;y--)
        printf("%d",rx[y]);
}
void oct_to_hex()
{
    int i,num,t,r=0,j,num1,x,y,z,rx[100];
    clrscr();
    printf("So you want to use the octal to hexadecimal converter, alright\n");
    err1:
    printf("\nEnter the octal number: ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        t=num%10;
        if(t>=8)
        {
            printf("\n\nInvalid input octal cannot have symbols more than 7\n\n");
            goto err1;
        }
        r=r+t*pow(8,i);
        num=num/10;
    }
    num1=r;
    for(x=0;num1!=0;x++)
    {
        z=num1%16;
        rx[x]=z;
        num1=num1/16;
    }
    printf("\nThe hexadecimal number is: ");
    for(y=x-1;y>=0;y--)
    {
        if(rx[y]<=9)
            printf("%d",rx[y]);
        else if(rx[y]==10)
            printf("A");
        else if(rx[y]==11)
            printf("B");
        else if(rx[y]==12)
            printf("C");
        else if(rx[y]==13)
            printf("D");
        else if(rx[y]==14)
            printf("E");
        else if(rx[y]==15)
            printf("F");
    }
}
void hex_to_oct()
{
    int i,j,c=0,r=0,t,num1,x,y,z,rx[100];
    char num[500];
    clrscr();
    printf("So you want to use the hexadecimal to octal converter, alright\n");
    printf("\nEnter the hexadecimal number: (Alphabets only in caps)");
    scanf("%s",&num);
    for(j=0;num[j]!='\0';j++)
            c++;
    c--;
    for(i=0;num[i]!='\0';i++)
    {
        if(num[i]>='0'&&num[i]<='9')
            t=num[i]-48;
        else if(num[i]>='A'&&num[i<='F'])
            t=num[i]-65+10;
        r=r+t*pow(16,c);
        c--;
    }
    num1=r;
    for(x=0;num1!=0;x++)
    {
        z=num1%8;
        rx[x]=z;
        num1=num1/8;
    }
    printf("\nThe octal number is: ");
    for(y=x-1;y>=0;y--)
        printf("%d",rx[y]);

}
void main()
{
    int b1,b2,q2;
    char q1;
    printf("\t\tNumber system converter developed by Avilash Ghosh.\n");
    printf("\nThis is a software designed to convert one number system to another.\n");
    delay();
    printf("\nEvery number system has a base or radix which is the number of total symbols in that number system.");
    delay();
    cp1:
    clrscr();
    printf("These are the bases of the most commonly used number systems:\n\nDecimal = 10\n\nBinary = 2\n\nOctal = 8\n\nHexadecimal = 16\n");
    printf("\nEnter the base of the given number system: ");
    scanf("%d",&b1);
    printf("\nEnter the base of the required number system: ");
    scanf("%d",&b2);
    if(b1==10)
    {
        if(b2==2)
        {
            cp2:
            dec_to_bin();
            printf("\n\nDo you want use the software again? ");
            fflush(stdin);
            scanf("%c",&q1);
            if(q1=='y'||q1=='Y')
            {
                clrscr();
                printf("\nIf you want to use the same combination of numbers system press 1\n");
                printf("\nIf you want to go back to the main menu and select different num system press 2\n");
                printf("\nWhat do you wanna do? ");
                scanf("%d",&q2);
                if(q2==1)
                    goto cp2;
                else if(q2==2)
                    goto cp1;
            }
        }
        else if(b2==8)
        {
            cp3:
            dec_to_oct();
            printf("\n\nDo you want use the software again? ");
            fflush(stdin);
            scanf("%c",&q1);
            if(q1=='y'||q1=='Y')
            {
                clrscr();
                printf("\nIf you want to use the same combination of numbers system press 1\n");
                printf("\nIf you want to go back to the main menu and select different num system press 2\n");
                printf("\nWhat do you wanna do? ");
                scanf("%d",&q2);
                if(q2==1)
                    goto cp3;
                else if(q2==2)
                    goto cp1;
            }
        }
        else if(b2==16)
        {
            cp4:
            dec_to_hex();
            printf("\n\nDo you want use the software again? ");
            fflush(stdin);
            scanf("%c",&q1);
            if(q1=='y'||q1=='Y')
            {
                clrscr();
                printf("\nIf you want to use the same combination of numbers system press 1\n");
                printf("\nIf you want to go back to the main menu and select different num system press 2\n");
                printf("\nWhat do you wanna do? ");
                scanf("%d",&q2);
                if(q2==1)
                    goto cp4;
                else if(q2==2)
                    goto cp1;
            }
        }
    }
    else if(b1==2)
    {
        if(b2==10)
        {
            cp5:
            bin_to_dec();
            printf("\n\nDo you want use the software again? ");
            fflush(stdin);
            scanf("%c",&q1);
            if(q1=='y'||q1=='Y')
            {
                clrscr();
                printf("\nIf you want to use the same combination of numbers system press 1\n");
                printf("\nIf you want to go back to the main menu and select different num system press 2\n");
                printf("\nWhat do you wanna do? ");
                scanf("%d",&q2);
                if(q2==1)
                    goto cp5;
                else if(q2==2)
                    goto cp1;
            }
        }
        else if(b2==8)
        {
            cp8:
            bin_to_oct();
            printf("\n\nDo you want use the software again? ");
            fflush(stdin);
            scanf("%c",&q1);
            if(q1=='y'||q1=='Y')
            {
                clrscr();
                printf("\nIf you want to use the same combination of numbers system press 1\n");
                printf("\nIf you want to go back to the main menu and select different num system press 2\n");
                printf("\nWhat do you wanna do? ");
                scanf("%d",&q2);
                if(q2==1)
                    goto cp8;
                else if(q2==2)
                    goto cp1;
            }
        }
        else if(b2==16)
        {
            cp9:
            bin_to_hex();
            printf("\n\nDo you want use the software again? ");
            fflush(stdin);
            scanf("%c",&q1);
            if(q1=='y'||q1=='Y')
            {
                clrscr();
                printf("\nIf you want to use the same combination of numbers system press 1\n");
                printf("\nIf you want to go back to the main menu and select different num system press 2\n");
                printf("\nWhat do you wanna do? ");
                scanf("%d",&q2);
                if(q2==1)
                    goto cp9;
                else if(q2==2)
                    goto cp1;
            }
        }
    }
    else if(b1==8)
    {
        if(b2==10)
        {
            cp6:
            oct_to_dec();
            printf("\n\nDo you want use the software again? ");
            fflush(stdin);
            scanf("%c",&q1);
            if(q1=='y'||q1=='Y')
            {
                clrscr();
                printf("\nIf you want to use the same combination of numbers system press 1\n");
                printf("\nIf you want to go back to the main menu and select different num system press 2\n");
                printf("\nWhat do you wanna do? ");
                scanf("%d",&q2);
                if(q2==1)
                    goto cp6;
                else if(q2==2)
                    goto cp1;
            }
        }
        else if(b2==2)
        {
            cp10:
            oct_to_bin();
            printf("\n\nDo you want use the software again? ");
            fflush(stdin);
            scanf("%c",&q1);
            if(q1=='y'||q1=='Y')
            {
                clrscr();
                printf("\nIf you want to use the same combination of numbers system press 1\n");
                printf("\nIf you want to go back to the main menu and select different num system press 2\n");
                printf("\nWhat do you wanna do? ");
                scanf("%d",&q2);
                if(q2==1)
                    goto cp10;
                else if(q2==2)
                    goto cp1;
            }
        }
        else if(b2==16)
        {
            cp12:
            oct_to_hex();
            printf("\n\nDo you want use the software again? ");
            fflush(stdin);
            scanf("%c",&q1);
            if(q1=='y'||q1=='Y')
            {
                clrscr();
                printf("\nIf you want to use the same combination of numbers system press 1\n");
                printf("\nIf you want to go back to the main menu and select different num system press 2\n");
                printf("\nWhat do you wanna do? ");
                scanf("%d",&q2);
                if(q2==1)
                    goto cp12;
                else if(q2==2)
                    goto cp1;
            }
        }
    }
    else if(b1==16)
    {
        if(b2==10)
        {
            cp7:
            hex_to_dec();
            printf("\n\nDo you want use the software again? ");
            fflush(stdin);
            scanf("%c",&q1);
            if(q1=='y'||q1=='Y')
            {
                clrscr();
                printf("\nIf you want to use the same combination of numbers system press 1\n");
                printf("\nIf you want to go back to the main menu and select different num system press 2\n");
                printf("\nWhat do you wanna do? ");
                scanf("%d",&q2);
                if(q2==1)
                    goto cp7;
                else if(q2==2)
                    goto cp1;
            }
        }
        else if(b2==2)
        {
            cp11:
            hex_to_bin();
            printf("\n\nDo you want use the software again? ");
            fflush(stdin);
            scanf("%c",&q1);
            if(q1=='y'||q1=='Y')
            {
                clrscr();
                printf("\nIf you want to use the same combination of numbers system press 1\n");
                printf("\nIf you want to go back to the main menu and select different num system press 2\n");
                printf("\nWhat do you wanna do? ");
                scanf("%d",&q2);
                if(q2==1)
                    goto cp11;
                else if(q2==2)
                    goto cp1;
            }
        }
        else if(b2==8)
        {
            cp13:
            hex_to_oct();
            printf("\n\nDo you want use the software again? ");
            fflush(stdin);
            scanf("%c",&q1);
            if(q1=='y'||q1=='Y')
            {
                clrscr();
                printf("\nIf you want to use the same combination of numbers system press 1\n");
                printf("\nIf you want to go back to the main menu and select different num system press 2\n");
                printf("\nWhat do you wanna do? ");
                scanf("%d",&q2);
                if(q2==1)
                    goto cp13;
                else if(q2==2)
                    goto cp1;
            }
        }
    }
    getch();
}

