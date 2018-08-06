/* ***************************************************
 * Model File: Model::Impelementation::RoverController::Main
 * Model Path: C:\Users\Thomas\source\repos\StaticLibrary\RoverControllerModel.eap
 * 
 * 2018-08-07  - 01:04
 * ***************************************************
 *  */
#ifndef H_MAIN
#define H_MAIN

#include "roverCommunicationLib.h" /* Include for 'relation to classifier' 'roverCommunicationLib' */
#include "RoverController.h" /* Include for 'relation to classifier' 'RoverController' */
#include "Windows.h" /* Include for 'relation to classifier' 'Windows' */
#include "stdio.h" /* Include for 'relation to classifier' 'stdio' */

typedef int Main;

/* Returns a pointer to the statically allocated structure for Main.
 * Automatically added and generated.
 * @return Pointer to the statically allocated structure for Main. */
Main* Main_new(void);

/* Operation 'main' of class 'Main' */
int main(Main* const me);

/* Operation 'DistanceHandler' of class 'Main' */
DWORD WINAPI Main_DistanceHandler(Main* const me);

/* Operation 'AngleHandler' of class 'Main' */
DWORD WINAPI Main_AngleHandler(Main* const me);

#endif /* #ifndef H_MAIN */

