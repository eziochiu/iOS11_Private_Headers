/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNScheduledObservable : CNObservable {
    <CNObservable> * _observable;
    <CNScheduler> * _scheduler;
}

- (void).cxx_destruct;
- (id)initWithObservable:(id)arg1 scheduler:(id)arg2;
- (id)subscribe:(id)arg1;

@end
