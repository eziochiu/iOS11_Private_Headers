/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSZeroingWeakReference : NSObject {
    id  _object;
    unsigned long long  _objectAddress;
    Class  _objectClass;
}

@property (nonatomic, readonly) id object;
@property (nonatomic) unsigned long long objectAddress;
@property (nonatomic) Class objectClass;

+ (id)referenceWithObject:(id)arg1;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;
- (unsigned long long)objectAddress;
- (Class)objectClass;
- (void)setObjectAddress:(unsigned long long)arg1;
- (void)setObjectClass:(Class)arg1;

@end