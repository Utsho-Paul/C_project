#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
void tolllist();
void login();
void vehiclescalculation();
void menu();
void devoloper();


int Motorcycle =100;
int Car =750;
int Pickup =1200;
int Microbus =1300;
int Minibus =1400;
int Mediumbus =2000;
int Bigbus = 2400;
int TruckFivetonnes =1600;
int TruckEighttonnes=2100;
int Truck3axle=5500;
int Trailer4axle=6000;
int Tailer4axleav=6000;

void devoloper()
{

    printf("\t\tUtsho Paul\n");
    printf("\t\tBsc in Software Engnearing\n");
    printf("\t\tDaffodil International University");
    getch();
}

void tolllist(){
     system("cls");
     printf("\t1.Motorcycle:100  Tk\n");
     printf("\t2.Car/Jeep  :750  Tk\n");
     printf("\t3.Pickup    :1200 Tk\n");
     printf("\t4.Microbus  :1300 Tk\n");
     printf("\t5.Minibus   :1400 Tk\n");
     printf("\t6.Medium bus:2000 TK\n");
     printf("\t7.Big bus    :2400TK\n");
     printf("\t8.Truck(upto 5 tonnes) :1600 Tk\n");
     printf("\t9.Truck (5-8 tonnes)   :2100 Tk\n");
     printf("\t10.Truck (3 axle)      :5500 Tk\n");
     printf("\t11.Trailer(4 axle)     :6000 Tk\n");
     printf("\t12.Tailer (above 4 axle:6000 Tk\n");
     getch();

}

void vehiclescalculation(){
     system("cls");
     getch();


     printf("\t**WElLCOME Padma bridge Toll System*\n\n");

     printf("\t0.Day Report:\n");
     printf("\t1.Motorcycle\n");
     printf("\t2.Car/Jeep\n");
     printf("\t3.Pickup\n");
     printf("\t4.Microbus\n");
     printf("\t5.Minibus\n");
     printf("\t6.Medium bus\n");
     printf("\t7.Big bus\n");
     printf("\t8.Truck(upto 5 tonnes)\n");
     printf("\t9.Truck (5-8 tonnes)\n");
     printf("\t10.Truck (3 axle)\n");
     printf("\t11.Trailer(4 axle)\n");
     printf("\t12.Tailer (above 4 axle)\n");



     int m=0;
     int c=0;
     int p=0;
     int mi=0;
     int mb=0;
     int mdb=0;
     int bb=0;
     int tf=0;
     int te=0;
     int ttx=0;
     int taf=0;
     int ta=0;

     int total=0;

     int mtk=0;
     int ctk=0;
     int ptk=0;
     int mitk=0;
     int mbtk=0;
     int mdbtk=0;
     int bbtk=0;
     int tftk=0;
     int tetk=0;
     int ttxtk=0;
     int taftk=0;
     int tatk=0;

    while(1)
    {

    int key;


    printf("\n\n\tEnter the choice of Varicales:?  ");
    scanf("%d",&key);
    if(key == 0)
        break;

        switch(key)
        {

            case 1:
            {
                m=m+1;
                total = total+Motorcycle;
                mtk=mtk+Motorcycle;
                printf("\tMotorcycle,toll Added");
                break;
            }
            case 2:
            {
               c=c+1;
               total = total+Car;
               ctk=ctk+Car;
               printf("\tCar,toll Added\n");
               break;


            }

            case 3:
            {

                p=p+1;
                total = total+Pickup;
                ptk= ptk+Pickup;
                printf("\tPickup,toll Added\n");
                break;
            }

            case 4:

                {
                    mi=mi+1;
                    total = total+Microbus;
                    mitk = mitk+Microbus;
                    printf("\tMicrobus,toll Added\n");
                    break;

                }

            case 5:
                {

                    mb = mb+1;
                    total = total+Minibus;
                    mbtk=mbtk+Minibus;
                    printf("\tminibus, toll Added\n");
                    break;
                }

            case 6:
        {
            mdb=mdb+1;
            total = total+Mediumbus;
            mdbtk = mdbtk+Mediumbus;
            printf("\tMediumbus,toll Added\n");
            break;

        }

            case 7:
                {

                    bb=bb+1;
                    total = total+Bigbus;
                    bbtk = bbtk+Bigbus;
                    printf("\tBigbus,toll Added\n");
                    break;

                }

            case 8:
                {
                    tf = tf+1;
                    total = total + TruckFivetonnes;
                    tftk = tftk + TruckFivetonnes;
                    printf("\tTruckFivetonnes,toll Added\n");

                    break;

                }

            case 9:

                {

                    te = te+1;
                    total = total+TruckEighttonnes;
                    tetk = tetk+TruckEighttonnes;
                    printf("\tTruckEighttonnes,toll Added\n");
                    break;
                }

            case 10:

                {
                    ttx=ttx+1;
                    total = total+Truck3axle;
                    ttxtk = ttxtk+Truck3axle;
                    printf("\tTruck3axle,toll Added\n");
                    break;

                }

            case 11:
                {


                    taf=taf+1;
                    total = total+Trailer4axle;
                    taftk = taftk+Trailer4axle;
                    printf("\tTrailer(4 axle,toll Added)\n");
                }

            case 12:
                {

                    ta=ta+1;
                    total= total+Tailer4axleav;
                    tatk= tatk+Tailer4axleav;
                    printf("\t 12.Tailer (above 4 axle\n");

                }


            default: printf("\tInvalid varicales");
        }
    }


system("cls");
getch();

printf("___________________________________\n");

printf("\n\t   Day Report Sheet\t   \n");
printf("_________________________________\n");

printf("\tVehicales List: \n");
printf("\t\n_______________________________\n");


printf("\t1.Motorcycle: %d\n",m);
printf("\t2.Car/Jeep  : %d\n",c);
printf("\t3.Pickup    : %d\n",p);
printf("\t4.Microbus  : %d\n",mi);
printf("\t5.Minibus   : %d\n",mb);
printf("\t6.Medium bus: %d\n",mdb);
printf("\t7.Big bus   : %d\n",bb);
printf("\t8.Truck(upto5 tonnes : %d\n",tf);
printf("\t9.Truck(5-8 tonnes)  : %d\n",te);
printf("\t10.Truck (3 axle)    : %d\n",ttx);
printf("\t11.Trailer(4 axle)   : %d\n",taf);
printf("\t12.Tailer(above 4 axle): %d\n",ta);
printf("____________________________________\n");

printf("\t\nToll Amount of Spacific Vehicals\n");
printf("\n__________________________________\n");

printf("\t1.Motorcycle: %d Tk\n",mtk);
printf("\t2.Car/Jeep  : %d Tk\n",ctk);
printf("\t3.Pickup    : %d\n",ptk);
printf("\t4.Microbus  : %d\n",mitk);
printf("\t5.Minibus   : %d\n",mbtk);
printf("\t6.Medium bus: %d\n",mdbtk);
printf("\t7.Big bus   : %d\n",bbtk);
printf("\t8.Truck(upto5 tonnes : %d\n",tftk);
printf("\t9.Truck(5-8 tonnes)  : %d\n",tetk);
printf("\t10.Truck (3 axle)    : %d\n",ttxtk);
printf("\t11.Trailer(4 axle)   : %d\n",taftk);
printf("\t12.Tailer(above 4 axle): %d\n",tatk);

printf("_____________________________________\n");

printf("\tTotal Amount: %d\n",total);
printf("");
getch();

}

void login(){
char username []= "admin";
char password[] ="abcd";
char uname[50];
char pas[20];
printf("\nEnter User name: ");
 scanf("%s",&uname);
 printf("\nEnter the pasword:");
 scanf("%s",&pas);

int x,y;

 x = strcmp(uname,username);
 y= strcmp (pas,password);
 if(x==0 && y==0){
 	printf("\n\tLogin successfully\n\n");
 	getch();
 	menu();
 }
 else printf("Invalid password");

}

void menu(){
	int choice;
	while(1){
	system("cls");
	printf("\t1.View Toll Rate List\n");
	printf("\t2.Toll Entey:\n");
	printf("\t3.Exit\n");
	printf("\t4.Logout\n");
	printf("\t5.View Devolopers\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:

        tolllist();
        break;

		case 2:
        vehiclescalculation();
        break;

        case 3:
        exit(1);

        case 4:
           main();
            break;

        case 5:
            devoloper();
            break;


        default:
		 printf("Invalid choice\n");
	}
}
}

int main()
{
    while(1)
    {


int choice;
printf("\t1.Login\n");
printf("\tPress:");
scanf("%d",&choice);



if(choice==1)
login();
else printf("\tInvalid");
 getch();
}
}

