#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void log();
void patient_seach_option();
void admin_power();
void user_menu();
void input_user();
void input_donor();
void menu();
void doctor();
void blood();
void main();







struct blood
{
    char name_blood[50];
    char age_blood[5];
    char location_blood[199];
    char number_blood[30];
    char email_blood[100];
    char blood_blood[10];
    struct blood *next;
    struct blood *prev;
}*head2,*student2,*temp2,*tail2,*p2,*q2,*s2;





struct user
{
    char username[50];
    char password[50];

    struct user *next;
    struct user *prev;
}*head7,*student7,*temp7,*tail7,*p7,*q7,*s7;







struct list0
{
    char *string0;
    struct list0 *next;
}*current0,*head0,*node0,*LIST0;








struct list
{
    char *string;
    struct list *next;
}*current,*head1,*node1,*LIST;







struct node
{
    char name[50];

    char age[5];

    char location[199];

    char number[30];

    char email[100];

    char blood[10];

    char unite[100];

    char room[10];

    char doctors[100];

    char username[50];

    char password[20];

    struct node *next;

    struct node *prev;

}*head,*student,*temp,*tail,*p,*q,*s;








void patient_edit()
{
    input();
    p=head;
    char s_n[100];
    int i=0;
    printf("\nEnter search By Name : ");
    scanf("%s",s_n);
    FILE *fp;
    fp=fopen("User information.text","w+");
    while(p!=NULL)
    {

        if(strcmp(s_n, p->name) == 0)

        {


    char name[50];
    char age[34];
    char location[199];
    char number[30];
    char email[100];
    char blood[10];
    char doctors[100];
    char unite[10];
    char room[10];

    printf("\n\n\t\t\t\tPatient Record\n\n\n\n");

    printf("\t\tEnter patient's single name:  ");
    scanf("%s",name);

    printf("\n\n\t\tAge: ");
    scanf("%s",age);

    printf("\n\n\t\tPresent address: ");
    scanf("%s",location);

    printf("\n\n\t\tContact number: ");
    scanf("%s",number);

    printf("\n\n\t\tBlood group: ");
    scanf("%s",blood);

    printf("\n\n\t\tEmail address:");
    scanf("%s",email);

    printf("\n\n\t\tUnite:");

    scanf("%s",unite);

        printf("\n\n\t\tRoom number:");
    scanf("%s",room);

     printf("\n\n\t\tCare of Doctor:");
    scanf("%s",doctors);


    fprintf(fp,"%s  ",name);
    fprintf(fp,"%s  ",age);
    fprintf(fp,"%s  ",location);
    fprintf(fp,"%s  ",number);
    fprintf(fp,"%s  ",blood);
    fprintf(fp,"%s  ",email);
    fprintf(fp,"%s  ",unite);
    fprintf(fp,"%s  ",room);
    fprintf(fp,"%s  ",doctors);


            printf("\n\n");
           system("cls");
            printf("\t\t\t\tEdit successful");
            i++;
        }
        else
        {
            fprintf(fp,"%s ",p->name);
            fprintf(fp,"%s ",p->age);
            fprintf(fp,"%s ",p->location);
            fprintf(fp,"%s ",p->number);
            fprintf(fp,"%s ",p->blood);
            fprintf(fp,"%s ",p->email);
            fprintf(fp,"%s ",p->unite);
            fprintf(fp,"%s ",p->room);
            fprintf(fp,"%s ",p->doctors);

            printf("\n\n");

        }
        p=p->next;
    }

    fclose(fp);
    if(i==0)
    {
        printf("\n\tNot found");
        getchar();
        getchar();
        admin_power();
    }
    admin_power();
}





void admin_sms_delete()
{

     FILE *fp;

    fp=fopen("admin.text","w+");



    fprintf(fp,"\n\n");

    fclose(fp);
printf("\n\n\t\t\t\t** Successfully Deleted SMS ***. ");

}







void patient_delete()
{
    input();
    p=head;

    char s_n[100];
    int i=0; //char s;
    printf("\nEnter search By Name: ");
    scanf("%s",s_n);
    FILE *fp;
    fp=fopen("User information.text","w+");
    while(p!=NULL)
    {

        if(strcmp(s_n, p->name) == 0)
        {

            system("cls");
            printf("\n\n\t\t\t\t\t** Delete successful **");
            i++;

            //getchar();



        }
        else
        {

            fprintf(fp,"%s ",p->name);
            fprintf(fp,"%s ",p->age);
            fprintf(fp,"%s ",p->location);
            fprintf(fp,"%s ",p->number);
            fprintf(fp,"%s ",p->blood);
            fprintf(fp,"%s ",p->email);
            fprintf(fp,"%s ",p->unite);
            fprintf(fp,"%s ",p->room);
            fprintf(fp,"%s\n\n",p->doctors);

        }
        p=p->next;
    }
    fclose(fp);

    if(i==0)
    {
        system("cls");
        printf("\n\n\t\t\t\t\t** Not found **\n");
        //getchar();
        //getchar();
       admin_power();
    }
    admin_power();

}













void see_all_user()
{
    printf("\n\n\t\t\t** List of all User **\n\n\n\n");
 input_user_search();
    q7=head7;

    FILE *fp;
    fp=fopen("User_id_and_password.text.txt","r");
    while(head7!=NULL)
    {

        printf("\n\t\t\tusername: ");
        printf("%s",head7->username);

        printf("\t\t\tpassword: ");
        printf("%s",head7->password);


        printf("\n\n");

        head7=head7->next;
    }

    printf("\n\n\t\t\t1:Go to Back page ");

    char a;
    scanf("%s",&a);
    if(a=='1')
    {
        system("cls");
        admin_power();
    }
    else
    {
        system("cls");
        admin_power();
    }




}








void see_all_blood_donor()
{
    printf("\n\n\t\t\t\t** List of all Blood Donor **\n\n\n");

    input_donor();
    q2=head2;

    FILE *fp;
    fp=fopen("blood_member.text","r");
    while(head2!=NULL)
    {

            printf("\n\t\tName: ");
            printf("%s",head2->name_blood);
            //printf("\n");
            printf("\t\t\tBlood Group: ");
            printf("%s",head2->blood_blood);
            printf("\n\t\tAge: ");
            printf("%s",head2->age_blood);
            // printf("\n");
            printf("\t\t\t\tlocation: ");
            printf("%s",head2->location_blood);
            // printf("\n");
            printf("\n\t\tNumber: ");
            printf("%s",head2->number_blood);
            //printf("\n");

            // printf("\n");
            printf("\t\tEmail: ");
            printf("%s",head2->email_blood);
            printf("\n\n");



            printf("\n\n");

        head2=head2->next;
    }


}



void input()
{

    head=(struct node *)malloc(sizeof(struct node));
    tail = head;
    FILE *fp;
    fp=fopen("User information.text","r+");
    int node_no = 1;
    while(1)
    {
        if( feof(fp) )
        {
            break ;
        }
        student=(struct node *)malloc(sizeof(struct node));

        fscanf(fp,"%s",student->name);
        fscanf(fp,"%s",student->age);
        fscanf(fp,"%s",student->location);
        fscanf(fp,"%s",student->number);
        fscanf(fp,"%s",student->blood);
        fscanf(fp,"%s",student->email);
        fscanf(fp,"%s",student->unite);
        fscanf(fp,"%s",student->room);
        fscanf(fp,"%s",student->doctors);

        student->next=NULL;
        student->prev=tail;
        tail->next=student;
        tail=student;
        if(node_no ==1)
        {
            head=student;
        }


        node_no++;
    }
    if(tail==head)
    {
        tail=NULL;
    }
    else
    {
        tail=tail->prev;
        tail->next=NULL;
    }
    fclose(fp);



}






void search_patient_doctor()
{
    input();
    q=head;
    char s_n[100];
    printf("\n\t\t\t\tSearch patient By Doctor: ");
    scanf("%s",s_n);
    printf("\n");
    FILE *fp;
    fp=fopen("User information.text","r");
    while(head!=NULL)
    {
        if(strcmp(s_n, head->doctors) == 0)
        {
            printf("\n\n\t\tName: ");
            printf("%s",head->name);


            printf("\t\tAge: ");
            printf("%s",head->age);


            printf("\t\t\t\tlocation: ");
            printf("%s",head->location);


            printf("\n\n\t\tNumber: ");
            printf("%s",head->number);


            printf("\tblood: ");
            printf("%s",head->blood);


            printf("\t\t\tEmail: ");
            printf("%s",head->email);


            printf("\n\n\t\tUnite: ");
            printf("%s",head->unite);


            printf("\t\tRoom number: ");
            printf("%s",head->room);


            printf("\t\tCare of Doctor: ");
            printf("%s",head->doctors);
            printf("\n\n");



            // getchar();


        }

        head=head->next;
    }

    printf("\n\n\t\t\t\t\t1: Go to back page ");

    printf("\n\n\t\t\t\t\t2: Search Again ");

    printf("\n\n\t\t\t\t\tChoose your option ");

    char c;
    scanf("%s",&c);

    if(c=='1')
    {
        system("cls");
        patient_seach_option();
    }
    else if(c=='2')
    {
        system("cls");
        patient_seach_option();
    }
    else
    {
        system("cls");

        printf("\n\t\t\tWrong Choose!! Try again.\n\n");
        patient_seach_option();


    }
}

















void search_patient_room()
{
    input();
    q=head;
    char s_n[100];
    printf("\n\n\t\t\t\tSearch patient By Room: ");
    scanf("%s",s_n);
    printf("\n\n\n");
    FILE *fp;
    fp=fopen("User information.text","r");
    while(head!=NULL)
    {
        if(strcmp(s_n, head->room) == 0)
        {
            printf("\n\n\t\tName: ");
            printf("%s",head->name);


            printf("\t\tAge: ");
            printf("%s",head->age);


            printf("\t\t\t\tlocation: ");
            printf("%s",head->location);


            printf("\n\n\t\tNumber: ");
            printf("%s",head->number);


            printf("\tblood: ");
            printf("%s",head->blood);


            printf("\t\t\tEmail: ");
            printf("%s",head->email);


            printf("\n\n\t\tUnite: ");
            printf("%s",head->unite);


            printf("\t\tRoom number: ");
            printf("%s",head->room);


            printf("\t\tCare of Doctor: ");
            printf("%s",head->doctors);
            printf("\n\n");



            // getchar();


        }

        head=head->next;
    }

    printf("\n\n\t\t\t\t\t1: Go to back page ");

    printf("\n\n\t\t\t\t\t2: Search Again ");

    printf("\n\n\t\t\t\t\tChoose your option ");

    char c;
    scanf("%s",&c);

    if(c=='1')
    {
        system("cls");
        patient_seach_option();
    }
    else if(c=='2')
    {
        system("cls");
        patient_seach_option();
    }
    else
    {
        system("cls");

        printf("\n\t\t\tWrong Choose!! Try again.\n\n");
        patient_seach_option();


    }
}









void search_patient_unite()
{
    input();
    q=head;
    char s_n[100];
    printf("\n\n\t\t\t\tSearch patient By Unite: ");
    scanf("%s",s_n);
    printf("\n");
    FILE *fp;
    fp=fopen("User information.text","r");
    while(head!=NULL)
    {
        if(strcmp(s_n, head->unite) == 0)
        {
            printf("\n\n\t\tName: ");
            printf("%s",head->name);


            printf("\t\tAge: ");
            printf("%s",head->age);


            printf("\t\t\t\tlocation: ");
            printf("%s",head->location);


            printf("\n\n\t\tNumber: ");
            printf("%s",head->number);


            printf("\tblood: ");
            printf("%s",head->blood);


            printf("\t\t\tEmail: ");
            printf("%s",head->email);


            printf("\n\n\t\tUnite: ");
            printf("%s",head->unite);


            printf("\t\tRoom number: ");
            printf("%s",head->room);


            printf("\t\tCare of Doctor: ");
            printf("%s",head->doctors);
            printf("\n\n");


            // getchar();


        }

        head=head->next;
    }

    printf("\n\n\n\t\t\t\t1: Go to back page ");

    printf("\n\n\t\t\t\t2: Search Again ");

    printf("\n\n\t\t\t\tChoose your option ");

    char c;
    scanf("%s",&c);

    if(c=='1')
    {
        system("cls");
        patient_seach_option();
    }
    else if(c=='2')
    {
        system("cls");
        patient_seach_option();
    }
    else
    {
        system("cls");

        printf("\n\t\t\tWrong Choose!! Try again.\n\n");
        patient_seach_option();


    }
}


void search_patient()
{
    input();
    q=head;
    char s_n[100];
    printf("\n\t\t\t\tEnter search By Name: ");
    scanf("%s",s_n);
    printf("\n");
    FILE *fp;
    fp=fopen("User information.text","r");
    while(head!=NULL)
    {
        if(strcmp(s_n, head->name) == 0)
        {
            printf("\n\n\t\t\tName: ");
            printf("%s",head->name);

            printf("\t\t\tAge: ");
            printf("%s",head->age);

            printf("\t\t\tlocation: ");
            printf("%s",head->location);
            printf("\n\n");
            printf("\n\t\t\tNumber: ");
            printf("%s",head->number);

            printf("\t\tblood: ");
            printf("%s",head->blood);

            printf("\t\tEmail: ");
            printf("%s",head->email);
            printf("\n\n");

            printf("\n\t\t\tUnite: ");
            printf("%s",head->unite);

                printf("\t\t\tRoom: ");
            printf("%s",head->room);

              printf("\t\tCare of: ");
            printf("%s",head->doctors);




            printf("\n\n");

            getchar();
            //main();


        }

        head=head->next;
    }
    char c;
    printf("\n\n\n\n\n\t\t\t\t\t\t1: Go to back page ");
    printf("\n\n\t\t\t\t\t\t2: Search Again ");
    printf("\n\n\t\t\t\t\t\tChoose your option ");
    scanf("%s",&c);

    if(c=='1')
    {
        system("cls");
        patient_seach_option();
    }
    else if(c=='2')
    {
        system("cls");
        patient_seach_option();
    }
    else
    {
        system("cls");

        printf("\n\t\t\tWrong Choose!! Try again.\n\n");
        patient_seach_option();


    }

}



void log()
{
    input_user();
    q=head;
    char username[50];
    char password[20];

    printf("\n\t\t\t\tEnter Your Username: ");

    scanf("%s",username);

    printf("\n\t\t\t\tEnter Your password: ");
    scanf("%s",password);

    printf("\n");
    FILE *fp;
    fp=fopen("User_id_and_password.text","r");
    while(head!=NULL)
    {

        if ((strcmp(username, head->username) == 0)&&(strcmp(password, head->password) == 0))
        {
            system("cls");
            menu(); //main();


        }

        head=head->next;
    }
    system("cls");


    printf("\n\t\tLog in failed. \n\n\t\tYour username or Password was wrong.\n\n\n");


    user_menu();


}




void log_sms()
{
    input_user();
    q=head;
    char username[50];
    char password[20];

    printf("\n\n\t\t\t[ Note: For your Extra privacy you have to log in again ]");
    printf("\n\n\n\t\t\t\tEnter Your Username: ");

    scanf("%s",username);

    printf("\n\n\t\t\t\tEnter Your password: ");
    scanf("%s",password);

    printf("\n");
    FILE *fp;
    fp=fopen("User_id_and_password.text","r");
    while(head!=NULL)
    {
        if (strcmp(password, head->password) == 0)
        {
            system("cls");
//box_user();



            char c;

            printf("\n\n\n\t\t\t1: Check inbox");
            printf("\t\t\t2: Send massage");
            printf("\n\n\n\n\n\t\t\t3: Go to Back page");
            printf("\t\tChoose your option: ");
            scanf("%s",&c);
            if(c=='1')
            {
                system("cls");
                see_all_sms_admin();


            }
            else if(c=='3')
            {
                system("cls");
                menu();
            }

            else if(c=='2')


            {
                system("cls");
                printf("\n\t\t[ Note: Don't use space in your sentence. ]\n\n\t\t[ You must have to use ( _ ) this sign between two words ]");
//me_user();

                char name[500000];


                printf("\n\n\n\n\t\tEnter your sms:  ");

                scanf("%s",name);



                FILE *fp;

                fp=fopen("sms.text","a+");
                fprintf(fp,"%s:",username);
               fprintf(fp,"%s ",name);

                fprintf(fp,"\n\n");

                fclose(fp);


                system("cls");

                printf("\n\n\t\t\t** Massage successfully send.**");

                menu();





            }


            else
            {
                system("cls");
                admin_power();
            }



















        }

        head=head->next;
    }


    system("cls");


    printf("\n\n\n\t\t[ Sorry  You can't  contact with admin. ]\n\t\t[ Your username or Password was wrong.]\n\n\n");

    menu();



}













void input_user()
{

    head=(struct node *)malloc(sizeof(struct node));
    tail = head;
    FILE *fp;
    fp=fopen("User_id_and_password.text","r+");
    int node_no = 1;
    while(1)
    {
        if( feof(fp) )
        {
            break ;
        }
        student=(struct node *)malloc(sizeof(struct node));

        fscanf(fp,"%s",&student->username);
        fscanf(fp,"%s",&student->password);



        student->next=NULL;
        student->prev=tail;
        tail->next=student;
        tail=student;
        if(node_no ==1)
        {
            head=student;
        }


        node_no++;
    }
    if(tail==head)
    {
        tail=NULL;
    }
    else
    {
        tail=tail->prev;
        tail->next=NULL;
    }
    fclose(fp);



}





void delete_doner()
{

    input_donor();
    p2=head2;

    char s_n[100];
    int i=0; //char s;
    printf("\n\n\t\t\t\tEnter search By name: ");
    scanf("%s",s_n);
    FILE *fp;
    fp=fopen("blood_member.text","w+");
    while(p2!=NULL)
    {

        if(strcmp(s_n, p2->name_blood) == 0)
        {

            system("cls");
            printf("\n\n\t\t\t\t\t** Delete successful **");
            i++;

            //getchar();



        }
        else
        {

            fprintf(fp,"%s ",p2->name_blood);
            fprintf(fp,"%s ",p2->age_blood);
              fprintf(fp,"%s ",p2->location_blood);
               fprintf(fp,"%s ",p2->number_blood);
                fprintf(fp,"%s ",p2->email_blood);
                 fprintf(fp,"%s ",p2->blood_blood);


        }
        p2=p2->next;
    }
    fclose(fp);

    if(i==0)
    {
        system("cls");
        printf("\n\n\t\t\t\t\t** Not found **\n");
        //getchar();
        //getchar();
       admin_power();
    }
    admin_power();
}
















void search_donor()
{
    input_donor();
    q2=head2;
    char s_n[50];
    printf("\n\t\t\t\tSearch By Blood Group: ");
    scanf("%s",s_n);
    printf("\n");
    FILE *fp;
    fp=fopen("blood_member.text","r");
    while(head2!=NULL)
    {
        if(strcmp(s_n, head2->blood_blood) ==0)
        {
            printf("\n\t\tName: ");
            printf("%s",head2->name_blood);
            //printf("\n");
            printf("\t\t\tBlood Group: ");
            printf("%s",head2->blood_blood);
            printf("\n\t\tAge: ");
            printf("%s",head2->age_blood);
            // printf("\n");
            printf("\t\t\t\tlocation: ");
            printf("%s",head2->location_blood);
            // printf("\n");
            printf("\n\t\tNumber: ");
            printf("%s",head2->number_blood);
            //printf("\n");

            // printf("\n");
            printf("\t\tEmail: ");
            printf("%s",head2->email_blood);
            printf("\n\n");

            // getchar();


        }

        head2=head2->next;
    }
    printf("\n\n\n\t\t\t1:Search Again");
    printf("\n\t\t\t2:Back to previous Page");
    int d;
    scanf("%d",&d);

    if(d==1)
    {
        system("cls");
        search_donor();
    }
    else
    {
        system("cls");
        blood();

    }



}





 void search_user_menu()


{
     printf("\n\n\n\n\n\n\n\t\t\t\t1:Search Again");

     printf("\n\n\t\t\t\t2:Go-to Home page");

    printf("\n\n\t\t\t\tChoose Your option ");

     char f;



     scanf("%s",&f);


     if(f=='1')


     {
         system("cls");

         search_user();
     }


     else if(f=='2')
     {
         system("cls");

         admin_power();

     }

    else
     {
         system("cls");

         printf("\n\n\t\t\t\t **Wrong Input \n\n\n**");

         search_user();
     }



}





void delete_user()

{


    input_user_search();
    p7=head7;

    char s_n[100];
    int i=0; //char s;
    printf("\n\n\t\t\t\tEnter search By Username: ");
    scanf("%s",s_n);
    FILE *fp;
    fp=fopen("User_id_and_password.text","w+");
    while(p7!=NULL)
    {

        if(strcmp(s_n, p7->username) == 0)
        {

            system("cls");
            printf("\n\n\t\t\t\t\t** Delete successful **");
            i++;

            //getchar();



        }
        else
        {

            fprintf(fp,"%s \t",p7->username);
            fprintf(fp,"%s \n\n",p7->password);


        }
        p7=p7->next;
    }
    fclose(fp);

    if(i==0)
    {
        system("cls");
        printf("\n\n\t\t\t\t\t** Not found **\n");
        //getchar();
        //getchar();
       admin_power();
    }
    admin_power();

}

























void search_user()
{
    input_user_search();
    q7=head7;
    char s_n[50];
    printf("\n\t\t\t\tSearch By Username: ");
    scanf("%s",s_n);
    printf("\n");
    FILE *fp;
    fp=fopen("User_id_and_password.text","r");
    while(head7!=NULL)
    {
        if(strcmp(s_n, head7->username) ==0)
        {
            printf("\n\t\tUsername: ");
            printf("%s",head7->username);
            //printf("\n");
            printf("\t\t\tPassword: ");
            printf("%s",head7->password);


search_user_menu();

        }


        //else

            head7=head7->next;

// system("cls");

//system("cls");
    }

printf("\n\n\n\t\t\t\t** Not found !!**");

search_user_menu();


}




















void input_donor()
{

    head2=(struct blood *)malloc(sizeof(struct blood));
    tail2 = head2;
    FILE *fp;
    fp=fopen("blood_member.text","r+");
    int node_no = 1;
    while(1)
    {
        if( feof(fp) )
        {
            break ;
        }
        student2=(struct blood *)malloc(sizeof(struct blood));

        fscanf(fp,"%s",&student2->name_blood);
        fscanf(fp,"%s",&student2->age_blood);
        fscanf(fp,"%s",&student2->location_blood);
        fscanf(fp,"%s",&student2->number_blood);
        fscanf(fp,"%s",&student2->blood_blood);
        fscanf(fp,"%s",&student2->email_blood);


        student2->next=NULL;
        student2->prev=tail2;
        tail2->next=student2;
        tail2=student2;
        if(node_no ==1)
        {
            head2=student2;
        }


        node_no++;
    }
    if(tail2==head2)
    {
        tail2=NULL;
    }
    else
    {
        tail2=tail2->prev;
        tail2->next=NULL;
    }
    fclose(fp);



}




void input_user_search()
{

    head7=(struct user *)malloc(sizeof(struct  user));
    tail7 = head7;
    FILE *fp;
    fp=fopen("User_id_and_password.text","r+");
    int node_no = 1;
    while(1)
    {
        if( feof(fp) )
        {
            break ;
        }
        student7=(struct user *)malloc(sizeof(struct user));

        fscanf(fp,"%s",&student7->username);
        fscanf(fp,"%s",&student7->password);



        student7->next=NULL;
        student7->prev=tail7;
        tail7->next=student7;
        tail7=student7;
        if(node_no ==1)
        {
            head7=student7;
        }


        node_no++;
    }
    if(tail7==head7)
    {
        tail7=NULL;
    }
    else
    {
        tail7=tail7->prev;
        tail7->next=NULL;
    }
    fclose(fp);



}

















void BMI()
{
    int a,b,c,d;
    float hight,total;
    printf("\n\n\t\t\tChecking Your BMI(Body Mass Index)\n\n\n");
    printf("\tInput Your Weight(KG): ");
    scanf("%d",&a);
    printf("\tInput Your Hight(Foot) : ");
    scanf("%d",&b);
    printf("\tinch: ");
    scanf("%d",&c);
    hight=((b*0.3048)+(c*0.0254));
    total=a/(hight*hight);
    printf("\n\tYour BMI: %.1f\n",total);
    if(total<18.5)

    {
        printf("\n\tYou are Underweight ! ");
    }
    else if(total>18.5 &&total<24.9 )
    {
        printf("\n\tYou are Normal Weight ! ");
    }
    else if(total >=25.0 && total<=29.9)
    {
        printf("\n\tYou are Overweight ! ");
    }
    else if(total>30)
    {
        printf("\n\tYou are Obese ! ");
    }
    printf("\n\n\n\t\t\t\t\t\t\t\tBMI Range\n\n\t\t\t\t\t\tUnderweight:  BMI is less than 18.5 \n\n\t\t\t\t\t\tNormal weight:  BMI is 18.5 to 24.9\n\n\t\t\t\t\t\tOverweight:  BMI is 25 to 29.9\n\n\t\t\t\t\t\tObese:  BMI is 30 or more");
    printf("\n\t1: Calculate again  ");
    printf("\n\t2: previous  page  ");
    scanf("%d",&d);
    if(d==1)
    {
        system("cls");
        BMI();
    }
    else if(d==2)
    {
        system("cls");
        menu();

    }

}








void menu()
{


    printf("\n\n\t\t\t\t** Welcome To Our Service **\n\n\n\n");
    printf("\n\t\t\t1:Doctors");

    printf("\t\t\t\t2:Blood Bank\n\n\n\n\n");

    printf("\t\t\t3:Emergency Ambulance");

    printf("\t\t\t4:Checking your BMI\n\n\n\n\n");

    printf("\t\t\t5:Contact with Admin");

    printf("\t\t\t6:Go to previous page\n\n\n\n");


    char b;
    printf("\n\n\n\t\t\tChose your Option : ");
    scanf("%ch",&b);

    if (b=='1')
    {
        system("cls");
        doctor();

    }


    else if(b=='2')
    {
        system("cls");
        blood();
    }


    else if(b=='4')
    {
        system("cls");
        BMI();
    }


    else if(b=='5')
    {
        system("cls");
        log_sms();

    }



    else if(b=='6')
    {
        system("cls");
        user_menu();

    }
    else
    {
        system("cls");
        menu();
    }

}









void member_list()
{
    char name[50];
    char age[5];
    char location[199];
    char number[30];
    char email[100];
    char blood[10];

    printf("\n\t\t\tEnter your name single name:  ");
    scanf("%s",name);
    printf("\n\n\t\tYour age: ");
    scanf("%s",age);

    printf("\n\n\t\tYour present address: ");
    scanf("%s",location);

    printf("\n\n\t\tYour contact number: ");
    scanf("%s",number);

    printf("\n\n\t\tYour Blood group: ");
    scanf("%s",blood);

    printf("\n\n\t\tYour Email address:");
    scanf("%s",email);


    FILE *fp;
    fp=fopen("blood_member.text","a+");
    fprintf(fp,"%s ",name);
    fprintf(fp,"%s ",age);
    fprintf(fp,"%s ",location);
    fprintf(fp,"%s ",number);
    fprintf(fp,"%s ",blood);
    fprintf(fp,"%s ",email);
    fprintf(fp,"\n\n");
    fclose(fp);


}






void box_admin()
{
    char e;

    printf("\n\n\n\n\n\t\t\t1: Check inbox");

    printf("\t\t\t2: Send massage");

     printf("\n\n\n\n\n\t\t\t4: Delete ALL sms of Admin");

    printf("\n\n\n\n\n\t\t\t3: Go to Back page");
    printf("\t\tChoose your option: ");
    scanf("%s",&e);
    if(e=='1')
    {
        system("cls");
        see_all_sms_user();


    }


     else if(e=='4')
    {
        system("cls");
     admin_sms_delete();
     admin_power();
    }






    else if(e=='3')
    {
        system("cls");
        admin_power();
    }

    else if(e=='2')


    {
        system("cls");
        printf("\n\n\n\t\t[ Note: Don't use space in your sentence. ]\n\n\n\t\t[ You must have to use ( _ ) this sign between two words ] ");
        me_admin();


    }


    else
    {
        system("cls");
        admin_power();
    }
}







void box_user()
{
    char c;

    printf("\n\n\n\t\t\t1: Check inbox");
    printf("\t\t\t2: Send massage");
    printf("\n\n\n\t\t\t3: Go to Back page");
    printf("\t\tChoose your option: ");
    scanf("%s",&c);
    if(c=='1')
    {
        system("cls");
        see_all_sms_admin();


    }
    else if(c=='3')
    {
        system("cls");
        menu();
    }

    else if(c=='2')


    {
        system("cls");
        printf("\n\n\t\t[Note: Don't use space in your sentence.]\n\n\t\t[You must have to use ( _ ) this sign between two words ]");
        me_user();


    }


    else
    {
        system("cls");
        admin_power();
    }
}










void see_all_patient()
{
    printf("\n\n\t\t\t\t\t** List of all patient **\n\n\n\n");

input();
    q=head;

    FILE *fp;
    fp=fopen("User information.text","r");
    while(head!=NULL)
    {
printf("\n\n\t\t\tName: ");
            printf("%s",head->name);

            printf("\t\t\tAge: ");
            printf("%s",head->age);

           printf("\t\t\tlocation: ");
            printf("%s",head->location);

           printf("\n\t\t\tNumber: ");
            printf("%s",head->number);

            printf("\t\tblood: ");
            printf("%s",head->blood);

            printf("\t\tEmail: ");
            printf("%s",head->email);


            printf("\n\t\t\tUnite: ");
            printf("%s",head->unite);


              printf("\t\t\tRoom: ");
            printf("%s",head->room);

             printf("\t\tCare of : ");
            printf("%s",head->doctors);





            printf("\n\n");

        head=head->next;
    }



}






void me()

{
    char name[500000];

    printf("\n\n\t\tEnter your sms:  ");

    scanf("%s",name);


    FILE *fp;

    fp=fopen("sms.text","a+");

    fprintf(fp,"%s ",name);

    fprintf(fp,"\n\n");

    fclose(fp);


    system("cls");

    printf("\n\n\t\t\t** Massage successfully send.**");

    box_admin();

}






void me_admin()

{
    char name[500000];

    printf("\n\n\n\t\tEnter your sms:  ");

    scanf("%s",name);


    FILE *fp;

    fp=fopen("admin.text","a+");
fprintf(fp,"Admin:");
    fprintf(fp,"%s ",name);

    fprintf(fp,"\n\n");

    fclose(fp);


    system("cls");

    printf("\n\n\t\t\t** Massage successfully send.**");

    box_admin();

}














void see_all_sms_admin()
{
    printf("\n\t\t\t\t\t** Conversation **\n\n");
    //printf("\t\t\tName\tAge\tLocation\t\tnumber\t\tBlood Group\tEmail\n\n");
    FILE *fp;
    char line[1280];

    head0 = current0 = NULL;
    fp = fopen("admin.text","r");

    while(fgets(line, sizeof(line), fp))
    {
        node0 =(struct list0 *) malloc(sizeof(LIST0));
        node0->string0 = strdup(line);
        node0->next =NULL;

        if(head0 == NULL)
        {
            current0 = head0 = node0;
        }
        else
        {
            current0 = current0->next = node0;
        }
    }
    fclose(fp);


    for(current0 = head0; current0 ; current0=current0->next)
    {
        printf("\t\t\t%s", current0->string0);
    }
    printf("\n\n\t\t\t1:Go to Back page ");

    char a;
    scanf("%s",&a);
    if(a=='1')
    {
        system("cls");
        box_user();
    }
    else
    {
        system("cls");
        box_user();
    }

}




void me_user()

{
    char name[500000];


    printf("\n\n\t\tEnter your sms:  ");

    scanf("%s",name);


    FILE *fp;

    fp=fopen("sms.text","a+");

    fprintf(fp,"%s ",name);

    fprintf(fp,"\n");

    fclose(fp);


    system("cls");

    printf("\n\n\t\t\t** Massage successfully send.**");

    box_user();

}









void see_all_sms_user()
{
    printf("\n\t\t\t\t\t** Conversation **\n\n");
    //printf("\t\t\tName\tAge\tLocation\t\tnumber\t\tBlood Group\tEmail\n\n");
    FILE *fp;
    char line[1280];

    head0 = current0 = NULL;
    fp = fopen("sms.text","r");

    while(fgets(line, sizeof(line), fp))
    {
        node0 =(struct list0 *) malloc(sizeof(LIST0));
        node0->string0 = strdup(line);
        node0->next =NULL;

        if(head0 == NULL)
        {
            current0 = head0 = node0;
        }
        else
        {
            current0 = current0->next = node0;
        }
    }
    fclose(fp);


    for(current0 = head0; current0 ; current0=current0->next)
    {
        printf("\t\t\t%s", current0->string0);
    }
    printf("\n\n\t\t\t1:Go to Back page ");

    char a;
    scanf("%s",&a);
    if(a=='1')
    {
        system("cls");
        box_user();
    }
    else
    {
        system("cls");
        box_user();
    }

}











void patient()
{
    char name[50];
    char age[34];
    char location[199];
    char number[30];
    char email[100];
    char blood[10];
    char doctors[100];
    char unite[10];
    char room[10];

    printf("\n\n\t\t\t\tPatient Record\n\n\n\n");

    printf("\t\tEnter patient's single name:  ");
    scanf("%s",name);

    printf("\n\n\t\tAge: ");
    scanf("%s",age);

    printf("\n\n\t\tPresent address: ");
    scanf("%s",location);

    printf("\n\n\t\tContact number: ");
    scanf("%s",number);

    printf("\n\n\t\tBlood group: ");
    scanf("%s",blood);

    printf("\n\n\t\tEmail address:");
    scanf("%s",email);

    printf("\n\n\t\tUnite:");

    scanf("%s",unite);

        printf("\n\n\t\tRoom number:");
    scanf("%s",room);

     printf("\n\n\t\tCare of Doctor:");
    scanf("%s",doctors);








    FILE *fp;
    fp=fopen("User information.text","a+");
    fprintf(fp,"%s  ",name);
    fprintf(fp,"%s  ",age);
    fprintf(fp,"%s  ",location);
    fprintf(fp,"%s  ",number);
    fprintf(fp,"%s  ",blood);
    fprintf(fp,"%s  ",email);
    fprintf(fp,"%s  ",unite);
    fprintf(fp,"%s  ",room);
    fprintf(fp,"%s  ",doctors);

    fprintf(fp,"\n\n");
    fclose(fp);


}









void patient_seach_option()
{
    system("cls");
    char c,d,e;
    printf("\n\n\n\n\t\t1: search by name");

    printf("\t\t2: search by Unite");

    printf("\n\n\n\n\n\t\t3: search by Room");

    printf("\t\t4: search by Doctor");

    printf("\n\n\n\n\n\t\t5: Back to previous Page");
    printf("\tChoose your Option : ");

    scanf("%s",&d);

    if(d=='1')
    {

        system("cls");
        search_patient();

    }




    else if(d=='2')

    {
        system("cls");
        search_patient_unite();
    }






    else if(d=='3')

    {
        system("cls");
        search_patient_room();
    }



    else if(d=='4')

    {
        system("cls");
        search_patient_doctor();
    }


       else if(d=='5')

    {
        system("cls");
        admin_power();

    }



else
{
    system("cls");
    patient_seach_option();
}




}





void admin_power()
{
    char x,c;
    printf("\n\n\t\t\t\t\t[*** ADMIN PORTAL ***]\n\n\n\n");
    printf("\n\t1: Add patient Record");


    printf("\t\t3: List of All patient");

printf("\t\t0:Delete Patient Record\n\n\n\n");
    printf("\t4: Search patient");

    printf("\t\t5: List of all blood donor");

    printf("\t2: Delete User Account\n\n\n\n");

    printf("\t7: Search User");
     printf("\t\t\t9: List of all User");

     printf("\t\tD: Delete Donor Membership\n\n\n\n");

    printf("\t6: Inbox");
    printf("\t\t\t8: Back to Home page");
    printf("\t\tE: Edit Patient Record");

    printf("\n\n\n\t\t\t\t\tChoose your Option: ");

    scanf("%s",&x);

    if(x=='1')
    {

        system("cls");
        patient();
        system("cls");
        printf("\n\t\t\t\t** Successfully Saved **\n\n");
        admin_power();
        system("cls");
    }




    else if(x=='2')
    {
        system("cls");
        delete_user();
    }



      else if(x=='E')
    {
        system("cls");
        patient_edit();

    }





    else if(x=='3')
    {

        system("cls");
        see_all_patient();
        printf("\n\n\t\t\t1: Go to back page: ");
        scanf("%s",&c);
        if(c=='1')
        {
            system("cls");
            admin_power();
        }
        else


        {
            system("cls");
            admin_power();

        }





    }



    else if(x=='4')
    {
        system("cls");
        patient_seach_option();

    }

    else if(x=='5')
    {
        system("cls");
        see_all_blood_donor();
        printf("\n\n\t\t\t1: Go to back page: ");
        scanf("%s",&c);
        if(c=='1')
        {
            system("cls");
            admin_power();
        }
        else
        {
            system("cls");
            printf("\n\n\n\t\t** Wrong Choose! Choose your Option **\n\n");
            admin_power();
        }
    }



    else if(x=='6')

    {
        system("cls");
        box_admin();

    }




   else if(x=='7')

   {
        system("cls");

       search_user();


    }




else if(x=='9')

    {
        system("cls");

        see_all_user();
    }




    else if(x=='D')

    {
        system("cls");

        delete_doner();
    }






    else if(x=='8')

    {
        system("cls");

        main();
    }




        else if(x=='0')

    {
        system("cls");

        patient_delete();
    }




    else
    {
        system("cls");
        printf("\n\n\t\t\t\tWrong Choose!! Try again.\n\n");
        admin_power();
    }
}








void create_account()
{

    char username[50];
    char password[20];
    printf("\n\n\n\t\t\tCreate your user name: ");
    scanf("%s",username);
    printf("\n\n\t\t\tCreate your Password: ");
    scanf("%s",password);


    input_user();
    q=head;
     while(head!=NULL)
    {

        if (strcmp(username, head->username) == 0)
        {
            system("cls");
            printf("\n\n\n \t\t\t\t** Sorry ! This username already taken **\n\n");
         user_menu();


        }


            head=head->next;

    }




   FILE *fp;
    fp=fopen("User_id_and_password.text","a+");
    fprintf(fp,"%s ",username);
    fprintf(fp,"\t%s ",password);
    fprintf(fp,"\n");
    fclose(fp);



}








void admin()
{
    char a[90];
    char s[90];
    printf("\n\n\n\t\t\t\t\t** Password Protected !! **");
    printf("\n\n\n\n\n\n\t\t\t\tEnter your user name : ");
    scanf("%s",s);
    system("cls");
    printf("\n\n\n\t\t\t\t\t** Password Protected !! ** ");
    printf("\n\n\n\n\n\n\t\t\t\tEnter your password : ");
    scanf("%s",a);
    if((strcmp(s,"admin")==0 )&&(strcmp(a,"admin")==0 ))
    {
        system("cls");
        admin_power();
    }
    else
    {
        system("cls");
        printf("\n\n\t\tWrong user name or Password!!\n");
        main();
    }
}











void home_page()
{
    printf("\n\n\n\t\t\t\t** HOSPITAL MANAGEMENT SYSTEM **");

    printf("\n\n\n\n\n\n\n\n\n\t\t\t1: Admin Panel");

    printf("\t\t\t2: User panel\n\n\n\n\n\n");

    printf("\t\t\t\t\tChoose your option: ");
}






void doctor()

{
    int a,b;
    printf("\n\n\t\t\t** Doctors category **\n\n\n\n");


    printf("\t\t\t1:Internal Medicine Specialist\n\n\n\t\t\t2:Dentist\n\n\n\t\t\t3:Gynecologist\n\n\n\n\t\t\t4:Go to main menu\n\n");


    printf("\n\n\t\t\tChoose Your Option: ");


    scanf("%d",&a);


    if(a==1)
    {
        system("cls");
        printf("\n\tProfessor Dr. Md. Shamsul Alam\n\n\tQualification : BDS, DCD(USSR), FADI(USA)\n\n\tDesignation : Professor & Chairman\n\n\tExpertise : Dentist\n\n\tOrganization: BSM Medical University(Old IPGMR)\n\n\tChamber: Green Life Hospital Limited\n\n\tLocation: 32 Green Road ( Bir Uttom K. M Shafiullah Sarak ) ,Dhanmondi, Dhaka - 1205\n\n\tPhone: +880-2-9612345-54, 9615412, 8628820-1\n\n\n\n\n\n");
        printf("\n\n\t\t\t2:Back to Doctors category: ");
        scanf("%d",&b);


        if(b==2)
        {
            system("cls");
            doctor();
        }

    }



    else if(a==2)
    {
        system("cls");
        printf("\n\tProfessor Dr. Md. Shamsul Alam\n\n\tQualification : BDS, DCD(USSR), FADI(USA)\n\n\tDesignation : Professor & Chairman\n\n\tExpertise : Dentist\n\n\tOrganization: BSM Medical University(Old IPGMR)\n\n\tChamber: Green Life Hospital Limited\n\n\tLocation: 32 Green Road ( Bir Uttom K. M Shafiullah Sarak ) ,Dhanmondi, Dhaka - 1205\n\n\tPhone: +880-2-9612345-54, 9615412, 8628820-1\n\n\n\n\n\n");
        printf("\n\n\t\t\t2:Back to Doctors category: ");
        scanf("%d",&b);
        if(b==2)
        {
            system("cls");
            doctor();
        }

    }
    else if(a==3)
    {
        system("cls");
        printf("\n\tLocation: 32 Green Road \n\n\n\n\n\n");
        printf("\n\n\t\t\t2:Back to Doctors category: ");
        scanf("%d",&b);
        if(b==2)
        {
            system("cls");
            doctor();
        }

    }



    else if (a==4)
    {
        system("cls");
        menu();

    }
}





void blood_member()
{

    printf("\n\n\t\t\twe are save your date as a Blood Donor\n\n\n");
    member_list();
    system("cls");
    printf("\n\t\t\tSuccessfully saved your information.\n\n\n");
    blood();

}






void user_menu()
{
    char a;
    printf("\n\n\n\n\t\t1: Sign Up");
    printf("\t\t\t2: Log in \n\n\n\n");
    printf("\t\t3: Back to Home page");

    printf("\t\tChoose your option: ");
    scanf("%ch",&a);
    system("cls");
    if(a=='1')
    {
        printf("\n\n\n\t\t\t ** Create new account  **\n\n");
        create_account() ;
        system("cls");
        printf("\n\n\t\t\t** Successfully Created  **\n");
        user_menu();
    }

    else if (a=='2')
    {
        log();
    }
    else if(a=='3')
    {
        main();
    }

    else
    {
        printf("\n\t\t\tWrong Input,Please try again\n\n");
        user_menu();
    }
}








void blood()
{
    char c,d;

    printf("\n\n\t\t\t1:Are you Interested to Blood Donate\n\n\n\t\t\t2: Search Blood Group\n\n\n\t\t\t3:Go to menu\n\n");
    printf("\n\t\t\tChoose Your Option: ");
    scanf("%ch",&c);
    if(c=='1')
    {
        system("cls");
        blood_member();

    }
    else if(c=='2')
    {

        system("cls");
        search_donor();

    }
    else if(c=='3')
    {
        system("cls");
        menu();

    }
    else
    {
        system("cls");
        blood();
    }
}










void  main()
{
    char a;
    system("color 3F");
    home_page();
    scanf("%s",&a);
    system("cls");

    if(a=='1')

    {
        admin();
    }


    else if(a=='2')


    {
        user_menu();

    }


    else
    {

        system("cls");

        printf("\n\t\tWrong Choose!! Please Choose your option.\n\n");

        main();


    }

}
