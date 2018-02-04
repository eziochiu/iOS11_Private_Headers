/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTHeadlineResults : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _expirationDate;
    NSOrderedSet * _sections;
}

@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSOrderedSet *sections;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (unsigned long long)headlineCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSections:(id)arg1 expirationDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;

@end
