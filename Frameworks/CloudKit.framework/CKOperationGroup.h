/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationGroup : NSObject <NSSecureCoding> {
    NSString * _authPromptReason;
    CKOperationConfiguration * _defaultConfiguration;
    long long  _expectedReceiveSize;
    long long  _expectedSendSize;
    NSString * _name;
    NSString * _operationGroupID;
    NSNumber * _quantityNumber;
    CKOperationGroupSystemImposedInfo * _systemImposedInfo;
}

@property (nonatomic, readonly) long long approximateReceiveBytes;
@property (nonatomic, readonly) long long approximateSendBytes;
@property (copy) NSString *authPromptReason;
@property (copy) CKOperationConfiguration *defaultConfiguration;
@property long long expectedReceiveSize;
@property long long expectedSendSize;
@property (copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *operationGroupID;
@property unsigned long long quantity;
@property (nonatomic, copy) NSNumber *quantityNumber;
@property (nonatomic, retain) CKOperationGroupSystemImposedInfo *systemImposedInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (long long)_approximateBytesForTransferSize:(long long)arg1;
- (long long)approximateReceiveBytes;
- (long long)approximateSendBytes;
- (id)authPromptReason;
- (id)defaultConfiguration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedReceiveSize;
- (long long)expectedSendSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)operationGroupID;
- (unsigned long long)quantity;
- (id)quantityNumber;
- (unsigned long long)resolvedNetworkServiceTypeForConfig:(id)arg1;
- (void)setAuthPromptReason:(id)arg1;
- (void)setDefaultConfiguration:(id)arg1;
- (void)setExpectedReceiveSize:(long long)arg1;
- (void)setExpectedSendSize:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setQuantity:(unsigned long long)arg1;
- (void)setQuantityNumber:(id)arg1;
- (void)setSystemImposedInfo:(id)arg1;
- (id)systemImposedInfo;

@end
