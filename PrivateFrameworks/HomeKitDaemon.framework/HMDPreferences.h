/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPreferences : HMFObject <HMFObject> {
    NSMutableDictionary * _preferences;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *preferences;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (void)addPreference:(id)arg1;
- (id)init;
- (id)preferenceForKey:(id)arg1;
- (id)preferences;
- (id)propertyDescription;
- (id)propertyQueue;

@end
