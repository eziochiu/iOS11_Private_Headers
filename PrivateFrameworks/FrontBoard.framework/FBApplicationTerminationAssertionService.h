/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationTerminationAssertionService : NSObject <BKSTerminationAssertionObserver> {
    <FBApplicationTerminationAssertionServiceDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBApplicationTerminationAssertionServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (unsigned long long)_efficacyForReason:(id)arg1;
- (void)_notifyDelegateOfAcquisitionForBundleID:(id)arg1 efficacy:(unsigned long long)arg2;
- (void)_notifyDelegateOfRelinquishForBundleID:(id)arg1;
- (id)_reasonForEfficacy:(unsigned long long)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)terminationAssertionsForBundleID:(id)arg1;
- (id)terminationAssertionsForBundleID:(id)arg1 withReason:(id)arg2;

@end
