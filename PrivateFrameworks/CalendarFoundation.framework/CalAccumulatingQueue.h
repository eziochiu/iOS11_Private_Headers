/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalAccumulatingQueue : NSObject {
    id /* block */  _block;
    NSMutableDictionary * _context;
    float  _delay;
    bool  _executionPending;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _tags;
}

- (void).cxx_destruct;
- (void)executeBlock;
- (id)initWithQueue:(id)arg1 andBlock:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1 andBlock:(id /* block */)arg2 delay:(float)arg3;
- (void)updateTags:(id)arg1;
- (void)updateTags:(id)arg1 withContext:(id)arg2;
- (void)updateTagsAndExecuteBlock:(id)arg1;
- (void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2;

@end