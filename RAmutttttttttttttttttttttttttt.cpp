// RAmutttttttttttttttttttttttttt.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
/*
	Name: shivam
	Copyright: (c) 2010-16
	Author: shivam
	Date: 24-03-16 00:29
	Description: ttt
*/
#include <iostream>
#include<stdlib.h>
//#include<conio.h>
#include<string.h>
//#include<windows.h>
using namespace std;
class TTT
	{
		char arr[3][3];
		char tc[20];
		int a[2],i,ramu,kalu,oldramu,oldkalu,count;
		public:
				void credit()
				{
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<"\n\tCopyright: (c) 2010-16\n\tAuthor: shivam\n\tDate: 24-03-16 00:29"<<endl<<"\tDescription: ticktack tow game\n";
					cout<<"\tpress anykey to play";
					
					//getch();
				}
				void intialize()
				{oldramu=oldkalu=count=ramu=kalu=0;
				}
				void Default()
					{
						system("clear");
					
						
				
					for(int i=0;i<3;i++)
						{
							for(int j=0;j<3;j++)
						{
								arr[i][j]=' ';
							}
							
						}
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<"\t\t\t  "<<"0"<<"     "<<"1"<<"     "<<"2"<<"  "<<endl;
					cout<<"\t\t\t      |     |    "<<endl;
					cout<<"\t\t\t0__"<<" "<<"__|__"<<" "<<"__|__"<<" "<<"__"<<endl;
					cout<<"\t\t\t      |     |    "<<endl;
					cout<<"\t\t\t1  "<<" "<<"  |  "<<" "<<"  |  "<<" "<<"  "<<endl;
					cout<<"\t\t\t _____|_____|_____"<<endl;
					cout<<"\t\t\t2  "<<" "<<"  |  "<<" "<<"  |  "<<" "<<"  "<<endl;
					cout<<"\t\t\t      |     |    "<<endl;
					}
				void show()
					{
						cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
							cout<<"\t\t\t  "<<"0"<<"     "<<"1"<<"     "<<"2"<<"  "<<endl;
								cout<<"\t\t\t      |     |    "<<endl;
					cout<<"\t\t\t0__"<<arr[0][0]<<"__|__"<<arr[0][1]<<"__|__"<<arr[0][2]<<"__"<<endl;
					cout<<"\t\t\t      |     |    "<<endl;
					cout<<"\t\t\t1  "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][2]<<"  "<<endl;
					cout<<"\t\t\t _____|_____|_____"<<endl;
					cout<<"\t\t\t2  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"  "<<endl;
					cout<<"\t\t\t      |     |    "<<endl;
					}
				void play()
					{
						
						
						cout<<endl<<"\t\t\tramu's turn(X)\t";
						input('X');
						cout.flush();
						system("clear");
						show();
						check();
						showresult();
						cout<<endl<<"\t\t\tkalu's turn(O)"<<"\t";
						input('O');
						system("clear");
						show();
						check();
						showresult();
						cout.flush();
							
					}
						void input(char X)
								{
						cin>>tc;
						count++;			
						ipset(X);
					}
						void ipset(char x )
					{	i=0;
						
						lable:digits(0);
						i=1;
						digits(1);
						if(arr[a[0]][a[1]]=='X')
						{
							cout<<"\t\t\trentry not allowed enter again\t";
							cin>>tc;
							goto lable;
							//_getch();
						}
						else
						{

							if(arr[a[0]][a[1]]=='O')
							{
							cout<<"\t\t\trentry not allowed try again\t";
							cin>>tc;
							goto lable;
							//_getch();
							}
							else
							{if(count>9)
							{	
								cout<<"\t\t\tgame over";
							//	_getch();
								exit(0);
							}
							arr[a[0]][a[1]]=x;

							}
						}
					}
						void	digits(int i )
							{
								int ckip=1;
											do
											{
													
													
												
													switch(tc[i])
														{
															case '0':
																a[i]=0;
																ckip=0;
															 break;
															case '1':
															    a[i]=1;
																ckip=0;
															    break;
															case '2':
																a[i]=2;
																	ckip=0;
																break;
															default: 
																cout<<"\t\t\twrong input enter again"<<endl;
																cout.flush();
																cin>>tc;
																 break;
														}
													
											}while(ckip==1);
											
							}
					void check()
					{		
						

							for(i=0;i<3;i++)
								{
										if(arr[i][0]==arr[i][1])
											{
												if(arr[i][1]==arr[i][2])
													{
														if(arr[i][0]=='X')
															{
															cout.flush();
															ramu++;
															break;
															}
														else
															{	cout.flush();
																if(arr[i][0]=='O')	{ kalu++; }
																 
																 break;
															}
													}
												
											}
											if(arr[0][i]==arr[1][i])
											{
												if(arr[1][i]==arr[2][i])
													{
														if(arr[0][i]=='X')
															{
															
															ramu++;
															 
														 break;
															}
														else
															{
																if(arr[0][i]=='O') kalu++;
																 
																 break;
															}
													}
												
											}
											if(arr[0][0]==arr[1][1])
												{
												if(arr[1][1]==arr[2][2])
													{
														if(arr[0][0]=='X')
															{
															
															ramu++;
															 
															 break;
															}
														else
															{
																if(arr[0][0]=='O') {
																kalu++;};
																 
																break;
																
															}
													}
												
												}
													if(arr[0][2]==arr[1][1])
												{
												if(arr[1][1]==arr[2][0])
													{
														if(arr[1][1]=='X')
															{
															
															ramu++;
															 
															 break;
															}
														else
															{
																if(arr[1][1]=='O'){
																 kalu++;}
																 
																break;
																
															}
													}
												
												}
											
								
											
										
								}
						
					}
				void showresult()
					{
						if(ramu>oldramu)
							{
								cout<<endl<<"\t\t\tramu won\t"<<ramu;
								oldramu=ramu;
								count=0;
								//getch();
								Default();
							}
						if(kalu>oldkalu)
							{
								cout<<endl<<"\t\t\tkalu won\t"<<kalu;
								
								oldkalu=kalu;
								count=0;
								//getch();
								Default();
							}
						else
						{
						if(count==9)
							{
								cout<<endl<<"\tMATCH DRAW";
								//getch();
								Default();
							}
						}
								
					
						
						
				}
	};
	/*void gotoxy(int x,int y)
	{	
		HANDLE hConsole;
		COORD cursorLoc;
		std::cout.flush();
		cursorLoc.X=x;
		cursorLoc.Y=y;
		hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hConsole,cursorLoc);
	}*/
int main(int argc, char** argv) {
	TTT obj;
	//SetCursorPos(540,200);
	//getch();
	obj.credit();
	obj.intialize();
	obj.Default();
		do
		{
		obj.play();
		}while(1);
	
	return 0;
}
