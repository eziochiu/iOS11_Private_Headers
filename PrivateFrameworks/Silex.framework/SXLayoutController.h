/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayoutController : NSObject {
    SXLayoutOperation * _currentLayoutOperation;
    <SXLayoutControllerDelegate> * _delegate;
    <SXDynamicAdController> * _dynamicAdController;
    SXLayoutBlueprint * _lastLayoutBlueprint;
    NSOperationQueue * _layoutOperationQueue;
    NSString * _targetComponentIdentifier;
}

@property (nonatomic, retain) SXLayoutOperation *currentLayoutOperation;
@property (nonatomic) <SXLayoutControllerDelegate> *delegate;
@property (nonatomic, readonly) <SXDynamicAdController> *dynamicAdController;
@property (nonatomic, readonly) SXLayoutBlueprint *lastLayoutBlueprint;
@property (nonatomic, readonly) NSOperationQueue *layoutOperationQueue;
@property (nonatomic, retain) NSString *targetComponentIdentifier;

- (void).cxx_destruct;
- (id)currentLayoutOperation;
- (id)delegate;
- (id)dynamicAdController;
- (void)finalizeLayoutForLayoutOperation:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)lastLayoutBlueprint;
- (void)layoutForAttributes:(id)arg1 dataProvider:(id)arg2;
- (void)layoutForAttributes:(id)arg1 existingLayoutBlueprint:(id)arg2 dataProvider:(id)arg3;
- (id)layoutOperationQueue;
- (void)setCurrentLayoutOperation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTargetComponentIdentifier:(id)arg1;
- (void)setupDynamicAdControllerWithContext:(id)arg1;
- (id)targetComponentIdentifier;

@end
