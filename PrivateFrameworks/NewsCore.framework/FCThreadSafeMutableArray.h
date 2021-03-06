/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCThreadSafeMutableArray : NSObject {
    NSMutableArray * _array;
    FCMutexLock * _mutexLock;
}

@property (nonatomic, readonly, copy) NSArray *readOnlyArray;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)readOnlyArray;

@end
