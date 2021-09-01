// OOP COURSE WORK - 02
// DSE-MA-202-F-019 - W.S.G.WEERASINGHE
// NIBM - GROCERY
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <ctime>

using namespace std;
using namespace this_thread;
using namespace chrono;

 char NewCustomer;
 char toCashout;
 char Gmenu;
 int Unit;
 int purchase;
 int income;
 string plist[140];

string passedNameone;
string passedNametwo;
string passedEmail;
string passedPhone;

int b = 1;
int c = 1;
int d = 0;

class Wmarket
{
public:

    void welcome()
    {
        system("color A");
        cout << "\n";
        cout << " \t\t\t\t\t\t\t\t\t\t\t*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*";
        sleep_for(milliseconds(200) );
        cout << "*" << endl;
        sleep_for(milliseconds(200) );
        cout << " \t\t\t\t\t\t\t\t\t\t\t\t      NIBM"   <<  endl;
        cout << " \n\t\t\t\t\t\t\t\t\t\t\t            GROCERY"   <<  endl;
        cout << " \n\t\t\t\t\t\t\t\t\t\t\t ****************************\n"   <<  endl;

        cout << "\t\t\t\t\t\t\t\t\t\t\t\tWelcome Customer\n\n\n\n\n\n\n"<< endl;
        cout << "\t\t\t\t\t\tPlease Enter Your Details Before Purchasing\n\n";

    }

    void GroceryMenu()
    {
        cout << "\n\n\n\n\t* Grocery List *" << endl;
        cout << "____________________________\n\n\n\n" << endl;
        cout << "   \t[1] Beverages "<< endl;
        cout << "   \t[2] Snacks & Sweets" << endl;
        cout << "   \t[3] Dried Fruit"<< endl;
        cout << "   \t[4] Nuts & Seeds" << endl;
        cout << "   \t[5] Cooking" << endl;
        cout << "   \t[6] Spreads" << endl;
        cout << "   \t[7] Sweeteners" << endl;
        cout << "   \t[8] Breakfast Cereal" << endl;
        cout << "   \t[9] Supplement & More" << endl;
        cout << " \n\n";

        cout << " Select the category you would like to shop for"<<endl;
        cout << " or Finish the shopping trip and enter 'E' to pay: ";
        cin  >> Gmenu;
        cout << "\n\n"<<endl;

    }

    void mainmenu()
    {
        switch (Gmenu)
        {

        case '1':
            beverages();
        break;

        case '2':
            snaksnsweets();
        break;

        case '3':
            driedfruit();
        break;

        case '4':
            nutsnseeds();
        break;

        case '5':
            cooking();
        break;

        case '6':
            spreads();
        break;

        case '7':
            sweeteners();
        break;

        case '8':
            breakfastcereal();
        break;

        case '9':
            supplementsnmore();
        break;

        case 'E':
            receipt();
        break;

        }
    }


    void beverages()
    {
            for(c=1;c<=3;c++)
    {
    system("cls");
    cout <<"\n\n\n                                                                               Please Wait";
    sleep_for(milliseconds(100) );
    cout <<".";
    sleep_for(milliseconds(100) );
    cout <<".";
    sleep_for(milliseconds(100) );
    cout <<".";
    sleep_for(milliseconds(100) );
    cout <<".";
    sleep_for(milliseconds(100) );
    cout <<".";
    system("cls");

    }

         cout << "\n\n";
        cout << "       Beverages..." <<endl;
        cout << "\n " <<endl;
        cout << "       Available items                                                 Price" <<endl;
        cout << " ________________________________________________________________________________" <<endl;
        cout << " 1]   Achcharu Drink SOZO                                              210.00 " <<endl;
        cout << " 2]   Blue Butterfly Pea Flower Tea NIRO                               295.00 " <<endl;
        cout << " 3]   BOP Black Tea AMBA                                               534.00 " <<endl;
        cout << " 4]   Chai Black Tea AMBA                                              634.00 " <<endl;
        cout << " 5]   Chocolate Soy Milk BVEG                                          150.00 " <<endl;
        cout << " 6]   Coffee Ground 125g TUSK                                          800.00 " <<endl;
        cout << " 7]   Coffee Ground Jar 350g TUSK                                     2100.00 " <<endl;
        cout << " 8]   Coffee Soy Milk BVEG                                             150.00 " <<endl;
        cout << " 9]   Coffee Whole Bean 125g TUSK                                      800.00 " <<endl;
        cout << "10]   Dark Arabica Ground Coffee HANS                                  975.00 " <<endl;
        cout << "11]   Dark Arabica Whole Bean Coffee HANS                              975.00 " <<endl;
        cout << "12]   Dark Roast Ground Coffee SOCO                                   1080.00 " <<endl;
        cout << "13]   Soul Coffee Espresso Ground Espresso Ground Coffee SOCO         1080.00 " <<endl;
        cout << "14]   Espresso Whole Bean Coffee HANS                                  995.00 " <<endl;
        cout << "15]   Espresso Whole Bean Coffee LYBS                                  995.00 " <<endl;
        cout << "16]   Fresh Ginger Juice Small ELIP                                    150.00 " <<endl;
        cout << "17]   Fruit and Vegetable Juices BLBS                                  160.00 " <<endl;
        cout << "18]   Ginger Lime Tonic SOZO                                           290.00 " <<endl;
        cout << "19]   Gymnema Sylvestre Herbal Tea NPAL                                520.00 " <<endl;
        cout << "20]   Herbal Tea Peace GFOL Organic                                    450.00 " <<endl;
        cout << "\n\n" << endl;
        cout << "   Enter the product number you wish to purchase or";
        cout << "Enter '0' to proceed back to the Grocery List \n\n";

    }

    void snaksnsweets()
    {
       cout << "\n\n";
        cout << "       Snaks & Sweets..." <<endl;
        cout << "\n " <<endl;
        cout << "       Available items                                                 Price" <<endl;
        cout << " ________________________________________________________________________________" <<endl;
        cout << " 1]   Almond Cranberry Crunch Mixed Nuts POWU                          210.00 " <<endl;
        cout << " 2]   Burnt Cashew CNVX                                                430.00 " <<endl;
        cout << " 3]   Burnt Cashew TNLD                                               1145.00 " <<endl;
        cout << " 4]   Candied Ginger ECOF                                              510.00 " <<endl;
        cout << " 5]   Cashew Cookies HOPE                                              415.00 " <<endl;
        cout << " 6]   Chocolate Chip Cookie SWFT                                       200.00 " <<endl;
        cout << " 7]   Chocolate Cookies CHES                                          1470.00 " <<endl;
        cout << " 8]   Classic Cookies CHES                                             430.00 " <<endl;
        cout << " 9]   Coconut Cookies HOPE                                             320.00 " <<endl;
        cout << "10]   Cookies Gluten Free Rice CHES                                    210.00 " <<endl;
        cout << "11]   Cumin Cashew TNLD                                                375.00 " <<endl;
        cout << "12]   Dark Chocolate Bar Coconut Sugar SERD Large                      580.00 " <<endl;
        cout << "13]   Dark Chocolate Bar Coconut Sugar SERD Small                      700.00 " <<endl;
        cout << "14]   Deviled Cashew CNVX                                              480.00 " <<endl;
        cout << "15]   Deviled Cashew TNLD                                             1115.00 " <<endl;
        cout << "16]   Deviled Peanuts LITT Large                                       510.00 " <<endl;
        cout << "17]   Deviled Peanuts LITT Small                                       250.00 " <<endl;
        cout << "18]   Frosted Jaggery Cookies CHES                                     090.00 " <<endl;
        cout << "19]   Ginger Candy ELIP                                                375.00 " <<endl;
        cout << "20]   Cinnamon Cashew TNLD                                             250.00 " <<endl;
        cout << "\n\n" << endl;
        cout << "   Enter the product number you wish to purchase or";
        cout << "Enter '0' to proceed back to the Grocery List \n\n";

    }

    void driedfruit()
    {
       cout << "\n\n";
        cout << "       Dried Fruit..." <<endl;
        cout << "\n " <<endl;
        cout << "       Available items                                                 Price" <<endl;
        cout << " ________________________________________________________________________________" <<endl;
        cout << " 1]   Dried Banana ECOF                                                320.00 " <<endl;
        cout << " 2]   Dried Blueberries FINC                                           890.00 " <<endl;
        cout << " 3]   Dried Cranberries FINC                                           490.00 " <<endl;
        cout << " 4]   Dried Dates FLIN                                                 400.00 " <<endl;
        cout << " 5]   Dried Mango ECOF                                                 320.00 " <<endl;
        cout << " 6]   Dried Papaya ECOF                                                320.00 " <<endl;
        cout << " 7]   Dried Pineapple ECOF                                             320.00 " <<endl;
        cout << " 8]   Dried Rambutan ECOF                                              320.00 " <<endl;
        cout << " 9]   Dried Sultanas WOE                                               230.00 " <<endl;
        cout << "10]   Dried Sweet Jackfruit ECOFS                                      355.00 " <<endl;
        cout << "11]   Organic Dried Banana GFOL                                        230.00 " <<endl;
        cout << "12]   Organic Dried Mango GFOL                                         345.00 " <<endl;
        cout << "13]   Organic Dried Papaya GFOL                                        265.00 " <<endl;
        cout << "14]   Organic Dried Pineapple GFOL                                     385.00 " <<endl;
        cout << "15]   Organic Dried Prunes OGUR                                       1390.00 " <<endl;
        cout << "16]   Spicy Sweet Jackfruit ECOF                                       360.00 " <<endl;
        cout << "\n\n" << endl;
        cout << "   Enter the product number you wish to purchase or";
        cout << "Enter '0' to proceed back to the Grocery List \n\n";
    }

    void nutsnseeds()
    {
       cout << "\n\n";
        cout << "       Nuts & Seeds..." <<endl;
        cout << "\n " <<endl;
        cout << "       Available items                                                 Price" <<endl;
        cout << " ________________________________________________________________________________" <<endl;
        cout << " 1]   Almond Cranberry Crunch Mixed Nuts POWU                          430.00 " <<endl;
        cout << " 2]   Almond WOE                                                       960.00 " <<endl;
        cout << " 3]   Amaranath THUL                                                   210.00 " <<endl;
        cout << " 4]   Basil Seeds THUL                                                 125.00 " <<endl;
        cout << " 5]   Black Sesame Seeds THUL                                          210.00 " <<endl;
        cout << " 6]   Burnt Cashew CNVX                                               1145.00 " <<endl;
        cout << " 7]   Chia Seeds BULK THUL                                             240.00 " <<endl;
        cout << " 8]   Chia Seeds THULS                                                 310.00 " <<endl;
        cout << " 9]   Deviled Peanuts LITT Large                                       250.00 " <<endl;
        cout << "10]   Deviled Peanuts LITT Small                                        90.00 " <<endl;
        cout << "11]   Flax Seeds BULK THUL                                             110.00 " <<endl;
        cout << "12]   Flax Seeds THUL                                                  210.00 " <<endl;
        cout << "13]   Golden Flax Seeds THUL                                           230.00 " <<endl;
        cout << "14]   Hazelnut FINC                                                    690.00 " <<endl;
        cout << "15]   Macadamia WOE                                                   1465.00 " <<endl;
        cout << "16]   Mega Omega Mixed Nuts POWU                                       480.00 " <<endl;
        cout << "17]   Pecan WOE                                                       1190.00 " <<endl;
        cout << "18]   Pine Nuts FINC                                                  1190.00 " <<endl;
        cout << "19]   Pistachio FINC                                                   690.00 " <<endl;
        cout << "20]   Pistachio WOE                                                    680.00 " <<endl;
        cout << "\n\n" << endl;
        cout << "   Enter the product number you wish to purchase or";
        cout << "Enter '0' to proceed back to the Grocery List \n\n";

    }

    void cooking()
    {
       cout << "\n\n";
        cout << "       Cooking..." <<endl;
        cout << "\n " <<endl;
        cout << "       Available items                                                 Price" <<endl;
        cout << " ________________________________________________________________________________" <<endl;
        cout << " 1]   Ambarella Chutney YUMG                                           400.00 " <<endl;
        cout << " 2]   Ambul Thiyal AYUS                                                975.00 " <<endl;
        cout << " 3]   Apple Cider Vinegar RISO                                         775.00 " <<endl;
        cout << " 4]   Atta Flour FLIN                                                  220.00 " <<endl;
        cout << " 5]   Basil Pesto DOLC                                                 915.00 " <<endl;
        cout << " 6]   Basil Pesto FLOW                                                 735.00 " <<endl;
        cout << " 7]   Black Cumin THUL                                                 190.00 " <<endl;
        cout << " 8]   Black Pepper Powder FINC                                         290.00 " <<endl;
        cout << " 9]   Chickpeas Can TGBG                                               320.00 " <<endl;
        cout << "10]   Chili Fried Ambarella LARI                                       350.00 " <<endl;
        cout << "11]   Chili Pieces HSAP                                                135.00 " <<endl;
        cout << "12]   Chili Powder HSAP                                                135.00 " <<endl;
        cout << "13]   Coconut Aminos JRPR                                              300.00 " <<endl;
        cout << "14]   Dried Buttermilk Chili NPAL                                      200.00 " <<endl;
        cout << "15]   Placeholder Dried Curry leaf Powder ECOF                         255.00 " <<endl;
        cout << "16]   Dried Fish Moju ARAL                                             680.00 " <<endl;
        cout << "17]   Dried Mushroom AGRO                                              225.00 " <<endl;
        cout << "18]   Dried Oregano THUL                                               125.00 " <<endl;
        cout << "19]   Dried Rosemary THUL                                              120.00 " <<endl;
        cout << "20]   Dried Thyme THUL                                                 130.00 " <<endl;
        cout << "\n\n" << endl;
        cout << "   Enter the product number you wish to purchase or";
        cout << "Enter '0' to proceed back to the Grocery List \n\n";
    }

    void spreads()
    {
       cout << "\n\n";
        cout << "       Spreads..." <<endl;
        cout << "\n " <<endl;
        cout << "       Available items                                                 Price" <<endl;
        cout << " ________________________________________________________________________________" <<endl;
        cout << " 1]   Almond Butter SOFO                                              1334.00 " <<endl;
        cout << " 2]   Billing Date Chutney YUMG                                        420.00 " <<endl;
        cout << " 3]   Cashew Butter SOFO                                              1467.00 " <<endl;
        cout << " 4]   Crunchy Peanut Butter MAS                                        500.00 " <<endl;
        cout << " 5]   Garlic Butter ELIP                                               950.00 " <<endl;
        cout << " 6]   Hummus INNO                                                      365.00 " <<endl;
        cout << " 7]   Kumquat Preserve YUMG                                            460.00 " <<endl;
        cout << " 8]   Lemon Marmalade YUMG                                             460.00 " <<endl;
        cout << " 9]   Mango Ginger Jam AMBA                                            534.00 " <<endl;
        cout << "10]   Marmalade Wild Mandarin YUMG [IA]                                460.00 " <<endl;
        cout << "11]   No Sugar Peanut Butter MAS                                       500.00 " <<endl;
        cout << "12]   Organic Cacao Coconut Spread GFOL                                425.00 " <<endl;
        cout << "13]   Organic Cinnamon Coconut Spread GFOL                             425.00 " <<endl;
        cout << "14]   Organic Coconut Butter CMIR                                      570.00 " <<endl;
        cout << "15]   Organic Coconut Spread GFOL                                      425.00 " <<endl;
        cout << "16]   Organic Ginger Coconut Spread GFOL                               425.00 " <<endl;
        cout << "17]   Organic Pineapple Coconut Spread GFO                             425.00 " <<endl;
        cout << "18]   Papaya Passion Vanilla Jam AMBA                                  460.00 " <<endl;
        cout << "19]   Ginger Candy ELIP                                                534.00 " <<endl;
        cout << "20]   Peanut Butter SOFO                                               667.00 " <<endl;
        cout << "\n\n" << endl;
        cout << "   Enter the product number you wish to purchase or";
        cout << "Enter '0' to proceed back to the Grocery List \n\n";

    }

    void sweeteners()
    {
       cout << "\n\n";
        cout << "       Sweetners..." <<endl;
        cout << "\n " <<endl;
        cout << "       Available items                                                 Price" <<endl;
        cout << " ________________________________________________________________________________" <<endl;
        cout << " 1]   Bee Honey DUNV                                                   934.00 " <<endl;
        cout << " 2]   Bee Honey Garlic DUNV                                           1000.00 " <<endl;
        cout << " 3]   Bee Honey NPAL                                                   470.00 " <<endl;
        cout << " 4]   Brown Sugar SURY                                                 200.00 " <<endl;
        cout << " 5]   Cinnamon Bee Honey DUNV                                          967.00 " <<endl;
        cout << " 6]   Coconut Sugar GRVT                                               490.00 " <<endl;
        cout << " 7]   Kithul Jaggery DVIN                                              970.00 " <<endl;
        cout << " 8]   Kithul Jaggery HARK Large                                        700.00 " <<endl;
        cout << " 9]   Kithul Jaggery HARK Small                                        380.00 " <<endl;
        cout << "10]   Kithul Jaggery RAJA                                              300.00 " <<endl;
        cout << "11]   Kithul Syrup HARK Large                                         1150.00 " <<endl;
        cout << "12]   Kithul Syrup HARK Small                                          600.00 " <<endl;
        cout << "13]   Kithul Syrup KIMK                                                900.00 " <<endl;
        cout << "14]   Kithul Syrup Small PANW                                          850.00 " <<endl;
        cout << "15]   Organic Coconut Sugar CCC                                        700.00 " <<endl;
        cout << "16]   Organic Coconut Sugar GFOL Small                                 275.00 " <<endl;
        cout << "\n\n" << endl;
        cout << "   Enter the product number you wish to purchase or";
        cout << "Enter '0' to proceed back to the Grocery List \n\n";

    }

    void breakfastcereal()
    {
       cout << "\n\n";
        cout << "       Breakfast Cereal..." <<endl;
        cout << "\n " <<endl;
        cout << "       Available items                                                 Price" <<endl;
        cout << " ________________________________________________________________________________" <<endl;
        cout << " 1]   Granola Premium Classic SWFT                                     890.00 " <<endl;
        cout << " 2]   Kollu Crunch PANW                                                540.00 " <<endl;
        cout << " 3]   Original Granola 3x3G                                            970.00 " <<endl;
        cout << " 4]   Peanut Butter Granola 3X3G                                       970.00 " <<endl;
        cout << " 5]   Peanut Butter Granola SWFT                                      1000.00 " <<endl;
        cout << " 6]   Porridge Pack JAYA                                               190.00 " <<endl;
        cout << " 7]   Rice Flakes JAYA                                                 110.00 " <<endl;
        cout << "\n\n" << endl;
        cout << "   Enter the product number you wish to purchase or";
        cout << "Enter '0' to proceed back to the Grocery List \n\n";

    }
        void supplementsnmore()
    {
       cout << "\n\n";
        cout << "       Supplements & More..." <<endl;
        cout << "\n " <<endl;
        cout << "       Available items                                                 Price" <<endl;
        cout << " ________________________________________________________________________________" <<endl;
        cout << " 1]   Acai Powder VITA                                                2400.00 " <<endl;
        cout << " 2]   Activated Charcoal MOON                                          665.00 " <<endl;
        cout << " 3]   Activated Coconut Charcoal Powder FOUR                           500.00 " <<endl;
        cout << " 4]   Ashwagandha Powder FOUR                                          700.00 " <<endl;
        cout << " 5]   Candied Ginger ECOF                                              415.00 " <<endl;
        cout << " 6]   Cocoa Nibs SERD                                                  535.00 " <<endl;
        cout << " 7]   Coriander Seeds OSMT                                             175.00 " <<endl;
        cout << " 8]   Dark Chocolate Bar SERD                                          440.00 " <<endl;
        cout << " 9]   Dried Belimal OSMT                                               400.00 " <<endl;
        cout << "10]   Dried Iramusu OSMT                                               450.00 " <<endl;
        cout << "11]   Dried Kothala Himbutu OSMT                                       180.00 " <<endl;
        cout << "12]   Dried Polpala OSMT                                               175.00 " <<endl;
        cout << "13]   Dried Ranawara OSMT                                              200.00 " <<endl;
        cout << "14]   Dried Venival OSMT                                               335.00 " <<endl;
        cout << "15]   Green Coffee Bean Extract LYBS                                   495.00 " <<endl;
        cout << "16]   Licorice Root Powder FOUR                                        450.00 " <<endl;
        cout << "17]   Matcha Green Tea Powder PINK                                    1735.00 " <<endl;
        cout << "18]   Matcha Green Tea Powder VITA                                    2400.00 " <<endl;
        cout << "19]   Morgina Capsules MORI                                           1200.00 " <<endl;
        cout << "20]   Moringa Herbal Tea MORI                                          500.00 " <<endl;
        cout << "\n\n" << endl;
        cout << "   Enter the product number you wish to purchase or";
        cout << "Enter '0' to proceed back to the Grocery List \n\n";
    }
    void receipt()
    {
        cout << "\n\n";

        cout << " \t              Bill"<<endl;
        cout << " \t_______________________________\n\n"<<endl;
        cout << "\t Bill amount is: Rs."<<purchase<<endl;
        cout << " \n\n\tT";
        sleep_for(milliseconds(100) );
        cout << "H";
        sleep_for(milliseconds(100) );
        cout << "A";
        sleep_for(milliseconds(100) );
        cout << "N";
        sleep_for(milliseconds(100) );
        cout << "K ";
        sleep_for(milliseconds(100) );
        cout << "Y";
        sleep_for(milliseconds(100) );
        cout << "O";
        sleep_for(milliseconds(100) );
        cout << "U\n";
        sleep_for(milliseconds(1000) );
        cout << "\t\tCOME ";
        sleep_for(milliseconds(250) );
        cout << "AGAIN";
        cout << "\n\n\n\n\n Enter Q to exit the program\n"<< endl;
        cout << " or Enter any other key to go to the next customer:";
        cin  >> NewCustomer;

        cout << "\n\n"<<endl;
    }
};

class customer
{
private:
    string nameone;
    string nametwo;
    string email;
    string phone;
public:
    double purchase;


    void setCustomer()
    {
        cout << " \n";
        cout << " \t\t\t\t\t Enter your First Name   : ";
        cin >> nameone;
        cout << " \t\t\t\t\t Enter your Last Name    : ";
        cin >> nametwo;
        cout << " \t\t\t\t\t Enter your E-mail       : ";
        cin >> email;
        cout << " \t\t\t\t\t Enter your Phone Number : ";
        cin >> phone;
        cout << "\n\n";


    }
    void pass()
    {
        passedNameone = nameone;
        passedNametwo = nametwo;
        passedEmail = email;
        passedPhone = phone;

    }

};



class pro
{

protected:
    string proType;
    string proSerial;
    string proCompany;
public:
    double proamount;
    string proName;
    void paylist()
    {

        purchase = purchase + proamount;
        plist[d] = proName;
        d++;

    }

};


class details : public pro
{

public:

    details(string A, string B, string C, double D, string E)
    {
        proName = A;
        proType = B;
        proSerial = C;
        proamount = D;
        proCompany = E;

    }

};


    details A1 ("Achcharu Drink SOZO"                        ,       "Beverages"         ,  "#BRV00101"  ,  210.00   , "UNKNOWN");
    details A2 ("Blue Butterfly Pea Flower Tea NIRO"         ,       "Beverages"         ,  "#BRV00102"  ,  295.00   , "UNKNOWN");
    details A3 ("BOP Black Tea AMBA"                         ,       "Beverages"         ,  "#BRV00103"  ,  534.00   , "UNKNOWN");
    details A4 ("Chai Black Tea AMBA"                        ,       "Beverages"         ,  "#BRV00104"  ,  634.00   , "UNKNOWN");
    details A5 ("Chocolate Soy Milk BVEG"                    ,       "Beverages"         ,  "#BRV00105"  ,  150.00   , "UNKNOWN");
    details A6 ("Coffee Ground 125g TUSK"                    ,       "Beverages"         ,  "#BRV00106"  ,  800.00   , "UNKNOWN");
    details A7 ("Coffee Ground Jar 350g TUSK"                ,       "Beverages"         ,  "#BRV00107"  , 2100.00   , "UNKNOWN");
    details A8 ("Coffee Soy Milk BVEG"                       ,       "Beverages"         ,  "#BRV00108"  ,  150.00   , "UNKNOWN");
    details A9 ("Coffee Whole Bean 125g TUSK"                ,       "Beverages"         ,  "#BRV00109"  ,  800.00   , "UNKNOWN");
    details A10("Dark Arabica Ground Coffee HANSY"           ,       "Beverages"         ,  "#BRV00110"  ,  975.00   , "UNKNOWN");
    details A11("Dark Arabica Whole Bean Coffee HANS"        ,       "Beverages"         ,  "#BRV00111"  ,  975.00   , "UNKNOWN");
    details A12("Dark Roast Ground Coffee SOCO"              ,       "Beverages"         ,  "#BRV00112"  , 1080.00   , "UNKNOWN");
    details A13("Soul Coffee Espresso Ground Espresso Ground Coffee SOCO"," Beverages"   ,  "#BRV00113"  , 1080.00   , "UNKNOWN");
    details A14("Espresso Whole Bean Coffee HANS"            ,       "Beverages"         ,  "#BRV00114"  ,  995.00   , "UNKNOWN");
    details A15("Espresso Whole Bean Coffee LYBS"            ,       "Beverages"         ,  "#BRV00115"  ,  995.00   , "UNKNOWN");
    details A16("Fresh Ginger Juice Small ELIP"              ,       "Beverages"         ,  "#BRV00116"  ,  150.00   , "UNKNOWN");
    details A17("Fruit and Vegetable Juices BLBS"            ,       "Beverages"         ,  "#BRV00117"  , 1600.00   , "UNKNOWN");
    details A18("Ginger Lime Tonic SOZO"                     ,       "Beverages"         ,  "#BRV00118"  ,  290.00   , "UNKNOWN");
    details A19("Gymnema Sylvestre Herbal Tea NPAL"          ,       "Beverages"         ,  "#BRV00119"  ,  520.00   , "UNKNOWN");
    details A20("Herbal Tea Peace GFOL Organic"              ,       "Beverages"         ,  "#BRV00120"  ,  450.00   , "UNKNOWN");

    details B1 ("Almond Cranberry Crunch Mixed Nuts POWU"    ,    "Snacks & Sweets"      ,  "#SNKS00101" ,  210.00   , "UNKNOWN");
    details B2 ("Burnt Cashew CNVXa"                         ,    "Snacks & Sweets"      ,  "#SNKS00102" ,  430.00   , "UNKNOWN");
    details B3 ("Burnt Cashew TNLD"                          ,    "Snacks & Sweets"      ,  "#SNKS00103" , 1145.00   , "UNKNOWN");
    details B4 ("Candied Ginger ECOF"                        ,    "Snacks & Sweets"      ,  "#SNKS00104" ,  510.00   , "UNKNOWN");
    details B5 ("Cashew Cookies HOPE"                        ,    "Snacks & Sweets"      ,  "#SNKS00105" ,  415.00   , "UNKNOWN");
    details B6 ("Chocolate Chip Cookie SWFT"                 ,    "Snacks & Sweets"      ,  "#SNKS00106" ,  200.00   , "UNKNOWN");
    details B7 ("Chocolate Cookies CHES "                    ,    "Snacks & Sweets"      ,  "#SNKS00107" , 1470.00   , "UNKNOWN");
    details B8 ("Classic Cookies CHES"                       ,    "Snacks & Sweets"      ,  "#SNKS00108" ,  430.00   , "UNKNOWN");
    details B9 ("Coconut Cookies HOPE"                       ,    "Snacks & Sweets"      ,  "#SNKS00109" ,  320.00   , "UNKNOWN");
    details B10("Cookies Gluten Free Rice CHES"              ,    "Snacks & Sweets"      ,  "#SNKS00110" ,  210.00   , "UNKNOWN");
    details B11("Cumin Cashew TNLD"                          ,    "Snacks & Sweets"      ,  "#SNKS00111" ,  375.00   , "UNKNOWN");
    details B12("Dark Chocolate Bar Coconut Sugar SERD Large",    "Snacks & Sweets"      ,  "#SNKS00112" ,  580.00   , "UNKNOWN");
    details B13("Dark Chocolate Bar Coconut Sugar SERD Small",    "Snacks & Sweets"      ,  "#SNKS00113" ,  700.00   , "UNKNOWN");
    details B14("Deviled Cashew CNVX"                        ,    "Snacks & Sweets"      ,  "#SNKS00114" ,  480.00   , "UNKNOWN");
    details B15("Deviled Cashew TNLD"                        ,    "Snacks & Sweets"      ,  "#SNKS00115" , 1115.00   , "UNKNOWN");
    details B16("Deviled Peanuts LITT Large"                 ,    "Snacks & Sweets"      ,  "#SNKS00116" ,  510.00   , "UNKNOWN");
    details B17("Deviled Peanuts LITT Small"                 ,    "Snacks & Sweets"      ,  "#SNKS00117" ,  250.00   , "UNKNOWN");
    details B18("Frosted Jaggery Cookies CHES"               ,    "Snacks & Sweets"      ,  "#SNKS00118" ,  090.00   , "UNKNOWN");
    details B19("Ginger Candy ELIP"                          ,    "Snacks & Sweets"      ,  "#SNKS00119" ,  375.00   , "UNKNOWN");
    details B20("Cinnamon Cashew TNLD"                       ,    "Snacks & Sweets"      ,  "#SNKS00120" ,  250.00   , "UNKNOWN");



    details C1 ("Dried Banana ECOF"                          ,      "Dried Fruit"        ,  "#DF00101"   ,  320.00   , "UNKNOWN");
    details C2 ("Dried Blueberries FINC "                    ,      "Dried Fruit"        ,  "#DF00102"   ,  890.00   , "UNKNOWN");
    details C3 ("Dried Cranberries FINC "                    ,      "Dried Fruit"        ,  "#DF00103"   ,  490.00   , "UNKNOWN");
    details C4 ("Dried Dates FLIN"                           ,      "Dried Fruit"        ,  "#DF00104"   ,  400.00   , "UNKNOWN");
    details C5 ("Dried Mango ECOF"                           ,      "Dried Fruit"        ,  "#DF00105"   ,  320.00   , "UNKNOWN");
    details C6 ("Dried Papaya ECOF"                          ,      "Dried Fruit"        ,  "#DF00106"   ,  320.00   , "UNKNOWN");
    details C7 ("Dried Pineapple ECOF"                       ,      "Dried Fruit"        ,  "#DF00107"   ,  320.00   , "UNKNOWN");
    details C8 ("Dried Rambutan ECOF"                        ,      "Dried Fruit"        ,  "#DF00108"   ,  320.00   , "UNKNOWN");
    details C9 ("Dried Sultanas WOE"                         ,      "Dried Fruit"        ,  "#DF00109"   ,  230.00   , "UNKNOWN");
    details C10("Dried Sweet Jackfruit ECOFS"                ,      "Dried Fruit"        ,  "#DF00110"   ,  355.00   , "UNKNOWN");
    details C11("Organic Dried Banana GFOL"                  ,      "Dried Fruit"        ,  "#DF00111"   ,  230.00   , "UNKNOWN");
    details C12("Organic Dried Mango GFOL"                   ,      "Dried Fruit"        ,  "#DF00112"   ,  345.00   , "UNKNOWN");
    details C13("Organic Dried Papaya GFOL"                  ,      "Dried Fruit"        ,  "#DF00113"   ,  265.00   , "UNKNOWN");
    details C14("Organic Dried Pineapple GFOL"               ,      "Dried Fruit"        ,  "#DF00114"   ,  385.00   , "UNKNOWN");
    details C15("Organic Dried Prunes OGUR"                  ,      "Dried Fruit"        ,  "#DF00115"   , 1390.00   , "UNKNOWN");
    details C16("Spicy Sweet Jackfruit ECOF"                 ,      "Dried Fruit"        ,  "#DF00116"   ,  360.00   , "UNKNOWN");



    details D1 ("Almond Cranberry Crunch Mixed Nuts POWU"    ,      "Nuts & Seeds"       ,  "#NS00101"   ,  430.00   , "UNKNOWN");
    details D2 ("Almond WOE"                                 ,      "Nuts & Seeds"       ,  "#NS00102"   ,  960.00   , "UNKNOWN");
    details D3 ("Amaranath THUL "                            ,      "Nuts & Seeds"       ,  "#NS00103"   ,  210.00   , "UNKNOWN");
    details D4 ("Basil Seeds THUL"                           ,      "Nuts & Seeds"       ,  "#NS00104"   ,  125.00   , "UNKNOWN");
    details D5 ("Black Sesame Seeds THUL"                    ,      "Nuts & Seeds"       ,  "#NS00105"   ,  210.00   , "UNKNOWN");
    details D6 ("Burnt Cashew CNVX"                          ,      "Nuts & Seeds"       ,  "#NS00106"   , 1145.00   , "UNKNOWN");
    details D7 ("Chia Seeds BULK THUL"                       ,      "Nuts & Seeds"       ,  "#NS00107"   ,  240.00   , "UNKNOWN");
    details D8 ("Chia Seeds THULS"                           ,      "Nuts & Seeds"       ,  "#NS00108"   ,  310.00   , "UNKNOWN");
    details D9 ("Deviled Peanuts LITT Large"                 ,      "Nuts & Seeds"       ,  "#NS00109"   ,  250.00   , "UNKNOWN");
    details D10("Deviled Peanuts LITT Small"                 ,      "Nuts & Seeds"       ,  "#NS00110"   ,  090.00   , "UNKNOWN");
    details D11("Flax Seeds BULK THUL"                       ,      "Nuts & Seeds"       ,  "#NS00111"   ,  110.00   , "UNKNOWN");
    details D12("Flax Seeds THUL"                            ,      "Nuts & Seeds"       ,  "#NS00112"   ,  210.00   , "UNKNOWN");
    details D13("Golden Flax Seeds THUL"                     ,      "Nuts & Seeds"       ,  "#NS00113"   ,  230.00   , "UNKNOWN");
    details D14("Hazelnut FINC"                              ,      "Nuts & Seeds"       ,  "#NS00114"   ,  690.00   , "UNKNOWN");
    details D15("Macadamia WOE"                              ,      "Nuts & Seeds"       ,  "#NS00115"   , 1465.00   , "UNKNOWN");
    details D16("Mega Omega Mixed Nuts POWU"                 ,      "Nuts & Seeds"       ,  "#NS00116"   ,  480.00   , "UNKNOWN");
    details D17("Pecan WOE"                                  ,      "Nuts & Seeds"       ,  "#NS00117"   , 1190.00   , "UNKNOWN");
    details D18("Ginger Lime Tonic SOZO"                     ,      "Nuts & Seeds"       ,  "#NS00118"   , 1190.00   , "UNKNOWN");
    details D19("Pistachio FINC"                             ,      "Nuts & Seeds"       ,  "#NS00119"   ,  690.00   , "UNKNOWN");
    details D20("Pistachio WOE"                              ,      "Nuts & Seeds"       ,  "#NS00120"   ,  680.00   , "UNKNOWN");


    details E1 ("Ambarella Chutney YUMG"                     ,      "Cooking"            ,  "#COO00101"  ,  400.00   , "UNKNOWN");
    details E2 ("Ambul Thiyal AYUS "                         ,      "Cooking"            ,  "#COO00102"  ,  975.00   , "UNKNOWN");
    details E3 ("Apple Cider Vinegar RISO "                  ,      "Cooking"            ,  "#COO00103"  ,  775.00   , "UNKNOWN");
    details E4 ("Atta Flour FLIN"                            ,      "Cooking"            ,  "#COO00104"  ,  220.00   , "UNKNOWN");
    details E5 ("Basil Pesto DOLC"                           ,      "Cooking"            ,  "#COO00105"  ,  915.00   , "UNKNOWN");
    details E6 ("Basil Pesto FLOW"                           ,      "Cooking"            ,  "#COO00106"  ,  735.00   , "UNKNOWN");
    details E7 ("Black Cumin THUL"                           ,      "Cooking"            ,  "#COO00107"  ,  190.00   , "UNKNOWN");
    details E8 ("Black Pepper Powder FINC"                   ,      "Cooking"            ,  "#COO00108"  ,  290.00   , "UNKNOWN");
    details E9 ("Chickpeas Can TGBG"                         ,      "Cooking"            ,  "#COO00109"  ,  320.00   , "UNKNOWN");
    details E10("Chili Fried Ambarella LARI"                 ,      "Cooking"            ,  "#COO00110"  ,  350.00   , "UNKNOWN");
    details E11("Chili Pieces HSAP"                          ,      "Cooking"            ,  "#COO00111"  ,  135.00   , "UNKNOWN");
    details E12("Chili Powder HSAP"                          ,      "Cooking"            ,  "#COO00112"  ,  135.00   , "UNKNOWN");
    details E13("Coconut Aminos JRPR"                        ,      "Cooking"            ,  "#COO00113"  ,  300.00   , "UNKNOWN");
    details E14("Dried Buttermilk Chili NPAL"                ,      "Cooking"            ,  "#COO00114"  ,  200.00   , "UNKNOWN");
    details E15("Placeholder Dried Curry leaf Powder ECOF"   ,      "Cooking"            ,  "#COO00115"  ,  255.00   , "UNKNOWN");
    details E16("Dried Fish Moju ARAL"                       ,      "Cooking"            ,  "#COO00116"  ,  680.00   , "UNKNOWN");
    details E17("Dried Mushroom AGRO"                        ,      "Cooking"            ,  "#COO00117"  ,  225.00   , "UNKNOWN");
    details E18("Dried Oregano THUL"                         ,      "Cooking"            ,  "#COO00118"  ,  125.00   , "UNKNOWN");
    details E19("Dried Rosemary THUL"                        ,      "Cooking"            ,  "#COO00119"  ,  120.00   , "UNKNOWN");
    details E20("Dried Thyme THUL"                           ,      "Cooking"            ,  "#COO00120"  ,  130.00   , "UNKNOWN");



    details F1 ("Almond Butter SOFO "                        ,      "Spreads"            ,  "#SP00101"   , 1334.00   , "UNKNOWN");
    details F2 ("Billing Date Chutney YUMG "                 ,      "Spreads"            ,  "#SP00102"   ,  420.00   , "UNKNOWN");
    details F3 ("Cashew Butter SOFO "                        ,      "Spreads"            ,  "#SP00103"   , 1467.00   , "UNKNOWN");
    details F4 ("Crunchy Peanut Butter MAS"                  ,      "Spreads"            ,  "#SP00104"   ,  500.00   , "UNKNOWN");
    details F5 ("Garlic Butter ELIP"                         ,      "Spreads"            ,  "#SP00105"   ,  950.00   , "UNKNOWN");
    details F6 ("Hummus INNO"                                ,      "Spreads"            ,  "#SP00106"   ,  365.00   , "UNKNOWN");
    details F7 ("Kumquat Preserve YUMG"                      ,      "Spreads"            ,  "#SP00107"   ,  460.00   , "UNKNOWN");
    details F8 ("Lemon Marmalade YUMG"                       ,      "Spreads"            ,  "#SP00108"   ,  460.00   , "UNKNOWN");
    details F9 ("Mango Ginger Jam AMBA"                      ,      "Spreads"            ,  "#SP00109"   ,  534.00   , "UNKNOWN");
    details F10("Marmalade Wild Mandarin YUMG [IA]"          ,      "Spreads"            ,  "#SP00110"   ,  460.00   , "UNKNOWN");
    details F11("No Sugar Peanut Butter MAS"                 ,      "Spreads"            ,  "#SP00111"   ,  500.00   , "UNKNOWN");
    details F12("Organic Cacao Coconut Spread GFOL"          ,      "Spreads"            ,  "#SP00112"   ,  425.00   , "UNKNOWN");
    details F13("Organic Cinnamon Coconut Spread GFOL"       ,      "Spreads"            ,  "#SP00113"   ,  425.00   ,"UNKNOWN");
    details F14("Organic Coconut Butter CMIR"                ,      "Spreads"            ,  "#SP00114"   ,  570.00   , "UNKNOWN");
    details F15("Organic Coconut Spread GFOL"                ,      "Spreads"            ,  "#SP00115"   ,  425.00   , "UNKNOWN");
    details F16("Organic Ginger Coconut Spread GFOL"         ,      "Spreads"            ,  "#SP00116"   ,  425.00   , "UNKNOWN");
    details F17("Organic Pineapple Coconut Spread GFO"       ,      "Spreads"            ,  "#SP00117"   ,  425.00   , "UNKNOWN");
    details F18("Papaya Passion Vanilla Jam AMBA"            ,      "Spreads"            ,  "#SP00118"   ,  460.00   , "UNKNOWN");
    details F19("Ginger Candy ELIP"                          ,      "Spreads"            ,  "#SP00119"   ,  534.00   , "UNKNOWN");
    details F20("Peanut Butter SOFO"                         ,      "Spreads"            ,  "#SP00120"   ,  667.00   , "UNKNOWN");



    details G1 ("Bee Honey DUNV"                             ,      "Sweeteners"         ,  "#SWE00101"  ,  934.00   , "UNKNOWN");
    details G2 ("Bee Honey Garlic DUNV "                     ,      "Sweeteners"         ,  "#SWE00102"  , 1000.00   , "UNKNOWN");
    details G3 ("Bee Honey NPAL "                            ,      "Sweeteners"         ,  "#SWE00103"  ,  470.00   , "UNKNOWN");
    details G4 ("Brown Sugar SURY"                           ,      "Sweeteners"         ,  "#SWE00104"  ,  200.00   , "UNKNOWN");
    details G5 ("Cinnamon Bee Honey DUNV"                    ,      "Sweeteners"         ,  "#SWE00105"  ,  967.00   , "UNKNOWN");
    details G6 ("Coconut Sugar GRVT"                         ,      "Sweeteners"         ,  "#SWE00106"  ,  490.00   , "UNKNOWN");
    details G7 ("Kithul Jaggery DVIN"                        ,      "Sweeteners"         ,  "#SWE00107"  ,  970.00   , "UNKNOWN");
    details G8 ("Kithul Jaggery HARK Large"                  ,      "Sweeteners"         ,  "#SWE00108"  ,  700.00   , "UNKNOWN");
    details G9 ("Kithul Jaggery HARK Small"                  ,      "Sweeteners"         ,  "#SWE00109"  ,  380.00   , "UNKNOWN");
    details G10("Kithul Jaggery RAJA"                        ,      "Sweeteners"         ,  "#SWE00110"  ,  300.00   , "UNKNOWN");
    details G11("Kithul Syrup HARK Large"                    ,      "Sweeteners"         ,  "#SWE00111"  , 1150.00   , "UNKNOWN");
    details G12("Kithul Syrup HARK Small"                    ,      "Sweeteners"         ,  "#SWE00112"  ,  600.00   , "UNKNOWN");
    details G13("Kithul Syrup KIMK"                          ,      "Sweeteners"         ,  "#SWE00113"  ,  900.00   , "UNKNOWN");
    details G14("Kithul Syrup Small PANW"                    ,      "Sweeteners"         ,  "#SWE00114"  ,  850.00   , "UNKNOWN");
    details G15("Organic Coconut Sugar CCC"                  ,      "Sweeteners"         ,  "#SWE00115"  ,  700.00   , "UNKNOWN");
    details G16("Organic Coconut Sugar GFOL Small"           ,      "Sweeteners"         ,  "#SWE00116"  ,  275.00   , "UNKNOWN");



    details H1 ("Granola Premium Classic SWFT"               ,  "Breakfast Cereal"       ,  "#BC00101"   ,  890.00   , "UNKNOWN");
    details H2 ("Kollu Crunch PANW "                         ,  "Breakfast Cereal"       ,  "#BC00102"   ,  540.00   , "UNKNOWN");
    details H3 ("Original Granola 3x3G "                     ,  "Breakfast Cereal"       ,  "#BC00103"   ,  970.00   , "UNKNOWN");
    details H4 ("Peanut Butter Granola 3X3G"                 ,  "Breakfast Cereal"       ,  "#BC00104"   ,  970.00   , "UNKNOWN");
    details H5 ("Peanut Butter Granola SWFT"                 ,  "Breakfast Cereal"       ,  "#BC00105"   , 1000.00   , "UNKNOWN");
    details H6 ("Porridge Pack JAYA"                         ,  "Breakfast Cereal"       ,  "#BC00106"   ,  190.00   , "UNKNOWN");
    details H7 ("Rice Flakes JAYA"                           ,  "Breakfast Cereal"       ,  "#BC00107"   ,  110.00   , "UNKNOWN");



    details I1 ("Acai Powder VITA"                           ,  "Supplement & More"      ,  "#SM00101"  , 2400.00   , "UNKNOWN");
    details I2 ("Activated Charcoal MOON "                   ,  "Supplement & More"      ,  "#SM00102"  ,  665.00   , "UNKNOWN");
    details I3 ("Activated Coconut Charcoal Powder FOUR"     ,  "Supplement & More"      ,  "#SM00103"  ,  500.00   , "UNKNOWN");
    details I4 ("Ashwagandha Powder FOUR"                    ,  "Supplement & More"      ,  "#SM00104"  ,  700.00   , "UNKNOWN");
    details I5 ("Candied Ginger ECOF"                        ,  "Supplement & More"      ,  "#SM00105"  ,  415.00   , "UNKNOWN");
    details I6 ("Cocoa Nibs SERD"                            ,  "Supplement & More"      ,  "#SM00106"  ,  535.00   , "UNKNOWN");
    details I7 ("Coriander Seeds OSMT"                       ,  "Supplement & More"      ,  "#SM00107"  ,  175.00   , "UNKNOWN");
    details I8 ("Dark Chocolate Bar SERD"                    ,  "Supplement & More"      ,  "#SM00108"  ,  440.00   , "UNKNOWN");
    details I9 ("Dried Belimal OSMT"                         ,  "Supplement & More"      ,  "#SM00109"  ,  400.00   , "UNKNOWN");
    details I10("Dried Iramusu OSMT"                         ,  "Supplement & More"      ,  "#SM00110"  ,  450.00   , "UNKNOWN");
    details I11("Dried Kothala Himbutu OSMT"                 ,  "Supplement & More"      ,  "#SM00111"  ,  180.00   , "UNKNOWN");
    details I12("Dried Polpala OSMT"                         ,  "Supplement & More"      ,  "#SM00112"  ,  175.00   , "UNKNOWN");
    details I13("Dried Ranawara OSMT"                        ,  "Supplement & More"      ,  "#SM00113"  ,  200.00   , "UNKNOWN");
    details I14("Dried Venival OSMT"                         ,  "Supplement & More"      ,  "#SM00114"  ,  335.00   , "UNKNOWN");
    details I15("Green Coffee Bean Extract LYBS"             ,  "Supplement & More"      ,  "#SM00115"  ,  495.00   , "UNKNOWN");
    details I16("Licorice Root Powder FOUR"                  ,  "Supplement & More"      ,  "#SM00116"  ,  450.00   , "UNKNOWN");
    details I17("Matcha Green Tea Powder PINK"               ,  "Supplement & More"      ,  "#SM00117"  , 1735.00   , "UNKNOWN");
    details I18("Matcha Green Tea Powder VITA"               ,  "Supplement & More"      ,  "#SM00118"  , 2400.00   , "UNKNOWN");
    details I19("Morgina Capsules MORI"                      ,  "Supplement & More"      ,  "#SM00119"  , 1200.00   , "UNKNOWN");
    details I20("Moringa Herbal Tea MORI"                    ,  "Supplement & More"      ,  "#SM00120"  ,  500.00   , "UNKNOWN");



void buyer()
{

    cout << " Select by item number: ";
    cin >> Unit;

    if (Gmenu == '1')
    {
        switch(Unit)
        {
        case 1:
        A1.paylist();
        break;

        case 2:
        A2.paylist();
        break;

        case 3:
        A3.paylist();
        break;

        case 4:
        A4.paylist();
        break;

        case 5:
        A5.paylist();
        break;

        case 6:
        A6.paylist();
        break;

        case 7:
        A7.paylist();
        break;

        case 8:
        A8.paylist();

        case 9:
        A9.paylist();

        case 10:
        A10.paylist();

        case 11:
        A11.paylist();
        break;

        case 12:
        A12.paylist();
        break;

        case 13:
        A13.paylist();
        break;

        case 14:
        A14.paylist();
        break;

        case 15:
        A15.paylist();
        break;

        case 16:
        A16.paylist();
        break;

        case 17:
        A17.paylist();
        break;

        case 18:
        A18.paylist();

        case 19:
        A19.paylist();

        case 20:
        A20.paylist();
        }

  }else if(Gmenu == '2')
        {
        switch(Unit)
        {
        case 1:
        B1.paylist();
        break;

        case 2:
        B2.paylist();
        break;

        case 3:
        B3.paylist();
        break;

        case 4:
        B4.paylist();
        break;

        case 5:
        B5.paylist();
        break;

        case 6:
        B6.paylist();
        break;

        case 7:
        B7.paylist();
        break;

        case 8:
        B8.paylist();

        case 9:
        B9.paylist();

        case 10:
        B10.paylist();

        case 11:
        B11.paylist();
        break;

        case 12:
        B12.paylist();
        break;

        case 13:
        B13.paylist();
        break;

        case 14:
        B14.paylist();
        break;

        case 15:
        B15.paylist();
        break;

        case 16:
        B16.paylist();
        break;

        case 17:
        B17.paylist();
        break;

        case 18:
        B18.paylist();

        case 19:
        B19.paylist();

        case 20:
        B20.paylist();

    }

} else if(Gmenu == '3')
    {
    switch(Unit)
        {
        case 1:
        C1.paylist();
        break;

        case 2:
        C2.paylist();
        break;

        case 3:
        C3.paylist();
        break;

        case 4:
        C4.paylist();
        break;

        case 5:
        C5.paylist();
        break;

        case 6:
        C6.paylist();
        break;

        case 7:
        C7.paylist();
        break;

        case 8:
        C8.paylist();

        case 9:
        C9.paylist();

        case 10:
        C10.paylist();

        case 11:
        C11.paylist();
        break;

        case 12:
        C12.paylist();
        break;

        case 13:
        C13.paylist();
        break;

        case 14:
        C14.paylist();
        break;

        case 15:
        C15.paylist();
        break;

        case 16:
        C16.paylist();
        break;

    }
} else if(Gmenu == '4')
    {
    switch(Unit)
        {
        case 1:
        D1.paylist();
        break;

        case 2:
        D2.paylist();
        break;

        case 3:
        D3.paylist();
        break;

        case 4:
        D4.paylist();
        break;

        case 5:
        D5.paylist();
        break;

        case 6:
        D6.paylist();
        break;

        case 7:
        D7.paylist();
        break;

        case 8:
        D8.paylist();

        case 9:
        D9.paylist();

        case 10:
        D10.paylist();

        case 11:
        D11.paylist();
        break;

        case 12:
        D12.paylist();
        break;

        case 13:
        D13.paylist();
        break;

        case 14:
        D14.paylist();
        break;

        case 15:
        D15.paylist();
        break;

        case 16:
        D16.paylist();
        break;

        case 17:
        D17.paylist();
        break;

        case 18:
        D18.paylist();

        case 19:
        D19.paylist();

        case 20:
        D20.paylist();
    }
}else if (Gmenu == '5')
    {
    switch(Unit)
        {
        case 1:
        E1.paylist();
        break;

        case 2:
        E2.paylist();
        break;

        case 3:
        E3.paylist();
        break;

        case 4:
        E4.paylist();
        break;

        case 5:
        E5.paylist();
        break;

        case 6:
        E6.paylist();
        break;

        case 7:
        E7.paylist();
        break;

        case 8:
        E8.paylist();

        case 9:
        E9.paylist();

        case 10:
        E10.paylist();

        case 11:
        E11.paylist();
        break;

        case 12:
        E12.paylist();
        break;

        case 13:
        E13.paylist();
        break;

        case 14:
        E14.paylist();
        break;

        case 15:
        E15.paylist();
        break;

        case 16:
        E16.paylist();
        break;

        case 17:
        E17.paylist();
        break;

        case 18:
        E18.paylist();

        case 19:
        E19.paylist();

        case 20:
        E20.paylist();

    }
}else if(Gmenu == '6')
    {
    switch(Unit)
        {
        case 1:
        F1.paylist();
        break;

        case 2:
        F2.paylist();
        break;

        case 3:
        F3.paylist();
        break;

        case 4:
        F4.paylist();
        break;

        case 5:
        F5.paylist();
        break;

        case 6:
        F6.paylist();
        break;

        case 7:
        F7.paylist();
        break;

        case 8:
        F8.paylist();

        case 9:
        F9.paylist();

        case 10:
        F10.paylist();

        case 11:
        F11.paylist();
        break;

        case 12:
        F12.paylist();
        break;

        case 13:
        F13.paylist();
        break;

        case 14:
        F14.paylist();
        break;

        case 15:
        F15.paylist();
        break;

        case 16:
        F16.paylist();
        break;

        case 17:
        F17.paylist();
        break;

        case 18:
        F18.paylist();

        case 19:
        F19.paylist();

        case 20:
        F20.paylist();
    }

}else if(Gmenu == '7')
    {
    switch(Unit)
        {
        case 1:
        G1.paylist();
        break;

        case 2:
        G2.paylist();
        break;

        case 3:
        G3.paylist();
        break;

        case 4:
        G4.paylist();
        break;

        case 5:
        G5.paylist();
        break;

        case 6:
        G6.paylist();
        break;

        case 7:
        G7.paylist();
        break;

        case 8:
        G8.paylist();

        case 9:
        G9.paylist();

        case 10:
        G10.paylist();

        case 11:
        G11.paylist();
        break;

        case 12:
        G12.paylist();
        break;

        case 13:
        G13.paylist();
        break;

        case 14:
        G14.paylist();
        break;

        case 15:
        G15.paylist();
        break;

        case 16:
        G16.paylist();
        break;

    }

}else if(Gmenu == '8')
    {

    switch(Unit)
        {
        case 1:
        H1.paylist();
        break;

        case 2:
        H2.paylist();
        break;

        case 3:
        H3.paylist();
        break;

        case 4:
        H4.paylist();
        break;

        case 5:
        H5.paylist();
        break;

        case 6:
        H6.paylist();
        break;

        case 7:
        H7.paylist();
        break;

        }
}else if(Gmenu == '9')
    {

    switch(Unit)
        {
        case 1:
        I1.paylist();
        break;

        case 2:
        I2.paylist();
        break;

        case 3:
        I3.paylist();
        break;

        case 4:
        I4.paylist();
        break;

        case 5:
        I5.paylist();
        break;

        case 6:
        I6.paylist();
        break;

        case 7:
        I7.paylist();
        break;

        case 8:
        I8.paylist();

        case 9:
        I9.paylist();

        case 10:
        I10.paylist();

        case 11:
        I11.paylist();
        break;

        case 12:
        I12.paylist();
        break;

        case 13:
        I13.paylist();
        break;

        case 14:
        I14.paylist();
        break;

        case 15:
        I15.paylist();
        break;

        case 16:
        I16.paylist();
        break;

        case 17:
        I17.paylist();
        break;

        case 18:
        I18.paylist();

        case 19:
        I19.paylist();

        case 20:
        I20.paylist();
        }
}

}

int main()
{
    Wmarket M1;
    customer C1;

    ofstream myfile("Bills & Income.txt", ios::app);

    while (NewCustomer != 'Q')
    {
        M1.welcome();
        C1.setCustomer();
        C1.pass();

        system("cls");

        M1.GroceryMenu();

        system("cls");

        M1.mainmenu();

    while(Gmenu != 'E')
    {
        buyer();
        while(Unit != 0)
        {
            buyer();
        }

        system("cls");

        M1.GroceryMenu();

        system("cls");

        M1.mainmenu();
    }


   // manage appending to the file here

    myfile << "Customer No."<< b << " Served\n\n";
    myfile << "Customer Name  : "<< passedNameone << " "<< passedNametwo<<"\n";
    myfile << "E-mail         : "<< passedEmail<<"\n";
    myfile << "Phone Number   : "<< passedPhone << "\n";
    myfile << "Bill Amount    : Rs."<< purchase <<"\n\n\n";
    myfile <<"________________________________________________________________________\n\n";

 for(c=0;c<=d;c++)
 {
    myfile <<plist[c]<<" x 1"<<"\n";
 }
 d=0;
    myfile <<"________________________________________________________________________\n\n";

    b++;

      income = income + purchase;
      purchase = 0;


      system("cls");
    } // master loop end
    time_t now = time(0);
    char* dt = ctime(&now);

    myfile <<"Customers served  : "<<b - 1<<"\n";
    myfile <<"Total income      : Rs."<<income<<"\n\n\n";
    myfile <<"date and time     : " << dt <<"\n";

    myfile <<"_____________________________________________________________________________________________________________________________________________________________________________________";
    return 0;

}



