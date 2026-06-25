// Menu List Management Display Pannel
#include <stdio.h>
#include <time.h>

int main()

{

    int n,m,i=1,g,t,sum=0,h,billno,pay,crcardno,dbcardno,upiid,mon,date,cvv,cv,upay,gpay,phpay,ptm,mbno;
    char name;
    printf("\n\n\t\t\t\t\t\t _________Welcome to Platform-65________ \n\n");
    printf("\nAvailable Menu List:\n\n");
    printf( "Veg Main Course: 🌽\n");
    printf("\t1.Kadai-229\t\t\t2.Kadi Paneer-229\t\t3.Veg Jaipuri-229\n");
    printf("\t4.Veg Kolapuri-229\t\t5. Subxi Diwani Handi-239\t6.Chatpata-229\n");
    printf("\t7.Corn Palak-229\t\t8. Mushroom Masala-239\t\t9.Baby Corn Masala-239\n\n\n");
    printf("^Non-Veg Starters [Boneless]:🥩\n");
    printf( "\t10.Miriyala Kodi Vepudu-269\t11.Vellulli Kodi Roast-269\t12.Gongura Kodi Vepudu-269\n");
    printf("\t13.Pachi Mirchi Kodi Vepudu-269\t14.Allam Kodi Vepudu-269\t15.Konseema Kodi Vepudu-269\n");
    printf("\t16.Kuchipudi Chicken-269\t17.Chicken Ghee Roast-269\t18.Kodi Chips-269\n");
    printf("\t19.Miriyala Mamsam Vepudu-299\t20.Royyala Vepudu-299\t\t21.Kaju Royyala Vepudu-299\n\n\n");
    printf("^Veg Starters: 🍄\n");
    printf( "\t22.Manchurian-219\t\t23. Spring Rolls-239\t\t24. Shanghai Rolls-239\n");
    printf( "\t25.Baby Corn Manchurian-239\t26.Baby Corn Majestic-239\t27.Chilli Baby Corn-239\n");
    printf("\t28.Baby Corn239\t\t\t29.Mashroom 65-239\t\t30.Chilli Mashroom-239\n");
    printf("\t31. Paneer 65-269\t\t32.Chilli Paneer-269\t\t33.Paneer Manchurian-26\n\n\n");
    printf("No.of Dishes you want to Select:");
    scanf("%d",&n);
    printf("\n");
    Menu:
    printf ("Enter the Item No. you want to Order:");
    scanf("%d", &m);
    switch(m)
    {
        case 1:
            printf("\nYour Order is 1.Kadai-229\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 229;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n",t);
            break;
        case 2:
            printf("\nYour Order is 2.Kadi Paneer-229\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d",&g);
            t=g * 229;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n",t);
            break;
        case 3:
            printf("\nYour Order is 3. Veg Jaipuri-229\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d",&g);
            t=g * 229;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;
        case 4:
            printf("\nYour Order is 4. Veg Kolapuri-229\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 229;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 5:
            printf("\nYour Order is 5. Subxi Diwani Handi-239\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 239;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 6:
            printf("\nYour Order is 6.Chatpata-229\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d",&g);
            t=g * 229;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 7:
            printf("\nYour Order is 7.Corm Palak-229\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 229;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 8:
            printf("\nYour Order is 8.Mushroom Masala-239\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 239;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 9:
            printf("\nYour Order is 9.Baby Corn Masala-239\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 239;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 10:
            printf("\nYour Order is 10.Miriyala Kodi Vepudu-269\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 269;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 11:
            printf("\nYour Order is 11.Vellulli Kodi Roast-269\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf( "%d", &g);
            t=g * 269;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 12:
            printf("\nYour Order is 12.Gongura Kodi Vepudu-269\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 269;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 13:
            printf("\nYour Order is 13.Pachi Mirchi Kodi Vepudu-269\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 269;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 14:
            printf("\nYour Order is 14.Allam Kodi Vepudu-269\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%a", &g);
            t=g * 269;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 15:
            printf("\nYour Order is 15.Konseema Kodi Vepudu-269\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 269;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 16:
            printf("\nYour Order is 16.kuchipudi Chicken-269\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 269;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 17:
            printf("\nYour Order is 17.Chicken Ghee Roast-269\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 269;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 18:
            printf("\nYour Order is 18.Kodi Chips-269\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d",&g);
            t=g * 269;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 19:
            printf("\nYour Order is 19.Miriyala Mamsam Vepudu-299\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf( "%d", &g);
            t=g * 299;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d (25.\n", t);
            break;

        case 20:
            printf("\nYour Order is 20.Royyala Vepudu-299\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 299;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 21:
            printf("\nYour Order is 21.Kaju Royyala Vepudu-299\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 299;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 22:
            printf("\nYour Order is 22.Manchurian-219\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d",&g);
            t=g* 219;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 23:
            printf("\nYour Order is 23. Spring Rolls-239\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d",&g);
            t=g * 239;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 24:
            printf("\nYour Order is 24. Shanghai Rolls-239\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 239;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 25:
            printf("\nYour Order is 25.Baby Corn Manchurian-239\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d",&g);
            t=g * 239;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 26:
            printf("\nYour Order is 26.Baby Corn Majestic-239\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%a",&g);
            t=g * 239;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 27:
            printf("\nYour Order is 27.Chillé Baby Corm-239\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 239;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 28:
            printf("\nYour Order is 28.Baby Corn239\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 239;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 29:
            printf("\nYour Order is 29.Mashroom 65-239\n");
            printf("Enter the No.of times you want to order this tem:");
            scanf("%d", &g);
            t=g * 239;
            sum=sum+t;
            printf("Your Order is Confirmed Q\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 30:
            printf("\nYour Order is 30.Chilli Mashroom-239\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d",&g);
            t=g * 239;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 31:
            printf("\nYour Order is 31.Paneer 65-269\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 269;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 32:
            printf("\nYour Order is 32.Chilli Paneer-269\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 269;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;

        case 33:
            printf("\nYour Order is 33.Paneer Manchurian-269\n");
            printf("Enter the No.of times you want to order this Item:");
            scanf("%d", &g);
            t=g * 269;
            sum=sum+t;
            printf("Your Order is Confirmed 😊\n");
            printf ("\nTotal amount on this order to be paid:%d Rs.\n", t);
            break;
    }
    printf("\n");
    if (i<=n-1)
    {
        i++;
        goto Menu;
    }
    printf("\n\n\n");

    printf("\t\t\t\t\t\t\t________Bill________\n\n\n");
    time_t G;
    time(&G);
    printf("Billing Date and Time : %s",ctime(&G));
    printf("\n");
    printf("Bill No. : 7\n");
    printf("Name :");
    scanf("%2c",&name);
    printf("\n");
    printf("Enter Mobile No.:");
    scanf("%11d",&mbno);
    printf("\n");
    printf("The Total Amount for the Orders : %d Rs. \n\n",sum);
    printf("\n");
    printf("\t1.Credit Card\t2.Debit Card\t3.Cash\t4.UPI\n");
    printf("Select the Payment Method : ");
    scanf("%d",&pay);
    switch(pay)
    {
        case 1:
            printf ("You selected Credit Card Payment Method:\n");
            printf ("Enter 16-digit Card No.:");
            scanf("%16d", &crcardno);
            printf( "Enter 3-digit cvu:");
            scanf("%3d",&cvv);
            printf("Enter Exp.Date MM/YYYY : ");
            scanf("%2d/%4d",&mon,&date);
            printf("Your Payment is being Processed ⭕\n\n");
            break;

        case 2:
            printf ("You selected Debit Card Payment Method:\n");
            printf ("Enter 16-digit Card No.:");
            scanf("%16d",&dbcardno);
            printf( "Enter 3-digit cvu:");
            scanf("%3d",&cvv);
            printf("Enter Exp.Date MM/YY4YY :");
            scanf("%2d/%4d",&mon,&date);
            printf("Your Payment is being Processed ⭕\n\n");
            break;
        case 3:
            printf("Cash will be collected Soon after the order is Delivered by the waiter ⭕\n");
            break;
        case 4:
            printf("You Selected UPI Payment Method:\n");
            printf("\t1.Google Pay\t2.Phone Pay\t3.Paytm\n");
            printf("Select UPI Platform:");
            scanf("%d", &upay);
            switch(upay)
            {
                case 1:
                    printf("You Selected Google Pay Payment Method:\n");
                    printf("Enter UPI No. or ScanQ2 below:\n");
                    scanf("%d",&gpay);
                    printf("\n");
                    break;
                case 2:
                    printf("You Selected Phone Pay Payment Method:\n");
                    printf("Enter UPI No. or ScanQR below:\n");
                    scanf("%d",&phpay);
                    printf("\n");
                    break;
                case 3:
                    printf("You Selected Paytm Payment Method:\n");
                    printf("Enter UPI No. or ScanQ2 below:\n");
                    scanf("%d",&ptm);
                    printf("\n");
                    break;
            }
    }
    printf("\n\n");
    printf("\t\t\t\t\t____ScanQR code for Bill Payment if needed____\n");
    printf("\t\t\t\t\t\t\t ..............\n");
    printf("\t\t\t\t\t\t\t ..............\n");
    printf("\t\t\t\t\t\t\t ..............\n");
    printf("\t\t\t\t\t\t\t ..............\n");
    printf("\t\t\t\t\t\t\t ..............\n");
    printf("\t\t\t\t\t\t\t ..............\n");
    printf("\t\t\t\t\t\t\t ..............\n");
    printf("\n\n");
    printf("\t\t\t\t\t____________ 😊 Payment Successful 😊 ____________ \n\n");
    printf("\t\t\t\t\t____________ 😊 Thankyou & Visit Again 😊 ____________");
    printf("\n\n");
}
