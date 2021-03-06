/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQueryOperationResult : CKOperationResult <NSSecureCoding> {
    CKQueryCursor * _cursor;
}

@property (nonatomic, retain) CKQueryCursor *cursor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)cursor;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCursor:(id)arg1;

@end
