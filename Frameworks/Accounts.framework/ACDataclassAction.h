/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACDataclassAction : NSObject <ACProtobufCoding, NSSecureCoding> {
    NSArray * _affectedContainers;
    bool  _isDestructive;
    long long  _type;
}

@property (nonatomic, readonly) NSArray *affectedContainers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDestructive;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)actionWithType:(long long)arg1;
+ (id)destructiveActionWithType:(long long)arg1;
+ (id)destructiveActionWithType:(long long)arg1 affectedContainers:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_encodeProtobuf;
- (id)_encodeProtobufData;
- (id)_initWithProtobuf:(id)arg1;
- (id)_initWithProtobufData:(id)arg1;
- (id)affectedContainers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 destructivity:(bool)arg2 affectedContainers:(id)arg3;
- (bool)isDestructive;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
