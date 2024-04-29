#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int total=0,cash_given,cash_returned;

struct node
{

    char item_name[50];
    int rate;
    int quantity;
    int amount;
    struct node* prev;
    struct node* next;
    int sl_no;
}*head=0,*temp,*tail=0,*newnode;



void add_a_item()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Item name :- ");
    scanf("%s",&newnode->item_name);
    printf("Enter the rate of %s :-",newnode->item_name);
    scanf("%d",&newnode->rate);
    printf("Enter the quantity of %s :-",newnode->item_name);
    scanf("%d",&newnode->quantity);
    newnode->amount=(newnode->rate)*(newnode->quantity);
    printf("%s :- %d",newnode->item_name,newnode->amount);
    total+=newnode->amount;
    printf("\nTotal amount = %d\n",total);
    newnode->prev=0;
    newnode->next=0;
    if(head==0)
    {
        head=tail=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}



void delete_a_item()
{
    if (tail==0)
    {
        printf("\nNo Item found\n");
    }
    else
    {
        temp=tail;
        tail=tail->prev;
        tail->next=0;
        free(temp);
    }
}

void content()
{
    int count=1;
    temp=head;
    while(temp->next!=0)
    {
        printf("\t%d      \t\t%s      \t%d      \t%d       \t%d    \n",count++,temp->item_name,temp->rate,temp->quantity,temp->amount);

        temp=temp->next;
    }
    printf("\t%d      \t\t%s      \t%d      \t%d       \t%d    \n",count++,temp->item_name,temp->rate,temp->quantity,temp->amount);

}




void header(char* invoice_no , char* name,char* address, char* date)
{
    printf("Enter the amount given by custumer :- ");
    scanf("%d",&cash_given);
    cash_returned=cash_given-total;
    system("clear");
    printf("\n\t==============================SAH'S RESTURENT==============================\n\n");
    printf("\tInvoice no :- %s\t\t\t\t\tDate :- %s\n",invoice_no,date);
    printf("\tName :- %s\n",name);
    printf("\tAddress :- %s\n",address);
    printf("\t\t<------------------------------------------------------------->\n\n");
    printf("\tSl.no.  \tItem    \tRate    \tQuantity\tAmount\n");
}

void footer(int total,int cash_given,int cash_returned)
{
    printf("\n\t\t<------------------------------------------------------------->\n\n");
    printf("\tToatal        :- \t\t\t\t\t\t%d\n",total);
    printf("\tCash Given    :- \t\t\t\t\t\t%d\n",cash_given);
    printf("\tCash Returned :- \t\t\t\t\t\t%d\n",cash_returned);
    printf("\n\t===========================Thank you Visit again! ==========================\n\n\n\n\n\n");
}

int main()
{
    char date[10],name[100],invoice_no[10],address[100];
    printf("Enter the date(DD-MM-YYYY):- ");
    gets(date);
    printf("Enter the invoice no. :- ");
    gets(invoice_no);
    printf("Enter the name of costumer :- ");
    gets(name);
    printf("Enter the address of costumer :- ");
    gets(address);

    int choice;
    while(1)
    {
        printf("Enter 1 to add a item \n");
        printf("Enter 2 to delete the item \n");
        printf("Enter 3 to print the Item\n");
        printf("Enter the choice :- ");
        scanf("%d",&choice);
        switch(choice)
        {
    case 1:
        add_a_item();
        break;
    case 2:
        delete_a_item();
        break;
    case 3:
        header(invoice_no ,name,address,date);
        content();
        footer(total,cash_given,cash_returned);
        return 0;
    default:
        printf("Enter the value correctly\n");
        }
    }
}


