/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTNetworkEventTracker : NSObject <NTNetworkEventTracker> {
    PETScalarEventTracker * _MultiFeedNetworkEventTracker;
    PETScalarEventTracker * _MultiFetchNetworkEventTracker;
    PETScalarEventTracker * _OrderFeedNetworkEventTracker;
}

@property (nonatomic, retain) PETScalarEventTracker *MultiFeedNetworkEventTracker;
@property (nonatomic, retain) PETScalarEventTracker *MultiFetchNetworkEventTracker;
@property (nonatomic, retain) PETScalarEventTracker *OrderFeedNetworkEventTracker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)MultiFeedNetworkEventTracker;
- (id)MultiFetchNetworkEventTracker;
- (id)OrderFeedNetworkEventTracker;
- (id)init;
- (void)setMultiFeedNetworkEventTracker:(id)arg1;
- (void)setMultiFetchNetworkEventTracker:(id)arg1;
- (void)setOrderFeedNetworkEventTracker:(id)arg1;
- (void)trackNetworkEvents:(id)arg1;

@end
