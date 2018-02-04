/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPCompanionLinkDevice : NSObject <NSSecureCoding> {
    NSString * _groupID;
    NSString * _identifier;
    NSString * _model;
    NSString * _name;
    NSString * _role;
}

@property (nonatomic, readonly, copy) NSString *groupID;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *role;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)model;
- (id)name;
- (id)role;
- (void)setIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRole:(id)arg1;

@end
