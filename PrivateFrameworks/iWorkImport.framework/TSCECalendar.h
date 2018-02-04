/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECalendar : NSObject {
    NSCalendar * mCalendar;
    NSObject<OS_dispatch_semaphore> * mSem;
}

- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)dateFromComponents:(id)arg1;
- (void)dealloc;
- (void)extractComponentsFromDate:(id)arg1 year:(long long*)arg2 month:(long long*)arg3 day:(long long*)arg4;
- (void)extractComponentsFromDate:(id)arg1 year:(long long*)arg2 month:(long long*)arg3 day:(long long*)arg4 hour:(long long*)arg5 minute:(long long*)arg6 second:(long long*)arg7;
- (id)init;
- (id)initWithCalendarIdentifier:(id)arg1;
- (void)setTimeZone:(id)arg1;

@end