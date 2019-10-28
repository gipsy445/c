#include<stdio.h>
#include<conio.h>
long signed int other_to_decimal (long signed int, long signed int);
long signed int decimal_to_other (long signed int, long signed int);
void
main ()
{
  long signed int inputbase, outputbase, inputnumber, outputnumber, s;
  printf ("Enter the number and its base:");
  scanf ("%ld%ld", &inputnumber, &inputbase);
  printf ("Enter the base you want to convert the number to:");
  scanf ("%ld", &outputbase);
  if (outputbase == 10)
    {
      outputnumber = other_to_decimal (inputnumber, inputbase);
    }

  else
    {

      if (inputbase == 10)
	{
	  outputnumber = decimal_to_other (inputnumber, outputbase);
	}
      else
	{
	  s = other_to_decimal (inputnumber, inputbase);
	  outputnumber = decimal_to_other (s, outputbase);
	}
    }
  printf ("The converted number is %ld", outputnumber);
  getch ();
}

long signed int
other_to_decimal (long signed int inputnumber, long signed int inputbase)
{
  long signed int k, op, s, p;
  op = 0;
  k = inputnumber;
  p = 1;
  while (k != 0)
    {
      s = k % 10;
      k = k / 10;
      op = op + s * p;
      p = p * inputbase;
    }
  return op;
}

long signed int
decimal_to_other (long signed int outputnumber, long signed int outputbase)
{
  long signed int op = 0, p, k, s;
  k = outputnumber;
  p = 1;
  while (k != 0)
    {
      s = k % outputbase;
      k = k / outputbase;
      op = op + s * p;
      p = p * 10;
    }
  return op;
}
