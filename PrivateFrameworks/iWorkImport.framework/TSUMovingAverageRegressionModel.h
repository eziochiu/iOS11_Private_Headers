/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUMovingAverageRegressionModel : TSURegressionModel {
    int  mNumTrendPoint;
    double * mTrendXValues;
    double * mTrendYValues;
}

- (double)coefficientAtIndex:(int)arg1;
- (void)dealloc;
- (id)equationString;
- (double)estimateForX:(double*)arg1;
- (id)getEquationStringAndBuildSuperscriptRangesArray;
- (id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4;
- (id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5;
- (id)initWithMappings:(int)arg1 xs:(id)arg2 ys:(id)arg3 numPeriod:(int)arg4;
- (int)numCoefficients;
- (int)numSuperscriptRanges;
- (int)numTrendPoint;
- (double)rSquared;
- (int)regressionType;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })superscriptRangeAtIndex:(int)arg1;
- (double)trendXValueAtIndex:(int)arg1;
- (double)trendYValueAtIndex:(int)arg1;

@end