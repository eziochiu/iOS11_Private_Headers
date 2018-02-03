/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnit : NSObject <NSCopying, NSSecureCoding> {
    NSString * _symbol;
}

@property (readonly, copy) NSString *symbol;

+ (id)new;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbol:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)symbol;

@end
