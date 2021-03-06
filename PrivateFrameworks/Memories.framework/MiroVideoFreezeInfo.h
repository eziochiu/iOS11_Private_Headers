/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroVideoFreezeInfo : MiroFreezeInfo {
    NSArray * _ranges;
}

@property (nonatomic, retain) NSArray *ranges;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (id)initWithData:(id)arg1;
- (bool)isAdded;
- (bool)isFreeze;
- (bool)isRemoved;
- (id)ranges;
- (void)setRanges:(id)arg1;
- (id)token;

@end
