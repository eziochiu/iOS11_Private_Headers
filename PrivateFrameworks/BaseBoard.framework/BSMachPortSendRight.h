/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMachPortSendRight : BSMachPortRight <NSCopying>

+ (void)_queue_destroyPort:(unsigned int)arg1;
+ (id)_rightDescription;
+ (id)bootstrapLookUpPortWithName:(id)arg1;
+ (id)bootstrapLookUpWithName:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)taskNamePortForPID:(int)arg1;
+ (id)wrapSendRight:(unsigned int)arg1;

- (bool)_queue_isUsable;
- (bool)_shouldInvalidateOnEncode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initFromReceiveRight:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCopyOfPort:(unsigned int)arg1;
- (id)initWithCopyOfRight:(id)arg1;
- (id)initWithNonRetainingPort:(unsigned int)arg1;
- (id)initWithPort:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1 assumeOwnership:(bool)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned int)sendRight;

@end