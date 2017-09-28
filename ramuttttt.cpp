/*
	Name: shivam
	Copyright: (c) 2010-16
	Author: shivam
	Date: 24-03-16 00:29
	Description: 
*/
#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class TTT
	{
		char arr[3][3];
		
		int tc;
		int a[2],i;
		int ramu,kalu;
		public:
			
				void Default()
					{	ramu=0;
					kalu=0;
				
					for(int i=0;i<2;i++)
						{
							for(int j=0;j<3;j++)
							{
								arr[i][j]=' ';
							}
							
						}
					cout<<"  "<<"0"<<"     "<<"1"<<"     "<<"2"<<"  "<<endl;
					cout<<"0__"<<" "<<"__|__"<<" "<<"__|__"<<" "<<"__"<<endl;
					cout<<"      |     |    "<<endl;
					cout<<"1  "<<" "<<"  |  "<<" "<<"  |  "<<" "<<"  "<<endl;
					cout<<" _____|_____|_____"<<endl;
					cout<<"2  "<<" "<<"  |  "<<" "<<"  |  "<<" "<<"  ";
					}
				void show()
					{
							cout<<"  "<<"0"<<"     "<<"1"<<"     "<<"2"<<"  "<<endl;
					cout<<"0__"<<arr[0][0]<<"__|__"<<arr[0][1]<<"__|__"<<arr[0][2]<<"__"<<endl;
					cout<<"      |     |    "<<endl;
					cout<<"1  "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][2]<<"  "<<endl;
					cout<<" _____|_____|_____"<<endl;
					cout<<"2  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"  ";
					}
				void play()
					{
						cout<<endl<<"ramu's turn(X)\t";
						input('X');
						system("clear");
						show();
						check();
						cout<<endl<<"kalu's turn(O)"<<"\t";
						input('O');
						system("clear");
						show();
						check();
						
							}
						void input(char x)
								{
									cin>>tc;
									cin.clear();
								
							
								int ckip=1;
											do
											{
													
													
												
													switch(tc)
														{
															case 9:
																
																arr[0][2]=x;
																ckip=0;
																break;
															case 8:
															    arr[0][1]=x;
																ckip=0;
															    break;
															case 7:
															arr[0][0]=x;
																	ckip=0;
																break;
																case 6:
															arr[1][2]=x;
																ckip=0;
																break;
															case 5:
															 arr[1][1]=x;
																ckip=0;
															    break;
															case 4:
															arr[1][0]=x;
																	ckip=0;
																break;
																case 3:
																arr[2][2]=x;
																ckip=0;
																break;
															case 2:
															   arr[2][1]=x;
																ckip=0;
															    break;
															case 1:
															arr[2][0]=x;
																	ckip=0;
																break;
															default: 
																cout<<"wrong input enter again"<<endl;
																cin.clear();
																//fflush(stdin);
																ckip=1;
																cin>>tc;
																break;
														}
													
											}while(ckip==1);
											
							}

						
				int check()
					{		
						
							for(i=0;i<3;i++)
								{
									
									if(arr[i][0]==arr[i][1])
										{
											if(arr[i][1]==arr[i][2])
												{
														if(arr[i][0]=='X')
															{
															ramu++;
															cout<<endl<<"ramu won\t"<<ramu;
															
															
														//	exit(0);
															}
														else
															{
																if(arr[i][0]=='O') 
																{
																	kalu++;
																cout<<endl<<"kalu won\t"<<kalu;
																
																}
																
															//	exit(0);
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
															cout<<endl<<"ramu won\t"<<ramu;
																
														//	exit(0);
															}
														else
															{
																if(arr[0][i]=='O') {
																	kalu++;
																cout<<endl<<"kalu won\t"<<kalu;
																}
															//	exit(0);
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
															cout<<endl<<"ramu won\t"<<ramu;
																
														//	exit(0);
															}
														else
															{
																kalu++;
																if(arr[0][0]=='O') cout<<endl<<"kalu won\t"<<kalu;
																
															//	exit(0);
															}
													}
												
												}
											
								
											return 1;
										
								}
					}	
	};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	TTT obj;
	obj.Default();
		do
		{
		obj.play();
		}while(1);
	
	return 0;
}
