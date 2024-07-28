#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//function prototyping
 void add_item(); void  view_item(); void view_tables(); void  view_earning();
 void add_drinks(); void add_sandwich();void add_pizza();void add_burger();void add_noodles();void add_desserts();
 void get_table();void menu();void order();void print_bill();
 void order_drink();void order_sandwich();void order_pizza();void order_burger();void order_noodles();void order_desserts();


//global variables
int totalearn=0,t1e=0,t2e=0,t3e=0,t4e=0,t5e=0;
int table[]={0,0,0,0,0};
int drinks[]={10,10,10,10,10};
int sandwich[]={10,10,10,10,10};
int pizza[]={10,10,10,10,10};
int burger[]={10,10,10,10,10};
int noodles[]={10,10,10,10,10};
int desserts[]={10,10,10,10,10};
int orderdrinks[]={0,0,0,0,0};
int ordersandwich[]={0,0,0,0,0};
int orderpizza[]={0,0,0,0,0};
int orderburger[]={0,0,0,0,0};
int ordernoodles[]={0,0,0,0,0};
int orderdesserts[]={0,0,0,0,0};
//admin block
 void admin()
{
    int addconst;
    do{
     printf("Enter 1 if you want to add items\n");
     printf("Enter 2 if you want to view remaining items\n");
     printf("Enter 3 if you want to view tables\n");
     printf("Enter 4 if you want to view earning\n");
     printf("Enter 5 in you want to exit\n");
     scanf("%d",&addconst);
     printf("\n");
     switch(addconst)
     {
        case 1:
        add_item();
        break;
        case 2:
        view_item();
        break;
        case 3:
        view_tables();
        break;
        case 4:
        view_earning();
        break;
        case 5:
        printf("Exiting Admin Control Panel\n");
        break;
        default:
        printf("Invalid Choice\n");
        break;
     }
    }
    while(addconst!=5);
}
//adding items - admins can access
void add_item()
{
    int choice;
    do
    {
     printf("Enter 1 if you want to add a DRINK \n");
     printf("Enter 2 if you want to add a SANDWICH \n");
     printf("Enter 3 if you want to add a PIZZA \n");
     printf("Enter 4 if you want to add a BURGER\n");
     printf("Enter 5 if you want to add a NOODLES\n");
     printf("Enter 6 in you want to add a DESSERTS\n");
     printf("Enter 7 to EXIT");
     scanf("%d",&choice);
     printf("\n");
    }
     while (choice!=7);
    switch(choice)
    {
    case 1:
    add_drinks();
    break;
    case 2:
    add_sandwich();
    break;
    case 3:
    add_pizza();
    break;
    case 4:
    add_burger();
    break;
    case 5:
    add_noodles();
    break;
    case 6:
    add_desserts();
    break;
    default:
    printf("Invalid choice.");
    break;
    }
}
//add drinks - admin access
void add_drinks()
{
    int a,d=0;
    do
    {
        printf("Enter 1 for adding Blueberry Mojito \n");
        printf("Enter 2 for adding Citrus Fizz\n");
        printf("Enter 3 for adding Dry Cranberry Spitzer\n");
        printf("Enter 4 for adding Rose Fizz\n");
        printf("Enter 5 for adding Shirley Ginger\n");
        printf("Enter 6 to exit");
        scanf("%d",&a);
        printf("\n");
        printf("Enter the number of items you want to enter\n");
        scanf("%d",&d);
        printf("\n");
        switch(a)
        {
            case 1:
            drinks[0]=drinks[0]+d;
            break;
            case 2:
            drinks[1]=drinks[1]+d;
            break;
            case 3:
            drinks[2]=drinks[2]+d;
            break;
            case 4:
            drinks[3]=drinks[3]+d;
            break;
            case 5:
            drinks[4]=drinks[4]+d;
            break;
            case 6:
            printf("Exiting\n");
            break;
            default:
            printf("Invalid choice!\n");
            break;
        }
    } while (d!=6);

}
//to add sandwiches-admin access
void add_sandwich()
{
    int b,s=0;
do
{
    printf("Enter 1 for adding Paneer and Corn Cheese Sandwich \n");
    printf("Enter 2 for adding Vegetable Sandwich\n");
    printf("Enter 3 for adding Egg and Mayonnaise Grilled Sandwich\n");
    printf("Enter 4 for adding Chicken Corn Cheese Cold Sandwich\n");
    printf("Enter 5 for adding Grilled Chicken Cheese  Sandwich\n");
    printf("Enter 6 to exit\n");
    scanf("%d",&b);
    printf("\n");
    printf("Enter the number of items you want to enter\n");
    scanf("%d",&s);
    printf("\n");
     switch(b)
     {
        case 1:
        sandwich[0]=sandwich[0]+s;
        break;
        case 2:
        sandwich[1]=sandwich[1]+s;
        break;
        case 3:
        sandwich[2]=sandwich[2]+s;
        break;
        case 4:
        sandwich[3]=sandwich[3]+s;
        break;
        case 5:
        sandwich[4]=sandwich[4]+s;
        break;
        case 6:
        printf("Exiting\n");
        break;
        default:
        printf("Invalid choice!\n");
        break;
     }
} while (b!=6);
}
//to add pizza-admin access
void add_pizza()
{
    int c,p=0;
 do{
    printf("Enter 1 for adding Baby corn and Paneer Pizza \n");
    printf("Enter 2 for adding Chicken Barbeque Pizza\n");
    printf("Enter 3 for adding Pizza Margherita\n");
    printf("Enter 4 for adding Cheese Burst Pizza\n");
    printf("Enter 5 for adding Mushroom Chilli Oil Pizza\n");
    printf("Enter 6 to exit\n");
    scanf("%d",&c);
    printf("\n");
    printf("Enter the number of items you want to enter\n");
    scanf("%d",&p);
    printf("\n");
    switch(c)
    {
        case 1:
        pizza[0]=pizza[0]+p;
        break;
        case 2:
        pizza[1]=pizza[1]+p;
        break;
        case 3:
        pizza[2]=pizza[2]+p;
        break;
        case 4:
        pizza[3]=pizza[3]+p;
        break;
        case 5:
        pizza[4]=pizza[4]+p;
        break;
        case 6:
        printf("Exiting\n");
        break;
        default:
        printf("Invalid Choice\n");
        break;
    }
   } 
   while(c!=6);
}
//to add burgers - admin access
void add_burger()
{
    int di ,bu=0;
    do
    {
    printf("Enter 1 for adding Vegan Burger \n");
    printf("Enter 2 for adding Double Decker Burger\n");
    printf("Enter 3 for adding Cheese Burger\n");
    printf("Enter 4 for adding Deconstructed Burger\n");
    printf("Enter 5 for adding Spicy Tandoori Burger\n");
    printf("Enter 6 to exit\n");
    scanf("%d",&di);
    printf("\n");
    printf("Enter the number of items you want to enter\n");
    scanf("%d",&bu);
    printf("\n");
    switch(di)
    {
     case 1:
     burger[0]=burger[0]+bu;
     break;
     case 2:
     burger[1]=burger[1]+bu;
     break;
     case 3:
     burger[2]=burger[2]+bu;
     break;
     case 4:
     burger[3]=burger[3]+bu;
     break;
     case 5:
     burger[4]=burger[4]+bu;
     break;
     case 6:
     printf("Exiting\n");
     break;
     default:
     printf("Invalid Choice \n");  
     break;     
    }
    } while (di!=0);
}
//to add noodles - admin access
void add_noodles()
{
    int e,no=0;
    do
    {
    printf("Enter 1 for adding Cheesy Garlic Hand Pulled Noodles\n");
    printf("Enter 2 for adding Red Sauce Pasta\n");
    printf("Enter 3 for adding Thupka\n");
    printf("Enter 4 for adding Pasta in White Sauce\n");
    printf("Enter 5 for adding Meatball Spaghetti\n");
    printf("Enter 6 to exit\n");
    scanf("%d",&e);
    printf("\n");
    printf("Enter the number of items you want to enter\n");
    scanf("%d",&no);
    printf("\n");
    switch(e)
    {
        case 1:
        noodles[0]=noodles[0]+no;
        break;
        case 2:
        noodles[1]=noodles[1]+no;
        break;
        case 3:
        noodles[2]=noodles[2]+no;
        break;
        case 4:
        noodles[3]=noodles[3]+no;
        break;
        case 5:
        noodles[4]=noodles[4]+no;
        break;
        case 6:
        printf("xiting\n");
        break;
        default:
        printf("Invalid Choice\n");
        break;
    }
    } while (e!=6);
}
// to add desserts - admin access
void add_desserts()
{
    int f,de=0;
    do
    {
    printf("Enter 1 for adding Brownie with Vanilla Icecream\n");
    printf("Enter 2 for adding Biscoff Cheesecake\n");
    printf("Enter 3 for adding Chocolate Mousse Cake\n");
    printf("Enter 4 for adding Caramel Pudding\n");
    printf("Enter 5 for adding Fruit Custard\n");
    printf("Enter 6 to exit\n");
    scanf("%d",&f);
    printf("\n");
    printf("Enter the number of items you want to enter\n");
    scanf("%d",&de);
    printf("\n");
    switch(f)
    {
        case 1:
        desserts[0]=desserts[0]+de;
        break;
        case 2:
        desserts[1]=desserts[1]+de;
        break;
        case 3:
        desserts[2]=desserts[2]+de;
        break;
        case 4:
        desserts[3]=desserts[3]+de;
        break;
        case 5:
        desserts[4]=desserts[4]+de;
        break;
        case 6:
        printf("Exiting \n");
        break;
        default:
        printf("Invalid Choice \n");
        break;
    }
    } while (f!=6);
}
// view remaining items - admin access 
void view_item()
{
printf("The availablity of DRINKS :\n");
for(int i=0;i<5;i++)
{
    if(drinks[i]>0)
    printf("The drink number %d is available \t %d \n",i+1, drinks[i]);
    else
    printf("The drink number %d is unavailable\n", i+1);
}
printf("The availability of SANDWICHES : \n");
for(int i=0;i<5;i++)
{
    if(sandwich[i]>0)
    printf("The sandwich number %d is available\t %d \n", i+1, sandwich[i]);
    else
    printf("The sandwich number %d is unavailable\n", i+1);
}
printf("The availability of PIZZAS : \n");
for(int i=0;i<5;i++)
{
    if(pizza[i]>0)
    printf("The pizza number %d is available \t %d\n", i+1, pizza[i]);
    else
    printf("The pizza number %d is unavailable\n", i+1);
}
printf("The availability of BURGERS : \n");
for(int i=0;i<5;i++)
{
    if(burger[i]>0)
    printf("The burger number %d is available\t %d\n", i+1, burger[i]);
    else
    printf("The burger number %d is unavailable\n", i+1);
}
printf("The availability of NOODLES : \n ");
for(int i=0;i<5;i++)
{
    if(noodles[i]>0)
    printf("The noodles number %d is available\t %d\n",i+1, noodles[i]);
    else
    printf("The noodles number %d is unavailable\n", i+1);
}
printf("The availability of DESSERTS : \n");
for(int i=0;i<5;i++)
{
    if(desserts[i]>0)
    printf("The dessert number %d is available\t %d\n",i+1, desserts[i]);
    else
    printf("The dessert number %d is unavailable\n", i+1);
}
} 
//display tables - admin access
void view_tables()
{
    for(int i=0;i<5;i++)
    {
        if(table[i+1]==0)
        printf("The Table available is %d\t",i+1);
    }
}
// display earnings - admin access
void view_earning()
{
    printf("The earning till now is :%d\n",totalearn);
}
//customer block
void customer()
{
    int cusconst;
do
{
    printf("Enter 1 to get a TABLE\n");
    printf("Enter 2 if you want to view the MENU\n");
    printf("Enter 3 if you want to ORDER\n");
    printf("Enter 4 if you want to PRINT BILL\n");
    printf("Enter 5 to EXIT\n");
    scanf("%d",&cusconst);
    switch(cusconst)
    {
        case 1: 
        get_table();
        break;
        case 2:
        menu();
        break;
        case 3:
        order();
        break;
        case 4:
        print_bill();
        break;
        case 5:
        printf("Exiting.\n Have a Nice Day \n");
        break;
        default:
        printf("Invalid Choice.\n Try Again\n");
        break;
    }
} 
while (cusconst!=5);
}
//to get table-customer access
void get_table()
{
    for(int i=0;i<5;i++)
    {
        if(table[i]==0)
        {
        printf("The table alloted to you is \t%d\n",i+1);
        table[i]=1;
        }
        else
        printf("Sorry there are no tables available right now\n");
    }
}
//to print the menu
void menu()
{
    printf("\t\t\tDRINKS\t\t\t\n");
    printf("Blueberry Mojito                               Rs.170\n");
    printf("Citrus Fizz                                    Rs.170\n");
    printf("Dry Cranberry Spitzer                          Rs.170\n");
    printf("Rose Fizz                                      Rs.170\n");
    printf("Shirley Ginger                                 Rs.170\n");
    printf("\n\n\n");
    printf("\t\t\tSANDWICH\t\t\t\n");
    printf("Paneer and Corn Cheese Sandwich                Rs.80\n");
    printf("Vegetable Sandwich                             Rs.80\n");
    printf("Egg and Mayonnaise Grilled S                   Rs.80\n");
    printf("Chicken Corn Cheese Cold Sandwich              Rs.80\n");
    printf("Grilled Chicken Cheese Sandwich                Rs.80\n");
    printf("\n\n\n");
    printf("\t\t\tPIZZA\t\t\t\n");
    printf("Baby corn and Paneer Pizza                     Rs.250\n");
    printf("Chicken Barbeque Pizza                         Rs.250\n");
    printf("Pizza Margherita                               Rs.250\n");
    printf("Cheese Burst Pizza                             Rs.250\n");
    printf("Mushroom Chilli Oil Pizza                      Rs.250\n");
    printf("\n\n\n");
    printf("\t\t\tBURGER\t\t\t\n");
    printf("Vegan Burger                                   Rs.120\n");
    printf("Double Decker Burger                           Rs.120\n");
    printf("Cheese Burger                                  Rs.120\n");
    printf("Deconstructed Burger                           Rs.120\n");
    printf("Spicy Tandoori Burger                          Rs.120\n");
    printf("\n\n\n");
    printf("\t\t\t NOODLES\t\t\t\n");
    printf("Cheesy Garlic Hand Pulled Noodles              Rs.200\n");
    printf("Red Sauce Pasta                                Rs.200\n");
    printf("Thupka                                         Rs.200\n");
    printf("Pasta in White Sauce                           Rs.200\n");
    printf("Meatball Spaghetti                             Rs.200\n");
    printf("\n\n\n");
    printf("\t\t\t DESSERTS\t\t\t\n");
    printf("Brownie with Vanilla Icecream                  Rs.100\n");
    printf("Biscoff Cheesecake                             Rs.100\n");
    printf("Chocolate Mousse Cake                          Rs.100\n");
    printf("Caramel Pudding                                Rs.100\n");
    printf("Fruit Custard                                  Rs.100\n");
    printf("\n\n\n");
}
//to take orders
void order()
{
    int o;
    do
    {
     printf("Enter 1 to order Drink\n");
     printf("Enter 2 to order Sandwich\n");
     printf("Enter 3 to order Pizza\n");
     printf("Enter 4 to order Burger\n");
     printf("Enter 5 to order Noodles\n");
     printf("Enter 6 to order Dessers\n");
     printf("Enter 7 to exit");
     scanf("%d",&o);
     printf("\n");
     switch(o)
     {
        case 1:
        order_drink();
        break;
        case 2:
        order_sandwich();
        break;
        case 3:
        order_pizza();
        break;
        case 4:
        order_burger();
        break;
        case 5:
        order_noodles();
        break;
        case 6:
        order_desserts();
        break;
        case 7:
        printf("Exiting\n");
        break;
        default:
        printf("Invalid Option\n");
        break;
     }
    } while (o!=7);
}
//to order drinks
void order_drink()
{
int od,ds=0;
do{
printf("Enter 1 for ordering Blueberry Mojito \n");
printf("Enter 2 for ordering Citrus Fizz\n");
printf("Enter 3 for ordering Dry Cranberry Spitzer\n");
printf("Enter 4 for ordering Rose Fizz\n");
printf("Enter 5 for ordering Shirley Ginger\n");
printf("Enter 6 to exit");
scanf("%d",&od);
printf("\n");
printf("Enter the quantity\n");
scanf("%d",&ds);
printf("\n");
switch(od)
{
case 1:
if(drinks[0]>=ds)
{
orderdrinks[0]=orderdrinks[0]+ds;
drinks[0]=drinks[0]-ds;
}
else
printf("Item Unavailable\n");
break;
case 2:
if(drinks[1]>=ds)
{
orderdrinks[1]=orderdrinks[1]+ds;
drinks[1]=drinks[1]-ds;
}
else 
printf("Item Unavailable\n");
break;
case 3:
if(drinks[2]>=ds)
{
orderdrinks[2]=orderdrinks[2]+ds;
drinks[2]=drinks[2]-ds;
}
else
printf("Item Unavailable\n");
break;
case 4:
if(drinks[3]>=ds)
{
orderdrinks[3]=orderdrinks[3]+ds;
drinks[3]=drinks[3]-ds;
}
else
printf("Item Unavailable\n");
break;
case 5:
if(drinks[4>=ds])
{
orderdrinks[4]=orderdrinks[4]+ds;
drinks[4]=drinks[4]-ds;
}
else
printf("Item Unavailable\n");
break;
case 6:
printf("Exiting\n");
break;
default:
printf("Invalid Choice");
break;
}
}
while(od!=6);
}
//to order sandwiches
void order_sandwich()
{
int os,ses=0;
do
{
printf("Enter 1 for ordering Paneer and Corn Cheese Sandwich \n");
printf("Enter 2 for ordering Vegetable Sandwich\n");
printf("Enter 3 for ordering Egg and Mayonnaise Grilled Sandwich\n");
printf("Enter 4 for ordering Chicken Corn Cheese Cold Sandwich\n");
printf("Enter 5 for ordering Grilled Chicken Cheese  Sandwich\n");
printf("Enter 6 to exit\n");
scanf("%d",&os);
printf("\n");
printf("Enter the number of items you want to order\n");
scanf("%d",&ses);
printf("\n");
switch(os)
{
    case 1:
    if(sandwich[0]>=ses)
    {
    ordersandwich[0]=ordersandwich[0]+ses;
    sandwich[0]=sandwich[0]-ses;
    }
    else
    printf("Item Unavailable\n");
    break;
    case 2:
    if(sandwich[1]>=ses)
    {
    ordersandwich[1]=ordersandwich[1]+ses;
    sandwich[1]=sandwich[1]-ses;
    }
    else
    printf("Item Unavailable\n");
    break;
    case 3:
    if(sandwich[2]>=ses)
    {
    ordersandwich[2]=ordersandwich[2]+ses;
    sandwich[2]=sandwich[2]-ses;
    }
    else
    printf("Item Unavailable\n");
    break;
    case 4:
    if(sandwich[3]>=ses)
    {
    ordersandwich[3]=ordersandwich[3]+ses;
    sandwich[3]=sandwich[3]-ses;
    }
    else
    printf("Item Unavailable\n");
    break;
    case 5:
    if(sandwich[4]>=sandwich[4])
    {
    ordersandwich[4]=ordersandwich[4]+ses;
    sandwich[4]=sandwich[4]-ses;
    }
    else
    printf("Item Unavailable\n");
    break;
    case 6:
    printf("Exiting\n");
    break;
    default:
    printf("Invalid Choice");
    break;
}
}
while(os!=6);
}
//to order pizza
void order_pizza()
{
    int op,ps=0;
    do
    {
    printf("Enter 1 for ordering Baby corn and Paneer Pizza \n");
    printf("Enter 2 for ordering Chicken Barbeque Pizza\n");
    printf("Enter 3 for ordering Pizza Margherita\n");
    printf("Enter 4 for ordering Cheese Burst Pizza\n");
    printf("Enter 5 for ordering Mushroom Chilli Oil Pizza\n");
    printf("Enter 6 to exit\n");
    scanf("%d",&op);
    printf("\n");
    printf("Enter the number of items you want to order\n");
    scanf("%d",&ps);
    printf("\n");
    switch(op)
    {
        case 1:
        if(pizza[0]>=ps)
        {
        orderpizza[0]=orderpizza[0]+ps;
        pizza[0]=pizza[0]-ps;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 2:
        if(pizza[1]>=ps)
        {
        orderpizza[1]=orderpizza[1]+ps;
        pizza[1]=pizza[1]-ps;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 3:
        if(pizza[2]>=ps)
        {
        orderpizza[2]=orderpizza[2]+ps;
        pizza[2]=pizza[2]-ps;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 4:
        if(pizza[3]>=ps)
        {
        orderpizza[3]=orderpizza[3]+ps;
        pizza[3]=pizza[3]-ps;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 5:
        if(pizza[4]>=ps)
        {
        orderpizza[4]=orderpizza[4]+ps;
        pizza[4]=pizza[4]-ps;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 6:
        printf("Exiting\n");
        break;
        default:
        printf("Invalid Choice\n");
        break;
    }
    } while (op!=6);
}
// to order burgers
void order_burger()
{
    int ob,bs=0;
    do
    {
    printf("Enter 1 for ordering Vegan Burger \n");
    printf("Enter 2 for ordering Double Decker Burger\n");
    printf("Enter 3 for ordering Cheese Burger\n");
    printf("Enter 4 for ordering Deconstructed Burger\n");
    printf("Enter 5 for ordering Spicy Tandoori Burger\n");
    printf("Enter 6 to exit\n");
    scanf("%d",&ob);
    printf("\n");
    printf("Enter the number of items you want to enter\n");
    scanf("%d",&bs);
    printf("\n");
    switch(ob)
    {
        case 1:
        if(burger[0]>=bs)
        {
        orderburger[0]=orderburger[0]+bs;
        burger[0]=burger[0]-bs;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 2:
        if(burger[1]>=bs)
        {
        orderburger[1]=orderburger[1]+bs;
        burger[1]=burger[1]-bs;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 3:
        if(burger[2]>=bs)
        {
        orderburger[2]=orderburger[2]+bs;
        burger[2]=burger[2]-bs;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 4:
        if(burger[3]>=bs)
        {
        orderburger[3]=orderburger[3]+bs;
        burger[3]=burger[3]-bs;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 5:
        if(burger[4]>=bs)
        {
        orderburger[4]=orderburger[4]+bs;
        burger[4]=burger[4]-bs;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 6:
        printf("Exiting\n");
        break;
        default:
        printf("Invalid Choice\n");
        break;
    }
    }
    while(ob!=6);
}
// to order noodles
void order_noodles()
{
    int on,nos=0;
    do
    {
    printf("Enter 1 for ordering Cheesy Garlic Hand Pulled Noodles\n");
    printf("Enter 2 for ordering Red Sauce Pasta\n");
    printf("Enter 3 for ordering Thupka\n");
    printf("Enter 4 for ordering Pasta in White Sauce\n");
    printf("Enter 5 for ordering Meatball Spaghetti\n");
    printf("Enter 6 to exit\n");
    scanf("%d",&on);
    printf("\n");
    printf("Enter the number of items you want to enter\n");
    scanf("%d",&nos);
    printf("\n");
    switch(on)
    {
        case 1:
        if(noodles[0]>=nos)
        {
        ordernoodles[0]=ordernoodles[0]+nos;
        noodles[0]=noodles[0]-nos;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 2:
        if(noodles[1]>=nos)
        {
        ordernoodles[1]=ordernoodles[1]+nos;
        noodles[1]=noodles[1]-nos;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 3:
        if(noodles[2]>=nos)
        {
        ordernoodles[2]=ordernoodles[2]+nos;
        noodles[2]=noodles[2]-nos;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 4:
        if(noodles[3]>=nos)
        {
        ordernoodles[3]=ordernoodles[3]+nos;
        noodles[3]=noodles[3]-nos;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 5:
        if(noodles[4]>=nos)
        {
        ordernoodles[4]=ordernoodles[4]+nos;
        noodles[4]=noodles[4]-nos;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 6:
        printf("Exiting\n");
        break;
        default:
        printf("Invalid choice\n");
        break;
    }
    } while(on!=6);
}
//to add desserts
void order_desserts()
{
    int ode,des=0;
    do
    {
    printf("Enter 1 for ordering Brownie with Vanilla Icecream\n");
    printf("Enter 2 for ordering Biscoff Cheesecake\n");
    printf("Enter 3 for ordering Chocolate Mousse Cake\n");
    printf("Enter 4 for ordering Caramel Pudding\n");
    printf("Enter 5 for ordering Fruit Custard\n");
    printf("Enter 6 to exit\n");
    scanf("%d",&ode);
    printf("\n");
    printf("Enter the number of items you want to enter\n");
    scanf("%d",&des);
    printf("\n");
    switch(ode)
    {
        case 1:
        if(desserts[0]>=des)
        {
        orderdesserts[0]=orderdesserts[0]+des;
        desserts[0]=desserts[0]-des;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 2:
        if(desserts[1]>=des)
        {
        orderdesserts[1]=orderdesserts[1]+des;
        desserts[1]=desserts[1]-des;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 3:
        if(desserts[2]>=des)
        {
        orderdesserts[2]=orderdesserts[2]+des;
        desserts[2]=desserts[2]-des;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 4:
        if(desserts[3]>=des)
        {
        orderdesserts[3]=orderdesserts[3]+des;
        desserts[3]=desserts[3]-des;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 5:
        if(desserts[4]>=des)
        {
        orderdesserts[4]=orderdesserts[4]+des;
        desserts[4]=desserts[4]-des;
        }
        else
        printf("Item Unavailable\n");
        break;
        case 6:
        printf("Exiting\n");
        break;
        default:
        printf("Invalid Choice\n");
        break;
    }
    }
    while(ode!=6);
}
//to make bill 
void print_bill()
{
int sum=0;
    if(orderdrinks[0]!=0)
    {
    printf("Blueberry Mojito\t");
    printf("%d\n",orderdrinks[0]);
    sum=orderdrinks[0]*170+sum;
    }
    if(orderdrinks[1]!=0)
    {
    printf("Citrus Fizz\t");
    printf("%d\n",orderdrinks[1]);
    sum=orderdrinks[1]*170+sum;
    }
    if(orderdrinks[2]!=0)
    {
    printf("Dry Cranberry Spitzer\t");
    printf("%d\n",orderdrinks[2]);
    sum=orderdrinks[2]*170+sum;
    }
    if(orderdrinks[3]!=0)
    {
    printf("Rose Fizz\t");
    printf("%d\n",orderdrinks[3]);
    sum=orderdrinks[3]*170+sum;
    }
    if(orderdrinks[4]!=0)
    {
    printf("Shirley Ginger\t");
    printf("%d\n",orderdrinks[4]);
    sum=orderdrinks[0]*170+sum;
    }
    if(ordersandwich[0]!=0)
    {
     printf("Paneer and Corn Cheese Sandwich\t");
     printf("%d\n",ordersandwich[0]);
     sum=ordersandwich[0]*80+sum;
    }
     if(ordersandwich[1]!=0)
    {
     printf("Vegetable Sandwich\t");
     printf("%d\n",ordersandwich[1]);
     sum=ordersandwich[1]*80+sum;
    }
     if(ordersandwich[2]!=0)
    {
     printf("Egg and Mayonnaise Sandwich\t");
     printf("%d\n",ordersandwich[2]);
     sum=ordersandwich[2]*80+sum;
    }
     if(ordersandwich[3]!=0)
    {
     printf("Chicken Corn Cheese Cold Sandwich\t");
     printf("%d\n",ordersandwich[3]);
     sum=ordersandwich[3]*80+sum;
    }
     if(ordersandwich[4]!=0)
    {
     printf("Grilled Chicken Cheese Sandwich\t");
     printf("%d\n",ordersandwich[4]);
     sum=ordersandwich[4]*80+sum;
    }
    if(orderpizza[0]!=0)
    {
        printf("Baby Corn and Paneer Pizza\t");
        printf("%d\n",orderpizza[0]);
        sum=orderpizza[0]*250;
    }
    if(orderpizza[1]!=0)
    {
        printf("Chicken Barbeque Pizza\t");
        printf("%d\n",orderpizza[1]);
        sum=orderpizza[1]*250;
    }
    if(orderpizza[2]!=0)
    {
        printf("Pizza Margherita\t");
        printf("%d\n",orderpizza[2]);
        sum=orderpizza[2]*250;
    }
    if(orderpizza[3]!=0)
    {
        printf("Cheese Burst Pizza\t");
        printf("%d\n",orderpizza[3]);
        sum=orderpizza[3]*250;
    }
    if(orderpizza[4]!=0)
    {
        printf("Mushroom and Chilli Oil Pizza\t");
        printf("%d\n",orderpizza[4]);
        sum=orderpizza[4]*250;
    }
    if(orderburger[0]!=0)
    {
        printf("Vegan Burger\t");
        printf("%d\n",orderburger[0]);
        sum=orderburger[0]*120;
    }
     if(orderburger[1]!=0)
    {
        printf("Double Decker Burger\t");
        printf("%d\n",orderburger[1]);
        sum=orderburger[1]*120;
    }
     if(orderburger[2]!=0)
    {
        printf("Cheese Burger\t");
        printf("%d\n",orderburger[2]);
        sum=orderburger[2]*120;
    }
     if(orderburger[3]!=0)
    {
        printf("Deconstructed Burger\t");
        printf("%d\n",orderburger[3]);
        sum=orderburger[3]*120;
    }
     if(orderburger[4]!=0)
    {
        printf("Spicy Tandoori Burger\t");
        printf("%d\n",orderburger[4]);
        sum=orderburger[4]*120;
    }
    if(ordernoodles[0]!=0)
    {
        printf("Cheesy Garlic Hand Pulled Noodles\t");
        printf("%d\n",ordernoodles[0]);
        sum=ordernoodles[0]*200+sum;
    }
    if(ordernoodles[1]!=0)
    {
        printf("Red Sauce Pasta\t");
        printf("%d\n",ordernoodles[1]);
        sum=ordernoodles[1]*200+sum;
    }
    if(ordernoodles[2]!=0)
    {
        printf("Thupka\t");
        printf("%d\n",ordernoodles[2]);
        sum=ordernoodles[2]*200+sum;
    }
    if(ordernoodles[3]!=0)
    {
        printf("Pasta in White Sauce\t");
        printf("%d\n",ordernoodles[3]);
        sum=ordernoodles[3]*200+sum;
    }
    if(ordernoodles[4]!=0)
    {
        printf("Meatball Spaghetti\t");
        printf("%d\n",ordernoodles[4]);
        sum=ordernoodles[4]*200+sum;
    }
    if(orderdesserts[0]!=0)
    {
        printf("Brownie with Vanilla Icecream\t");
        printf("%d\n",orderdesserts[0]);
        sum=orderdesserts[0]*100+sum;
    }
      if(orderdesserts[1]!=0)
    {
        printf("Biscoff Cheesecake\t");
        printf("%d\n",orderdesserts[1]);
        sum=orderdesserts[1]*100+sum;
    }
      if(orderdesserts[2]!=0)
    {
        printf("Chocolate Mousse Cake\t");
        printf("%d\n",orderdesserts[2]);
        sum=orderdesserts[2]*100+sum;
    } 
     if(orderdesserts[3]!=0)
    {
        printf("Caramel Pudding\t");
        printf("%d\n",orderdesserts[3]);
        sum=orderdesserts[3]*100+sum;
    }  
    if(orderdesserts[4]!=0)
    {
        printf("Fruit Custard");
        printf("%d\n",orderdesserts[4]);
        sum=orderdesserts[4]*100+sum;
    }
    printf("Your Final amount is %d\n",sum);
}
//main dash board
int main()
{
    int cont,pass;
    printf("WELCOME TO OUR RESTAURANT\n");
    printf("WE ARE HERE TO SERVE YOU\n");
    do
     {
     printf("\nEnter 1 if you are the ADMIN\n");
     printf("Enter 2 if you are a CUSTOMER\n");
     printf("Enter 3 if you want to EXIT\n");
     scanf("%d",&cont);
     printf("\n");
     switch(cont)
       {
        case 1:
        printf("Enter password \n");
        scanf("%d",&pass);
        printf("\n");
        if(pass==10)
        admin();
        else
        printf("WRONG PASSWORD\nACCESS DENIED");
        break;
        case 2:
        printf("GREETINGS\n");
        customer();
        break;
        case 3:
        printf("Exiting \n Have A Great Day\n");
        break;
        default:
        printf("Invalid Option.\n Try Again\n");
        break;
       }
    }
    while(cont!=3);
    return 0;
}
