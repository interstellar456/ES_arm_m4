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
// Author - Kinshuk Srivastava
// Include files
#include "main.h"
#include "filter_final.h"
#include "filter_final_terminate.h"
#include "mbed.h"
//#include "rt_nonfinite.h"
Serial pc(USBTX, USBRX);

// Function Declarations
static void argInit_1x101_real_T(double result[101]);
static void argInit_1x11_real_T(double result[11]);
static double argInit_real_T();
static void main_filter_final();

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

static void main_filter_final()
{
  while(1)
  {
    double dv[101];
    double y[101];
    double b_tmp[11];
    double a_tmp[11];
    char key = 'a';
  // Initialize function 'filter_final' input arguments.
  // Initialize function input argument 'b'.
    argInit_1x11_real_T(b_tmp);
    argInit_1x11_real_T(a_tmp);
  // Initialize function input argument 'a'.
  // Initialize function input argument 'r'.
  // Call the entry-point 'filter_final'.
    argInit_1x101_real_T(dv);
    while(key == 'a')
    {
        pc.printf("Hi\n");
        pc.scanf(" %c",&key);
    }
    pc.printf("Enter vector b,11 dim\n");
    for(int i = 0; i < 11; i++)
    {
        pc.scanf("%lf",&b_tmp[i]);
    }
    pc.printf("B vec received\n");
    for(int i = 0; i < 11; i ++)
    {
        pc.printf("%lf\n",b_tmp[i]);
    }
    pc.printf("Enter vector a, 11 dim\n");
    for(int i = 0; i < 11; i ++)
    {
        pc.scanf("%lf",&a_tmp[i]);
    }
    pc.printf("B vec received\n");
    for(int i = 0; i < 11; i++)
    {
        pc.printf("%lf\n",a_tmp[i]);
    }
    pc.printf("Enter data on which the filter is to be applied\n");
    for(int i = 0; i < 101; i++)
    {
        pc.scanf("%lf",&dv[i]);
    }
    pc.printf("entered data = \n");
    for(int i = 0; i < 101; i++)
    {
        pc.printf("%lf\n",dv[i]);
    }
    filter_final(b_tmp, a_tmp, dv, y);
    pc.printf("Transmitting result\n");
    for(int i = 0; i < 101; i++)
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
  main_filter_final();

  // Terminate the application.
  // You do not need to do this more than one time.
  filter_final_terminate();
  return 0;
}

// End of code generation (main.cpp)
