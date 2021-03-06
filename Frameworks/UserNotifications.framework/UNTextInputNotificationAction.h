/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNTextInputNotificationAction : UNNotificationAction {
    NSString * _textInputButtonTitle;
    NSString * _textInputPlaceholder;
}

@property (nonatomic, readonly, copy) NSString *textInputButtonTitle;
@property (nonatomic, readonly, copy) NSString *textInputPlaceholder;

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)textInputButtonTitle;
- (id)textInputPlaceholder;

@end
