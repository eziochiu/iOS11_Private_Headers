/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBlockOperation : NSOperation {
    id  _private2;
    void * _reserved2;
}

@property (readonly, copy) NSArray *executionBlocks;

+ (id)blockOperationWithBlock:(id /* block */)arg1;

- (void)addExecutionBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)executionBlocks;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (void)main;

@end
