 #include<stdio.h>
 int bs,cr,bk,cl,amount=0,count=0;	//bs=bus cr=car	bk=bike	cl=cycle
 int Menu();
 void Bus();
 void Car();
 void Bike();
 void Cycle();
 void ShowDetail();
 void Delete();
 void Undo();
 int main(){
 	while(1){
 	switch(Menu()){			//Switch case 
 		case 1:
 			Bus();			//Void Bus();
 			break;
 		case 2:
 			Car();			//void Car()
 			break;
 		case 3:
 			Bike();			//void Bike();
 			break;
 		case 4:
 			Cycle();		//void Cycle();
 			break;
 		case 5:
 			ShowDetail();	//void ShowDetail();
 			break;
 		case 6:
 			Delete();		//void Delete();
 			break;
 		case 7:
 			Undo();			//void Undo();
 			break;
 		case 8:				
 			return 0;		//exits
 		default : 			//while remaining characeter are passed
 			printf("**Invalid Number**\n");	
	 }
	}
}
 int Menu(){	//Menu details
 	int nm;
 	printf("\n=====================");
 	printf("\n*The Parking System*");
 	printf("\nBus		: '1'");
 	printf("\nCar		: '2'");
 	printf("\nBike		: '3'");
 	printf("\nCycle		: '4'");
 	printf("\nShow Status	: '5'");
 	printf("\nDelete data	: '6'");
 	printf("\nUndo data	: '7'");
 	printf("\nExit 		: '8'");
 	printf("\n=====================");
 	printf("\nEnter Number:");
 	scanf("%d",&nm);
 	return(nm);
 }
 void Delete(){		//action on deleting the data
 	bs=0;
 	cr=0;
 	bk=0;
 	cl=0;
 	amount=0;
 	count=0;
 	printf("**Data Deleted**\n");
 	//all the data is set to 0 (reseting the data)
 }
 void ShowDetail(){		//showing details
 	printf("**************************\n");
 	printf("  ***Showing_*_Details**");
 	printf("\nnumber of bus		=%d ",bs);
 	printf("\nnumber of Car		=%d",cr);
 	printf("\nnumber of Bike		=%d",bk);
 	printf("\nnumber of Cycle		=%d",cl);
 	printf("\nTotal number of vehicle	=%d",count);
 	printf("\nTotal amount		=%d", amount);
 	printf("\n\t**Thank You**");
 	printf("\n**************************\n");
 	
 }
 void Bus(){		//parking detail of bus
 	bs++;			//adding the number of bus
 	amount+=75;	//adding ammount
 	count++;		//adding the count of vehicle
 	printf("**Entry Successful**\n");
 }
 void Car(){		//parking detail of car
 	cr++;
 	amount+=50;
 	count++;
 	printf("**Entry Successful**\n");
 }
 void Bike(){		//parking detail of bike
 	bk++;
 	amount+=25;
 	count++;
 	printf("**Entry Successful**\n");
 }
 void Cycle(){	//parking detail of cycle
 	cl++;
 	amount+=10;
 	count++;
 	printf("**Entry Successful**\n");
 }
 void Undo(){		//Removing specific data
 	int un;
 	printf("  **Undo_*_Mode**");
 	printf("\nEnter Data To Undo");
 	printf("\nBus	: '1'");
 	printf("\nCar	: '2'");
 	printf("\nBike	: '3'");
 	printf("\nCycle	: '4'");
 	printf("\n*********************");
 	printf("\nEnter Number:");
 	scanf("%d",&un);
 	if (un==1){		
 		if(bs>0){		//Making the data positive 
 			bs--;		//decreasing the number of bus
 			amount-=75;		//decreasing the amount
 			count--;
 			printf("**Undo Successful**\n");
 		}
 		else	//error when data tends to be negative
 			printf("**Error Doing Undo**\n");
 	}
 	else if (un==2){
 		if(cr>0){
 			cr--;
 			amount-=50;
 			count--;
			printf("**Undo Successful**\n");
		}
 		else
 			printf("**Error Doing Undo**\n");
 	}
 	else if (un==3){
 		if(bk>0){
 			bk--;
 			amount-=25;
 			count--;	
 			printf("**Undo Successful**\n");
 		}
 		else
 			printf("**Error Doing Undo**\n");
 	}
 	else if (un==4){
 		if(cl>0){
 			cl--;
 			amount-=10;
 			count--;	
 			printf("**Undo Successful**\n");	
 		}
 		else
 			printf("**Error Doing Undo**\n");
 	}
 	else{
 		printf("**Error Doing Undo**\n");
 	}

 }