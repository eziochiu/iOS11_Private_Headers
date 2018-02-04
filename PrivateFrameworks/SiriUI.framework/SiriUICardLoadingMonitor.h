/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUICardLoadingMonitor : NSObject {
    NSMutableArray * _observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)broadcastCardSnippet:(id)arg1;
- (id)init;
- (bool)isTrackingObserver:(id)arg1;
- (void)removeObserver:(id)arg1;

@end