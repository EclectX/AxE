#include "util.h"
#include "print.h"


// supported sizes: 256 (default), 512, 1024, 2048
#define DATASET_SIZE 256
int data[DATASET_SIZE];

// total swaps executed so far
unsigned long swaps = 0;


void
print_data(int *data, unsigned size)
{
  display_print(0,0, "DATA DUMP:\n");
  for (unsigned i=0; i < size; i++)
    Print("  data[%d] = %d\n", PRINTVARS(i, data[i]));
}

void
bubblesort(int *data, unsigned size)
{
  for (unsigned i=0; i < size-1; i++)
  {
    int swapped = 0;
    for (unsigned j=0; j < size-1; j++)
    {
      if (data[j] > data[j+1])
      {
        int tmp = data[j];
        data[j] = data[j+1];
        data[j+1] = tmp;
        swapped = 1;
        swaps++;
      }
    }
    // done?
    if (!swapped)
      break;
  }
}

void
my_main()
{
  // initialize the pseudo-RNG
  srand(42);
  // mysrand(time(NULL));

  // initialize the array to sort
  for (unsigned i=0; i < DATASET_SIZE; i++)
    data[i] = rand();
  print_data(data, DATASET_SIZE);

  bubblesort(data, DATASET_SIZE);
  print_data(data, DATASET_SIZE);

  // check the array
  for (unsigned i=0; i < DATASET_SIZE-1; i++)
  {
    if (data[i] > data[i+1])
    {
      display_print(0,0, "ERROR: data is not properly sorted.\n");
      return;
    }
  }
  Print("INFO: %d swaps executed.\n", PRINTVARS(swaps));
  display_print(0,0, "INFO: data is properly sorted.\n");

  
}