/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPreference : HMFObject {
    NSString * _key;
    unsigned long long  _options;
}

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly, copy) NSData *dataValue;
@property (readonly) NSString *key;
@property (nonatomic, readonly, copy) NSNumber *numberValue;
@property (readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *stringValue;

+ (id)shortDescription;

- (void).cxx_destruct;
- (bool)boolValue;
- (id)dataValue;
- (id)init;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2;
- (id)key;
- (id)numberValue;
- (unsigned long long)options;
- (id)shortDescription;
- (id)stringValue;

@end
