/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIProactiveTrigger : NSObject <NSCopying> {
    NSDictionary * _attributes;
    unsigned char  _triggerSourceType;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) unsigned char triggerSourceType;

- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithSourceType:(unsigned char)arg1 attributes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned char)triggerSourceType;

@end
