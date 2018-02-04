/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSystemPreference : HMDPreference <HMFObject> {
    NSString * _domain;
    <NSObject> * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) Class superclass;
@property (copy) <NSObject> *value;

- (void).cxx_destruct;
- (bool)boolValue;
- (id)dataValue;
- (id)domain;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 domain:(id)arg3 defaultValue:(id)arg4;
- (id)numberValue;
- (id)propertyDescription;
- (void)setValue:(id)arg1;
- (id)stringValue;
- (id)value;

@end
