/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationResult : NSObject <NSSecureCoding> {
    NSError * _error;
    CKOperationMetrics * _metrics;
    NSString * _operationID;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) CKOperationMetrics *metrics;
@property (nonatomic, retain) NSString *operationID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)metrics;
- (id)operationID;
- (void)setError:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setOperationID:(id)arg1;

@end
