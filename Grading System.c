/* a program to find total score per unit scored by adding up 2 cats @ out of 30 and finding  an 
averange out of 20 and adding assignment out of 10 and adding exam marks out of 70  then find 
the total score and grading it ....*/
  //program written by Visty31
#include<stdio.h>
int main()
{ 
  while(1)// for looping
  {
   char name[100];//variable declaration
   int CAT1,CAT2,ASSIGN,EXAM;//variable declaration whole values
   float total,avrg,TOTAL;//variable declaration decimal values
   
 printf("Enter the name of the Unit\n");//output to user
    scanf("%s",&name);//input from user
    
  printf("Enter CAT1 and CAT2 marks\n");//output to user
     scanf("%d%d",&CAT1,&CAT2);//input from user
   
   total=(( CAT1+CAT2)/2);//averange of CATs out of 30
  avrg=((total)/1.5);//averange of CATs out of 20
  
           if (avrg>20) { printf("Invalid Marks");exit(0); }//ends program if CATs averange is invalid
           else { printf("CATs marks succefully entered");  }//output to user if CATs averange is valid
    
   printf("\nAverange of CATS is: %.1f",avrg);//outputs the averange to user
    
   printf("\nEnter Assignment marks is ");//output to user
      scanf("%d",&ASSIGN);//input from user
   
           if(ASSIGN>10){printf("Invalid marke");exit(0);}//ends program if Assignment is invalid
           else{ printf("Assignment marks succefully entered");}//output to user if Assignment marks is  valid
   
   printf("\nEnter Final exam marks");//output to user
   scanf("%d",&EXAM);//input from user
   
           if(EXAM>70) {printf("Invalid marks");exit(0);  }//ends program if exam marks r invalid
           else{printf("Exam marks succefully entered");  }//outputs to user if exam marks are valid
     
TOTAL=(avrg+ASSIGN+EXAM);// formula to find the total
 
 printf("\n%s",name);//output to user
 printf(" marks is %.1f\n",TOTAL);//output to user
   
     if(TOTAL<40) {  printf("Grade E\nPOOR");  }  //else if statements
           else if(TOTAL<50)   {  printf("Grade D\nFAIR");}
           else if(TOTAL<60)  {  printf("Grade C\nGOOD"); }
           else if(TOTAL<70)  {   printf("Grade B\nV.GOOD");  }
     else{ printf("Grade A\nEXCELLENT");}
     
   printf("\n");//add new lines
   
  int choice;//enables looping by user
  printf("1.Continue\n2.Exit\nYour choice");
  scanf("%d",&choice);
  
       if(choice==2){exit(0);}
              else if(choice==1) {printf("Ok....\n");}
       else{printf("Invalid choice .....exiting");}
}
 
  return 0;
}