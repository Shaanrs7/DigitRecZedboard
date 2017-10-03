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
bit4_t temp;
  // This array stores K minimum distances per training set
  bit6_t knn_set[10][K_CONST];

  // Initialize the knn set
  for ( int i = 0; i < 10; ++i )
    for ( int k = 0; k < K_CONST; ++k )
      // Note that the max distance is 49
      knn_set[i][k] = 50; 

  L1800: for ( int i = 0; i < TRAINING_SIZE; ++i ) {
    L10: for ( int j = 0; j < 10; j++ ) {
      // Read a new instance from the training set
      digit training_instance = training_data[j][i];
      // Update the KNN set
      update_knn( input, training_instance, knn_set[j] );
    }
  } 

  // Compute the final output

		 temp= knn_vote( knn_set ); 
//  std::cout<<"Temp\t"<<temp<<"\n";

  return temp;
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

void update_knn( digit test_inst, digit train_inst, bit6_t min_distances[K_CONST] )
{
  // Compute the difference using XOR
  digit diff = test_inst ^ train_inst;

  bit6_t dist = 0;
  // Count the number of set bits
  for ( int i = 0; i < 49; ++i ) { 
    dist += diff[i];
  }
	bit4_t brkflg =0;
	for (int i=0; i<K_CONST; i++)
		{	if (brkflg ==0)
				{	if (min_distances[i] > dist)
				{
					min_distances[i] = dist;
					//std::cout<<"Count Value "<< countVal<<"\n\n";
					//std::cout<<"K_Min "<<min_distances[i]<<"\t\t\t";
					brkflg =1;
				   // break;
				}
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

bit4_t knn_vote( bit6_t knn_set[10][K_CONST] )
{
  // -----------------------------
  // YOUR CODE GOES HERE
  // -----------------------------

	bit6_t voteArray[10] = {0,0,0,0,0,0,0,0,0,0};
	bit6_t minArray[K_CONST];
	bit6_t maxVal = 0;
	bit6_t maxIndex = 0;
	bit6_t sum = 0;
	bit6_t minSum = 255;
	bit6_t sumArr[10][1];
	bit4_t breakflg1 =0;
	bit4_t breakflg2 =0;
	bit4_t breakflg3 =0;
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
return (bit4_t)maxIndex;





}

