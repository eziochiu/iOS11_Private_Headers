/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLGradientSolver : NSObject {
    id /* block */  _batchPredictionCalculator;
    PMLSparseMatrix * _covariates;
    id /* block */  _gradientCalculator;
    bool  _intercept;
    float  _learningRate;
    PMLModelRegressor * _objective;
    id /* block */  _predictionCalculator;
    PMLModelWeights * _weights;
}

@property (nonatomic, retain) PMLSparseMatrix *covariates;
@property bool intercept;
@property (nonatomic, retain) PMLModelRegressor *objective;
@property (nonatomic, retain) PMLModelWeights *weights;

- (void).cxx_destruct;
- (id)batchPredict:(id)arg1;
- (id)computeAvgGradientWithIterations:(unsigned long long)arg1;
- (id)covariates;
- (id)init;
- (id)initWithLearningRate:(float)arg1 weights:(id)arg2 gradientCalculator:(id /* block */)arg3 predictionCalculator:(id /* block */)arg4 batchPredictionCalculator:(id /* block */)arg5;
- (id)initWithLearningRate:(float)arg1 weights:(id)arg2 intercept:(bool)arg3 gradientCalculator:(id /* block */)arg4 predictionCalculator:(id /* block */)arg5 batchPredictionCalculator:(id /* block */)arg6;
- (bool)intercept;
- (float)meanSquaredError;
- (id)objective;
- (float)predict:(id)arg1;
- (void)setCovariates:(id)arg1;
- (void)setIntercept:(bool)arg1;
- (void)setObjective:(id)arg1;
- (void)setWeights:(id)arg1;
- (void)solve;
- (void)solveForCovariates:(id)arg1 objectives:(id)arg2;
- (void)solveWithAvgGradient:(float*)arg1 maxNumberOfIterations:(unsigned long long)arg2;
- (id)weights;

@end
