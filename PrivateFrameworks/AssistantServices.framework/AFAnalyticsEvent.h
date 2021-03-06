/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding> {
    NSData * _contextData;
    long long  _contextDataType;
    unsigned long long  _timestamp;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSData *contextData;
@property (nonatomic, readonly) long long contextDataType;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextData;
- (long long)contextDataType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 timestamp:(unsigned long long)arg2 contextDataType:(long long)arg3 contextData:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)timestamp;
- (long long)type;

@end
