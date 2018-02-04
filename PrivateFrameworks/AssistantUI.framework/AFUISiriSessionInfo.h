/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriSessionInfo : NSObject <NSCopying, NSSecureCoding> {
    AFAccount * _activeAccount;
    NSString * _assistantVersion;
    NSString * _identifier;
}

@property (nonatomic, copy) AFAccount *activeAccount;
@property (nonatomic, copy) NSString *assistantVersion;
@property (nonatomic, readonly, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1;
- (id)_setPropertyValue:(id)arg1 withSelector:(SEL)arg2;
- (id)_strippedInfo;
- (id)activeAccount;
- (bool)applyInfo:(id)arg1;
- (id)assistantVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setActiveAccount:(id)arg1;
- (id)setActiveAccountAndGenerateLightweightInfo:(id)arg1;
- (void)setAssistantVersion:(id)arg1;
- (id)setAssistantVersionAndGenerateLightweightInfo:(id)arg1;

@end
