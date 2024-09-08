#include<iostream>
#include<cstdlib>
using namespace std;
#include<time.h>
int main()
{

	int rollnumber[100];
	float midmarks[100];
	float finalmarks[100];
	int classs[100];
	char grade[100];
	int count = 0;

	srand(time(0));

	for (int i = 0; i < 50; i++)
	{
		rollnumber[i] = 1000 + i;
		count++;
	}


	for (int i = 0; i < 50; i++)
	{
		midmarks[i] = rand() % 51;
	}

	for (int i = 0; i < 50; i++)
	{
		finalmarks[i] = rand() % 101;
	}

	for (int i = 0; i < 50; i++)
	{
		classs[i] = rand() % 51;
	}


	for (int i = 0; i < 50; i++)
	{
		if (finalmarks[i] >= 86)
		{
			grade[i] = 'A';
		}

		else
			if (finalmarks[i] <= 85 && finalmarks[i] >= 73)
			{
				grade[i] = 'B';
			}

			else
				if (finalmarks[i] <= 72 && finalmarks[i] >= 60)
				{
					grade[i] = 'C';
				}

				else
					if (finalmarks[i] <= 59 && finalmarks[i] >= 50)
					{
						grade[i] = 'D';
					}

					else
						if (finalmarks[i] < 50)
						{
							grade[i] = 'F';
						}

	}
	for (int i = 0; i < 50; i++)
	{
		cout << "ROLL NUMBER : " << rollnumber[i] << "    MID MARKS " << midmarks[i] << "   FINAl MARKS " << finalmarks[i];
		cout << "   CLASS " << classs[i] << "    GRADE " << grade[i] << endl;
	}

	cout << endl << endl;

	string op;
	do
	{

		cout << "Enter 1 for displaying all the records roll number wise in ascending order." << endl;
		cout << "Enter 2 for displaying all the records roll number wise in descending order." << endl;
		cout << "Enter 3 for displaying all records in ascending order based on marks in Midterm." << endl;
		cout << "Enter 4 for displaying all records in descending order based on marks in Midterm." << endl;
		cout << "Enter 5 for displaying all records in ascending order based on marks in Final." << endl;
		cout << "Enter 6 for displaying all records in descending order based on marks in Final." << endl;
		cout << "Enter 7 for displaying all records in ascending order based on Grade." << endl;
		cout << "Enter 8 for displaying all records in descending order based on Grade." << endl;
		cout << "Enter 9 for adding a new entry of a student." << endl;
		cout << "Enter 10 for deleting a student record based on his roll number." << endl;
		cout << "Enter 11 for displaying record of all the students greater than X marks in final exam in descending order:" << endl;
		cout << "Enter 12 for displaying record of all the students greater than X marks in final exam in ascending order:" << endl;
		cout << "Enter 13 for displaying record of all the students less than or equal to X marks in final exam in descending order:" << endl;
		cout << "Enter 14 for displaying record of all the students less than or equal to X marks in final exam in ascending order:" << endl;
		cout << "Enter 15 for displaying record of all the students greater than X grade in descending order:" << endl;
		cout << "Enter 16 for displaying record of all the students greater than X grade in ascending order:" << endl;
		cout << "Enter 17 for displaying record of all the students less than or equal to X grade in descending order:" << endl;
		cout << "Enter 18 for displaying record of all the students less than or equal to X grade in ascending order:" << endl << endl;
		cout << "Enter Your option: ";
		cin >> op;
		cout << endl;

		if (op == "1")
		{

			for (int i = 0; i < 100; i++)
			{
				for (int j = 0; j < count - 1; j++)
				{
					if (rollnumber[j] > rollnumber[j + 1])
					{
						float vari = rollnumber[j];
						rollnumber[j] = rollnumber[j + 1];
						rollnumber[j + 1] = vari;

						vari = midmarks[j];
						midmarks[j] = midmarks[j + 1];
						midmarks[j + 1] = vari;

						vari = finalmarks[j];
						finalmarks[j] = finalmarks[j + 1];
						finalmarks[j + 1] = vari;


						vari = classs[j];
						classs[j] = classs[j + 1];
						classs[j + 1] = vari;



						int vari1 = grade[j];
						grade[j] = grade[j + 1];
						grade[j + 1] = vari1;


					}
				}
			}
			
			cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count; i++)
				{
					cout << rollnumber[i] << "\t\t" << midmarks[i] << "\t\t" << finalmarks[i] << "\t\t" << classs[i] <<
						"\t" << grade[i] << "\t\t" << endl;
				}
				cout << endl << endl;
		}

		else
			if (op == "2")
			{

				for (int i = 0; i < 100; i++)
				{
					for (int j = 0; j < count - 1; j++)
					{
						if (rollnumber[j] < rollnumber[j + 1])
						{
							float vari = rollnumber[j];
							rollnumber[j] = rollnumber[j + 1];
							rollnumber[j + 1] = vari;

							vari = midmarks[j];
							midmarks[j] = midmarks[j + 1];
							midmarks[j + 1] = vari;

							vari = finalmarks[j];
							finalmarks[j] = finalmarks[j + 1];
							finalmarks[j + 1] = vari;



							vari = classs[j];
							classs[j] = classs[j + 1];
							classs[j + 1] = vari;


							int vari1 = grade[j];
							grade[j] = grade[j + 1];
							grade[j + 1] = vari1;
						}
					}
				}
				cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count; i++)
				{
					cout << rollnumber[i] << "\t\t" << midmarks[i] << "\t\t" << finalmarks[i] << "\t\t" << classs[i] <<
						"\t" << grade[i] << "\t\t" << endl;
				}
				cout << endl << endl;
			}

			else
				if (op == "3")
				{

					for (int i = 0; i < 100; i++)
					{
						for (int j = 0; j < count - 1; j++)
						{
							if (midmarks[j] > midmarks[j + 1])
							{
								float vari = rollnumber[j];
								rollnumber[j] = rollnumber[j + 1];
								rollnumber[j + 1] = vari;

								vari = midmarks[j];
								midmarks[j] = midmarks[j + 1];
								midmarks[j + 1] = vari;

								vari = finalmarks[j];
								finalmarks[j] = finalmarks[j + 1];
								finalmarks[j + 1] = vari;


								vari = classs[j];
								classs[j] = classs[j + 1];
								classs[j + 1] = vari;


								int vari1 = grade[j];
								grade[j] = grade[j + 1];
								grade[j + 1] = vari1;
							}
						}
					}
					cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count; i++)
				{
					cout << rollnumber[i] << "\t\t" << midmarks[i] << "\t\t" << finalmarks[i] << "\t\t" << classs[i] <<
						"\t" << grade[i] << "\t\t" << endl;
				}
				cout << endl << endl;
				}

				else
					if (op == "4")

					{

						for (int i = 0; i < 100; i++)
						{
							for (int j = 0; j < count - 1; j++)
							{
								if (midmarks[j] < midmarks[j + 1])
								{
									float vari = rollnumber[j];
									rollnumber[j] = rollnumber[j + 1];
									rollnumber[j + 1] = vari;

									vari = midmarks[j];
									midmarks[j] = midmarks[j + 1];
									midmarks[j + 1] = vari;

									vari = finalmarks[j];
									finalmarks[j] = finalmarks[j + 1];
									finalmarks[j + 1] = vari;


									vari = classs[j];
									classs[j] = classs[j + 1];
									classs[j + 1] = vari;


									int vari1 = grade[j];
									grade[j] = grade[j + 1];
									grade[j + 1] = vari1;
								}
							}
						}
						cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count; i++)
				{
					cout << rollnumber[i] << "\t\t" << midmarks[i] << "\t\t" << finalmarks[i] << "\t\t" << classs[i] <<
						"\t" << grade[i] << "\t\t" << endl;
				}
				cout << endl << endl;
					}

					else
						if (op == "5")

						{

							for (int i = 0; i < 100; i++)
							{
								for (int j = 0; j < count - 1; j++)
								{
									if (finalmarks[j] > finalmarks[j + 1])
									{
										float vari = rollnumber[j];
										rollnumber[j] = rollnumber[j + 1];
										rollnumber[j + 1] = vari;

										vari = midmarks[j];
										midmarks[j] = midmarks[j + 1];
										midmarks[j + 1] = vari;

										vari = finalmarks[j];
										finalmarks[j] = finalmarks[j + 1];
										finalmarks[j + 1] = vari;


										vari = classs[j];
										classs[j] = classs[j + 1];
										classs[j + 1] = vari;


										int vari1 = grade[j];
										grade[j] = grade[j + 1];
										grade[j + 1] = vari1;
									}
								}
							}
							cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count; i++)
				{
					cout << rollnumber[i] << "\t\t" << midmarks[i] << "\t\t" << finalmarks[i] << "\t\t" << classs[i] <<
						"\t" << grade[i] << "\t\t" << endl;
				}
				cout << endl << endl;
						}

						else
							if (op == "6")
							{

								for (int i = 0; i < 100; i++)
								{
									for (int j = 0; j < count - 1; j++)
									{
										if (finalmarks[j] < finalmarks[j + 1])
										{
											float vari = rollnumber[j];
											rollnumber[j] = rollnumber[j + 1];
											rollnumber[j + 1] = vari;

											vari = midmarks[j];
											midmarks[j] = midmarks[j + 1];
											midmarks[j + 1] = vari;

											vari = finalmarks[j];
											finalmarks[j] = finalmarks[j + 1];
											finalmarks[j + 1] = vari;



											vari = classs[j];
											classs[j] = classs[j + 1];
											classs[j + 1] = vari;


											int vari1 = grade[j];
											grade[j] = grade[j + 1];
											grade[j + 1] = vari1;
										}
									}
								}
								cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count; i++)
				{
					cout << rollnumber[i] << "\t\t" << midmarks[i] << "\t\t" << finalmarks[i] << "\t\t" << classs[i] <<
						"\t" << grade[i] << "\t\t" << endl;
				}
				cout << endl << endl;
							}


							else
								if (op == "8")
								{

									for (int i = 0; i < 100; i++)
									{
										for (int j = 0; j < count - 1; j++)
										{
											if (grade[j] > grade[j + 1])
											{
												float vari = rollnumber[j];
												rollnumber[j] = rollnumber[j + 1];
												rollnumber[j + 1] = vari;

												vari = midmarks[j];
												midmarks[j] = midmarks[j + 1];
												midmarks[j + 1] = vari;

												vari = finalmarks[j];
												finalmarks[j] = finalmarks[j + 1];
												finalmarks[j + 1] = vari;



												vari = classs[j];
												classs[j] = classs[j + 1];
												classs[j + 1] = vari;


												int vari1 = grade[j];
												grade[j] = grade[j + 1];
												grade[j + 1] = vari1;
											}
										}
									}
									cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count; i++)
				{
					cout << rollnumber[i] << "\t\t" << midmarks[i] << "\t\t" << finalmarks[i] << "\t\t" << classs[i] <<
						"\t" << grade[i] << "\t\t" << endl;
				}
				cout << endl << endl;
								}
								else
									if (op == "7")
									{

										for (int i = 0; i < 100; i++)
										{
											for (int j = 0; j < count - 1; j++)
											{
												if (grade[j] < grade[j + 1])
												{
													float vari = rollnumber[j];
													rollnumber[j] = rollnumber[j + 1];
													rollnumber[j + 1] = vari;

													vari = midmarks[j];
													midmarks[j] = midmarks[j + 1];
													midmarks[j + 1] = vari;

													vari = finalmarks[j];
													finalmarks[j] = finalmarks[j + 1];
													finalmarks[j + 1] = vari;

													vari = classs[j];
													classs[j] = classs[j + 1];
													classs[j + 1] = vari;


													int vari1 = grade[j];
													grade[j] = grade[j + 1];
													grade[j + 1] = vari1;
												}
											}
										}
										cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count; i++)
				{
					cout << rollnumber[i] << "\t\t" << midmarks[i] << "\t\t" << finalmarks[i] << "\t\t" << classs[i] <<
						"\t" << grade[i] << "\t\t" << endl;
				}
				cout << endl << endl;
									}


									else
										if (op == "9")
										{
											count++;
											bool mybool=false;

											cout << "Enter 4 digit ROLL NUMBER  :";
											cin >> rollnumber[count - 1];
											cout << endl;


											while ((rollnumber[count - 1] < 1000) || (rollnumber[count - 1] > 9999))
											{
												cout << "PLease enter 4 digit ROLL NUMBER : ";
												cin >> rollnumber[count - 1];
											}
											do
											{
											    mybool=false;
											    for(int i=0;i<count-1;i++)
											    {
											        if(rollnumber[count-1]==rollnumber[i])
											        {
											            mybool=true;
											        }
											    }
											    while(mybool)
											    {
											        mybool=false;
											        cout << "Roll number already exist" << endl << "Enter a different roll number: ";
											        cin >> rollnumber[count-1];
											    }
											}while(mybool);


											cout << "MID MARKS:";
											cin >> midmarks[count - 1];
											cout << endl;
											
											while ((midmarks[count - 1] < 0) || (midmarks[count - 1] > 50))
											{
												cout << "PLease enter marks from 0-50 : ";
												cin >> midmarks[count - 1];
											}

											cout << "FINAL MARKS:";
											cin >> finalmarks[count - 1];
											cout << endl;
											
											while ((finalmarks[count - 1] < 0) || (finalmarks[count - 1] > 100))
											{
												cout << "PLease enter marks from 0-100 : ";
												cin >> finalmarks[count - 1];
											}

											cout << "CLASS:";
											cin >> classs[count - 1];
											cout << endl;
											
											while ((classs[count - 1] < 0) || (classs[count - 1] > 50))
											{
												cout << "PLease enter Class from 0-50 : ";
												cin >> classs[count - 1];
											}

											if (finalmarks[count - 1] >= 86)
											{
												grade[count - 1] = 'A';
											}

											else
												if (finalmarks[count - 1] <= 85 && finalmarks[count - 1] >= 73)
												{
													grade[count - 1] = 'B';
												}

												else
													if (finalmarks[count - 1] <= 72 && finalmarks[count - 1] >= 60)
													{
														grade[count - 1] = 'C';
													}

													else
														if (finalmarks[count - 1] <= 59 && finalmarks[count - 1] >= 50)
														{
															grade[count - 1] = 'D';
														}

														else
															if (finalmarks[count - 1] < 50)
															{
																grade[count - 1] = 'F';
															}

											cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count; i++)
				{
					cout << rollnumber[i] << "\t\t" << midmarks[i] << "\t\t" << finalmarks[i] << "\t\t" << classs[i] <<
						"\t" << grade[i] << "\t\t" << endl;
				}
				cout << endl << endl;
										}

										else
											if (op == "10")
											{
												int num, index;
												cout << "Enter the roll-number you want to delete:  ";
												cin >> num;
												
												bool mybool=true;
												  for (int i = 0; i < count; i++)
												{
													if (num == rollnumber[i])
													{
													    mybool=false;
														index = i;
														break;
													}
													
												}
												while(mybool)
												{
												    mybool=true;
												    cout << "Roll number doesnot exist" << endl << "Please enter an existing roll number: ";
												    cin >> num;
												    
												      for (int i = 0; i < count; i++)
												{
													if (num == rollnumber[i])
													{
													    mybool=false;
														index = i;
														break;
													}
													
												}
												    
												}
												
												
												
												
												
												
												
												

												for (int i = index; i < count; i++)
												{
													rollnumber[i] = rollnumber[i + 1];

													midmarks[i] = midmarks[i + 1];

													finalmarks[i] = finalmarks[i + 1];

													classs[i] = classs[i + 1];

													grade[i] = grade[i + 1];

												}
												count -= 1;

												cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count; i++)
				{
					cout << rollnumber[i] << "\t\t" << midmarks[i] << "\t\t" << finalmarks[i] << "\t\t" << classs[i] <<
						"\t" << grade[i] << "\t\t" << endl;
				}
				cout << endl << endl;
											}

											else
												if (op == "11")
												{

													int num1;
													cout << "Enter the X marks:   ";
													cin >> num1;

													int rollnumber22[100];
													float midmarks22[100];
													float finalmarks22[100];
													int classs22[100];
													char grade22[100];
													int count22 = 0;

													for (int i = 0; i < 100; i++)
													{
														for (int j = 0; j < count - 1; j++)
														{
															if (finalmarks[j] < finalmarks[j + 1])
															{
																float vari = rollnumber[j];
																rollnumber[j] = rollnumber[j + 1];
																rollnumber[j + 1] = vari;

																vari = midmarks[j];
																midmarks[j] = midmarks[j + 1];
																midmarks[j + 1] = vari;

																vari = finalmarks[j];
																finalmarks[j] = finalmarks[j + 1];
																finalmarks[j + 1] = vari;



																vari = classs[j];
																classs[j] = classs[j + 1];
																classs[j + 1] = vari;


																int vari1 = grade[j];
																grade[j] = grade[j + 1];
																grade[j + 1] = vari1;
															}
														}
													}
													for (int i = 0; i < count; i++)
													{
														if (num1 < finalmarks[i])
														{

															rollnumber22[i] = rollnumber[i];
															midmarks22[i] = midmarks[i];
															finalmarks22[i] = finalmarks[i];
															classs22[i] = classs[i];
															grade22[i] = grade[i];

															count22++;


														}

													}


													cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count22; i++)
				{
					cout << rollnumber22[i] << "\t\t" << midmarks22[i] << "\t\t" << finalmarks22[i] << "\t\t" << classs22[i] <<
						"\t" << grade22[i] << "\t\t" << endl;
				}
				cout << endl << endl;
												}

												else
													if (op == "12")
													{

														int num1;
														cout << "Enter the X marks:   ";
														cin >> num1;

														int rollnumber22[100];
														float midmarks22[100];
														float finalmarks22[100];
														int classs22[100];
														char grade22[100];
														int count22 = 0;

														for (int i = 0; i < 100; i++)
														{
															for (int j = 0; j < count - 1; j++)
															{
																if (finalmarks[j] < finalmarks[j + 1])
																{
																	float vari = rollnumber[j];
																	rollnumber[j] = rollnumber[j + 1];
																	rollnumber[j + 1] = vari;

																	vari = midmarks[j];
																	midmarks[j] = midmarks[j + 1];
																	midmarks[j + 1] = vari;

																	vari = finalmarks[j];
																	finalmarks[j] = finalmarks[j + 1];
																	finalmarks[j + 1] = vari;



																	vari = classs[j];
																	classs[j] = classs[j + 1];
																	classs[j + 1] = vari;


																	int vari1 = grade[j];
																	grade[j] = grade[j + 1];
																	grade[j + 1] = vari1;
																}
															}
														}

														for (int i = 0; i < count; i++)
														{
															if (num1 < finalmarks[i])
															{

																rollnumber22[i] = rollnumber[i];
																midmarks22[i] = midmarks[i];
																finalmarks22[i] = finalmarks[i];
																classs22[i] = classs[i];
																grade22[i] = grade[i];

																count22++;

															}
														}

														for (int i = 0; i < 100; i++)
														{
															for (int j = 0; j < count22 - 1; j++)
															{
																if (finalmarks22[j] > finalmarks22[j + 1])
																{
																	float vari = rollnumber22[j];
																	rollnumber22[j] = rollnumber22[j + 1];
																	rollnumber22[j + 1] = vari;

																	vari = midmarks22[j];
																	midmarks22[j] = midmarks22[j + 1];
																	midmarks22[j + 1] = vari;

																	vari = finalmarks22[j];
																	finalmarks22[j] = finalmarks22[j + 1];
																	finalmarks22[j + 1] = vari;


																	vari = classs22[j];
																	classs22[j] = classs22[j + 1];
																	classs22[j + 1] = vari;


																	int vari1 = grade22[j];
																	grade22[j] = grade22[j + 1];
																	grade22[j + 1] = vari1;
																}
															}
														}



																							cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count22; i++)
				{
					cout << rollnumber22[i] << "\t\t" << midmarks22[i] << "\t\t" << finalmarks22[i] << "\t\t" << classs22[i] <<
						"\t" << grade22[i] << "\t\t" << endl;
				}
				cout << endl << endl;
													}

													else
														if (op == "13")
														{

															int num2;
															cout << "Enter the X marks:   ";
															cin >> num2;

															int rollnumber22[100];
															float midmarks22[100];
															float finalmarks22[100];
															int classs22[100];
															char grade22[100];
															int count22 = 0;


															for (int i = 0; i < 100; i++)
															{
																for (int j = 0; j < count - 1; j++)
																{
																	if (finalmarks[j] > finalmarks[j + 1])
																	{
																		float vari = rollnumber[j];
																		rollnumber[j] = rollnumber[j + 1];
																		rollnumber[j + 1] = vari;

																		vari = midmarks[j];
																		midmarks[j] = midmarks[j + 1];
																		midmarks[j + 1] = vari;

																		vari = finalmarks[j];
																		finalmarks[j] = finalmarks[j + 1];
																		finalmarks[j + 1] = vari;


																		vari = classs[j];
																		classs[j] = classs[j + 1];
																		classs[j + 1] = vari;


																		int vari1 = grade[j];
																		grade[j] = grade[j + 1];
																		grade[j + 1] = vari1;
																	}
																}
															}


															for (int i = 0; i < count; i++)
															{
																if (num2 >= finalmarks[i])
																{

																	rollnumber22[i] = rollnumber[i];
																	midmarks22[i] = midmarks[i];
																	finalmarks22[i] = finalmarks[i];
																	classs22[i] = classs[i];
																	grade22[i] = grade[i];

																	count22++;

																}
															}
															for (int i = 0; i < 100; i++)
															{
																for (int j = 0; j < count22 - 1; j++)
																{
																	if (finalmarks22[j] < finalmarks22[j + 1])
																	{
																		float vari = rollnumber22[j];
																		rollnumber22[j] = rollnumber22[j + 1];
																		rollnumber22[j + 1] = vari;

																		vari = midmarks22[j];
																		midmarks22[j] = midmarks22[j + 1];
																		midmarks22[j + 1] = vari;

																		vari = finalmarks22[j];
																		finalmarks22[j] = finalmarks22[j + 1];
																		finalmarks22[j + 1] = vari;


																		vari = classs22[j];
																		classs22[j] = classs22[j + 1];
																		classs22[j + 1] = vari;


																		int vari1 = grade22[j];
																		grade22[j] = grade22[j + 1];
																		grade22[j + 1] = vari1;
																	}
																}
															}


																								cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count22; i++)
				{
					cout << rollnumber22[i] << "\t\t" << midmarks22[i] << "\t\t" << finalmarks22[i] << "\t\t" << classs22[i] <<
						"\t" << grade22[i] << "\t\t" << endl;
				}
				cout << endl << endl;
														}

														else
															if (op == "14")
															{

																int num2;
																cout << "Enter the X marks:   ";
																cin >> num2;

																int rollnumber22[100];
																float midmarks22[100];
																float finalmarks22[100];
																int classs22[100];
																char grade22[100];
																int count22 = 0;


																for (int i = 0; i < 100; i++)
																{
																	for (int j = 0; j < count - 1; j++)
																	{
																		if (finalmarks[j] > finalmarks[j + 1])
																		{
																			float vari = rollnumber[j];
																			rollnumber[j] = rollnumber[j + 1];
																			rollnumber[j + 1] = vari;

																			vari = midmarks[j];
																			midmarks[j] = midmarks[j + 1];
																			midmarks[j + 1] = vari;

																			vari = finalmarks[j];
																			finalmarks[j] = finalmarks[j + 1];
																			finalmarks[j + 1] = vari;


																			vari = classs[j];
																			classs[j] = classs[j + 1];
																			classs[j + 1] = vari;


																			int vari1 = grade[j];
																			grade[j] = grade[j + 1];
																			grade[j + 1] = vari1;
																		}
																	}
																}


																for (int i = 0; i < count; i++)
																{
																	if (num2 >= finalmarks[i])
																	{

																		rollnumber22[i] = rollnumber[i];
																		midmarks22[i] = midmarks[i];
																		finalmarks22[i] = finalmarks[i];
																		classs22[i] = classs[i];
																		grade22[i] = grade[i];

																		count22++;

																	}
																}


																									cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count22; i++)
				{
					cout << rollnumber22[i] << "\t\t" << midmarks22[i] << "\t\t" << finalmarks22[i] << "\t\t" << classs22[i] <<
						"\t" << grade22[i] << "\t\t" << endl;
				}
				cout << endl << endl;
															}

															else
																if (op == "15")
																{
																	char ch1;
																	cout << "Enter the X grade:   ";
																	cin >> ch1;

																	int rollnumber22[100];
																	float midmarks22[100];
																	float finalmarks22[100];
																	int classs22[100];
																	char grade22[100];
																	int count22 = 0;

																	for (int i = 0; i < 100; i++)
																	{
																		for (int j = 0; j < count - 1; j++)
																		{
																			if (grade[j] > grade[j + 1])
																			{
																				float vari = rollnumber[j];
																				rollnumber[j] = rollnumber[j + 1];
																				rollnumber[j + 1] = vari;

																				vari = midmarks[j];
																				midmarks[j] = midmarks[j + 1];
																				midmarks[j + 1] = vari;

																				vari = finalmarks[j];
																				finalmarks[j] = finalmarks[j + 1];
																				finalmarks[j + 1] = vari;



																				vari = classs[j];
																				classs[j] = classs[j + 1];
																				classs[j + 1] = vari;


																				int vari1 = grade[j];
																				grade[j] = grade[j + 1];
																				grade[j + 1] = vari1;
																			}
																		}
																	}
																	for (int i = 0; i < count; i++)
																	{
																		if (grade[i] < ch1)
																		{

																			rollnumber22[i] = rollnumber[i];
																			midmarks22[i] = midmarks[i];
																			finalmarks22[i] = finalmarks[i];
																			classs22[i] = classs[i];
																			grade22[i] = grade[i];

																			count22++;


																		}

																	}


																										cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count22; i++)
				{
					cout << rollnumber22[i] << "\t\t" << midmarks22[i] << "\t\t" << finalmarks22[i] << "\t\t" << classs22[i] <<
						"\t" << grade22[i] << "\t\t" << endl;
				}
				cout << endl << endl;

																}
																else
																	if (op == "16")
																	{
																		char ch2;
																		cout << "Enter the X grade:   ";
																		cin >> ch2;

																		int rollnumber22[100];
																		float midmarks22[100];
																		float finalmarks22[100];
																		int classs22[100];
																		char grade22[100];
																		int count22 = 0;

																		for (int i = 0; i < 100; i++)
																		{
																			for (int j = 0; j < count - 1; j++)
																			{
																				if (grade[j] > grade[j + 1])
																				{
																					float vari = rollnumber[j];
																					rollnumber[j] = rollnumber[j + 1];
																					rollnumber[j + 1] = vari;

																					vari = midmarks[j];
																					midmarks[j] = midmarks[j + 1];
																					midmarks[j + 1] = vari;

																					vari = finalmarks[j];
																					finalmarks[j] = finalmarks[j + 1];
																					finalmarks[j + 1] = vari;



																					vari = classs[j];
																					classs[j] = classs[j + 1];
																					classs[j + 1] = vari;


																					int vari1 = grade[j];
																					grade[j] = grade[j + 1];
																					grade[j + 1] = vari1;
																				}
																			}
																		}

																		for (int i = 0; i < count; i++)
																		{
																			if (ch2 > grade[i])
																			{

																				rollnumber22[i] = rollnumber[i];
																				midmarks22[i] = midmarks[i];
																				finalmarks22[i] = finalmarks[i];
																				classs22[i] = classs[i];
																				grade22[i] = grade[i];

																				count22++;

																			}
																		}

																		for (int i = 0; i < 100; i++)
																		{
																			for (int j = 0; j < count22 - 1; j++)
																			{
																				if (grade22[j] < grade22[j + 1])
																				{
																					float vari = rollnumber22[j];
																					rollnumber22[j] = rollnumber22[j + 1];
																					rollnumber22[j + 1] = vari;

																					vari = midmarks22[j];
																					midmarks22[j] = midmarks22[j + 1];
																					midmarks22[j + 1] = vari;

																					vari = finalmarks22[j];
																					finalmarks22[j] = finalmarks22[j + 1];
																					finalmarks22[j + 1] = vari;


																					vari = classs22[j];
																					classs22[j] = classs22[j + 1];
																					classs22[j + 1] = vari;


																					int vari1 = grade22[j];
																					grade22[j] = grade22[j + 1];
																					grade22[j + 1] = vari1;
																				}
																			}
																		}



																											cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count22; i++)
				{
					cout << rollnumber22[i] << "\t\t" << midmarks22[i] << "\t\t" << finalmarks22[i] << "\t\t" << classs22[i] <<
						"\t" << grade22[i] << "\t\t" << endl;
				}
				cout << endl << endl;
																	}
																	else
																		if (op == "17")
																		{
																			char ch3;
																			cout << "Enter the X grade:   ";
																			cin >> ch3;

																			int rollnumber22[100];
																			float midmarks22[100];
																			float finalmarks22[100];
																			int classs22[100];
																			char grade22[100];
																			int count22 = 0;


																			for (int i = 0; i < 100; i++)
																			{
																				for (int j = 0; j < count - 1; j++)
																				{
																					if (grade[j] < grade[j + 1])
																					{
																						float vari = rollnumber[j];
																						rollnumber[j] = rollnumber[j + 1];
																						rollnumber[j + 1] = vari;

																						vari = midmarks[j];
																						midmarks[j] = midmarks[j + 1];
																						midmarks[j + 1] = vari;

																						vari = finalmarks[j];
																						finalmarks[j] = finalmarks[j + 1];
																						finalmarks[j + 1] = vari;


																						vari = classs[j];
																						classs[j] = classs[j + 1];
																						classs[j + 1] = vari;


																						int vari1 = grade[j];
																						grade[j] = grade[j + 1];
																						grade[j + 1] = vari1;
																					}
																				}
																			}


																			for (int i = 0; i < count; i++)
																			{
																				if (ch3 <= grade[i])
																				{

																					rollnumber22[i] = rollnumber[i];
																					midmarks22[i] = midmarks[i];
																					finalmarks22[i] = finalmarks[i];
																					classs22[i] = classs[i];
																					grade22[i] = grade[i];

																					count22++;

																				}
																			}
																			for (int i = 0; i < 100; i++)
																			{
																				for (int j = 0; j < count22 - 1; j++)
																				{
																					if (grade22[j] > grade22[j + 1])
																					{
																						float vari = rollnumber22[j];
																						rollnumber22[j] = rollnumber22[j + 1];
																						rollnumber22[j + 1] = vari;

																						vari = midmarks22[j];
																						midmarks22[j] = midmarks22[j + 1];
																						midmarks22[j + 1] = vari;

																						vari = finalmarks22[j];
																						finalmarks22[j] = finalmarks22[j + 1];
																						finalmarks22[j + 1] = vari;


																						vari = classs22[j];
																						classs22[j] = classs22[j + 1];
																						classs22[j + 1] = vari;


																						int vari1 = grade22[j];
																						grade22[j] = grade22[j + 1];
																						grade22[j + 1] = vari1;
																					}
																				}
																			}


																												cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count22; i++)
				{
					cout << rollnumber22[i] << "\t\t" << midmarks22[i] << "\t\t" << finalmarks22[i] << "\t\t" << classs22[i] <<
						"\t" << grade22[i] << "\t\t" << endl;
				}
				cout << endl << endl;
																		}
																		else
																			if (op == "18")
																			{
																				char ch4;
																				cout << "Enter the X grade:   ";
																				cin >> ch4;

																				int rollnumber22[100];
																				float midmarks22[100];
																				float finalmarks22[100];
																				int classs22[100];
																				char grade22[100];
																				int count22 = 0;


																				for (int i = 0; i < 100; i++)
																				{
																					for (int j = 0; j < count - 1; j++)
																					{
																						if (grade[j] < grade[j + 1])
																						{
																							float vari = rollnumber[j];
																							rollnumber[j] = rollnumber[j + 1];
																							rollnumber[j + 1] = vari;

																							vari = midmarks[j];
																							midmarks[j] = midmarks[j + 1];
																							midmarks[j + 1] = vari;

																							vari = finalmarks[j];
																							finalmarks[j] = finalmarks[j + 1];
																							finalmarks[j + 1] = vari;


																							vari = classs[j];
																							classs[j] = classs[j + 1];
																							classs[j + 1] = vari;


																							int vari1 = grade[j];
																							grade[j] = grade[j + 1];
																							grade[j + 1] = vari1;
																						}
																					}
																				}


																				for (int i = 0; i < count; i++)
																				{
																					if (ch4 <= grade[i])
																					{

																						rollnumber22[i] = rollnumber[i];
																						midmarks22[i] = midmarks[i];
																						finalmarks22[i] = finalmarks[i];
																						classs22[i] = classs[i];
																						grade22[i] = grade[i];

																						count22++;

																					}
																				}


																													cout << endl << endl;
				cout << "Roll Number  " << " Midterm marks  " << " Final Marks  " << " Class  " << "  Grade " << endl;
				for (int i = 0; i < count22; i++)
				{
					cout << rollnumber22[i] << "\t\t" << midmarks22[i] << "\t\t" << finalmarks22[i] << "\t\t" << classs22[i] <<
						"\t" << grade22[i] << "\t\t" << endl;
				}
				cout << endl << endl;
																			}


																			else
																				if (op == "e" || op == "E")
																				{
																					cout << "   PROGRAM ENDS HERE...";
																				}
																				else cout << endl << endl << endl << "Invalid input" << endl << endl << endl;


	}
	while ((op != "e") && (op != "E"));

















	system("pause");
	return 0;
}