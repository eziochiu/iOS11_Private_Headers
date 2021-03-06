/* made by EzioChiu
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface SFTranscription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _formattedString;
    NSArray * _segments;
}

@property (nonatomic, readonly, copy) NSString *formattedString;
@property (nonatomic, readonly, copy) NSArray *segments;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSegments:(id)arg1 formattedString:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)segments;

@end
