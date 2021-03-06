/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBehaviorOverride : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _effectiveIntervals;
    unsigned long long  _mode;
    unsigned long long  _overrideType;
}

@property (nonatomic, copy) NSArray *effectiveIntervals;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long overrideType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)effectiveIntervals;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffectiveIntervals:(id)arg1 overrideType:(unsigned long long)arg2;
- (id)initWithOverrideType:(unsigned long long)arg1 mode:(unsigned long long)arg2 effectiveIntervals:(id)arg3;
- (bool)isActiveForDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mode;
- (id)nextOverrideTransitionDateAfterDate:(id)arg1;
- (unsigned long long)overrideType;
- (void)setEffectiveIntervals:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setOverrideType:(unsigned long long)arg1;

@end
