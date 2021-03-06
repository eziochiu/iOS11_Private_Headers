/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNBufferingObservable : CNObservable {
    <CNObservable> * _observable;
    NSMutableArray * _results;
    <_CNBufferingStrategy> * _strategy;
}

- (void).cxx_destruct;
- (id)initWithBufferingStrategy:(id)arg1 observable:(id)arg2;
- (id)initWithLength:(unsigned long long)arg1 observable:(id)arg2;
- (id)initWithLength:(unsigned long long)arg1 timeInterval:(double)arg2 scheduler:(id)arg3 observable:(id)arg4;
- (id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2 observable:(id)arg3;
- (void)sendBufferedResultsToObserver:(id)arg1;
- (id)subscribe:(id)arg1;

@end
