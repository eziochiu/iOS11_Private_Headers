/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCacheableObjectManager : NSObject {
    <INCacheableObjectManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _observerMutationQueue;
}

@property (nonatomic) <INCacheableObjectManagerDelegate> *delegate;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (id)delegate;
- (void)forwardCacheableObject:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
