/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLPreinstalledPlansManager : NSObject {
    NSString * _plansDirectory;
    PMLTrainingStore * _store;
}

+ (id)preinstalledPlansDirectory;

- (void).cxx_destruct;
- (bool)availableSessionsWithDescriptor:(id)arg1 satisfyRequirements:(id)arg2;
- (void)enumeratePreinstalledPlansWithBlock:(id /* block */)arg1;
- (bool)hasAlreadyRunPlan:(struct NSString { Class x1; }*)arg1;
- (id)init;
- (id)initWithStore:(id)arg1;
- (id)initWithStore:(id)arg1 plansDirectory:(id)arg2;
- (id)preinstalledPlanByFilename:(id)arg1;
- (void)runWhile:(id /* block */)arg1;
- (void)runWhileDoneForTesting;

@end
