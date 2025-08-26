#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;

void enter(){
	int choice;
	cout<<"how many students you want to registered "<<endl;
	cin>>choice;
		if (total==0)
	{
	total=total +choice;

	
	
	for(int i=0; i<choice; i++){
		cout<<"Enter data of student "<<i+1<<endl;
		cout<<"Enter name"<<endl;
		cin>>arr1[i];
		cout<<"Enter roll number "<<endl;
		cin>>arr2[i];
		cout<<"Enter course"<<endl;
		cin>>arr3[i];
		cout<<"Enter class "<<endl;
		cin>>arr4[i];
		cout<<"Enter contact"<<endl;
		cin>>arr5[i];
	}
 }
 else
 {
 	for(int i=total; i<total+choice; i++){
		cout<<"Enter data of student "<<i+1<<endl;
		cout<<"Enter name"<<endl;
		cin>>arr1[i];
		cout<<"Enter roll number "<<endl;
		cin>>arr2[i];
		cout<<"Enter course"<<endl;
		cin>>arr3[i];
		cout<<"Enter class "<<endl;
		cin>>arr4[i];
		cout<<"Enter contact"<<endl;
		cin>>arr5[i];
 }
 total=total+choice;
}}


void show(){
	
	for(int i=0; i<total; i++){
		cout<<"Data of student : "<<i+1<<endl;
		cout<<"Name : "<<arr1[i]<<endl;
		cout<<"Roll number : "<<arr2[i]<<endl;
		cout<<"Course : "<<arr3[i]<<endl;
		cout<<"Class : "<<arr4[i]<<endl;
		cout<<"Contact "<<arr5[i]<<endl;
	}
	
}

void search(){
	string rollno;
	cout<<"Enter roll number of student which you want to search  "<<endl;
	cin>>rollno;
  for(int i=0; i<total; i++){
  
	if(rollno==arr2[i]){
		
			cout<<"Data of student : "<<i+1<<endl;
		cout<<"Name : "<<arr1[i]<<endl;
		cout<<"Roll number : "<<arr2[i]<<endl;
		cout<<"Course : "<<arr3[i]<<endl;
		cout<<"Class : "<<arr4[i]<<endl;
		cout<<"Contact "<<arr5[i]<<endl;
	}
}
}

void update(){
	string rollno;
	cout<<"Enter roll number of student which you want to update  "<<endl;
	cin>>rollno;
  for(int i=0; i<total; i++){
  
	if(rollno==arr2[i]){
		
		cout<<"Previous data"<<endl;
			cout<<"Data of student : "<<i+1<<endl;
		cout<<"Name : "<<arr1[i]<<endl;
		cout<<"Roll number : "<<arr2[i]<<endl;
		cout<<"Course : "<<arr3[i]<<endl;
		cout<<"Class : "<<arr4[i]<<endl;
		cout<<"Contact "<<arr5[i]<<endl;
	    
	    cout<<"Enter new data"<<endl;
	    
	    cout<<"Enter name"<<endl;
		cin>>arr1[i];
		cout<<"Enter roll number "<<endl;
		cin>>arr2[i];
		cout<<"Enter course"<<endl;
		cin>>arr3[i];
		cout<<"Enter class "<<endl;
		cin>>arr4[i];
		cout<<"Enter contact"<<endl;
		cin>>arr5[i];
}
}
}

void deleterecord(){
	
	int a;
	cout<<"press 1 to delete full record"<<endl;
	cout<<"press 2 to delete specific record"<<endl;
	cin>>a;
	if(a==1){
		total=0;
		cout<<"All record is deleted "<<endl;
	}
	else{
			string rollno;
	cout<<"Enter roll number of student which you want to delete record   "<<endl;
	cin>>rollno;
	for(int i=0;i<total;i++){
		
		if(rollno==arr2[i]){
			for(int j=i;j<total; j++){
				arr1[j]=arr1[j+1];
				arr2[j]=arr2[j+1];
				arr3[j]=arr3[j+1];
				arr4[j]=arr4[j+1];
				arr5[j]=arr5[j+1];
			}
			total --;
			cout<<"Your required record id deleted"<<endl;
		}
	}
	}
}


int main()
{     
    int val;
    while(true)
    {
	    cout<<"press 1 to enter data"<<endl;
		cout<<"press 2 to show data"<<endl;
		cout<<"press 3 to search data"<<endl;
		cout<<"press 4 to update data"<<endl;
		cout<<"press 5 to delete data"<<endl;
		cout<<"press 6 to exit"<<endl;
		cin>>val;
		
		switch(val)
	{
			
		case 1: 
		  enter();
		  break;
		  
		  case 2: 
		  show();
		  break;
		  
		  case 3: 
		  search();
		  break;
		  
		  case 4: 
		  update();
		  break;
		  
		  case 5: 
		  deleterecord();
		  break;
		  
		  case 6: 
		  exit(0);
		  break;
		  
		  default : 
		   cout<<"Invalid Input"<<endl;
		    break;
    }
}
}
