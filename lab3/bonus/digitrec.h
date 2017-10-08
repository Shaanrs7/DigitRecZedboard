//===========================================================================
// digitrec.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef DIGITREC_H
#define DIGITREC_H

#include<hls_stream.h>

#include "typedefs.h"
#include "training_data.h"

// The K_CONST value: number of nearest neighbors
#define K_CONST 3
//Constants to find bit distance in O(1)

#define m1    0x5555555555555555 //binary: 0101...
#define m2    0x3333333333333333 //binary: 00110011..
#define m4    0x0f0f0f0f0f0f0f0f //binary:  4 zeros,  4 ones ...
#define m8    0x00ff00ff00ff00ff //binary:  8 zeros,  8 ones ...
#define m16   0x0000ffff0000ffff //binary: 16 zeros, 16 ones ...
#define m32   0x00000000ffffffff //binary: 32 zeros, 32 ones
#define hff   0xffffffffffffffff //binary: all ones
#define h01   0x0101010101010101 //the sum of 256 to the power of 0,1,2,3...




// Top function for synthesis
void dut(
    hls::stream<bit32_t> &strm_in,
    hls::stream<bit32_t> &strm_out
);

// Top function for digit recognition
bit4_t digitrec( digit input );

// Given the testing instance and a (new) training instance,
// this function is expected to maintain/update an array of
// K minimum distances per training set
void inline update_knn( int64_t test_inst, int64_t train_inst, int min_distances[K_CONST] );

// Among 10xK minimum distance values, this function finds 
// the actual K nearest neighbors and determine the final 
// output based on the most common digit represented by these
// nearest neighbors (i.e., a vote among KNNs). 
int knn_vote( int min_distances[10][K_CONST] );

#endif
