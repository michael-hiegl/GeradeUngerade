//**************************************************************************
//**************************************************************************
//**
//**	Projekt: GeradeUngerade	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 3/15/2022 6:36:18 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int Zahl = 0;



	//Code
	printf("Bitte Zahl eingeben");
	scanf("%i", &Zahl);

	if (Zahl & 1)
	{
		printf("Zahl %i ist ungerade", Zahl);
	}

	else
	{
		printf("Zahl %i ist gerade", Zahl);
	}



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}