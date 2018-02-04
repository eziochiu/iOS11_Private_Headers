/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKReport : NSObject <NSCopying, NSSecureCoding> {
    struct NSArray { Class x1; } * _components;
}

@property (nonatomic, readonly) NSArray *components;

+ (id)reportWithComponents:(struct NSArray { Class x1; }*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrayForJSON;
- (struct NSArray { Class x1; }*)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponents:(struct NSArray { Class x1; }*)arg1;
- (bool)isEmpty;
- (id)reportByMergingReport:(id)arg1;

@end