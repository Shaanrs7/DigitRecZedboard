//==========================================================================
//digitrec.cpp
//==========================================================================
// @brief: A k-nearest-neighbor implementation for digit recognition (k=1)

#include "digitrec.h"

//----------------------------------------------------------
// Top function
//----------------------------------------------------------

void dut(
    hls::stream<bit32_t> &strm_in,
    hls::stream<bit32_t> &strm_out
)
{
  // -----------------------------
  // YOUR CODE GOES HERE
  // -----------------------------
  digit input_t;
  bit4_t output_t;
  
  bit32_t input_lo = strm_in.read();
  bit32_t input_hi = strm_in.read();

  input_t(31,0) = input_lo;
  input_t(input_t.length()-1,32) = input_hi;

  output_t = digitrec(input_t);

 strm_out.write(output_t);

}

//----------------------------------------------------------
// Digitrec
//----------------------------------------------------------
// @param[in] : input - the testing instance
// @return : the recognized digit (0~9)

bit4_t digitrec( digit input ) 
{
  #include "training_data.h"
  int temp; //bit4_t
  // This array stores K minimum distances per training set
  int knn_set[10][K_CONST]; //bit6

  int64_t training_instance;
  // Initialize the knn set
  for ( int i = 0; i < 10; ++i )
    for ( int k = 0; k < K_CONST; ++k )
      // Note that the max distance is 49
      knn_set[i][k] = 50; 

  L1800: for ( int i = 0; i < TRAINING_SIZE; ++i ) {
    L10: for ( int j = 0; j < 10; j++ ) {
      // Read a new instance from the training set
      training_instance = training_data[j][i];//digit
      // Update the KNN set
      update_knn( input, training_instance, knn_set[j] );
    }
  } 

  // Compute the final output
temp= knn_vote( knn_set ); 
//  std::cout<<"Temp\t"<<temp<<"\n";

  return (bit4_t)temp;
}


//-----------------------------------------------------------------------
// update_knn function
//-----------------------------------------------------------------------
// Given the test instance and a (new) training instance, this
// function maintains/updates an array of K minimum
// distances per training set.

// @param[in] : test_inst - the testing instance
// @param[in] : train_inst - the training instance
// @param[in/out] : min_distances[K_CONST] - the array that stores the current
//                  K_CONST minimum distance values per training set

/*const uint64_t m1  = 0x5555555555555555; //binary: 0101...
const uint64_t m2  = 0x3333333333333333; //binary: 00110011..
const uint64_t m4  = 0x0f0f0f0f0f0f0f0f; //binary:  4 zeros,  4 ones ...
const uint64_t m8  = 0x00ff00ff00ff00ff; //binary:  8 zeros,  8 ones ...
const uint64_t m16 = 0x0000ffff0000ffff; //binary: 16 zeros, 16 ones ...
const uint64_t m32 = 0x00000000ffffffff; //binary: 32 zeros, 32 ones
const uint64_t hff = 0xffffffffffffffff; //binary: all ones
const uint64_t h01 = 0x0101010101010101; //the sum of 256 to the power of 0,1,2,3...*/


/*int inline count_ones(int64_t x)
{
	 x -= (x >> 1) & m1;             //put count of each 2 bits into those 2 bits
	 x = (x & m2) + ((x >> 2) & m2); //put count of each 4 bits into those 4 bits 
	 x = (x + (x >> 4)) & m4;        //put count of each 8 bits into those 8 bits 
	 return  (x * h01) >> 56;  //returns left 8 bits of x + (x<<8) + (x<<16) + (x<<24) + ... 
}
*/



void inline  update_knn( int64_t test_inst, int64_t train_inst, int min_distances[K_CONST] )//digit digit bit
{
  // Compute the difference using XOR
  int64_t x = test_inst ^ train_inst;
//const uint64_t m1  = 0x5555555555555555; //binary: 0101...
//const uint64_t m2  = 0x3333333333333333; //binary: 00110011..
//const uint64_t m4  = 0x0f0f0f0f0f0f0f0f; //binary:  4 zeros,  4 ones ...
//const uint64_t m8  = 0x00ff00ff00ff00ff; //binary:  8 zeros,  8 ones ...
//const uint64_t m16 = 0x0000ffff0000ffff; //binary: 16 zeros, 16 ones ...
//const uint64_t m32 = 0x00000000ffffffff; //binary: 32 zeros, 32 ones
//const uint64_t hff = 0xffffffffffffffff; //binary: all ones
//const uint64_t h01 = 0x0101010101010101; //the sum of 256 to the power of 0,1,2,3...
  int dist = 0; //bit6
  /*// Count the number of set bits
  for ( int i = 0; i < 49; ++i ) { 
    dist += diff[i];
  }*/
/*	while(diff!=0)//for(int i=0;i<49;i++)
    //#pragma HLS unroll
	{   //if (diff!=0)
			diff = diff&(diff-1);
  		dist++;
	}
  */
 // uint64_t x = diff;
/* x -= (x >> 1) & m1;             //put count of each 2 bits into those 2 bits
     x = (x & m2) + ((x >> 2) & m2); //put count of each 4 bits into those 4 bits 
         x = (x + (x >> 4)) & m4;        //put count of each 8 bits into those 8 bits 
	     x += x >>  8;  //put count of each 16 bits into their lowest 8 bits
	         x += x >> 16;  //put count of each 32 bits into their lowest 8 bits
		     x += x >> 32;  //put count of each 64 bits into their lowest 8 bits
		         dist =  x & 0x7f;

*/
  x -= (x >> 1) & m1;             //put count of each 2 bits into those 2 bits
  x = (x & m2) + ((x >> 2) & m2); //put count of each 4 bits into those 4 bits 
  x = (x + (x >> 4)) & m4;        //put count of each 8 bits into those 8 bits 
  dist = (x * h01) >> 56;  //returns left 8 bits of x + (x<<8) + (x<<16) + (x<<24) + ... 


//  dist = count_ones(x);


//	int brkflg =0;
	for (int i=0; i<K_CONST; i++)
		{	//if (brkflg ==0)
					if (min_distances[i] > dist)
				{
					min_distances[i] = dist;
					//std::cout<<"Count Value "<< countVal<<"\n\n";
					//std::cout<<"K_Min "<<min_distances[i]<<"\t\t\t";
					//brkflg =1;
				    break;
				}
				
	//std::cout<<"K_Min "<<min_distances[i]<<"\t\t\t";

		}

  

  // -----------------------------
  // YOUR CODE GOES HERE
  // -----------------------------


}


//-----------------------------------------------------------------------
// knn_vote function
//-----------------------------------------------------------------------
// Given 10xK minimum distance values, this function 
// finds the actual K nearest neighbors and determines the
// final output based on the most common digit represented by 
// these nearest neighbors (i.e., a vote among KNNs). 
//
// @param[in] : knn_set - 10xK_CONST min distance values
// @return : the recognized digit
// 

int knn_vote( int knn_set[10][K_CONST] )
{
  // -----------------------------
  // YOUR CODE GOES HERE
  // -----------------------------

int voteArray[10] = {0,0,0,0,0,0,0,0,0,0};
int minArray[K_CONST];
int maxVal = 0;
int maxIndex = 0;
int sum = 0;
int minSum = 255;
int sumArr[10][1];
int breakflg1 =0;
int breakflg2 =0;
int breakflg3 =0;
//	bit4_t breakflg4 =0;


	   for(int i =0; i<10;i++)
			   sumArr[i][0] = 0;

/*	   for (int i = 0; i<10;i++)
	 {
			 for(int j=0; j<K_CONST;j++)
			{
					std::cout<<knn_set[i][j]<<"   ";
			}	
			 std::cout<<"\n";
	 }
*/

	for ( int k = 0; k < K_CONST; ++k )
      // Note that the max distance is 49
		{
			minArray[k] = 50;
		}
	for ( int i = 0; i<10; i++)
		{
			for (int j = 0; j<K_CONST;j++)
				{
					 for(int k =0; k<K_CONST;k++)
					    { if (breakflg1 ==0)
								{		
						if(knn_set[i][j]==minArray[k])
								breakflg1 =1;
								//break;

					    else if(knn_set[i][j]<minArray[k])
								{
									minArray[k] = knn_set[i][j];
									breakflg1 =1;
									//break;
								}
								}
						}
					 breakflg1 = 0;
				}
		}
	for ( int i = 0; i<10; i++)
		{
			for (int j = 0; j<K_CONST;j++)
				{
					 for(int k =0; k<K_CONST;k++)
					    { if (breakflg2 ==0)
						{
					    	if(knn_set[i][j]==minArray[k])
							{	
								voteArray[i]++;
								//break;
							}
							if (voteArray[i]==K_CONST)
								{
									for(int l =0;l<K_CONST;l++)
										{//	std::cout<<"KNN "<<knn_set[i][l]<<"\n";
											sumArr[i][0]+=knn_set[i][l];
										}
									//std::cout<<"\n\n";
									breakflg2 =1;
								//	break;
								}
						}
						}
					 breakflg2 =0;
				}
		}
	
	for(int i =0; i<10; i++)
	{
		sum+=sumArr[i][0];
	}
	if (sum>0)
		{ //std::cout<<"I AM HERE!!!\n\n";
		for(int i =0; i<10; i++)
			{	//std::cout<<sumArr[i][0]<<"\t";
					
				if ((voteArray[i]==K_CONST) && (sumArr[i][0]<minSum))
					{	minSum = sumArr[i][0];
					
//	std::cout<<"MINSUM "<<minSum<<"\n";	
						maxIndex = i;
					}
			}
		//std::cout<<"\n";

		}

	else
		{//std::cout<<"I AM ELSE!!!\n";

			for (int i = 0; i<10;i++)
				{ if (breakflg3 ==0)
					{
					if (maxVal==K_CONST)
							//break;
							breakflg3=1;
					if (voteArray[i]>=maxVal)
						{
							maxVal = voteArray[i];
							maxIndex = i;
						}
					}
				}
			breakflg3 =0;
		}
/*
	std::cout<<"\n\n";
	for(int j =0;j<K_CONST;j++)
	std::cout<<minArray[j]<<"\t";
	std::cout<<"\n";

	for(int i =0;i<10;i++)
	std::cout<<voteArray[i]<<"\t";
	std::cout<<"\n";
		for(int i =0;i<10;i++)
	std::cout<<sumArr[i][0]<<"\t";
	std::cout<<"\n";

	//std::cout << "#" << std::dec << num_test_insts;

	std::cout<<"END*********************************************"<<"\n";
		std::cout<<maxVal<<"\tMaxIndex\t"<<(bit4_t)maxIndex;
	std::cout<<"\n";
*/
return maxIndex;





}

