/*******************
Author   Frank Juma*
Compiler C99       *
Date     20/7/2021 *
License  MIT       *
*******************/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void admin();
void addingstaff();
void deletingstaff();
void staff();
void adduser();
void deleteuser();
void addabook();
void deletebook();
void  issuebook();
void returnedbook();
void issuefine();
void  maxbooks();
void  user();
void login();



void admin()
{
    int pin;
    printf("enter admin password\n");
    scanf("%d",&pin);
    if(pin==3456)
    {
        printf("you have successfuly logged in");

    }
    else;
    printf("invalid password\n");

  int action;
  printf("***************************************************\n");
     printf("enter 1 for adding staff \n");
     printf("enter 2 for deleting  staff \n");
      printf("enter 3 for edioting  staff \n");
      scanf("%d",&action);
     printf("***************************************************\n");

       switch(action)
      {
          case 1:
          addingstaff();
          break;
          case 2:
          deletingstaff();
          break;
          case 3:
          printf(" you choosed editing staff \n");
          break;
          default:
          printf(" invalid actions \n");
          break;
      }
}      
void addingstaff()
{
    char fullname[20]; 
    int password , id;
    printf("enter staff three name\n");
    scanf("%s",&fullname);
    printf("enter staff identity number  \n");
    scanf("%d",&id);
    printf("key in your passcode \n");
    scanf("%d",&password);
    printf("you have added the new staff \n");
}
void deletingstaff()
{
    int staff;
    printf("choose staff to delete\n");
    scanf("%d",&staff);
    printf("you have successful deleted staff");
}
void staff()
{
    int select;
    printf(" 1.add user\n");
    printf("2.delete user\n");
     printf("3.add abook\n");    
      printf("4.delete abook\n");
       printf("5.issue abook\n");
       printf("6.mark returned book\n");
       printf("7.issue fines\n");
       printf("8.limit number of book a user can borrow to 3 at once\n");
       printf("choose a numnber \n");
       scanf("%d",&select);
       switch(select)
       {
           case 1:
             adduser();
             break;
           case 2:
           deleteuser();
           break;
           case 3:
           addabook();
           break;
           case 4:
           deletebook();
           break;
           case 5:
             issuebook();
            break;
            case 6:
             returnedbook();
             break;
             case 7:
             issuefine();
             break;
             case 8:
              maxbooks();
             break;
             default:
             printf("invalid selection");
    }

}
void adduser()
{
    char fnames[20];
    int number,id;
  printf("enter your user name\n");
  scanf("%s",&fnames);
  printf("type phone number\n");
  scanf("%d",&number);
  printf(" key in user id\n");
  scanf("%d",&id);
  printf("user successfully added\n");

}
void deleteuser()
{
    int registration;
    printf("enter user registration\n");
    scanf("%d",&registration);
    printf("you have successfully deleted user\n");
}
void addabook()
{
    int title,author,edition;
    printf("enter book title \n");
    scanf("%d",&title);
    printf("enter auther name\n");
    scanf("%d",&author);
    printf("enter edition");
    scanf("%d",edition);
    printf("book successfully added\n");
}
void deletebook()
{
    int title,author,edition;
    printf("enter book title \n");
    scanf("%d",&title);
    printf("enter auther name\n");
    scanf("%d",&author);
    printf("enter edition\n");
    scanf("%d",edition);
    printf("book successffully deleted\n");
}
void issuebook()
{
    int user,registration,title,date;
    printf("enter user name\n");
    scanf("%d",user);
    printf("enter user registration\n");
    scanf("%d",registration);
    printf("enter book title\n");
    scanf("%d",title);
    printf("enter due date\n");
    scanf("%d",date);
    printf("book successfully issued user\n");
}
void returnedbook()
{
    int borrowed,date;
    printf("confirme books borrowed\n");
    scanf("%d",&borrowed);
    printf("confirme date of borrowing \n");
    scanf("%d",&date);
    printf("book successfully returned on time\n");
}
void issuefine()
{
    int issue,date;
    printf("confirm date of issue\n");
    scanf("%d",&issue);
    printf("confirm date of return\n");
    scanf("%d",&date);
    printf("date is overdue kindly pay your fine\n");
}
void maxbooks()
{
    int books;
    printf("select book(1-3)\n");
    scanf("%d",&books);
    if(books < 1 || books > 3)
    {
        printf("you succesful  the book \n");
    }
    else
    {
        printf("kindly minimum books 1 and maximum books is 3\n");
    }
    
}
void user()
{
    int details;
    printf("please login\n");
    scanf("%d",details);
    switch(details)
{
        case 1:
         login();
         break;
       default:
      printf("user must login first\n");
}
}
void login()
{
    int name,pin;
    printf("enter username\n");
    scanf("%d",&name);
    printf("enter password\n");
    scanf("%d",pin);
    printf("you have logged in successfully \n");
}

int main(void)
{

      int option;
    printf("\t\t\t\ttwelcome to county library management system \n");

    printf("1.enter 1 for admin \n");
    printf("2.enter 2 for staff \n");
    printf("3.enter 3 for user \n");  
    scanf("%d",&option);

      switch(option)
      {
          case 1:
          admin();
          break;
          case 2:
          staff();
          break;
          case 3:
           user();
          break;

      }


}










