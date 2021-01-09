//
//  Student License - for use by students to meet course requirements and
//  perform academic research at degree granting institutions only.  Not
//  for government, commercial, or other organizational use.
//
//  main.cpp
//
//  Code generation for function 'main'
//


//***********************************************************************
// This automatically generated example C++ main file shows how to call
// entry-point functions that MATLAB Coder generated. You must customize
// this file for your application. Do not modify this file directly.
// Instead, make a copy of this file, modify it, and integrate it into
// your development environment.
//
// This file initializes entry-point function arguments to a default
// size and value before calling the entry-point functions. It does
// not store or use any values returned from the entry-point functions.
// If necessary, it does pre-allocate memory for returned values.
// You can use this file as a starting point for a main function that
// you can deploy in your application.
//
// After you copy the file, and before you deploy it, you must make the
// following changes:
// * For variable-size function arguments, change the example sizes to
// the sizes that your application requires.
// * Change the example values of function arguments to the values that
// your application requires.
// * If the entry-point functions return values, store these values or
// otherwise use them as required by your application.
//
//***********************************************************************
// Kinshuk Srivastava 
// Include files
#include "main.h"
#include "filter_rrr.h"
#include "filter_rrr_terminate.h"
//#include "rt_nonfinite.h"
#include "mbed.h"

Serial pc(USBTX, USBRX);
// Function Declarations
static void argInit_1x101_real_T(double result[101]);
static void argInit_1x11_real_T(double result[11]);
static double argInit_real_T();
static void main_filter_rrr();

// Function Definitions
static void argInit_1x101_real_T(double result[101])
{
  // Loop over the array to initialize each element.
  for (int idx1 = 0; idx1 < 101; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_real_T();
  }
}

static void argInit_1x11_real_T(double result[11])
{
  // Loop over the array to initialize each element.
  for (int idx1 = 0; idx1 < 11; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_real_T();
  }
}

static double argInit_real_T()
{
  return 0.0;
}

static void main_filter_rrr()
{
  while(1)
  {
    double dv1[101];
    double y[101];
    double dv[11];
    double num = 0.0;
    char key = 'a';
  // Initialize function 'filter_rrr' input arguments.
  // Initialize function input argument 'b'.
  // Initialize function input argument 'r'.
  // Call the entry-point 'filter_rrr'.
    argInit_1x11_real_T(dv);
    argInit_1x101_real_T(dv1);
    while(key == 'a')
    {
        pc.scanf(" %c",&key);
    }
    if(key == 'p')
        break;
    pc.printf("enter numerator (only a single number\n");
    pc.scanf("%lf",&num);
    pc.printf("recieved data\n");
    pc.printf("%lf\n",num);
    pc.printf("enter denominator (11 dim vector)\n");
    for(int i = 0; i < 11; i++)
    {
        pc.scanf("%lf",&dv[i]);
    }
    pc.printf("recieved data\n");
    for(int i = 0; i < 11; i++)
    {
        pc.printf("%lf\n",dv[i]);
    }
    pc.printf("enter data on which the filter is to be applied\n");
    for(int i = 0; i < 101; i++)
    {
        pc.scanf("%lf",&dv1[i]);
    }
    pc.printf("recieved data\n");
    for(int i = 0; i < 11; i++)
    {
        pc.printf("%lf\n",dv1[i]);
    }
    filter_rrr(dv, num, dv1, y);
    pc.printf("transmitting result\n");
    for(int i = 0; i < 101; i ++)
    {
        pc.printf("%lf\n",y[i]);
    }
 }
}

int main(int, const char * const [])
{
  // The initialize function is being called automatically from your entry-point function. So, a call to initialize is not included here. 
  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_filter_rrr();

  // Terminate the application.
  // You do not need to do this more than one time.
  filter_rrr_terminate();
  return 0;
}

// End of code generation (main.cpp)
