#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include<cstring>
#include<unistd.h>
using namespace std;
/*
class Login
{
int choice;
public:
void login()
{
cout<<"\t\t\tMENU \n Do you want to login as Teacher(press 1) or Student(press 2) : ";
 cin>>choice;
switch(choice){
 	 case 1:
 	 {
 	 Teacher t;
 	 break;
 	 }
	 case 2:
	 {	
	 	Student s;
	 	s.FindStudent();
		break;
	 }
 }
 cin.ignore();
 cin.get();

}
};
*/
class Quiz //creating class
{
public:
//declaring
int num_topics1,num_topics2,num_topics3,num_topics4,num_topics5,num_topics6,num_topics7,num_topics8,num_topics9,num_topics10,num_topics11;
//declaring
int num_questions1,num_questions2,num_questions3,num_questions4,num_questions5,num_questions6,num_questions7,num_questions8,num_questions9,num_questions10,num_questions11;

void attemptquiz(string course)  //function
{
cout<<"------------------------------------------------------------\n";
cout<<"\nKIndly enter question number and option (a,b,c,d)\n";

if (course=="Programming Fundamentals")  //checking if
{
cout<<" ";
ofstream f_write("PFAttempt.csv");  //using variable
				for(int i=0;i<num_topics1;i++)		//loop
				{
							string questionnum;
							string option;  //using variable
							
							for (int j=0;j<num_questions1;j++)//(getline(word, cell, ',')) //storing word in a string variable cell
									//loop
							{	
							cin>>questionnum; //using variable
							cin>>option;										
							if(f_write.is_open())    //checking if
							{
						
							f_write<<questionnum<<","<<option<<endl; //using variable
							f_write<<"\n\n";
							}
							
							}
				 }
				 f_write.close(); //using variable
 //using variable
}
else if (course=="Introduction To Computing")      //checking if 
{
cout<<" ";
ofstream f_write("ITCAttempt.csv"); //using variable
				for(int i=0;i<num_topics3;i++)  //loop
				{
							string questionnum; //using variable
							string option;
							
							for (int j=0;j<num_questions3;j++)//(getline(word, cell, ',')) //storing word in a string variable cell
							//loop
							{	
							cin>>questionnum; //using variable
							cin>>option;										
							if(f_write.is_open())     //checking if
							{
						
							f_write<<questionnum<<","<<option<<endl; //using variable
							f_write<<"\n\n";
							}
							
							}
				 }
				 f_write.close(); //using variable

}
else if (course=="Data Structures")    //checking if
{
cout<<" ";
ofstream f_write("DSAttempt.csv"); //using variable
				for(int i=0;i<num_topics4;i++) //using variable
				{
							string questionnum;
							string option; //using variable
							
							for (int j=0;j<num_questions4;j++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{	
							cin>>questionnum; //using variable
							cin>>option;										
							if(f_write.is_open())     //checking if
							{ //using variable
						
							f_write<<questionnum<<","<<option<<endl; //using variable
						 //using variable
							f_write<<"\n\n";
							}
							
							}
				 }
				 f_write.close();

}
else if (course=="Analysis of Algorithms")    //checking if
{ //using variable
cout<<" ";
ofstream f_write("AOAAttempt.csv");
				for(int i=0;i<num_topics5;i++)    //checking if
				{ //using variable
							string questionnum; //using variable
							string option; //using variable
							
							for (int j=0;j<num_questions5;j++)//(getline(word, cell, ',')) //storing word in a string variable cell    //checking if
							{	
							cin>>questionnum; //using variable
							cin>>option;		 //using variable								
							if(f_write.is_open())     //checking if
							{
						 //using variable
							f_write<<questionnum<<","<<option<<endl; //using variable
							f_write<<"\n\n"; //using variable
							}
							
							}
				 }
				 f_write.close(); 			//using variable

}
else if (course=="Software Requirements Engineering")    //checking if
{
cout<<" ";
ofstream f_write("SREAttempt.csv");			//using variable
				for(int i=0;i<num_topics6;i++)    //checking if
				{
							string questionnum;    //checking if
							string option;			//using variable
							
							for (int j=0;j<num_questions6;j++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{	
							cin>>questionnum;    //checking if
							cin>>option;				//using variable									
							if(f_write.is_open()) 			//using variable
							{
						
							f_write<<questionnum<<","<<option<<endl;			//using variable
							f_write<<"\n\n";			//using variable
							}
							
							}
				 }
				 f_write.close();			//using variable

}
else if (course=="Research Methodology")    //checking if
{
cout<<" ";
ofstream f_write("RMAttempt.csv");    //checking if
				for(int i=0;i<num_topics7;i++)    //checking if
				{
							string questionnum;			//using variable
							string option;			//using variable
							
							for (int j=0;j<num_questions7;j++)//(getline(word, cell, ',')) //storing word in a string variable cell			//using variable
							{	
							cin>>questionnum;    //checking if
							cin>>option;										
							if(f_write.is_open()) 			//using variable
							{
						
							f_write<<questionnum<<","<<option<<endl;			//using variable
							f_write<<"\n\n";
							}			//using variable
							
							}
				 }
				 f_write.close();    //checking if

}
else if (course=="Big Data Analytics")    //checking if
{
cout<<" ";
ofstream f_write("BDAAttempt.csv");			//using variable
				for(int i=0;i<num_topics8;i++)			//using variable
				{    //checking if
							string questionnum;			//using variable
							string option;
							    //checking if
							for (int j=0;j<num_questions8;j++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{	    //checking if
							cin>>questionnum;			//using variable
							cin>>option;					//using variable								
							if(f_write.is_open())     //checking if
							{
									//using variable
							f_write<<questionnum<<","<<option<<endl;
							f_write<<"\n\n";
							}			//using variable
							
							}
				 }
				 f_write.close();    //checking if

}
else if (course=="Artificial Intelligence")    //checking if
{
cout<<" ";
ofstream f_write("AIttempt.csv");			//using variable
				for(int i=0;i<num_topics9;i++)    //checking if
				{
							string questionnum;			//using variable
							string option;			//using variable
							
							for (int j=0;j<num_questions9;j++)//(getline(word, cell, ',')) //storing word in a string variable cell			//using variable
							{	
							cin>>questionnum;			//using variable
							cin>>option;				//using variable									
							if(f_write.is_open())     //checking if
							{
						
							f_write<<questionnum<<","<<option<<endl;			//using variable
							f_write<<"\n\n";			//using variable
							}
							
							}
				 }
				 f_write.close();			//using variable

}
else if (course=="Deep Learning")    //checking if
{
cout<<" ";
ofstream f_write("DLAttempt.csv");			//using variable
				for(int i=0;i<num_topics10;i++)			//using variable
				{
							string questionnum;			//using variable
							string option;			//using variable
							
							for (int j=0;j<num_questions10;j++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{					//using variable		//using variable
							cin>>questionnum;			//using variable
							cin>>option;						//using variable							
							if(f_write.is_open())     //checking if
							{
						
							f_write<<questionnum<<","<<option<<endl;			//using variable
							f_write<<"\n\n";			//using variable
							}
							
							}
				 }
				 f_write.close();			//using variable
    //checking if
}
else if (course=="Digital Image Processing")    //checking if
{
cout<<" ";
ofstream f_write("DIPAttempt.csv");			//using variable
				for(int i=0;i<num_topics11;i++)			//using variable
				{
							string questionnum;			//using variable
							string option;			//using variable
							
							for (int j=0;j<num_questions11;j++)//(getline(word, cell, ',')) //storing word in a string variable cell			//using variable
							{	
							cin>>questionnum;			//using variable
							cin>>option;				//using variable									
							if(f_write.is_open())     //checking if
							{
						
							f_write<<questionnum<<","<<option<<endl;			//using variable
							f_write<<"\n\n";			//using variable
							}
							
							}
				 }
				 f_write.close();			//using variable

}
else if (course=="Object Oriented Programming")    //checking if
{
cout<<" ";
ofstream f_write("OOPAttempt.csv");			//using variable
				for(int i=0;i<num_topics2;i++)			//using variable
				{
							string questionnum;			//using variable
							string option;			//using variable
							
							for (int j=0;j<num_questions2;j++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{			
							cin>>questionnum;			//using variable
							cin>>option;				//using variable									
							if(f_write.is_open())     //checking if
							{
						
							f_write<<questionnum<<","<<option<<endl;			//using variable
							f_write<<"\n\n";
							}
							
							}
				 }
				 f_write.close();			//using variable

}
				

}

void quiz(string course)
{
	
if (course=="Programming Fundamentals")    //checking if
	{
	cout<<"\nEnter number of topics you want to make quiz from (1 to 4)";			//using variable
			cin>>num_topics1;
			cout<<"\nEnter number of MCQs you want to make quiz from (1 to 5) from each topic \n";
			cin>>num_questions1;			//using variable
			cout<<"\nEnter option number of Topics you want to make a quiz on: \n";
			cout<<"1.Basic Concepts of C++\n2.Control Structures in C++\n3.Functions in C++\n4.Arrays in C++\n";
			string array[num_topics1];			//using variable
				for(int i=0;i<num_topics1;i++)			//using variable
				{
				cin>>array[i];			//using variable
				}
				ofstream f_write("PFQuiz.csv");			//using variable
				for(int i=0;i<num_topics1;i++)			//using variable
				{
				ifstream read;    //checking if
				read.open("PFQuestions.csv");			//using variable
				if (!read.is_open()) 
						{
						cout << "Failed to open file!" << endl;  			//using variable
						}
					    string line;			//using variable
					    string Question;			//using variable
							string option1num;			//using variable
							string option1;			//using variable
							string option2num;			//using variable
							string option2;			//using variable
							string option3num;			//using variable
							string option3;			//using variable
							string option4num;			//using variable
							string option4;			//using variable
				while(read.eof()==0)			//using variable
				{    //checking if
				getline(read, line);			//using variable
						stringstream word(line);		//used to break words
							string cell;			//using variable
						while (getline(word, cell, ',')) //storing word in a string variable cell
						{
							if(array[i]==cell)    //checking if
							{
							cout<<"\nTopic is valid! \n";			//using variable
							//check(course);			//using variable
							for (int i=0;i<num_questions1;i++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{			//using variable
							getline(read,Question,'\n');			//using variable
							getline(read,option1num,',');			//using variable
							getline(read,option1,'\n');			//using variable
							getline(read,option2num,',');			//using variable
							getline(read,option2,'\n');			//using variable
							getline(read,option3num,',');			//using variable
							getline(read,option3,'\n');			//using variable
							getline(read,option4num,',');			//using variable
							getline(read,option4,'\n');			//using variable
							
				
							if(f_write.is_open())     //checking if
							{
							  f_write<<Question<<endl;			//using variable
							f_write<<option1num<<","<<option1<<endl;			//using variable
							f_write<<option2num<<","<<option2<<endl;			//using variable
							f_write<<option3num<<","<<option3<<endl;			//using variable
							f_write<<option4num<<","<<option4<<endl;			//using variable
							f_write<<"\n\n";
							}
							
							}
							}
					
				}
		}
		read.close();			//using variable
		
				 }
				 f_write.close();			//using variable
	}

else if (course=="Introduction To Computing")    //checking if
	{
	cout<<"\nEnter number of topics you want to make quiz from (1 to 4)";
			cin>>num_topics3;			//using variable
			cout<<"\nEnter number of MCQs you want to make quiz from (1 to 5) from each topic \n";
			cin>>num_questions3;			//using variable
			cout<<"\nEnter option number of Topics you want to make a quiz on: \n";
			cout<<"1.Computer Basics\n2.Computer Networks\n3.Programming Concepts\n4.Computer Hardware\n";
			string array[num_topics3];			//using variable
				for(int i=0;i<num_topics3;i++)			//using variable
				{
				cin>>array[i];    //checking if
				}
				ofstream f_write("ITCQuiz.csv");			//using variable
				for(int i=0;i<num_topics3;i++)			//using variable
				{			//using variable
				ifstream read;			//using variable
				read.open("ITCQuestions.csv");			//using variable
				if (!read.is_open()) 			//using variable
						{
						cout << "Failed to open file!" << endl;  			//using variable
						}
					    string line;			//using variable
					    string Question;			//using variable
							string option1num;			//using variable
							string option1;			//using variable
							string option2num;    //checking ifv
							string option2;
							string option3num;
							string option3;			//using variable
							string option4num;			//using variable
							string option4;
				while(read.eof()==0)			//using variable
				{
				getline(read, line);			//using variable
						stringstream word(line);		//used to break words
							string cell;			//using variable
						while (getline(word, cell, ',')) //storing word in a string variable cell
						{
							if(array[i]==cell)			//using variable
							{
							cout<<"\nTopic is valid! \n";
							//check(course);
							for (int i=0;i<num_questions3;i++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{    //checking if
							getline(read,Question,'\n');			//using variable
							getline(read,option1num,',');			//using variable
							getline(read,option1,'\n');			//using variable
							getline(read,option2num,',');			//using variable
							getline(read,option2,'\n');			//using variable
							getline(read,option3num,',');			//using variable
							getline(read,option3,'\n');			//using variable
							getline(read,option4num,',');			//using variable;
							getline(read,option4,'\n');			//using variable
							
				
							if(f_write.is_open())     //checking if
							{
							  f_write<<Question<<endl;			//using variable
							f_write<<option1num<<","<<option1<<endl;			//using variable
							f_write<<option2num<<","<<option2<<endl;			//using variable
							f_write<<option3num<<","<<option3<<endl;			//using variable
							f_write<<option4num<<","<<option4<<endl;			//using variable
							f_write<<"\n\n";			//using variable
							}
							
							}    //checking if
							}
					
				}
		}
		read.close();			//using variable
		
				 }
				 f_write.close();			//using variable
	}
    //checking if
else if (course=="Data Structures")    //checking if
	{
	cout<<"\nEnter number of topics you want to make quiz from (1 to 4)";
			cin>>num_topics4;			//using variable
			cout<<"\nEnter number of MCQs you want to make quiz from (1 to 5) from each topic \n";
			cin>>num_questions4;			//using variable
			cout<<"\nEnter option number of Topics you want to make a quiz on: \n";
			cout<<"1.Arrays\n2.Linked Lists\n3.Stacks and Queues\n4.Trees\n";
			string array[num_topics4];			//using variable
				for(int i=0;i<num_topics4;i++)//loop
				{
				cin>>array[i];			//using variable
				}
				ofstream f_write("DSQuiz.csv");			//using variable
				for(int i=0;i<num_topics4;i++)//loop
				{
				ifstream read;			//using variable
				read.open("DSQuestions.csv");			//using variable
				if (!read.is_open())     //checking if
						{
						cout << "Failed to open file!" << endl; 			//using variable 
						}
					    string line;			//using variable
					    string Question;			//using variable
							string option1num;			//using variable
							string option1;			//using variable
							string option2num;			//using variable
							string option2;			//using variable
							string option3num;			//using variable
							string option3;			//using variable
							string option4num;			//using variable
							string option4;			//using variable
				while(read.eof()==0)    //checking if
				{
				getline(read, line);			//using variable
						stringstream word(line);		//used to break words
							string cell;			//using variable
						while (getline(word, cell, ',')) //storing word in a string variable cell
						{
							if(array[i]==cell)    //checking if
							{
							cout<<"\nTopic is valid! \n";
							//check(course);
							for (int i=0;i<num_questions4;i++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{			//using variable
							getline(read,Question,'\n');			//using variable
							getline(read,option1num,',');			//using variable
							getline(read,option1,'\n');			//using variable
							getline(read,option2num,',');			//using variable
							getline(read,option2,'\n');			//using variable
							getline(read,option3num,',');			//using variable
							getline(read,option3,'\n');			//using variable
							getline(read,option4num,',');			//using variable
							getline(read,option4,'\n');			//using variable
							
				
							if(f_write.is_open())     //checking if
							{
							  f_write<<Question<<endl;			//using variable
							f_write<<option1num<<","<<option1<<endl;			//using variable
							f_write<<option2num<<","<<option2<<endl;			//using variable
							f_write<<option3num<<","<<option3<<endl;			//using variable
							f_write<<option4num<<","<<option4<<endl;			//using variable
							f_write<<"\n\n";
							}
							
							}
							}
					
				}
		}
		read.close();			//using variable
		
				 }
				 f_write.close();    //checking if

	}
else if (course=="Analysis of Algorithms")			//using variable
	{    //checking if
	cout<<"\nEnter number of topics you want to make quiz from (1 to 4)";
			cin>>num_topics5;			//using variable
			cout<<"\nEnter number of MCQs you want to make quiz from (1 to 5) from each topic \n";
			cin>>num_questions5;			//using variable
			cout<<"\nEnter option number of Topics you want to make a quiz on: \n";
			cout<<"1.Asymptotic Notation\n2.Sorting Algorithms\n3.Recurrence Relations\n4.Recurrence Relations\n";
			string array[num_topics5];			//using variable
				for(int i=0;i<num_topics5;i++)			//using variable
				{    //checking if
				cin>>array[i];
				}			//using variable
				ofstream f_write("AOAQuiz.csv");			//using variable
				for(int i=0;i<num_topics5;i++)			//using variable
				{    //checking if
				ifstream read;			//using variable
				read.open("AOAQuestions.csv");			//using variable
				if (!read.is_open()) 			//using variable
						{    //checking if
						cout << "Failed to open file!" << endl;  			//using variable
						}
					    string line;			//using variable
					    string Question;			//using variable
							string option1num;			//using variable
							string option1;			//using variable
							string option2num;			//using variable
							string option2;			//using variable
							string option3num;			//using variable
							string option3;			//using variable
							string option4num;			//using variable
							string option4;			//using variable
				while(read.eof()==0)
				{			//using variable
				getline(read, line);    //checking if
						stringstream word(line);		//used to break words
							string cell;			//using variable
						while (getline(word, cell, ',')) //storing word in a string variable cell
						{
							if(array[i]==cell)    //checking if
							{
							cout<<"\nTopic is valid! \n";
							//check(course);
							for (int i=0;i<num_questions5;i++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{			//using variable
							getline(read,Question,'\n');			//using variable
							getline(read,option1num,',');			//using variable
							getline(read,option1,'\n');			//using variable
							getline(read,option2num,',');			//using variable
							getline(read,option2,'\n');    //checking if
							getline(read,option3num,',');			//using variable
							getline(read,option3,'\n');			//using variable
							getline(read,option4num,',');			//using variable
							getline(read,option4,'\n');			//using variable
							
				
							if(f_write.is_open())     //checking if
							{
							  f_write<<Question<<endl;			//using variable
							f_write<<option1num<<","<<option1<<endl;			//using variable
							f_write<<option2num<<","<<option2<<endl;			//using variable
							f_write<<option3num<<","<<option3<<endl;			//using variable
							f_write<<option4num<<","<<option4<<endl;			//using variable
							f_write<<"\n\n";
							}
							
							}
							}
					
				}
		}
		read.close();			//using variable
		
				 }    //checking if			//using variable
				 f_write.close();			//using variable

	}
else if (course=="Software Requirements Engineering")    //checking if
	{
	cout<<"\nEnter number of topics you want to make quiz from (1 to 4)";
			cin>>num_topics6;			//using variable
			cout<<"\nEnter number of MCQs you want to make quiz from (1 to 5) from each topic \n";
			cin>>num_questions6;			//using variable
			cout<<"\nEnter option number of Topics you want to make a quiz on: \n";
			cout<<"1.Software Requirements\n2.Requirements Analysis and Specification\n3.Requirements Management\n4.Requirements Traceability\n";
			string array[num_topics6];			//using variable
				for(int i=0;i<num_topics6;i++)    //checking if
				{
				cin>>array[i];			//using variablev
				}    //checking if
				ofstream f_write("SREQuiz.csv");			//using variable
				for(int i=0;i<num_topics6;i++)			//using variable
				{    //checking if
				ifstream read;
				read.open("SREQuestions.csv");			//using variable
				if (!read.is_open()) 
						{    //checking if			//using variable
						cout << "Failed to open file!" << endl;  
						}
					    string line;			//using variable
					    string Question;			//using variable
							string option1num;			//using variable
							string option1;			//using variable
							string option2num;			//using variable
							string option2;    //checking if
							string option3num;			//using variable
							string option3;			//using variable
							string option4num;			//using variable
							string option4;			//using variable
				while(read.eof()==0)    //checking if
				{
				getline(read, line);			//using variable
						stringstream word(line);		//used to break words
							string cell;			//using variable
						while (getline(word, cell, ',')) //storing word in a string variable cell
						{    //checking if
							if(array[i]==cell)
							{
							cout<<"\nTopic is valid! \n";
							//check(course);
							for (int i=0;i<num_questions6;i++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{
							getline(read,Question,'\n');			//using variable
							getline(read,option1num,',');			//using variable
							getline(read,option1,'\n');			//using variable
							getline(read,option2num,',');			//using variable
							getline(read,option2,'\n');			//using variable
							getline(read,option3num,',');			//using variable
							getline(read,option3,'\n');			//using variable
							getline(read,option4num,',');			//using variable
							getline(read,option4,'\n');			//using variable
							
				    //checking if    //checking if
							if(f_write.is_open())			//using variable 
							{
							  f_write<<Question<<endl;			//using variable
							f_write<<option1num<<","<<option1<<endl;			//using variable
							f_write<<option2num<<","<<option2<<endl;			//using variable
							f_write<<option3num<<","<<option3<<endl;			//using variable
							f_write<<option4num<<","<<option4<<endl;			//using variable
							f_write<<"\n\n";
							}
							
							}
							}
					
				}
		}
		read.close();			//using variable
		
				 }
				 f_write.close();			//using variable
	}    //checking if

else if (course=="Research Methodology")    //checking if
{
	cout<<"\nEnter number of topics you want to make quiz from (1 to 4)";
			cin>>num_topics7;			//using variable
			cout<<"\nEnter number of MCQs you want to make quiz from (1 to 5) from each topic \n";
			cin>>num_questions7;			//using variable
			cout<<"\nEnter option number of Topics you want to make a quiz on: \n";
			cout<<"1.Research Design and Methods\n2.Literature Review\n3.Research Report\n4.Research Ethics\n";
			string array[num_topics7];			//using variable
				for(int i=0;i<num_topics7;i++)
				{
				cin>>array[i];			//using variable
				}
				ofstream f_write("RMQuiz.csv");			//using variable
				for(int i=0;i<num_topics7;i++)			//using variable
				{
				ifstream read;			//using variable
				read.open("RMQuestions.csv");			//using variable
				if (!read.is_open())     //checking if
						{
						cout << "Failed to open file!" << endl;  
						}
					    string line;			//using variable
					    string Question;			//using variable
							string option1num;			//using variable
							string option1;			//using variable
							string option2num;			//using variable
							string option2;			//using variable
							string option3num;			//using variable
							string option3;			//using variable
							string option4num;			//using variable
							string option4;			//using variable
				while(read.eof()==0)			//using variable
				{
				getline(read, line);			//using variable
						stringstream word(line);		//used to break words
							string cell;			//using variable
						while (getline(word, cell, ',')) //storing word in a string variable cell
						{
							if(array[i]==cell)    //checking if
							{
							cout<<"\nTopic is valid! \n";
							//check(course);
							for (int i=0;i<num_questions7;i++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{			//using variable
							getline(read,Question,'\n');			//using variable
							getline(read,option1num,',');			//using variable
							getline(read,option1,'\n');			//using variable
							getline(read,option2num,',');			//using variable
							getline(read,option2,'\n');			//using variable
							getline(read,option3num,',');    //checking if
							getline(read,option3,'\n');			//using variable
							getline(read,option4num,',');			//using variable
							getline(read,option4,'\n');			//using variable
							
				
							if(f_write.is_open())     //checking if
							{
							  f_write<<Question<<endl;			//using variable
							f_write<<option1num<<","<<option1<<endl;			//using variable
							f_write<<option2num<<","<<option2<<endl;			//using variable
							f_write<<option3num<<","<<option3<<endl;			//using variable
							f_write<<option4num<<","<<option4<<endl;			//using variable
							f_write<<"\n\n";
							}
							
							}    //checking if
							}
					
				}
		}
		read.close();			//using variable
		
				 }
				 f_write.close();    //checking if

	}
else if (course=="Big Data Analytics")    //checking if
	{
	cout<<"\nEnter number of topics you want to make quiz from (1 to 4)";
			cin>>num_topics8;			//using variable
			cout<<"\nEnter number of MCQs you want to make quiz from (1 to 5) from each topic \n";
			cin>>num_questions8;			//using variable
			cout<<"\nEnter option number of Topics you want to make a quiz on: \n";
			cout<<"1.Data Collection\n2.Data Storage and Management\n3.Data Analysis\n4.Data Visualization\n";
			string array[num_topics8];			//using variable
				for(int i=0;i<num_topics8;i++)    //checking if
				{
				cin>>array[i];			//using variable
				}
				ofstream f_write("BDAQuiz.csv");			//using variable
				for(int i=0;i<num_topics8;i++)    //checking if
				{
				ifstream read;			//using variable
				read.open("BDAQuestions.csv");			//using variable
				if (!read.is_open())     //checking if
						{
						cout << "Failed to open file!" << endl;  
						}
					    string line;			//using variable
					    string Question;			//using variable
							string option1num;			//using variable
							string option1;			//using variable
							string option2num;			//using variable
							string option2;			//using variable
							string option3num;			//using variable
							string option3;			//using variable
							string option4num;			//using variable
							string option4;			//using variable
				while(read.eof()==0)
				{    //checking if
				getline(read, line);			//using variable
						stringstream word(line);		//used to break words
							string cell;			//using variable
						while (getline(word, cell, ',')) //storing word in a string variable cell
						{    //checking if
							if(array[i]==cell)    //checking if
							{
							cout<<"\nTopic is valid! \n";
							//check(course);
							for (int i=0;i<num_questions8;i++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{    //checking if
							getline(read,Question,'\n');			//using variable
							getline(read,option1num,',');			//using variable
							getline(read,option1,'\n');			//using variable
							getline(read,option2num,',');			//using variable
							getline(read,option2,'\n');			//using variable
							getline(read,option3num,',');			//using variable
							getline(read,option3,'\n');			//using variable
							getline(read,option4num,',');			//using variable
							getline(read,option4,'\n');			//using variable
							
				
							if(f_write.is_open()) 
							{    //checking if
							  f_write<<Question<<endl;			//using variable
							f_write<<option1num<<","<<option1<<endl;			//using variable
							f_write<<option2num<<","<<option2<<endl;			//using variable
							f_write<<option3num<<","<<option3<<endl;			//using variable
							f_write<<option4num<<","<<option4<<endl;			//using variable
							f_write<<"\n\n";
							}
							
							}
							}
					
				}
		}
		read.close();    //checking if
		
				 }
				 f_write.close();    //checking if

	}
else if (course=="Artificial Intelligence")    //checking if
	{
	cout<<"\nEnter number of topics you want to make quiz from (1 to 4)";
			cin>>num_topics9;			//using variable
			cout<<"\nEnter number of MCQs you want to make quiz from (1 to 5) from each topic \n";
			cin>>num_questions9;			//using variable
			cout<<"\nEnter option number of Topics you want to make a quiz on: \n";
			cout<<"1.Introduction to AI\n2.Machine Learning\n3.Natural Language Processing\n4.Data Visualization\n";
			string array[num_topics9];			//using variable
				for(int i=0;i<num_topics9;i++)    //checking if
				{
				cin>>array[i];			//using variable
				}
				ofstream f_write("AIQuiz.csv");			//using variable
				for(int i=0;i<num_topics9;i++)
				{    //checking if
				ifstream read;			//using variable
				read.open("AIQuestions.csv");    //checking if    //checking if
				if (!read.is_open())     //checking if    //checking if
						{
						cout << "Failed to open file!" << endl;  
						}
					    string line;			//using variable
					    string Question;			//using variable
							string option1num;			//using variable
							string option1;			//using variable
							string option2num;			//using variable
							string option2;			//using variable
							string option3num;			//using variable
							string option3;			//using variable
							string option4num;			//using variable
							string option4;			//using variable
				while(read.eof()==0)    //checking if
				{
				getline(read, line);			//using variable
						stringstream word(line);		//used to break words
							string cell;			//using variable
						while (getline(word, cell, ',')) //storing word in a string variable cell
						{    //checking if
							if(array[i]==cell)    //checking if
							{
							cout<<"\nTopic is valid! \n";
							//check(course);
							for (int i=0;i<num_questions9;i++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{    //checking if
							getline(read,Question,'\n');			//using variable
							getline(read,option1num,',');			//using variable
							getline(read,option1,'\n');			//using variable
							getline(read,option2num,',');			//using variable
							getline(read,option2,'\n');			//using variable
							getline(read,option3num,',');			//using variable
							getline(read,option3,'\n');			//using variable
							getline(read,option4num,',');			//using variable
							getline(read,option4,'\n');			//using variable
							
				
							if(f_write.is_open()) 
							{    //checking if
							  f_write<<Question<<endl;			//using variable
							f_write<<option1num<<","<<option1<<endl;			//using variable
							f_write<<option2num<<","<<option2<<endl;			//using variable
							f_write<<option3num<<","<<option3<<endl;			//using variable
							f_write<<option4num<<","<<option4<<endl;			//using variable
							f_write<<"\n\n";
							}
							
							}
							}
					
				}
		}
		read.close();			//using variable
		
				 }
				 f_write.close();    //checking if
	}

else if (course=="Deep Learning")    //checking if
	{
	cout<<"\nEnter number of topics you want to make quiz from (1 to 4)";
			cin>>num_topics10;			//using variable
			cout<<"\nEnter number of MCQs you want to make quiz from (1 to 5) from each topic \n";
			cin>>num_questions10;			//using variable
			cout<<"\nEnter option number of Topics you want to make a quiz on: \n";
			cout<<"1.Neural Networks\n2.Deep Learning Algorithms\n3.Optimization and Regularization\n4.Applications of Deep Learning\n";
			string array[num_topics10];    //checking if    //checking if
				for(int i=0;i<num_topics10;i++)    //checking if
				{
				cin>>array[i];			//using variable
				}    //checking if
				ofstream f_write("DLQuiz.csv");			//using variable
				for(int i=0;i<num_topics10;i++)    //checking if
				{
				ifstream read;			//using variable
				read.open("DLQuestions.csv");			//using variable
				if (!read.is_open()) 			//using variable
						{
						cout << "Failed to open file!" << endl;  
						}
					    string line;			//using variable
					    string Question;    //checking if
							string option1num;			//using variable
							string option1;			//using variable
							string option2num;			//using variable
							string option2;			//using variable
							string option3num;			//using variable
							string option3;			//using variable
							string option4num;			//using variable
							string option4;			//using variable
				while(read.eof()==0)
				{    //checking if
				getline(read, line);			//using variable
						stringstream word(line);		//used to break words
							string cell;			//using variable
						while (getline(word, cell, ',')) //storing word in a string variable cell
						{    //checking if
							if(array[i]==cell)
							{    //checking if
							cout<<"\nTopic is valid! \n";
							//check(course);
							for (int i=0;i<num_questions10;i++)//(getline(word, cell, ',')) //storing word in a string variable cell
							{			//using variable
							getline(read,Question,'\n');			//using variable
							getline(read,option1num,',');			//using variable
							getline(read,option1,'\n');			//using variable
							getline(read,option2num,',');			//using variable
							getline(read,option2,'\n');			//using variable
							getline(read,option3num,',');			//using variable
							getline(read,option3,'\n');			//using variable
							getline(read,option4num,',');			//using variable
							getline(read,option4,'\n');			//using variable
							
				
							if(f_write.is_open()) 
							{    //checking if
							  f_write<<Question<<endl;			//using variable
							f_write<<option1num<<","<<option1<<endl;			//using variable
							f_write<<option2num<<","<<option2<<endl;			//using variable
							f_write<<option3num<<","<<option3<<endl;			//using variable
							f_write<<option4num<<","<<option4<<endl;			//using variable
							f_write<<"\n\n";
							}
							
							}
							}
					
				}
		}
		read.close();			//using variable
		
				 }
				 f_write.close();    //checking if

	}
	else if (course=="Digital Image Processing")    //checking if
	{
	cout<<"\nEnter number of topics you want to make quiz from (1 to 4)";
			cin>>num_topics11;			//using variable
			cout<<"\nEnter number of MCQs you want to make quiz from (1 to 5) from each topic \n";
			cin>>num_questions11;			//using variable
			cout<<"\nEnter option number of Topics you want to make a quiz on: \n";
			cout<<"1.Fundamentals of Digital Image Processing\n2.Image Filtering\n3.Image Compression\n4.Object Recognition\n";
			string array[num_topics11];			//using variable
				for(int i=0;i<num_topics11;i++)			//using variable
				{    //checking if
				cin>>array[i];			//using variable
				}
				ofstream f_write("DIPQuiz.csv");			//using variable
				for(int i=0;i<num_topics11;i++)			//using variable
				{    //checking if    //checking if
				ifstream read;			//using variable
				read.open("DIPQuestions.csv");			//using variable
				if (!read.is_open()) 
						{    //checking if
						cout << "Failed to open file!" << endl;  
						}
					    string line;			//using variable
					    string Question;			//using variable
							string option1num;			//using variable
							string option1;			//using variable
							string option2num;    //checking if
							string option2;			//using variable
							string option3num;			//using variable
							string option3;			//using variable
							string option4num;			//using variable
							string option4;			//using variable
				while(read.eof()==0)			//using variable
				{    //checking if
				getline(read, line);			//using variable
						stringstream word(line);		//used to break words
							string cell;			//using variable
						while (getline(word, cell, ',')) //storing word in a string variable cell
						{    //checking if
							if(array[i]==cell)
							{    //checking if
							cout<<"\nTopic is valid! \n";
							//check(course);
							for (int i=0;i<num_questions11;i++)//(getline(word, cell, ',')) //storing word in a string variable cell    //checking if
							{
							getline(read,Question,'\n');			//using variable
							getline(read,option1num,',');			//using variable
							getline(read,option1,'\n');			//using variable
							getline(read,option2num,',');			//using variable
							getline(read,option2,'\n');			//using variable
							getline(read,option3num,',');			//using variable
							getline(read,option3,'\n');			//using variable
							getline(read,option4num,',');			//using variable
							getline(read,option4,'\n');			//using variable
							
				
							if(f_write.is_open()) 			//using variable
							{    //checking if
							  f_write<<Question<<endl;			//using variable
							f_write<<option1num<<","<<option1<<endl;			//using variable
							f_write<<option2num<<","<<option2<<endl;			//using variable
							f_write<<option3num<<","<<option3<<endl;			//using variable
							f_write<<option4num<<","<<option4<<endl;			//using variable
							f_write<<"\n\n";
							}
							
							}
							}
					
				}
		}
		read.close();			//using variable
		
				 }
				 f_write.close();    //checking if

	}
else if (course=="Object Oriented Programming")			//using variable
		{    //checking if
		cout<<"\nEnter number of topics you want to make quiz from (1 to 4)";
		cin>>num_topics2;			//using variable
		cout<<"\nEnter number of MCQs you want to make quiz from (1 to 5) from each topic \n";
		cin>>num_questions2;			//using variable
		cout<<"\nEnter option number of Topics you want to make a quiz on: \n";
		cout<<"1.Classes and Objects\n2.Inheritance\n3.Polymorphism\n4.Encapsulation\n";
		string array[num_topics2];			//using variable
			for(int i=0;i<num_topics2;i++)
			{    //checking if
			cin>>array[i];			//using variable
			}
			ofstream f_write("OOPQuiz.csv");    //checking if
			for(int i=0;i<num_topics2;i++)			//using variable
			{
			//if(array[i]=="Classes and Objects")
			//{
			ifstream read;			//using variable
			//ofstream f_write("OOPQuiz.csv");//,ios::app);
			read.open("OOPQuestions.csv");    //checking if
			if (!read.is_open()) 			//using variable
					{
					cout << "Failed to open file!" << endl;  
					}
				    string line;			//using variable
				    string Question;			//using variable
						string option1num;			//using variable
						string option1;			//using variable
						string option2num;			//using variable
						string option2;			//using variable
						string option3num;			//using variable
						string option3;			//using variable
						string option4num;    //checking if
						string option4;			//using variable
			while(read.eof()==0)			//using variable
			{
			getline(read, line);    //checking if
					stringstream word(line);		//used to break words
						string cell;			//using variable
						
						//f_write.open("OOPQuiz.csv",ios::out|ios::app);
					while (getline(word, cell, ',')) //storing word in a string variable cell
					{    //checking if
						if(array[i]==cell)
						{    //checking if
						cout<<"\nTopic is valid! \n";
						//check(course);
						for (int i=0;i<num_questions2;i++)//(getline(word, cell, ',')) //storing word in a string variable cell
						{    //checking if
						//while (getline(word, cell, ','))
						
						      
						
						//if(cell=="2efcde9")
						
						//cout<<"\nTopic is valid! \n";
						getline(read,Question,'\n');			//using variable
						getline(read,option1num,',');			//using variable
						getline(read,option1,'\n');			//using variable
						getline(read,option2num,',');			//using variable
						getline(read,option2,'\n');			//using variable
						getline(read,option3num,',');			//using variable
						getline(read,option3,'\n');			//using variable
						getline(read,option4num,',');			//using variable
						getline(read,option4,'\n');			//using variable
						//break;
			
						if(f_write.is_open()) 			//using variable
						{    //checking if
						  f_write<<Question<<endl;			//using variable
						f_write<<option1num<<","<<option1<<endl;			//using variable
						f_write<<option2num<<","<<option2<<endl;			//using variable
						f_write<<option3num<<","<<option3<<endl;			//using variable
						f_write<<option4num<<","<<option4<<endl;			//using variable
						f_write<<"\n\n";
						}
						
						}
						}
				
			}
	}
	read.close();			//using variable
	
			 }
			 f_write.close();    //checking if
        }
}

void displayquiz(string course)    //checking if
{
if (course=="Programming Fundamentals")			//using variable
{
ifstream inFile;    //checking if
	inFile.open("PFQuiz.csv");			//using variable
	if (!inFile.is_open()) 
			{    //checking if
			cout << "Failed to open file! Quiz not made by teacher" << endl;  
						
		        }    //checking if
		    string line;			//using variable
	while(inFile.eof()==0)			//using variable
	{    //checking if    //checking if
	getline(inFile, line);
			stringstream word(line);		//used to break words
				string cell;			//using variable
					
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{    //checking if
				//while (getline(lineStream, cell, ',')) 
				{
					cout<<cell<<" ";
				}
       			// cout<<endl;
				
			}
			
			 cout<<endl;
			 
	}
	inFile.close();			//using variable
	

}

if (course=="Object Oriented Programming")    //checking if
{
ifstream inFile;			//using variable
	inFile.open("OOPQuiz.csv");			//using variable
	
	if (!inFile.is_open())     //checking if
			{
			cout << "Failed to open file! Quiz not made by teacher" << endl;  
						 
		        }
		    string line;			//using variable
		    
	while(inFile.eof()==0)    //checking if
	{
	getline(inFile, line);			//using variable
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{    //checking if
				//while (getline(lineStream, cell, ',')) 
				{
					cout<<cell<<" ";
				}
       			// cout<<endl;
				
			}
			 cout<<endl;
			  
	}
	inFile.close();			//using variable

}
    //checking if
if (course=="Introduction To Computing")    //checking if
{
ifstream inFile;			//using variable
	inFile.open("ITCQuiz.csv");			//using variable
	if (!inFile.is_open())     //checking if
			{
			cout << "Failed to open file! Quiz not made by teacher" << endl;  
						  
		        }
		    string line;			//using variable
	while(inFile.eof()==0)    //checking if
	{
	getline(inFile, line);			//using variable
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{
				//while (getline(lineStream, cell, ',')) 
				{
					cout<<cell<<" ";
				}
       			// cout<<endl;
				
			}
			 cout<<endl;
	}
	inFile.close();    //checking if

}
if (course=="Data Structures")    //checking if
{
ifstream inFile;			//using variable
	inFile.open("DSQuiz.csv");			//using variable
	if (!inFile.is_open())     //checking if
			{
			cout << "Failed to open file! Quiz not made by teacher" << endl;  
						 
		        }
		    string line;			//using variable
	while(inFile.eof()==0)
	{			//using variable
	getline(inFile, line);    //checking if
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{
				//while (getline(lineStream, cell, ',')) 
				{    //checking if
					cout<<cell<<" ";
				}
       			// cout<<endl;
				
			}
			 cout<<endl;
	}
	inFile.close();    //checking if

}
if (course=="Analysis of Algorithms")    //checking if
{
ifstream inFile;			//using variable
	inFile.open("AOAQuiz.csv");			//using variable
	if (!inFile.is_open())     //checking if
			{
			cout << "Failed to open file! Quiz not made by teacher" << endl;  
					
		        }
		    string line;    //checking if
	while(inFile.eof()==0)			//using variable
	{
	getline(inFile, line);			//using variable
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{
				//while (getline(lineStream, cell, ',')) 
				{
					cout<<cell<<" ";    //checking if
				}
       			// cout<<endl;
				
			}
			 cout<<endl;
	}
	inFile.close();
			//using variable
}    //checking if
if (course=="Software Requirements Engineering")			//using variable
{
ifstream inFile;			//using variable
	inFile.open("SREQuiz.csv");			//using variable
	if (!inFile.is_open())     //checking if
			{
			cout << "Failed to open file! Quiz not made by teacher" << endl;  
						 
		        }
		    string line;			//using variable
	while(inFile.eof()==0)
	{    //checking if
	getline(inFile, line);			//using variable
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{
				//while (getline(lineStream, cell, ',')) 
				{
					cout<<cell<<" ";
				}
       			// cout<<endl;
				
			}
			 cout<<endl;
	}
	inFile.close();    //checking if

}
if (course=="Research Methodology")			//using variable
{    //checking if
ifstream inFile;			//using variable
	inFile.open("RMQuiz.csv");			//using variable
	if (!inFile.is_open())     //checking if
			{
			cout << "Failed to open file! Quiz not made by teacher" << endl;  
						
		        }
		    string line;			//using variable
	while(inFile.eof()==0)			//using variable
	{    //checking if
	getline(inFile, line);			//using variable
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{    //checking if
				//while (getline(lineStream, cell, ',')) 
				{
					cout<<cell<<" ";
				}
       			// cout<<endl;
				
			}
			 cout<<endl;
	}
	inFile.close();    //checking if

}
if (course=="Big Data Analytics")			//using variable
{    //checking if
ifstream inFile("BDAQuiz.csv");			//using variable
	//inFile.open("BDAQuiz.csv");
	if (!inFile.is_open())     //checking if
	//if(inFile.eof()) 
			{
			cout << "Failed to open file! Quiz not made by teacher" << endl;  
						 
		        }
		    string line;			//using variable
	while(inFile.eof()==0)    //checking if
	{
	getline(inFile, line);			//using variable
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{    //checking if
				//while (getline(lineStream, cell, ',')) 
				{
					cout<<cell<<" ";
				}
       			// cout<<endl;
				
			}
			 cout<<endl;
	}
	inFile.close();    //checking if

}
if (course=="Artificial Intelligence")			//using variable
{    //checking if
ifstream inFile;			//using variable
	inFile.open("AIQuiz.csv");			//using variable
	if (!inFile.is_open())     //checking if
	//if(inFile.eof())
			{
			cout << "Failed to open file! Quiz not made by teacher" << endl;  
						
		        }
		    string line;			//using variable
	while(inFile.eof()==0)    //checking if
	{
	getline(inFile, line);			//using variable
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{    //checking if
				//while (getline(lineStream, cell, ',')) 
				{
					cout<<cell<<" ";
				}
       			// cout<<endl;
				
			}
			 cout<<endl;
	}
	inFile.close();			//using variable

}
if (course=="Deep Learning")			//using variable
{
ifstream inFile;    //checking if
	inFile.open("DLQuiz.csv");			//using variable
	if (!inFile.is_open())     //checking if
	//if(inFile.eof())
			{
			cout << "Failed to open file! Quiz not made by teacher" << endl;  
						 
		        }
		    string line;			//using variable
	while(inFile.eof()==0)    //checking if
	{
	getline(inFile, line);			//using variable
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{    //checking if
				//while (getline(lineStream, cell, ',')) 
				{
					cout<<cell<<" ";
				}
       			// cout<<endl;
				
			}
			 cout<<endl;
	}
	inFile.close();    //checking if

}
if (course=="Digital Image Processing")    //checking if
{
ifstream inFile;			//using variable
	inFile.open("DIPQuiz.csv");			//using variable
	if (!inFile.is_open())    //checking if 
			{
			cout << "Failed to open file! Quiz not made by teacher" << endl;  
						 
		        }
		    string line;			//using variable
	while(inFile.eof()==0)    //checking if
	{
	getline(inFile, line);			//using variable
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{    //checking if
				//while (getline(lineStream, cell, ',')) 
				{
					cout<<cell<<" ";
				}
       			// cout<<endl;
				
			}
			 cout<<endl;
	}
	inFile.close();    //checking if

}

/*
void displayquiz(string course)
{
if (course=="Programming Fundamentals")
{

}
if (course=="Introduction To Computing")
{

}
if (course=="Data Structures")
{

}
if (course=="Analysis of Algorithms")
{

}
if (course=="Software Requirements Engineering")
{

}
if (course=="Research Methodology")
{

}
if (course=="Big Data Analytics")
{

}
if (course=="Artificial Intelligence")
{

}
if (course=="Deep Learning")
{

}
if (course=="Digital Image Processing")
{

}
if (course=="Object Oriented Programming")
{

}
}*/
/*
void check(string course)
{

if(course=="Programming Fundamentals")
{checking[0]=1;}
else if (course=="Object Oriented Programming")
{checking[1]=1;}
else if (course=="Introduction To Computing")
{checking[2]=1;}
else if(course=="Data Structures")
{checking[3]=1;}
else if(course=="Analysis of Algorithms")
{checking[4]=1;}
else if(course=="Software Requirements Engineering")
{checking[5]=1;}
else if(course=="Research Methodology")
{checking[6]=1;}
else if(course=="Big Data Analytics")
{checking[7]=1;}
else if(course=="Artificial Intelligence")
{checking[8]=1;}
else if(course=="Deep Learning")
{checking[9]=1;}
else if(course=="Digital Image Processing")
{checking[10]=1;}
}
*/
}
};

class Teacher:public Quiz
{
private:
string id;
string teachername;

public:
string course;

void asktomake()
{
	int choice;			//using variable
	cout<<"\nDo you want to make quiz of "<<course<<"? (Press 1 for yes and 0 for no)\n";
	cin>>choice;			//using variable
	if(choice==1)    //checking if
	{
	//make quiz
	
			Quiz q;			//using variable
			q.quiz(course);			//using variable
			
		}
	}
	
	

void getteacherpassword(int choice)
{
	if(choice==1)    //checking if
	{
	bool result=0; //final result for password verification
	while(result==0)    //checking if
	{
	char* password=getpass("\nEnter previous password: ");			//using variable
	
	bool test1=0,test2=0,test3=0,test4=0,test5=0; //declaring three tests
	int count=0,j=0;
	while(*(password+j)!='\0')  //when string index is not equal to \0 it means the input has not ended yet
		{    //checking if
		count++;       //to calculate length of string input	
		j++;  //j++ so the ptr moves a unit further after every loop
		}
		
		if(count>=6)  //if password has length greater from 6
		{    //checking if
		test1=1;
			for(int i=0; i<count; i++)  
			{
			if((password[i]>='A')&&(password[i]<='Z'))    //condition to check if the current char is an Uppercase letter
			{    //checking if
			test2=1;    //if condition is true then test is passed
			}
			if((password[i]>='a')&&(password[i]<='z'))    //condition to check if the current char is an lowercase letter
			{    //checking if
			test3=1;    //if condition is true then test is passed
			}
			if((password[i]>='0')&&(password[i]<='9'))   //condition to check if the current char is a digit
			{    //checking if
			test4=1;    //if condition is true then test is passed
			}
			if(!std::isalnum(password[i]))   //condition to check if the current char is a digit
			{    //checking if
			test5=1;    //if condition is true then test is passed
			}

			}
					
		}
		//else   //if password is less than 6 char then tell user it is too short
		if(test1==1&&test2==1&&test3==1&&test4==1&&test5==1) //if all tests have passed tell user that the password is valid
		{cout<<" All tests have passed! Your password is valid";
		result=1;}    //checking if    //checking if
		else     //checking if
		{cout<<"\nError: Your passsword is too short. Password must be atleast six characters long, have lowercase,uppercase,numbers and special charaters "<<endl;result=0;}
		 //if any of the 3 failed thell user password is invalid
	}
	}
	
	bool result=0; //final result for password verification
	while(result==0)    //checking if
	{
	char* password=getpass("\nEnter password: ");
	bool test1=0,test2=0,test3=0,test4=0,test5=0; //declaring three tests
	int count=0,j=0;
	while(*(password+j)!='\0')  //when string index is not equal to \0 it means the input has not ended yet
		{    //checking if
		count++;       //to calculate length of string input	
		j++;  //j++ so the ptr moves a unit further after every loop
		}
		
		if(count>=6)  //if password has length greater from 6
		{    //checking if
		test1=1;
			for(int i=0; i<count; i++)  
			{
			if((password[i]>='A')&&(password[i]<='Z'))    //condition to check if the current char is an Uppercase letter
			{    //checking if
			test2=1;    //if condition is true then test is passed
			}
			if((password[i]>='a')&&(password[i]<='z'))    //condition to check if the current char is an lowercase letter
			{    //checking if
			test3=1;    //if condition is true then test is passed
			}
			if((password[i]>='0')&&(password[i]<='9'))   //condition to check if the current char is a digit
			{    //checking if
			test4=1;    //if condition is true then test is passed
			}
			if(!std::isalnum(password[i]))   //condition to check if the current char is a digit
			{    //checking if
			test5=1;    //if condition is true then test is passed
			}

			}
					
		}
		//else   //if password is less than 6 char then tell user it is too short
		if(test1==1&&test2==1&&test3==1&&test4==1&&test5==1) //if all tests have passed tell user that the password is valid
		{    //checking if
		cout<<"\nAll tests have passed! Your password is valid";
		result=1;
		
		ifstream read("Teacher.csv");			//using variable
	if (!read.is_open())    //checking if 
			{
			cout << "\nFailed to open file!" << endl;
		       
		    }
	string line;			//using variable
	 int current_line=0;			//using variable
	 string ID;			//using variable
	//string rn;			//using variable
       // string IDnum=id;
        //cout<<IDnum;
	while(read.eof()==0)    //checking if
	{
	getline(read, line);			//using variable
	//vector<string> fields;
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{    //checking if
			current_line++;
			if(id==cell)    //checking if
			{
			//cout<<IDnum;
			//getline(read,ID,',');
			getline(read,teachername,',');			//using variable
			getline(read,course,'\n');			//using variable
			break;
		}
		}
	}	
	        cout<<"\n-------------------- \n"; 			//using variable
	        //cout<<line; 
		cout<<"\nWelcome back! \n";
		cout<<"ID: "<<id<<endl;			//using variable
		cout<<"Name: "<<teachername<<endl;			//using variable
		cout<<"Courses currently Teaching: "<<course<<endl;			//using variable
				
		}
		else     //checking if
		{cout<<"Error: Your passsword is too short. Password must be atleast six characters long, have lowercase,uppercase,numbers and special charaters "<<endl;result=0;}
		 //if any of the 3 failed thell user password is invalid
	}
        }
void FindTeacher()
{
cout<<"Enter ID: ";
cin>>id;			//using variable

	ifstream inFile;			//using variable
	inFile.open("Teacher.csv");			//using variable
	if (!inFile.is_open())    //checking if 
			{
			cout << "Failed to open file!" << endl;  
		        }
		    string line;			//using variable
		        //checking if
	while(inFile.eof()==0)			//using variable
	{
	getline(inFile, line);			//using variable
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{    //checking if
				if(id==cell)    //checking if
				{
				int choice;			//using variable
				//cout<<id;
				cout<<"\nID is valid! \n";
				cout<<"Do you want to change the password or not?(Press 1 for yes and 0 for no): ";
				cin>>choice;			//using variable
				getteacherpassword(choice);			//using variable
				asktomake();			//using variable
				break;    //checking if
				}
				
			}
	}
	inFile.close();			//using variable

}




};
class Student:public Quiz    //checking if
{
private: 
	string rollno;
	string studentname;
	string course1;
	string course2;
	string course3;
	string course4;
	string course5;
	string course6;
	string course7;
	string course8;
	string course9;
	string course10;
	string course11;
public:

void getstudentpassword(int choice)
{
	if(choice==1)    //checking if
	{
	bool result=0; //final result for password verification
	while(result==0)
	{
	char* password=getpass("\nEnter previous password: ");			//using variable
	
	bool test1=0,test2=0,test3=0,test4=0,test5=0; //declaring three tests
	int count=0,j=0;
	while(*(password+j)!='\0')  //when string index is not equal to \0 it means the input has not ended yet
		{
		count++;       //to calculate length of string input	
		j++;  //j++ so the ptr moves a unit further after every loop
		}
		
		if(count>=6)  //if password has length greater from 6
		{
		test1=1;
			for(int i=0; i<count; i++)  
			{
			if((password[i]>='A')&&(password[i]<='Z'))    //condition to check if the current char is an Uppercase letter
			{
			test2=1;    //if condition is true then test is passed
			}
			if((password[i]>='a')&&(password[i]<='z'))    //condition to check if the current char is an lowercase letter
			{
			test3=1;    //if condition is true then test is passed
			}
			if((password[i]>='0')&&(password[i]<='9'))   //condition to check if the current char is a digit
			{
			test4=1;    //if condition is true then test is passed
			}
			if(!std::isalnum(password[i]))   //condition to check if the current char is a digit
			{
			test5=1;    //if condition is true then test is passed
			}

			}
					
		}
		//else   //if password is less than 6 char then tell user it is too short
		if(test1==1&&test2==1&&test3==1&&test4==1&&test5==1) //if all tests have passed tell user that the password is valid
		{cout<<" All tests have passed! Your password is valid";
		result=1;}
		else 
		{cout<<"\nError: Your passsword is too short. Password must be atleast six characters long, have lowercase,uppercase,numbers and special charaters "<<endl;result=0;}
		 //if any of the 3 failed thell user password is invalid
	}
	}
	
	bool result=0; //final result for password verification
	while(result==0)
	{
	char* password=getpass("\nEnter password: ");
	bool test1=0,test2=0,test3=0,test4=0,test5=0; //declaring three tests
	int count=0,j=0;
	while(*(password+j)!='\0')  //when string index is not equal to \0 it means the input has not ended yet
		{
		count++;       //to calculate length of string input	
		j++;  //j++ so the ptr moves a unit further after every loop
		}
		
		if(count>=6)  //if password has length greater from 6
		{
		test1=1;
			for(int i=0; i<count; i++)  
			{
			if((password[i]>='A')&&(password[i]<='Z'))    //condition to check if the current char is an Uppercase letter
			{
			test2=1;    //if condition is true then test is passed
			}
			if((password[i]>='a')&&(password[i]<='z'))    //condition to check if the current char is an lowercase letter
			{
			test3=1;    //if condition is true then test is passed
			}
			if((password[i]>='0')&&(password[i]<='9'))   //condition to check if the current char is a digit
			{
			test4=1;    //if condition is true then test is passed
			}
			if(!std::isalnum(password[i]))   //condition to check if the current char is a digit
			{
			test5=1;    //if condition is true then test is passed
			}

			}
					
		}
		//else   //if password is less than 6 char then tell user it is too short
		if(test1==1&&test2==1&&test3==1&&test4==1&&test5==1) //if all tests have passed tell user that the password is valid
		{
		cout<<"\nAll tests have passed! Your password is valid";
		result=1;    //checking if
		
		ifstream read("Student.csv");			//using variable
	if (!read.is_open())     //checking if
			{
			cout << "\nFailed to open file!" << endl;
		       
		    }
	string line;			//using variable
	 int current_line=0;			//using variable
	string rn;			//using variable
    //checking if			//using variable
	while(read.eof()==0)			//using variable
	{
	getline(read, line);			//using variable
	//vector<string> fields;
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{
			current_line++;			//using variable
			if(rollno==cell)    //checking if
			{
			//getline(read,rn,',');			//using variable
			getline(read,studentname,',');			//using variable
			getline(read,course1,',');			//using variable
			getline(read,course2,',');			//using variable
			getline(read,course3,',');			//using variable
			getline(read,course4,',');			//using variable
			getline(read,course5,',');			//using variable
			getline(read,course6,',');			//using variable
			getline(read,course7,',');			//using variable
			getline(read,course8,',');			//using variable
			getline(read,course9,',');			//using variable
			getline(read,course10,',');			//using variable
			getline(read,course11,'\n');			//using variable
			//break;
		}
		}
	}	
	        cout<<"\n-------------------- \n"; 
	        //cout<<line; 
		cout<<"\nWelcome back! \n";
		cout<<"Rollno: "<<rollno<<endl;			//using variable
		cout<<"Name: "<<studentname<<endl;			//using variable
		cout<<"Courses Taken: "<<endl;			//using variable
		if(course1=="1")
		{//course1="Programming Fundamental"; 
		cout<<"\nProgramming Fundamentals"; }    //checking if
		if(course2=="1")
		{ //course2="Object Oriented Programming";
		cout<<"\nObject Oriented Programming"; }    //checking if
		if(course3=="1")
		{ cout<<"\nIntroduction To Computing"; }    //checking if
		if(course4=="1")
		{ cout<<"\nData Structures"; }    //checking if
		if(course5=="1")    //checking if
		{ cout<<"\nAnalysis of Algorithms"; }
		if(course6=="1")    //checking if
		{ cout<<"\nSoftware Requirements Engineering"; }
		if(course7=="1")    //checking if
		{ cout<<"\nResearch Methodology"; }
		if(course8=="1")    //checking if
		{ cout<<"\nBig Data Analytics"; }
		if(course9=="1")    //checking if
		{ cout<<"\nArtificial Intelligence"; }
		if(course10=="1")    //checking if
		{ cout<<"\nDeep Learning"; }
		if(course11=="1")    //checking if
		{ cout<<"\nDigital Image Processing"; }
		
		}
		else     //checking if
		{cout<<"Error: Your passsword is too short. Password must be atleast six characters long, have lowercase,uppercase,numbers and special characters "<<endl;result=0;}
		 //if any of the 3 failed thell user password is invalid
	}
}

void FindStudent()    //checking if
{
cout<<"Enter roll no: ";
cin>>rollno;


	ifstream inFile;			//using variable
	inFile.open("Student.csv");			//using variable
	if (!inFile.is_open())     //checking if
			{
			cout << "Failed to open file!" << endl;  
		        }
		    string line;    //checking if
	while(inFile.eof()==0)
	{    //checking if
	getline(inFile, line);			//using variable
			stringstream word(line);		//used to break words
				string cell;			//using variable
			while (getline(word, cell, ',')) //storing word in a string variable cell
			{
				if(rollno==cell)
				{    //checking if
				int choice;			//using variable
				cout<<"\nUsername is valid! \n";
				cout<<"Do you want to change the password or not?(Press 1 for yes and 0 for no): ";
				cin>>choice;			//using variable
				getstudentpassword(choice);    //checking if
				break;
				}
				
			}    //checking if
	}
	inFile.close();			//using variable

}    //checking if
void askforattempt()
{
	Quiz q;
	//cout<<"\n Do you want to attempt quiz for ";
	//cout<<"hi";
	//cout<<q.checking[1];
	if(course1=="1")
	{    //checking if
	int innerchoice;
	cout<<"\n Do you want to attempt quiz for Programming Fundamentals?(1 for yes and 0 for no)";
	cin>>innerchoice;			//using variable
	 if(innerchoice==1)    //checking if
	 {
	 string c="Programming Fundamentals";			//using variable
	 displayquiz(c);			//using variable
	 attemptquiz(c);			//using variable
	 }
	 
	}
	if(course2=="1")    //checking if
	{
	cout<<"\n Do you want to attempt quiz for Object Oriented Programming(1 for yes and 0 for no)";
	int innerchoice;			//using variable
	cin>>innerchoice;			//using variable
	if(innerchoice==1)    //checking if
	 {
	string c="Object Oriented Programming";			//using variable
	displayquiz(c);			//using variable
	attemptquiz(c);			//using variable
	}
	 
	}
		if(course3=="1")    //checking if
		{ cout<<"\n Do you want to attempt quiz for Introduction To Computing(1 for yes and 0 for no)";
		int innerchoice;			//using variable
		cin>>innerchoice;			//using variable
	if(innerchoice==1)    //checking if
	 {
	string c="Introduction To Computing";			//using variable
	displayquiz(c);			//using variable
	 attemptquiz(c);			//using variable
	}
	 
	  }
		if(course4=="1")    //checking if
		{ cout<<"\n Do you want to attempt quiz for Data Structures(1 for yes and 0 for no)";
		int innerchoice;			//using variable
		cin>>innerchoice;			//using variable
	if(innerchoice==1)
	 {
	string c="Data Structures";			//using variable
	displayquiz(c);			//using variable
	 attemptquiz(c);			//using variable
	}
	 
	  }
		if(course5=="1")    //checking if
		{ cout<<"\n Do you want to attempt quiz for Analysis of Algorithms(1 for yes and 0 for no)"; 
		int innerchoice;			//using variable
		cin>>innerchoice;			//using variable
	if(innerchoice==1)    //checking if
	 {
	string c="Analysis of Algorithms";			//using variable
	displayquiz(c);			//using variable
	 attemptquiz(c);			//using variable
	}
	 
	 }
		if(course6=="1")    //checking if
		{ cout<<"\n Do you want to attempt quiz for Software Requirements Engineering(1 for yes and 0 for no)"; 
		int innerchoice;			//using variable
		cin>>innerchoice;			//using variable
	if(innerchoice==1)    //checking if
	 {
	string c="Software Requirements Engineering";			//using variable
	displayquiz(c);			//using variable
	 attemptquiz(c);			//using variable
	}
	 
	 }
		if(course7=="1")    //checking if
		{ cout<<"\n Do you want to attempt quiz for Research Methodology(1 for yes and 0 for no)"; 
		
		int innerchoice;			//using variable
		cin>>innerchoice;			//using variable
	if(innerchoice==1)
	 {
	string c="Research Methodology";			//using variable
	displayquiz(c);			//using variable
	 attemptquiz(c);			//using variable
	}
	 
	 }
		if(course8=="1")    //checking if
		{ cout<<"\n Do you want to attempt quiz for Big Data Analytics(1 for yes and 0 for no)"; 
		int innerchoice;			//using variable
		cin>>innerchoice;			//using variable
	/*switch(innerchoice)
	 {
	 case 1:
	 {
	 */
	 if(innerchoice==1)    //checking if
	 {
	string c="Big Data Analytics";			//using variable
	displayquiz(c);			//using variable
	attemptquiz(c);			//using variable
	
	}
	 
	 }
		if(course9=="1")    //checking if
		{ cout<<"\n Do you want to attempt quiz for Artificial Intelligence(1 for yes and 0 for no)"; 
		int innerchoice;			//using variable
		cin>>innerchoice;			//using variable
	if(innerchoice==1)    //checking if
	 {
	string c="Artificial Intelligence";			//using variable
	displayquiz(c);			//using variable
	attemptquiz(c);			//using variable
	}
	
	 }
		if(course10=="1")    //checking if
		{ cout<<"\n Do you want to attempt quiz for Deep Learning(1 for yes and 0 for no)"; 
		int innerchoice;			//using variable
		cin>>innerchoice;			//using variable
	if(innerchoice==1)    //checking if
	 {
	string c="Deep Learning";			//using variable
	displayquiz(c);			//using variable
	attemptquiz(c);			//using variable
	}
	 
	 }
		if(course11=="1")    //checking if
		{ cout<<"\nDo you want to attempt quiz for Digital Image Processing(1 for yes and 0 for no)"; 
		int innerchoice;			//using variable
		cin>>innerchoice;			//using variable
	if(innerchoice==1)    //checking if
	 {
	string c="Digital Image Processing";			//using variable
	displayquiz(c);			//using variable
	 attemptquiz(c);			//using variable
	}
	 
	 }
}


};

int main()
{

 int choice;
 cout<<"\n-------------------------------------------------------------------------\n";
 cout<<"\t\tWelcome to this Exam Management System!!";
 cout<<"\n-------------------------------------------------------------------------\n";
 cout<<"\t\t\tMENU \n\n Do you want to login as Teacher(press 1) or Student(press 2): ";
 cin>>choice;
 switch(choice){
 	 case 1:
 	 {
 	 Teacher t;
 	 t.FindTeacher();
 	 //t.check();
 	 break;
 	 }
	 case 2:
	 {	
	 	Student s;
	 	s.FindStudent();
	 	s.askforattempt();
		break;
	 }
	 
 	}
 cin.ignore();
 cin.get();
 
 }
