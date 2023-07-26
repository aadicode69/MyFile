#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[50];
    int phone_number;
    int customer_id;

    int bodysoap, haircream, hairspray, bodyspray;
    int sugar, tea, coffee, rice, wheat;
    int pepsi, sprite, coke, sting, mojitos, thumbsup, maaja, frooti, limca;
    int total, cosmetics_total, grocery_total, beverages_total;

    printf("----------------------\n");
    printf("BILLING SYSTEM\n");
    printf("----------------------\n");
    printf("Customer Details\n\n");

    printf("Customer Name : \n");
    scanf("%s", &name);
    printf("Phone Number : \n");
    scanf("%d", &phone_number);
    printf("Customer Id : \n");
    scanf("%d", &customer_id);

    printf("----------------------\n");

    printf("COSMETICS\n\n");

    printf("Body Soap (Rs. 25) : ");
    scanf("%d\n", &bodysoap);

    printf("Hair Cream (Rs. 100) : ");
    scanf("%d\n", &haircream);

    printf("Hair Spray (Rs. 200) : ");
    scanf("%d\n", &hairspray);

    printf("Body Spray (Rs. 150) : ");
    scanf("%d\n", &bodyspray);

    printf("----------------------\n");

    printf("GROCERIES\n\n");

    printf("Sugar (Rs. 50/kg) : \n");
    scanf("%d", &sugar);

    printf("Tea (Rs. 100/kg) : \n");
    scanf("%d", &tea);

    printf("Coffee (Rs. 10/pack) : \n");
    scanf("%d", &coffee);

    printf("Wheat (Rs. 30/kg) : \n");
    scanf("%d", &wheat);

    printf("Rice (Rs. 120/kg) : \n");
    scanf("%d", &rice);

    printf("----------------------\n");

    printf("BEVERAGES\n\n");

    printf("Pepsi (Rs. 50) : ");
    scanf("%d", &pepsi);

    printf("Sprite (Rs. 50) : ");
    scanf("%d", &sprite);

    printf("Mojitos (Rs. 50) : ");
    scanf("%d", &mojitos);

    printf("Coke (Rs. 50) : ");
    scanf("%d", &coke);

    printf("Sting (Rs. 50) : ");
    scanf("%d", &sting);

    printf("ThumbsUp (Rs. 50) : ");
    scanf("%d", &thumbsup);

    printf("Maaja (Rs. 50) : ");
    scanf("%d", &maaja);

    printf("Frooti (Rs. 50) : ");
    scanf("%d", &frooti);

    printf("Limca (Rs. 50) : ");
    scanf("%d", &limca);

    int boso, hc, hs, bosp;

    boso = 25 * bodysoap;
    hc = 100 * haircream;
    hs = 200 * hairspray;
    bosp = 150 * bodyspray;

    cosmetics_total= boso + hc + hs + bosp;

    printf("Body Soap : ");
    printf("Rs. %d\n", boso);
    printf("Hair cream : ");
    printf("Rs. %d\n", hc);
    printf("Hair spray : ");
    printf("Rs. %d\n", hs);
    printf("Body Spray : ");
    printf("Rs. %d\n", bosp);
    printf("Total Cosmetics price : ");
    printf("Rs. %d\n", cosmetics_total);

    printf("----------------------\n");

    int s, t, c, r, w;

    s = 50 * sugar;
    t = 100 * tea;
    c = 10 * coffee;
    r = 120 * rice;
    w = 30 * wheat;

    grocery_total = s + t + c + r + w;

    printf("Sugar : ");
    printf("Rs. %d\n", s);
    printf("Tea : ");
    printf("Rs. %d\n", t);
    printf("Coffee : ");
    printf("Rs. %d\n", c);
    printf("Rice : ");
    printf("Rs. %d\n", r);
    printf("Wheat : ");
    printf("Rs. %d\n", w);
    printf("Total Grocery price : ");
    printf("Rs. %d\n", grocery_total);

    printf("----------------------\n");

    int pep, cok, stn, tmp, mja, frt, spr, mjt, lmc;

    pep = 50 * pepsi;
    cok = 50 * coke;
    stn = 50 * sting;
    mja = 50 * maaja;
    frt = 50 * frooti;
    spr = 50 * sprite;
    mjt = 50 * mojitos;
    lmc = 50 * limca;
    tmp = 50 * thumbsup;


    beverages_total = pep+cok+stn+tmp+mja+frt+spr+mjt+lmc;

    printf("Pepsi : ");
    printf("Rs. %d\n", pep);
    printf("Coke : ");
    printf("Rs. %d\n", cok);
    printf("Sting : ");
    printf("Rs. %d\n", stn);
    printf("Thumbsup : ");
    printf("Rs. %d\n", tmp);
    printf("Maaja : ");
    printf("Rs. %d\n", mja);
    printf("Frooti : ");
    printf("Rs. %d\n", frt);
    printf("Sprite : ");
    printf("Rs. %d\n", spr);
    printf("Mojitos : ");
    printf("Rs. %d\n", mjt);
    printf("Limca : ");
    printf("Rs. %d\n", lmc);

    printf("Total Beverages price : ");
    printf("Rs. %d\n", beverages_total);

    printf("----------------------\n");

    total = cosmetics_total + grocery_total + beverages_total;
     printf("Grand Total : ");
     printf("Rs. %d\n", total);

     printf("----------------------------------------------\n");

     printf("Cosmetics Total Price : %d\n\n", cosmetics_total);
     printf("Grocery Total Price : %d\n\n", grocery_total);
     printf("Beverages Total Price : %d\n\n", beverages_total);

     printf("Grand Total Price : %d\n\n", total);

     printf("------------------------------------------------------------------------------------------------------\n");

    return 0;
}
