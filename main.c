// library imports
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// true & false definitions
#define true 1
#define false 0

int inSpecialChars(char specChars[], char string[]) {
  int isTrue = 0;
  int count = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (string[i] == specChars[j]) {
        count++;
      }
    }
  }
  if (count == 3) { isTrue = 1; }
  return isTrue;
}

void getRandNums(double *num, double *num2, double *num3, double *num4) {
  *num = (rand() % 9) + 1;
  *num2 = (rand() % 9) + 1;
  *num3 = (rand() % 9) + 1;
  *num4 = (rand() % 9) + 1;
}

double runCalculations(char string[], double num, double num2, double num3,
                       double num4) {
  double result;
  for (int i = 0; i < 3; i++) {
    if (i == 0) {
      if (string[i] == '+') {
        printf("%.0f + %.0f = ", num, num2);
        result = num + num2;
        printf("%.0f.\n", result);
      } else if (string[i] == '-') {
        printf("%.0f - %.0f = ", num, num2);
        result = num - num2;
        printf("%.0f.\n", result);
      } else if (string[i] == '*') {
        printf("%.0f * %.0f = ", num, num2);
        result = num * num2;
        printf("%.0f.\n", result);
      } else if (string[i] == '/') {
        printf("%.0f / %.0f = ", num, num2);
        result = num / num2;
        printf("%.0f.\n", result);
      }

    } else if (i == 1) {
      if (string[i] == '+') {
        printf("%.0f + %.0f = ", result, num3);
        result += num3;
        printf("%.0f.\n", result);
      } else if (string[i] == '-') {
        printf("%.0f - %.0f = ", result, num3);
        result -= num3;
        printf("%.0f.\n", result);
      } else if (string[i] == '*') {
        printf("%.0f * %.0f = ", result, num3);
        result *= num3;
        printf("%.0f.\n", result);
      } else if (string[i] == '/') {
        printf("%.0f / %.0f = ", result, num3);
        result /= num3;
        printf("%.0f.\n", result);
      }
    } else if (i == 2) {
      if (string[i] == '+') {
        printf("%.0f + %.0f = ", result, num4);
        result += num4;
        printf("%.0f.\n", result);
      } else if (string[i] == '-') {
        printf("%.0f - %.0f = ", result, num4);
        result -= num4;
        printf("%.0f.\n", result);
      } else if (string[i] == '*') {
        printf("%.0f * %.0f = ", result, num4);
        result *= num4;
        printf("%.0f.\n", result);
      } else if (string[i] == '/') {
        printf("%.0f / %.0f = ", result, num4);
        result /= num4;
        printf("%.0f.\n", result);
      }
    }
  }
  return result;
}


void fillEasySets( double easyModeSets[][4] ) {
  easyModeSets[0][0] = 3;
  easyModeSets[0][1] = 9;
  easyModeSets[0][2] = 4;
  easyModeSets[0][3] = 1;

  easyModeSets[1][0] = 8;
  easyModeSets[1][1] = 5;
  easyModeSets[1][2] = 8;
  easyModeSets[1][3] = 1;

  easyModeSets[2][0] = 6;
  easyModeSets[2][1] = 1;
  easyModeSets[2][2] = 5;
  easyModeSets[2][3] = 1;

  easyModeSets[3][0] = 2;
  easyModeSets[3][1] = 8;
  easyModeSets[3][2] = 7;
  easyModeSets[3][3] = 8;

  easyModeSets[4][0] = 5;
  easyModeSets[4][1] = 2;
  easyModeSets[4][2] = 9;
  easyModeSets[4][3] = 2;

  easyModeSets[5][0] = 2;
  easyModeSets[5][1] = 6;
  easyModeSets[5][2] = 8;
  easyModeSets[5][3] = 4;

  easyModeSets[6][0] = 5;
  easyModeSets[6][1] = 5;
  easyModeSets[6][2] = 4;
  easyModeSets[6][3] = 3;

  easyModeSets[7][0] = 6;
  easyModeSets[7][1] = 6;
  easyModeSets[7][2] = 2;
  easyModeSets[7][3] = 6;

  easyModeSets[8][0] = 8;
  easyModeSets[8][1] = 4;
  easyModeSets[8][2] = 2;
  easyModeSets[8][3] = 6;

  easyModeSets[9][0] = 6;
  easyModeSets[9][1] = 2;
  easyModeSets[9][2] = 8;
  easyModeSets[9][3] = 1;
}


void getSolutions( double solutions[][4] ) {
  int count = 0;
  for ( double i = 1; i < 10; i++ ) {
    for ( double j = 1; j < 10; j++ ) {
      for ( double k = 1; k < 10; k++ ) {
        for ( double l = 1; l < 10; l++ ) {
          if  ( fabs((((i + j) + k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f+%.0f+%.0f\n", i, j, k, l);
          } 
          if  ( fabs((((i + j) + k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f+%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs ((((i + j) + k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f+%.0f*%.0f\n", i, j, k, l);
          }  
          if ( fabs ((((i + j ) + k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f+%.0f/%.0f\n", i, j, k, l);
          } 
          if ( fabs(((( i + j ) - k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f-%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i + j) - k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f-%.0f-%.0f\n", i, j, k, l);
          }  
          if ( fabs((((i + j) - k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f-%.0f*%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i + j) - k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f-%.0f/%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i + j ) * k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f*%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs(((( i + j ) * k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f*%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i + j ) * k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f*%.0f*%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i + j) * k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f*%.0f/%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i + j) / k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f/%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i + j ) / k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f/%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs(((( i + j ) / k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f+%.0f+%.0f\n", i, j, k, l);
          }
          if ( fabs(((( i + j ) / k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f+%.0f/%.0f/%.0f\n", i, j, k, l);
          }  
///////////////////////////////////
          
          if ( fabs((((i - j) + k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f+%.0f+%.0f\n", i, j, k, l);
          }
          
          if ( fabs((((i-j) + k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f+%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i-j) + k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f+%.0f*%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i-j) + k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f/%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i-j) - k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f-%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i-j) - k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f-%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i-j) - k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f-%.0f*%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i-j) - k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f-%.0f/%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i-j) * k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f*%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i-j) * k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f*%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i-j) * k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f*%.0f*%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i-j) * k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f*%.0f/%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i-j) / k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f/%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i-j) / k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f/%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i-j) / k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f/%.0f*%.0f\n", i, j, k, l);
          }
          if ( fabs((((i-j) / k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f-%.0f/%.0f/%.0f\n", i, j, k, l);
          } 
////////////////////////////
          
          if ( fabs((((i*j) + k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f+%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs ((((i*j) + k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f+%.0f-%.0f\n", i, j, k, l);
          }
          if ( fabs ((((i*j) + k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f+%.0f*%.0f\n", i, j, k, l);
          }
          if ( fabs ((((i*j) + k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f+%.0f/%.0f\n", i, j, k, l);
          }
          if ( fabs((((i*j) - k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f-%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i*j) - k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f-%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i*j) - k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f-%.0f*%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i*j) - k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f-%.0f/%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i*j) * k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f*%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i*j) * k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f*%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i*j) * k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f*%.0f*%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i*j) * k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f*%.0f/%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i*j) / k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f/%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i*j) / k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f/%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i*j) / k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f/%.0f*%.0f\n", i, j, k, l);
          }
          if ( fabs((((i*j) / k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f*%.0f/%.0f/%.0f\n", i, j, k, l);
          } 

//////////////////////////
          
          if ( fabs((((i/j) + k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f+%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) + k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f+%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) + k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f+%.0f*%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) + k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f+%.0f/%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) - k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f-%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) - k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f-%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) - k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f-%.0f*%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) - k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f-%.0f/%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) * k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f*%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) * k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f*%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) * k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f*%.0f*%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) * k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f*%.0f/%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) / k) + l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f/%.0f+%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) / k) - l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f/%.0f-%.0f\n", i, j, k, l);
          } 
          if ( fabs((((i/j) / k) * l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f/%.0f*%.0f\n", i, j, k, l);
          }
          if ( fabs((((i/j) / k) / l ) - 24 ) < 0.001  ) {
            solutions[count][0] = i;
            solutions[count][1] = j;
            solutions[count][2] = k;
            solutions[count][3] = l;
            count++; printf("%d. ", count );
            printf("%.0f/%.0f/%.0f/%.0f\n", i, j, k, l);
          } 
        }
      }
    } 
  }
}


void getDebugNums(double *num, double *num2, double *num3, double *num4, double solutions[][4] ) {
  int i = rand() % 3189;
  *num = solutions[i][0];
  *num2 = solutions[i][1];
  *num3 = solutions[i][2];
  *num4 = solutions[i][3];
}

void getEasyNums(double easyNums[][4], double *num, double *num2, double *num3, double *num4) {
  int i = rand() % 10;
  *num = easyNums[i][0];
  *num2 = easyNums[i][1];
  *num3 = easyNums[i][2];
  *num4 = easyNums[i][3];
}

int main(int argc, char *argv[]) {
  srand(1);
  double easyModeSets[10][4];
  double debugSets[3188][4];
  fillEasySets( easyModeSets );

  int debugMode = -1;
  int easyMode = -1;
  int result = strcmp( argv[2], "1" );
  int result2 = strcmp( argv[4], "1" );
  
  if (result == 0) { debugMode = true; }
  else { debugMode = false; }
  if (result2 == 0) { easyMode = true; }
  else { easyMode = false; }

  char greeting[] =
      "Welcome to the game of TwentyFour.\nUse each of the four numbers shown "
      "below exactly once, combining them somehow with the basic mathematical "
      "operators (+,-,*,/) to yield the value twenty-four.\n\n";

  double num, num2, num3, num4;
  char chosenChars[3];
  char specialChars[4] = "*+/-";
  char choice = 'Y';

  printf("%s", greeting);
  
  if ( debugMode ) {
    getSolutions( debugSets );
  }
  
  if ( easyMode ) {
    getEasyNums(easyModeSets, &num, &num2, &num3, &num4);
  } else if ( debugMode ) {
    getDebugNums(&num, &num2, &num3, &num4, debugSets );
  } else { getRandNums( &num, &num2, &num3, &num4 ); }

  int allGood;

  while (choice != 'N') {
    allGood = false;
    // printf("The numbers to use are: %.0f, %.0f, %.0f, %.0f.\n", num, num2, num3, num4);

    while (allGood == false) {
      printf("The numbers to use are: %.0f, %.0f, %.0f, %.0f.\n", num, num2, num3, num4);
      printf("Enter the three operators to be used, in order (+,-,*, or /): ");
      scanf("%s", chosenChars);
      if (strlen(chosenChars) > 3) {
        printf(
            "Error! The number of operators is incorrect. Please try again.\n\n");
        if ( easyMode ) {
          getEasyNums(easyModeSets, &num, &num2, &num3, &num4);
        } else if ( debugMode ) {
          getDebugNums(&num, &num2, &num3, &num4, debugSets );
        } else { getRandNums( &num, &num2, &num3, &num4 ); }
        continue;
      }
      allGood = inSpecialChars(specialChars, chosenChars);
      if (allGood) {
        break;
      } else {
        printf("Error! Invalid operator entered. Please try again.\n\n");
        if ( easyMode ) {
          getEasyNums(easyModeSets, &num, &num2, &num3, &num4);
        } else if ( debugMode ) {
          getDebugNums(&num, &num2, &num3, &num4, debugSets );
        } else { getRandNums( &num, &num2, &num3, &num4 ); }
        continue;
      }
    }

    int result = runCalculations(chosenChars, num, num2, num3, num4);
    if (result != 24) {
      printf("Sorry. Your solution did not evaluate to 24.\n\n");
    } else {
      printf("Well done! You are a math genius.\n");
    }
    printf("Would you like to play again? Enter N for no and any other character for yes. ");

    scanf("%s", &choice);
    printf("\n"); 
    
    if (choice == 'N') {
      break;
    }
  }
  printf("Thanks for playing!\n");

  return 0;
}
// Student
// Arturo Rivera
// Autograder Score
// 0.0 / 75.0
// Question 2
// Program Style
// 0.0 / 25.0 pts
