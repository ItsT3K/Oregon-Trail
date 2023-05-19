

#include "oregon.h"
/* Attempt at a simple Oregon Trail Clone */
/* Programmed by Josh D. < ItsT3K > */
    using namespace std;

	class Charicter{
		public:
			string name;
			
	};

	int oxen; //A
	int ammo; //B
	int bangIT; //B1
	int bangST; //B3
	int cloths; //C
	int cold; //C1
	string response; //CS
	int eventcnt; //D1
	int tDate = 0; //D3
	int date; //D4
	int shoot = 0; //D9
	int eat; //E
	int food; //F
	int spassClear; //F1
	int blueMntClear; //F2
	int fturn; //F9
	int inj; //K8
	int blizz; //L1
	double miles; //M
	int misc; //M1
	double premiles; //M2
	int spass; //M9	
	int fortMoney; //P
	int rng; //R1
	int ill; //S4
	int riderHost; //S5
	int shootWord; //S6
	string shootWordVal[4] = {"BANG", "BLAM", "POW", "WHAM"}; //SS
	int money; //T
	int attackOpt; //T1
	int act; //X
	bool fortOpt; //X1
	bool initp;
	string weekdays[7] = {"Monday", "Tuesday", "Wednesday", "Thurday", "Friday", "Saturday", "Sunday"};
	const char* dates[19] = {"April 12","April 16","May 10","May 24","June 7","June 21","July 5","July 19","August 2","August 16","August 31","September 13","September 27"," October 11","October 25","November 8","November 22","December 6","December 20"};



	


    int main()
        {
            string s;
                system("clear");
                cout << "\n\t========================================";
                cout << "\n\t|           The Oregon Trail           |";
                cout << "\n\t|======================================|";
                cout << "\n\t|        ASCII Terminal Version        |";
                cout << "\n\t|            Programmed By             |";
                cout << "\n\t|          Joshua D. (ItsT3K)          |";
                cout << "\n\t|                 and                  |";
                cout << "\n\t|                Higg99                |"; 
                cout << "\n\t========================================";
                cout << "\n\t\tDo you need instructions?";
                cout << "\n\t\t\tY or N?";
                //y or n prompt
                char c;
                    do{
                        scanf(" %c",&c); c = toupper(c);
                    }while((c != 'N') & (c != 'Y'));
                    if (c=='Y'){
                /* Instructions */
                system("clear");
                cout << "\n\t=========================================";
                cout << "\n\t|\tWelcome to the Oregon Trail\t|";
                cout << "\n\t=========================================";
                cout << "\n\t|This program simulates a trip over the |";
                cout << "\n\t|Oregon Trail from Independence, MI to  |";
                cout << "\n\t|Oregon City, Oregon in 1847.           |";
                cout << "\n\t|                                       |";
                cout << "\n\t|Your family of five will cover the 2040|";
                cout << "\n\t|mile Oregon Trail in 5-6 months...     |";
                cout << "\n\t|If you make it alive...                |";
                cout << "\n\t=========================================";
                cout << "\n";
                cout << "\n\t\tPress [ENTER] to Continue\n";
                cin.get();
                cin.ignore(10000,'\n');
                cin.clear();
                /* Instructions Part 2 */
                system("clear");
                cout << "\n\t=========================================";
                cout << "\n\t|You have saved $900 for the trip and   |";
                cout << "\n\t|you have paid $200 for a wagon.        |";
                cout << "\n\t|You will need to spend the rest of your|";
                cout << "\n\t|money on the following items.          |";
                cout << "\n\t|       Oxen - You can spend $200-$300  |";
                cout << "\n\t| on your team. The more you spend the  |";
                cout << "\n\t| faster you'll go because you will have|";
                cout << "\n\t| better animals.                       |";
                cout << "\n\t|                                       |";
                cout << "\n\t|       Food - The more you have the    |";
                cout << "\n\t| less chance there is of getting sick. |";
                cout << "\n\t|                                       |";
                cout << "\n\t|       Ammunition - $1 buys a belt of  |";
                cout << "\n\t| 50 bullets. You will need bullets for |";
                cout << "\n\t| attacks by animals and bandits. As    |";
                cout << "\n\t| well as for hunting food.             |";
                cout << "\n\t|                                       |";
                cout << "\n\t|       Clothes - This is especially    |";
                cout << "\n\t| important for the cold weather you    |";
                cout << "\n\t| will encounter when crossing the      |";
                cout << "\n\t| mountains.                            |";
                cout << "\n\t=========================================";
                cout << "\n\t\tPress [ENTER] To Continue";             
                cin.get();
                cin.ignore(10000,'\n');
                cin.clear();
                system("clear");
                cout << "\n\t=========================================";
                cout << "\n\t|       Misc. Supplies - this includes  |";
                cout << "\n\t| medicine and other things you will    |";
                cout << "\n\t| need for sickness and emergency repair|";
                cout << "\n\t|                                       |";
                cout << "\n\t| You can spend all of your money before|";
                cout << "\n\t| you start your trip. Or you can save  |";
                cout << "\n\t| some of your cash to spend at forts   |";
                cout << "\n\t| along the way when you run low.       |";
                cout << "\n\t| However,items cost more at the forts  |";
                cout << "\n\t| You can also go hunting along the way |";
                cout << "\n\t| to get more food.                     |";
                cout << "\n\t| Whenever you have to use your trusty  |";
                cout << "\n\t| rifle along the way you will be told  |";
                cout << "\n\t| to type in a word (that sounds like a |";
                cout << "\n\t| gun shot. The faster you type in that |";
                cout << "\n\t| word and hit the [ENTER] key the      |";
                cout << "\n\t| better luck you will have with your   |";
                cout << "\n\t| gun.                                  |";
                cout << "\n\t=========================================";
                cout << "\n\t\tPress [ENTER] To Continue";
                cin.get();
                cin.ignore(10000,'\n');
                cin.clear();
                /* Instructions Part 3 */                                  
                }
                /* No Instructions */
                system("clear");
                money = 900;
                /*cout << "\n\t========================================";
                cout << "\n\t|You have $900.                        |";
                cout << "\n\t|How much do you want to spend on your |";
                cout << "\n\t|oxen team?                            |";
                cout << "\n\t========================================";
                */
		initp = true;
		do{
		  printf("\n\tYou have $%i",money);
		  oxen = purchase("oxen team", 300, 200);
		  system("clear");
		  food = purchase("food", money, 1);
		  system("clear");
		  ammo = purchase("ammunition", money, 1);
		  system("clear");
		  cloths = purchase("clothing", money, 1);
		  system("clear");
		  misc = purchase("miscellaneous", money, 1);
		  system("clear");
		  if(money < (oxen+food+ammo+cloths+misc)){
		    printf("\n\tYou Have Overspent your $%i... Buy again.\n",money);
		    cin.get();}
		}while(money < (oxen+food+ammo+cloths+misc));
		money = money - (oxen+food+ammo+cloths+misc);
		miles = 0;
		initp = false;
		printf("\n\tAfter all purchases. You now have $%i left\n\n\t MONDAY MARCH 29 1847", money);
		do{
		beginTurn(); //1220 -> goto 1750
		turnOptions();
		if(act == 1){
			fortStop();//goto 2290
		}else if(act==2){
			hunting();// goto 2540
		}
		if (food < 13){
			dying(5060);
		}
		eating(); //goto 2720
		ridersAttack();
		selectEvents();
		mountains();
		setDate();
		}while(true);
		
		  
		/* Functions Go Here */
		

                cin.get();
				cin.ignore(10000,'\n');
				cin.clear();


		    	return 0;
        }
		
		
	int purchase(string item, int max, int min){
      int quantity;
      do{
        printf(P_STRING, item.c_str());
	cin >> quantity;
	if(!(quantity <= max & quantity >= min)){
		if(min != 1){
			if (initp == true){
				printf("\n\tInvalid Amount\n");
			}else{
				printf("\n\tYou dont't have that much--keep your spending down\n\tYou Miss your chance to spend of that item!");
				return 0;
			}
		}else{
			printf("\n\tIMPOSSIBLE");
		}
	}
      }
      while(!(quantity <= max & quantity >= min));
      return quantity;
    }
	
	int setDate(){ //1230
		if (miles >= 2040){
			finalTurn();
		}
		tDate++;
		if(tDate == 20){
			dying(5170);
		}
		printf("\n\t%s 1847\n", dates[tDate-1]);
		return 0;
	}
	
	
	int beginTurn(){ //1750
		if(!(food >= 0)){ //1750
			food = 0;
		}
		if(!(ammo >= 0)){ //1770
			ammo = 0;
		}
		if(!(cloths >= 0)){ //1790
			cloths = 0;
		}
		if(!(misc >= 0)){ //1810
			misc = 0;
		}
		if(!(food >= 13)){ //1830
			printf("\n\tYou's better do some hunting or muy food soon!!!!");
		}
		premiles = miles;
		if( (ill == 1) || (inj == 1)){ //1920/1930
			money-=20;
			if(money < 0){
				dying(5080);
			}
			ill = 0;
			inj = ill;
		}
		if (spass != 1){ //1990
			printf("\n\tTotal mileage: %f", miles);
		}else{
			printf("\n\tTotal mileage: 950");
			spass = 0;
		}
		printf("\n\tFood: %i\n\tBullets: %i\n\tClothing: %i\n\tMisc. Supplies: %i\n\tCash: %i", food, ammo, cloths, misc, money);
		return 0; //2060
	}
	
	int turnOptions(){ //2060 - 2270
		if (fortOpt){ //2060
			fortOpt = not fortOpt;
			do{
				printf("\n\tDo you want to (1) Stop at the next fort, (2) Hunt, \n or (3) Continue\n");
				cin >> act;
				if ( (act < 1) || (act > 3)){
					printf("\n\tinvalid input");
				}else if((act == 2) & ( ammo > 39)){
					printf("\n\tThough you need more bullets to go hunting");
				}
			}while( (act < 1) || (act > 3) || ((act == 2) & ( ammo > 39)));
		}else{//2170
			do{
				printf("\n\tDo you want to (1) Hunt, \n or (2) Continue\n");
				cin >> act;
				if ( (act < 1) || (act > 2)){
					printf("\n\tinvalid input");
				}else if((act == 1) & ( ammo > 39)){
					printf("\n\tThough you need more bullets to go hunting");
				}
			}while( (act < 1) || (act > 2) || ((act == 1) & ( ammo > 39)));
			act = act + 1;
			fortOpt = not fortOpt;
		}
	}
	
	
	int fortStop(){ //2280 - 2520
<<<<<<< HEAD
	 	
=======
		fortMoney = purchase("food", money, 0);
		money = money - fortMoney;
		food = food + (2*fortMoney)/3;
		fortMoney = purchase("amunition", money, 0);
		money = money - fortMoney;
		ammo = ammo + 50 * (2*fortMoney)/3;
		fortMoney = purchase("Clothing", money, 0);
		money = money - fortMoney;
		cloths = cloths + (2*fortMoney)/3;
		fortMoney = purchase("Miscellaneous Supplies", money, 0);
		money = money - fortMoney;
		misc = misc + (2*fortMoney)/3;
		miles = miles - 45;
		return 0;
>>>>>>> refs/remotes/origin/main
	}
	
	int hunting(){ //2530 - 2730
		miles =  miles - 45;
		// shooting func
		if (bangIT <= 1){
			
		}else if( (100*rand() % 101) < (13*bangIT)){
			
		}else {
		
		}
		if( food >= 13){
			return 0;
		}
		dying(5060);
	}
	
	int eating(){ //2740 - 2870
		do{
			printf("\n\tDo you want to eat (1) poorly (2) moderately\nor (3) well\n");
			cin >> eat;
			if ((eat > 3) || (eat < 1)){
				printf("\tInvalid input!\n");
			} else if((food - 8 - 5 * eat) < 0){
				printf("\tyou can't eat that well\n");
			}
		}while((eat > 3) || (eat < 1) || ((food - 8 - 5 * eat) < 0));
		food = food - 8 - 5 * eat;
		miles = (double)miles+200+((double)oxen-220)/5+ 10 * ((double)rand()/RAND_MAX);
		blizz = 0;
		cold = 0;
	}
	
	int ridersAttack(){ // 2880 - 3530
		if ((double) rand() / RAND_MAX * 10 <= ((pow((miles/100-4),2) +72)/(pow((miles/100-4),2) +12)-1)){
			printf("\n\tRisers ahead.\tThey ");
			riderHost=0;
			if (((double) rand()/ RAND_MAX)<= .8){
				printf("don't ");
				riderHost=1;
			}
			printf("look hostile.\n\t Tactics");
			do{
				printf("(1) Run (2) attack (3) continue (4) circle wagons: ");
				if(((double) rand()/ RAND_MAX)<= .2){
					riderHost = 1- riderHost;
				}
				cin >> attackOpt;
				if((attackOpt < 1) || (attackOpt > 4)){
					printf("\n\t invalid input\n\t");
				}
			}while((attackOpt < 1) || (attackOpt > 4));
			
			if(riderHost != 1){
				if( attackOpt == 1){
					miles+=20;
					misc = misc - 15;
					ammo = ammo - 120;
					oxen = oxen - 20;
				}else if( attackOpt == 2){
					shooting();
					ammo = ammo-bangIT*40-80;
					if (bangIT <= 1){
						printf("\n\tNice shooting---you drove them off");
					}else if(bangIT > 4){
						printf("\n\tLousy shot---you got knifed");
						inj = 1;
						printf("\n\tYou have to see a doctor");
						
					}else{
						printf("\n\tKinda slow with your colt .45");
					}
				}else if( attackOpt == 3){
					if (((double) rand()/ RAND_MAX)<= .8){
						ammo = ammo - 150;
						misc = misc - 15;
					}
				}else{
					shooting();
					ammo = ammo-bangIT*30-80;
					miles= miles - 25;
					if (bangIT <= 1){
						printf("\n\tNice shooting---you drove them off");
					}else if(bangIT > 4){
						printf("\n\tLousy shot---you got knifed");
						inj = 1;
						printf("\n\tYou have to see a doctor");
						
					}else{
						printf("\n\tKinda slow with your colt .45");
					}
				}
			}else{
				if( attackOpt == 1){
				}else if( attackOpt == 2){
				}else if( attackOpt == 3){
				}else{
					miles = miles - 20;
				}
			}
			if(riderHost != 0){
				printf("\n\tRiders were friendly, but check for possible losses");
			}else{
				printf("\n\tRiders were hostile--Check for losses");
				if (ammo < 0){
					printf("\n\tYou ran out of bullets and got massacred by the riders");
					dying(5170);
				}
			}
		}
	}
	
	int selectEvents(){ // 3540 - 4690
	  eventcnt = 0;
	  rng = rand() % 101; // Generate Num <100
	  eventcnt = eventcnt + 1;
	  if(rng <= 6){ // Basic Line 3660
	    printf("\nWagon breaks down! Lose time and supplies fixing it");
	    miles = miles - 15.0 - 5.0 * ((double)rand() / RAND_MAX); 
	    misc = misc - 8;        
	  }
	  else if(rng <= 11){ // Basic Line 3700
	    printf("\nOx injures leg! Slows you down rest of trip.");
	    miles = miles - 25;
	    oxen = oxen - 20;
	  }
	  else if(rng <= 13){ // Basic Line 3740
	    printf("\nBad luck! Your daughter broke her arm\nYou had to stop and use supplies to make a sling");
	    miles = miles - 5.0 - 4.0 *((double)rand() / RAND_MAX);
	    misc = misc - 2.0 - 3.0 * ((double)rand() / RAND_MAX);
	  }
	  else if(rng <= 15){ // Basic Line 3790
	    printf("\nOx wanders off! Spend time looking for it");
	    miles = miles - 17;
	  }
	  else if(rng <= 17){ // Basic Line 3820
	    printf("\nYour son gets lost! Spend half the day looking for him");
	    miles = miles - 10;
	  }
	  else if(rng <= 22){ // Basic Line 3850
	    printf("\nUnsafe water! Lose time looking for clean spring");
	    miles = miles - 10.0 * ((double)rand() / RAND_MAX) - 2.0;
	  }
	  else if(rng <= 32){ // Basic Line 3880
	    /* do this later nerd */
	  }
	  else if(rng <= 35){ // Basic Line 3960
	    printf("\nBandits Attack!");
	    shooting();
	    ammo = ammo - 20 * bangIT;
	    if( ammo < 0 ){
	      printf("\nYou ran out of bullets! They get lots of cash");
	      money = money / 3;
	    }
	    else if( bangIT <= 1 ){
	      printf("\nQuickest draw outside of Dodge City!!!\n\tYou got 'em!");
	      return;
	    }
	    printf("\nYou got shot in the leg and they took one of your oxen!");
	    inj = 1;
	    printf("\nYou better have a doc look at your wound");
	    misc = misc - 5;
	    oxen = oxen - 20;
	  }
	  else if(rng <= 37){ // Basic Line 4130
	    printf("\nThere was a fire in your wagon! Food and supplies damaged");
	    food = food - 40;
	    ammo = ammo - 400;
	    misc = misc - ((double)rand() / RAND_MAX) * 8.0 - 3.0;
	    miles = miles - 15;
	  }
	  else if(rng <= 42){ // Basic Line 4190
	    printf("\nLose your way in heavy fog! Time is lost.");
	    miles = miles - 10.0 - 5.0 * ((double)rand() / RAND_MAX);
	  }
	  else if(rng <= 44){ // Basic Line 4220
	    printf("\nYou killed a poisonous snake after it bit you!");
	    ammo = ammo - 10;
	    misc = misc - 5;
	    if(misc <= 0){
	      printf("\nYou die of snakebite since you have no medicine");
	      dying(5170);
	    }
	  }
	  else if(rng <= 54){ // Basic Line 4290
	    printf("\nWagon gets swamped fording river! Lose food and clothes");
	    food = food - 30;
	    cloths = cloths - 20;
	    miles = miles - 20.0 - 20.0 * ((double)rand() / RAND_MAX);
	  }
	  else if(rng <= 64){ // Basic Line 4340
	    printf("\nWild animals attack!");
	    shooting();
	    if(ammo =< 39){
	      printf("\nYou were too low on bullets. The wolves overpowered you");
	      inj = 1;
	      dying(5120);
	    }
	    else if(bangIT =< 2){
	      printf("\nNice shootin' pardner! They didn't get much");
	    }
	    else{
	      printf("\nSlow on the draw. They got at your food and clothes");
	      cloths = cloths - bangIT * 4;
	      food = food - bangIT * 8;
	    }
	    ammo = ammo - 20 * bangIT;  
	  }
	  else if(rng <= 69){ // Basic Line 4560
	    printf("\nHail storm! Supplies damaged!");
	    miles = miles - 5.0 - ((double)rand() / RAND_MAX);
	    ammo = ammo - 200;
	    misc = misc - 4.0 - ((double)rand() / RAND_MAX) * 3;
	  }
	  else if(rng <= 95){ // Basic Line 4610
	    if(eat == 1){
	  }
	  while(eventcnt == 16){
	    printf("Helpful Indians Show you where to find more food\n");
	    food = food + 14;
	  }
	  return;
	    
	}
	
	int mountains(){ // 4700 -  5040
		
	}
	
	int dying(int opt){ // 5050 - 5450
		if( opt == 5060){
			printf("You ran out of food and starved to death");
		}else if((opt == 5080) || (opt == 5110)){
			if(opt == 5080){
				money = 0;
				printf("\n\tYou can't afford a doctor");
			}else{
				printf("\n\tYou ran out of medical supplies");
			}
			printf("\n\tYou died of");
			if (inj == 1){
				printf("injuries");
			}else{
				printf("pneumonia");
			}
		}
		printf("\n\tDue to your unfortunate situation, there are a few\n formalities we must go through\n");
		printf("\n\tWould you like a minister?\n");
		cin >> response;
		printf("\n\tWould you like a fancy funeral?\n");
		cin >> response;
		printf("\n\twould you like us to inform your next of kin?\n");
		cin >> response;
		if (response == "YES"){
			printf("\n\tThat will be $4.50 for the telegraph charge.\n");
		}else{
			printf("\n\tBut your aunt sadie in ST. Louis is really worried about you.\n");
		}
		printf("\n\tWe thank you for this information and we are sorry you\n\tdidn't make it back to the great terrirtory of Oregon\n\tbetter luck next time\n");
		printf("\n\n\t\t\t\t\t\t\tSincerly\n\n\t\t\t\t\tThe Oregon City Chamber of Commerce");
		cin.get();
		exit(0);
	}
	
	int finalTurn(){ // 5420 - 6120
		fturn = (2040-premiles) / (miles/premiles);
		food = food + (1 - fturn) * (8 * 5 * eat);
		printf("\n\n\tYou Finally Arrived at Oregon City\n\t After 2040 Long Miles \"Horray !!!!!\" \n\t A real pioneer!\n\n");
		fturn = fturn * 14;
		tDate = tDate * 14 + fturn;
		fturn = fturn + 1;
		fturn = fturn % 7;
		printf("%s", weekdays[fturn]);
		if(tDate <= 124){
			tDate = tDate - 93;
			printf(" July %i 1847", tDate);
		}else if( tDate <= 155){
			tDate = tDate - 124;
			printf(" August %i 1847", tDate);
		}else if( tDate <= 185){
			tDate = tDate - 155;
			printf(" September %i 1847", tDate);
		}else if( tDate <= 216){
			tDate = tDate - 185;
			printf(" October %i 1847", tDate);
		}else if( tDate <= 246){
			tDate = tDate - 216;
			printf(" November %i 1847", tDate);
		}else{
			tDate = tDate - 246;
			printf(" December %i 1847", tDate);
		}
		printf("\n\n\tFood: %i\n\tBullets: %i\n\tClothing: %i\n\tMisc. Supp.: %i\n\tCash: %i", food, ammo, cloths, misc, money);
		printf("\n\n\tPresident James K. Polk sends you his\n\theartiest congratulations\n\tand wishes you a prosperous life ahead\n\tat your new home");
		exit(0);
	}
	
	int shooting(){ // 6130 - 6280
		time_t start, stop;
		shootWord = rand()%4;
		printf("Type: %s", shootWordVal[shootWord].c_str());
		time(&start);
		cin >> response;
		time(&stop);
		bangIT = difftime(stop, start) - (shoot - 1);
		if (!(bangIT > 0)){
			bangIT = 0;
		}
		if ( response == shootWordVal[shootWord]){
			bangIT = 9;
		}
		return 0;
	}
	
	int illness(){ // 6290 - 6460
		if ((100*rand() % 101) < (10+35*(eat-1))){
			printf("Mild illness---Medicine used");
			miles = miles - 5;
			misc = misc - 2;
		}else if ((100*rand() % 101) < (100-(40/4^(eat-1)))){
			printf("Bad illness---Medicine used");
			miles = miles - 5;
			misc = misc - 5;
		}else{
			printf("Serious Illness\nYou must stop for medical attension");
			misc =  misc - 10;
			ill =1;
		}
		if(misc < 0){
			dying(5110);
		}else if(blizz == 1){
			if( miles <= 950){
				spass = 1;
			}
			return 0;
		}
		return 0; // return to mountains
	}
