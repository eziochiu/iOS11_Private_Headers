/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFQueue : NSObject {
    NSMutableArray * _buffer;
    <MFQueueingStrategy> * _strategy;
}

@property (nonatomic, readonly) NSArray *allObjects;
@property (nonatomic, readonly) NSMutableArray *buffer;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) <MFQueueingStrategy> *strategy;

+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(id /* block */)arg2;
+ (id)priorityQueueWithComparator:(id /* block */)arg1;

- (id)allObjects;
- (id)buffer;
- (unsigned long long)count;
- (void)dealloc;
- (id)debugDescription;
- (id)dequeue;
- (void)dequeueObject:(id)arg1;
- (id)description;
- (id)drain;
- (void)enqueue:(id)arg1;
- (id)init;
- (id)initWithStrategy:(id)arg1;
- (id)peek;
- (id)strategy;

@end