/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPDropCap : NSObject <NSCopying> {
    unsigned long long  _charCount;
    TSSPropertyMap * _characterStyleOverridePropertyMap;
    NSArray * _spacings;
}

@property (nonatomic, readonly) unsigned long long charCount;
@property (nonatomic, readonly, retain) TSSPropertyMap *characterStyleOverridePropertyMap;
@property (nonatomic, readonly, retain) NSArray *spacings;

+ (id)dropCapWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 lineCount:(unsigned long long)arg3;
+ (id)dropCapWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 spacing:(id)arg3;
+ (id)dropCapWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 spacings:(id)arg3;

- (unsigned long long)charCount;
- (id)characterStyleOverridePropertyMap;
- (unsigned long long)computedFlagsForSpacing:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 spacings:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)spacings;

@end