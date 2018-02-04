/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLLogRegTrainingPlan : NSObject <PMLPlanProtocol> {
    long long  _beforeNoiseScaling;
    float  _constantScaleFactor;
    PMLModelWeights * _currentModelWeights;
    unsigned long long  _currentServerIteration;
    unsigned long long  _evaluationLevel;
    bool  _intercept;
    bool  _isMultiLabel;
    bool  _isSynchronous;
    unsigned long long  _localGradientIterations;
    float  _localLearningRate;
    unsigned long long  _maxSessionsLimit;
    <PMLNoiseStrategy> * _noiseStrategy;
    struct NSString { Class x1; } * _planId;
    unsigned long long  _positiveLabel;
    bool  _reportScale;
    PMLSessionDescriptor * _sessionDescriptor;
    unsigned long long  _sessionsInBatch;
    double  _skew;
    PMLTrainingStore * _store;
    double  _threshold;
    <PMLLogRegTrackerProtocol> * _tracker;
    bool  _useOnlyAppleInternalSessions;
}

@property (nonatomic, readonly) long long beforeNoiseScaling;
@property (nonatomic, readonly) float constantScaleFactor;
@property (nonatomic, readonly) PMLModelWeights *currentModelWeights;
@property (nonatomic, readonly) unsigned long long currentServerIteration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long evaluationLevel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool intercept;
@property (nonatomic, readonly) bool isMultiLabel;
@property (nonatomic, readonly) bool isSynchronous;
@property (nonatomic, readonly) unsigned long long localGradientIterations;
@property (nonatomic, readonly) float localLearningRate;
@property (nonatomic, readonly) unsigned long long maxSessionsLimit;
@property (nonatomic, readonly) NSString *planId;
@property (nonatomic, readonly) unsigned long long positiveLabel;
@property (nonatomic, readonly) bool reportScale;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) PMLTrainingStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PMLLogRegTrackerProtocol> *tracker;
@property (nonatomic, readonly) bool useOnlyAppleInternalSessions;

- (void).cxx_destruct;
- (long long)beforeNoiseScaling;
- (float)constantScaleFactor;
- (id)copyWithNewWeights:(id)arg1;
- (id)currentModelWeights;
- (unsigned long long)currentServerIteration;
- (id)description;
- (unsigned long long)evaluationLevel;
- (id)evaluationMetricsForPredictions:(id)arg1 objectives:(id)arg2 predicate:(id /* block */)arg3 start:(id)arg4;
- (id)init;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(struct NSString { Class x1; }*)arg4 isSynchronous:(bool)arg5 sessionDescriptor:(id)arg6 currentServerIteration:(unsigned long long)arg7 currentModelWeights:(id)arg8 useOnlyAppleInternalSessions:(bool)arg9 skew:(double)arg10 threshold:(double)arg11 isMultiLabel:(bool)arg12 positiveLabel:(unsigned long long)arg13;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(struct NSString { Class x1; }*)arg4 isSynchronous:(bool)arg5 sessionDescriptor:(id)arg6 maxSessionsLimit:(unsigned long long)arg7 sessionsInBatch:(unsigned long long)arg8 currentServerIteration:(unsigned long long)arg9 currentModelWeights:(id)arg10 localLearningRate:(float)arg11 localGradientIterations:(unsigned long long)arg12 useOnlyAppleInternalSessions:(bool)arg13 skew:(double)arg14 threshold:(double)arg15 isMultiLabel:(bool)arg16 intercept:(bool)arg17 positiveLabel:(unsigned long long)arg18;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(struct NSString { Class x1; }*)arg4 isSynchronous:(bool)arg5 sessionDescriptor:(id)arg6 maxSessionsLimit:(unsigned long long)arg7 sessionsInBatch:(unsigned long long)arg8 currentServerIteration:(unsigned long long)arg9 currentModelWeights:(id)arg10 localLearningRate:(float)arg11 localGradientIterations:(unsigned long long)arg12 useOnlyAppleInternalSessions:(bool)arg13 skew:(double)arg14 threshold:(double)arg15 isMultiLabel:(bool)arg16 intercept:(bool)arg17 positiveLabel:(unsigned long long)arg18 beforeNoiseScaling:(long long)arg19 constantScaleFactor:(float)arg20 evaluationLevel:(unsigned long long)arg21 reportScale:(bool)arg22;
- (bool)intercept;
- (bool)isMultiLabel;
- (bool)isSynchronous;
- (void)loadSessionsSince:(double)arg1 block:(id /* block */)arg2;
- (unsigned long long)localGradientIterations;
- (float)localLearningRate;
- (unsigned long long)maxSessionsLimit;
- (id)normalizeRegressor:(id)arg1;
- (struct NSString { Class x1; }*)planId;
- (unsigned long long)positiveLabel;
- (bool)reportScale;
- (void)runUntilDoneForTesting;
- (id)runWhile:(id /* block */)arg1 didFinish:(bool*)arg2;
- (float)scaleFactorFor:(id)arg1;
- (id)sessionDescriptor;
- (id)store;
- (id)toPlistWithChunks:(id)arg1;
- (id)tracker;
- (id)train;
- (bool)useOnlyAppleInternalSessions;

@end
