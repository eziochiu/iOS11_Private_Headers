/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface ObjectUpdates : NSObject {
    NSMutableArray * _addedObjects;
    NSMutableArray * _removedObjects;
}

@property (nonatomic, readonly) NSMutableArray *addedObjects;
@property (nonatomic, readonly) NSMutableArray *removedObjects;

- (void).cxx_destruct;
- (id)addedObjects;
- (id)description;
- (id)init;
- (id)removedObjects;

@end
