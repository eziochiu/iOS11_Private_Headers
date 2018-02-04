/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLLogRegEvaluationPlan : NSObject <PMLPlanProtocol> {
    PMLModelWeights * _currentModelWeights;
    unsigned long long  _evaluationLevel;
    bool  _isMultiLabel;
    bool  _isSynchronous;
    unsigned long long  _maxSessionsLimit;
    struct NSString { Class x1; } * _planId;
    unsigned long long  _positiveLabel;
    PMLSessionDescriptor * _sessionDescriptor;
    double  _skew;
    PMLTrainingStore * _store;
    double  _threshold;
    <PMLEvaluationTrackerProtocol> * _tracker;
}

@property (nonatomic, readonly) PMLModelWeights *currentModelWeights;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSynchronous;
@property (nonatomic, readonly) unsigned long long maxSessionsLimit;
@property (nonatomic, readonly) NSString *planId;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) PMLTrainingStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PMLEvaluationTrackerProtocol> *tracker;

- (void).cxx_destruct;
- (id)currentModelWeights;
- (id)description;
- (id)init;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 planId:(struct NSString { Class x1; }*)arg3 isSynchronous:(bool)arg4 sessionDescriptor:(id)arg5 maxSessionsLimit:(unsigned long long)arg6 currentModelWeights:(id)arg7 skew:(double)arg8 threshold:(double)arg9 isMultiLabel:(bool)arg10 positiveLabel:(unsigned long long)arg11 evaluationLevel:(unsigned long long)arg12;
- (bool)isSynchronous;
- (void)loadSessionsSince:(double)arg1 block:(id /* block */)arg2;
- (unsigned long long)maxSessionsLimit;
- (id)normalizeRegressor:(id)arg1;
- (struct NSString { Class x1; }*)planId;
- (id)run;
- (void)runUntilDoneForTesting;
- (id)runWhile:(id /* block */)arg1 didFinish:(bool*)arg2;
- (id)sessionDescriptor;
- (id)store;
- (id)toPlistWithChunks:(id)arg1;
- (id)tracker;

@end
