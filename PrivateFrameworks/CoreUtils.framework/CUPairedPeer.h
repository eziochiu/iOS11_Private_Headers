/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPairedPeer : NSObject <NSSecureCoding> {
    NSDictionary * _acl;
    NSData * _altIRK;
    NSUUID * _identifier;
    NSDictionary * _info;
    NSString * _label;
    NSString * _model;
    NSString * _name;
    NSData * _publicKey;
}

@property (nonatomic, copy) NSDictionary *acl;
@property (nonatomic, copy) NSData *altIRK;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDictionary *info;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSData *publicKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acl;
- (id)altIRK;
- (id)description;
- (id)detailedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (id)model;
- (id)name;
- (id)publicKey;
- (void)setAcl:(id)arg1;
- (void)setAltIRK:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPublicKey:(id)arg1;

@end