#include <stdio.h>
#include <math.h>
int main()
{
    int loop=1;
    while (loop) //Table for entering the option.
    {
        float result,height,weight,bmi;
        int num;
        char choice;
        printf("=============================\n");
        printf("||---HEALTH CHECKUP---||\n");
        printf("=============================\n");
        printf("a]Check Body to Mass Ratio\n");
        printf("b]Calorie per Step Counter\n");
        printf("c]Water Intake\n");
        printf("d]Medicine\n");
        printf("e]Exit Program\n");
        printf("=============================\n");
        printf("\nEnter your choice:");
        scanf(" %c", &choice);
        switch (choice)
        {
        case 'a':     //For Body to Mass Ratio
        {
           printf("\nEnter height in meter:");  
		   scanf("%f", &height);  
		   printf("\nEnter weight in kg:");  
		   scanf("%f", &weight);  
		   bmi = weight / (height * height);  
		   printf("Your Body Mass Index(BMI) is %f\n", bmi);  
		   if(bmi < 15)  
		   {  
		   printf("Your BMI category is:Extremely Low\n");  
		   }  
		   else if(bmi >= 15.1 && bmi <= 17.5)  
		   {  
		   printf("Your BMI category is:Very Low\n");  
		   }  
		   else if(bmi >= 17.6 && bmi <= 18.5)  
		   {  
		   printf("Your BMI category is:Low\n");  
		   }  
		   else if(bmi >= 18.6 && bmi <= 24.9)  
		   {  
		   printf("Your BMI category is:Perfect\n");  
		   }  
		   else if(bmi >= 25 && bmi <= 29.9)  
		   {  
		   printf("Your BMI category is:Bit Overweight\n");  
		   }  
		   else if(bmi >= 30 && bmi <= 30.9)  
		   {  
		   printf("Your BMI category is:Overweight\n");  
		   }  
		   else if(bmi >= 40)  
		   {  
		   printf("Your BMI category is:Obese\n");  
		   }  
		   else  
		   {  
		   printf("Wrong entry\n");  
		   }   
		   loop=0;
            break;
        }
        case 'b':     //For Step Counter
        {
            printf("\nEnter number of Steps Walked:");
            scanf("%d", &num);
            result = num * 0.04;
            printf("Calories Burned=%f\n",result);
            loop=0;
            break;
        }
        case 'c':      //For Water Intake
        {
            printf("\nEnter Weight in kg:");
            scanf("%f",&weight);
            result=weight/30;
            printf("You should consume atleast %.1f\n litres of water everyday",result);
            loop=0;
            break;
        }
        case 'd':      //For Medicine
        {
        printf("=============================\n");
        printf("||------Medicines-----||\n");
        printf("=============================\n");
        printf("1]Headache\n");
        printf("2]Stomach Ache or Bad Stomach\n");
        printf("3]Fever\n");
        printf("4]Cough\n");
        printf("5]Other\n");
        printf("6]Exit");
        printf("\nEnter your choice:");
        scanf(" %c", &choice);
        switch (choice)
        {
        case '1':     //For Headache
        {
           printf("For headache take a tablet of Saridon");  
           loop=0;
            break;
        }
        case '2':     //For Stomach Ache or Bad Stomach
        {
            printf("For headache take a tablet of Omeprazole");
            loop=0;
            break;
        }
        case '3':      //For Fever
        {
            printf("For Fever take combination of Crocin and Antibiotic");
            loop=0;
            break;
        }
        case '4':      //For Cough
        {
            printf("For Cough take 1 spoon Benadryl syrup");
            loop=0;
            break;
        }
        case '5':      //For Other
        {
            printf("For other contact your Doctor\n");
            printf("or\n");
            printf("Call the Emergency Ambulance Service at 102.");
            loop=0;
            break;
        }
        case '6':      //Else
            loop=0;
            break;
        
            printf("Invalid Option\n");
        }
        case 'e':
        loop=0;
        break;   
    }
    return 0;
}
}
}

