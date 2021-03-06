/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXPathWrapper : NSObject <NSSecureCoding> {
    struct CGPath { } * _path;
}

@property (nonatomic) struct CGPath { }*path;

+ (id)currentSharedInstance;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGPath { }*)path;
- (void)setPath:(struct CGPath { }*)arg1;

@end
