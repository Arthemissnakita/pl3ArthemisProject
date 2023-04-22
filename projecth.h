// Line Function
void line() {
	
	printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------\n");
}

// Converter Formula
float mmoltomg(float a) {
	
	return (a * 18);	
}

// Total Cholesterol Formula
float tot_chol(float a, float b, float c) {
	
	return( a + b + (0.2 * c));
	
}

// Ratio Formula
float ratio(float a, float b) {
	   
	return (a / b);
}

// LDL/HDL Ratio Indicator
char ldlhdl(float hdl, float ldl) {

    float tot_ratio2;
    
    tot_ratio2 = ldl/hdl;

    if (tot_ratio2 < 2.0) {
    	
        printf("\n Your LDL/HDL ratio is ideal!");
        printf("\n");
        printf("\n An ideal LDL/HDL ratio is a good indicator of a healthy triglyceride level in the blood, which is also a sign of a lower risk for heart disease.");
        printf("\n");
        printf("\n Diet Plan: ");
        printf("\n");
        printf("\n  1. Maintain or lessen red meat consumption - Saturated fats are found primarily in red meat, which raise your total cholesterol.");
        printf("\n  2. Add whey protein to diet                - Studies have shown that consumption of whey protein supplements lowers LDL cholesterol, total"); 
		printf("\n                                               cholesterol, and blood pressure.");
        printf("\n  3. Increase fiber intake                   - Soluble fiber can reduce the absorption of cholesterol into your bloodstream. This can be found in"); 
		printf("\n                                               food such as oatmeal, kidney beans, apples, and pears.");
        printf("\n  4. Avoid food high in trans fat            - These fatty acids significantly raise your LDL (bad) cholesterol. Usually found on food labels"); 
		printf("\n                                               listed as \"partially hydrogenated vegetable oil\" These may be components of margarine, crackers,");
        printf("\n                                               cake, and other processed food, which raise overall cholesterol levels.");
		printf("\n");
		printf("\n Exercise Plan: ");
		printf("\n");
		printf("\n  1. Cardiovascular Exercise - Aim for 150 minutes or more per week of moderate-intensity aerobic activity. Jogging, cycling, swimming, or");  
		printf("\n                               utilizing an elliptical machine are a few examples. Increases in HDL (good) cholesterol and decreases in"); 
		printf("\n                               LDL (bad) cholesterol can both be achieved by this form of exercise.");
		printf("\n  2. Strength Training       - To increase and maintain muscle mass, perform strength training activities at least twice per week. By increasing");
		printf("\n                               the size and quantity of particles that carry HDL cholesterol in the blood, strength training can also aid to"); 
		printf("\n                               lower cholesterol levels.");
		printf("\n  3. Interval Training       - This entails alternating bursts of vigorous exercise with rest intervals or slower-paced workouts. Increased HDL"); 
		printf("\n                               cholesterol levels and improved cardiovascular health are two benefits of interval training.");
		printf("\n  4. Pilates or Yoga         - You might want to incorporate some Pilates or yoga into your regimen to aid with your flexibility, balance, and"); 
		printf("\n                               core strength. Additionally, they aid to relieve stress, which can enhance cardiovascular health in general.");
		printf("\n  5. Active Lifestyle        - Make an effort to include exercise in your regular routine. Examples include walking or biking to work, choosing"); 
		printf("\n                               the stairs over the elevator, and going for a stroll over your lunch break.\n");


    } 
    
	else if (tot_ratio2 >= 2.0 && tot_ratio2 < 5.0 ) {
		
        printf("\n Your LDL/HDL ratio is good!");
        printf("\n");
    	printf("\n Your LDL/HDL ratio is still within the healthy and unalarming range of cholesterol levels. However, it is advisable to improve your diet and"); 
		printf("\n incorporate exercise into your daily routine in order to maintain this number."); 
    	printf("\n");
        printf("\n Diet Plan: ");
        printf("\n");
        printf("\n  1. Maintain or lessen red meat consumption - Saturated fats are found primarily in red meat, which raise your total cholesterol.");
        printf("\n  2. Add whey protein to diet                - Studies have shown that consumption of whey protein supplements lowers LDL cholesterol, total"); 
		printf("\n                                               cholesterol, and blood pressure.");
        printf("\n  3. Increase fiber intake                   - Soluble fiber can reduce the absorption of cholesterol into your bloodstream. This can be found in"); 
		printf("\n                                               food such as oatmeal, kidney beans, apples, and pears.");
        printf("\n  4. Avoid food high in trans fat            - These fatty acids significantly raise your LDL (bad) cholesterol. Usually found on food labels"); 
		printf("\n                                               listed as \"partially hydrogenated vegetable oil\" These may be components of margarine, crackers,");
        printf("\n                                               cake, and other processed food, which raise overall cholesterol levels.");
		printf("\n");
		printf("\n Exercise Plan: ");
		printf("\n");
		printf("\n  1. Cardiovascular Exercise - Aim for 150 minutes or more per week of moderate-intensity aerobic activity. Jogging, cycling, swimming, or");  
		printf("\n                               utilizing an elliptical machine are a few examples. Increases in HDL (good) cholesterol and decreases in"); 
		printf("\n                               LDL (bad) cholesterol can both be achieved by this form of exercise.");
		printf("\n  2. Strength Training       - To increase and maintain muscle mass, perform strength training activities at least twice per week. By increasing");
		printf("\n                               the size and quantity of particles that carry HDL cholesterol in the blood, strength training can also aid to"); 
		printf("\n                               lower cholesterol levels.");
		printf("\n  3. Interval Training       - This entails alternating bursts of vigorous exercise with rest intervals or slower-paced workouts. Increased HDL"); 
		printf("\n                               cholesterol levels and improved cardiovascular health are two benefits of interval training.");
		printf("\n  4. Pilates or Yoga         - You might want to incorporate some Pilates or yoga into your regimen to aid with your flexibility, balance, and"); 
		printf("\n                               core strength. Additionally, they aid to relieve stress, which can enhance cardiovascular health in general.");
		printf("\n  5. Active Lifestyle        - Make an effort to include exercise in your regular routine. Examples include walking or biking to work, choosing"); 
		printf("\n                               the stairs over the elevator, and going for a stroll over your lunch break.\n");

    } 
    
	else {
		
        printf("\n Your LDL/HDL ratio is too high!");
        printf("\n");
        printf("\n You may have a higher risk for heart disease than a person with normal total cholesterol. The higher the ratio, the higher the risk. Changes in"); 
		printf("\n diet and habits are necessary to lower your cholesterol level.");
		printf("\n");
        printf("\n Diet Plan:");
        printf("\n");
		printf("\n  1. Limit alcohol consumption          - Drinking alcohol adds extra calories, which result in weight gain. The risk of being overweight"); 
		printf("\n                                          includes having high LDL level and low HDL level.");
        printf("\n  2. Do not consume food with trans fat - These fatty acids significantly raise your LDL (bad) cholesterol. Usually found on food labels listed"); 
		printf("\n                                          as \"partially hydrogenated vegetable oil\". These may be components of margarine, crackers, cake, and"); 
		printf("\n                                          other processed food, which raise overall cholesterol levels.");
        printf("\n  3. Increase fiber intake              - Soluble fiber can reduce the absorption of cholesterol into your bloodstream. This can be found in food"); 
		printf("\n                                          such as oatmeal, kidney beans, apples, and pears.");
        printf("\n  4. Find healthier snack alternatives  - Examples include vegetables, fruits, nut butters, whole grains, beans, lentils, and other healthy fats."); 
		printf("\n                                          A diet rich in fruit and vegetables can increase plant stanols or sterols inside the body, which work"); 
		printf("\n                                          like soluble fiber.");
		printf("\n");
        printf("\n  The recommended daily calorie/total fat/saturated fat ratio (cal = calories):");
        printf("\n");
        printf("\n   a.) 1500 cal/day = 42-58 grams (total fat) = 10 grams (saturated fat)");
        printf("\n   b.) 2000 cal/day = 56-78 grams (total fat) = 13 grams (saturated fat)");
        printf("\n   c.) 2500 cal/day = 69-97 grams (total fat) = 17 grams (saturated fat)");
        printf("\n");
        printf("\n Exercise Plan:");
        printf("\n");
        printf("\n  1. Outdoor Activities                - Take part in outdoor pursuits like paddling, hiking, or kayaking. These activities not only provide you");
		printf("\n                                         a fantastic exercise but also give you a chance to take in the scenery and breathe some fresh air.");
        printf("\n  2. Group Exercise Classes            - Enroll in a group exercise class like dance aerobics, or kickboxing. These programs offer an enjoyable"); 
		printf("\n                                         and friendly method to raise your heart rate  and lower your cholesterol.");
        printf("\n  3. Exercise with resistance bands    - Make resistance band training a part of your regimen. By increasing the quantity and size of the"); 
		printf("\n                                         particles that carry HDL cholesterol in the blood, resistance band exercises can assist to grow and tone"); 
		printf("\n                                         muscle, which helps lower cholesterol levels.");
        printf("\n  4. Mind-Body Activities              - Try including mind-body activities into your routine, such as yoga, tai chi, or qigong. In addition to"); 
		printf("\n                                         their physical advantages, these activities also serve to lower stress and advance general well-being,"); 
		printf("\n                                         which can lower cholesterol levels.");
        printf("\n  5. Exercises for Functional Training - These motions are emphasized during the exercises, which can help to increase functional fitness overall"); 
		printf("\n                                         and balance and coordination. Squats, lunges, and push-ups are among examples.\n");
    }
    
    return tot_ratio2;
}

// Triglyceride/HDL Ratio Indicator
char tgydhdl(float hdl, float tgyd) {
	
	float tot_ratio3;
	
	tot_ratio3 = tgyd/hdl; 
	
	if (tot_ratio3 < 2.0) {
		
    	printf("\n Your triglyceride/HDL ratio is ideal!");
    	printf("\n");
    	printf("\n An ideal triglyceride/HDL ratio is associated with a lower risk of cardiovascular disease and other health problems. Low levels of triglycerides"); 
		printf("\n and high levels of HDL cholesterol are both beneficial for heart health.");
        printf("\n");
        printf("\n Diet Plan: ");
        printf("\n");
        printf("\n  1. Increase your consumption of healthy fats by including sources in your diet including nuts, seeds, avocados, fatty seafood (like salmon),");
		printf("\n     and olive oil. Omega-3 and omega-6 fatty acids, which are included in certain meals, may reduce triglycerides and raise HDL cholesterol");
		printf("\n     levels.");
       	printf("\n  2. Limit processed foods and those with added sugars because they can cause triglyceride levels to increase. Sugary beverages, sweets, and");
		printf("\n     processed snacks like chips or cookies fall under this category.");
        printf("\n  3. Increase your intake of fiber by including it in your diet by eating more whole grains, fruits, and vegetables. The levels of HDL");
		printf("\n     cholesterol and triglycerides can both be improved by soluble fiber.");
        printf("\n  4. Select lean sources of protein. Choose lean sources of protein such fish, skinless chicken or turkey, beans, and lentils. These foods can"); 
		printf("\n     lower LDL cholesterol levels and have lower saturated fat content.");
		printf("\n  5. Keep yourself hydrated by drinking lots of water throughout the day to keep your blood flowing normally and help flush away pollutants.");
		printf("\n");
		printf("\n Exercise Plan: ");
		printf("\n");
		printf("\n  1. Establish clear training objectives and monitor your progress. Having a specific objective can help keep you motivated and on track, whether");  
		printf("\n     it is to increase your exercise duration, run a specific distance, or lift a specific weight."); 
		printf("\n  2. Get a workout partner. It can be more enjoyable to exercise with a friend, and having a workout partner can help with accountability and");
		printf("\n     support.");
		printf("\n  3. Outdoor activities can help you switch up your routine. Kayaking, biking, and hiking are all excellent activities to enjoy the outdoors and");
		printf("\n     get a terrific workout.");
		printf("\n  4. Include workouts for strength training in your program. The importance of strength training for maintaining muscle mass and raising HDL");
		printf("\n     cholesterol levels can't be overstated.");
		printf("\n  5. Try out a new dancing or fitness video game, like dancing Dance Revolution or Wii Fit, to add some variety to your workout regimen. These");
		printf("\n     engaging, entertaining games might be a wonderful indoor exercise option.\n");
	}
		
	else if (tot_ratio3 >= 4.0 && tot_ratio3 < 6.0) { 
	
    	printf("\n Your Triglyceride/HDL ratio is high! ");
    	printf("\n");
    	printf("\n When the triglyceride/HDL ratio is high, it means that the level of triglycerides in the blood is relatively high compared to the level of HDL"); 
		printf("\n cholesterol. A high triglyceride/HDL ratio is associated with an increased risk of cardiovascular disease and other health issues.");
    	printf("\n");
		printf("\n Diet Plan: ");
		printf("\n");
		printf("\n  1. Increase your intake of omega-3 fatty acids. Omega-3 fatty acids, found in fatty fish like salmon, can help lower triglyceride levels. ");
		printf("\n  2. Limit processed foods and those with added sugars because they can cause triglyceride levels to increase. Sugary beverages, sweets,");
		printf("\n     and processed snacks like chips or cookies fall under this category.");
		printf("\n  3. Limit your intake of carbohydrates. High-carbohydrate diets can increase triglyceride levels. Try to limit your intake of sugary and starchy");
		printf("\n     foods.");
		printf("\n  4. Limit your intake of saturated and trans fats. These types of fats can increase your LDL cholesterol levels, which can contribute to a high"); 
		printf("\n     triglyceride/HDL ratio. ");
		printf("\n  5. Increase your intake of fiber. Fiber can help lower triglyceride levels. Good sources of fiber include fruits, vegetables, and whole grains.");
		printf("\n");
		printf("\n Exercise Plan: ");
		printf("\n");
		printf("\n  1. Strength training, such as weightlifting or resistance band exercises, can also help improve your triglyceride/HDL ratio by increasing your"); 
		printf("\n     muscle mass.");
		printf("\n  2. Walking is a low-impact exercise that can help improve your triglyceride/HDL ratio. Aim for at least 30 minutes of brisk walking per day.");
		printf("\n  3. Yoga or Pilates can help reduce stress and improve flexibility, which can have a positive impact on your triglyceride/HDL ratio. ");
		printf("\n  4. Cycling is another low-impact exercise that can help lower your triglyceride levels and improve your cardiovascular health. ");
		printf("\n  5. Swimming is a low-impact exercise that can help improve your cardiovascular health and increase your HDL cholesterol levels.\n");
    	
	}
		
	else {
		
		printf("\n Your triglyceride/HDL ratio is too high! ");
		printf("\n");
		printf("\n When the triglyceride/HDL ratio is too high, it can lead to the development of atherosclerosis (hardening and narrowing of the arteries) and"); 
		printf("\n contribute to the formation of blood clots, which can increase the risk of heart attack or stroke.");
		printf("\n");
		printf("\n Diet Plan: ");
		printf("\n");
		printf("\n  1. Increase your intake of omega-3 fatty acids. Omega-3 fatty acids, found in fatty fish like salmon, can help lower triglyceride levels. ");
		printf("\n  2. Limit processed foods and those with added sugars because they can cause triglyceride levels to increase. Sugary beverages, sweets,");
		printf("\n     and processed snacks like chips or cookies fall under this category.");
		printf("\n  3. Limit your intake of carbohydrates. High-carbohydrate diets can increase triglyceride levels. Try to limit your intake of sugary and starchy");
		printf("\n     foods.");
		printf("\n  4. Limit your intake of saturated and trans fats. These types of fats can increase your LDL cholesterol levels, which can contribute to a high"); 
		printf("\n     triglyceride/HDL ratio. ");
		printf("\n  5. Increase your intake of fiber. Fiber can help lower triglyceride levels. Good sources of fiber include fruits, vegetables, and whole grains.");
		printf("\n");
		printf("\n Exercise Plan: ");
		printf("\n");
		printf("\n  1. Strength training, such as weightlifting or resistance band exercises, can also help improve your triglyceride/HDL ratio by increasing your"); 
		printf("\n     muscle mass.");
		printf("\n  2. Walking is a low-impact exercise that can help improve your triglyceride/HDL ratio. Aim for at least 30 minutes of brisk walking per day.");
		printf("\n  3. Yoga or Pilates can help reduce stress and improve flexibility, which can have a positive impact on your triglyceride/HDL ratio. ");
		printf("\n  4. Cycling is another low-impact exercise that can help lower your triglyceride levels and improve your cardiovascular health. ");
		printf("\n  5. Swimming is a low-impact exercise that can help improve your cardiovascular health and increase your HDL cholesterol levels.\n");
		
	}
	
	return tot_ratio3;
	
}

int login() {
	
	struct user {
	
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
    
	};
	
	char username[30], password[20];
	
    FILE *log;

    if (access("login.txt", F_OK) != -1) {
    	
        log = fopen("login.txt", "r");
        
    } 
	
	else {
		
        printf("\n Login file not found.\n");
        return 0;
    }
    
    struct user l;

    printf(" Please Enter your login credentials below\n");
    
    printf("\n Username: ");
    fgets(username, 30, stdin);
    username[strcspn(username, "\n")] = '\0';
    
    printf("\n Password: ");
    fgets(password, 20, stdin);
    password[strcspn(password, "\n")] = '\0';

    int success = 0;
    while (fread(&l, sizeof(l), 1, log)) {
    	
        if (strcmp(username, l.username) == 0 && strcmp(password, l.password) == 0) {
        	
            printf("\n Successful Login\n");
            printf("\n Press any key to continue...");
    		getchar();
    		system("CLS");
            success = 1;
            break;
        }
    }

    if (!success) {
    	
        printf("\n Incorrect Login Details\n");
        
    }
    
    fclose(log);
    
    return success;
}

int registration() {
	
	struct user {
	
    	char fname[30];
    	char lname[30];
    	char username[30];
    	char password[20];
    
	};
	
    FILE *log;
    log = fopen("login.txt","a");
    if (log == NULL) {
        fputs("\n Error at opening File!", stderr);
        exit(1);
    }

    struct user l;

    printf(" Welcome to the Cholesterol Ratio Calculator!");
    printf("\n Enter some details to create your account.\n");
    
    printf("\n Enter First Name: ");
    fgets(l.fname, 30, stdin);
    l.fname[strcspn(l.fname, "\n")] = '\0';
    
    printf("\n Enter Surname: ");
    fgets(l.lname, 30, stdin);
    l.lname[strcspn(l.lname, "\n")] = '\0';

    printf("\n Thank you, now please create a username and a password.\n"); 
	printf("\n Ensure that the username is no more than 30 characters long.");
	printf("\n Ensure that the password is at least 8 characters long and contains lowercase, uppercase, numerical and special characters.\n");

    printf("\n Enter Username: ");
    fgets(l.username, 30, stdin);
    l.username[strcspn(l.username, "\n")] = '\0';
    
    printf("\n Enter Password: ");
    fgets(l.password, 20, stdin);
    l.password[strcspn(l.password, "\n")] = '\0';

    fwrite(&l,sizeof(l),1,log);
    fclose(log);

    printf("\n Registration Successful!\n");
    printf("\n Welcome, %s", l.fname);
    printf("\n Press any key to continue...");
    getchar();
    system("CLS");
    
    return 1;
}
