/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySettingGroupMetadata : HMFObject <HMFObject> {
    NSArray * _groups;
    NSString * _name;
    NSArray * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;

+ (id)groupWithDictonaryRepresentation:(id)arg1;
+ (id)groupsWithArrayRepresenation:(id)arg1;

- (void).cxx_destruct;
- (id)groups;
- (id)initWithName:(id)arg1 settings:(id)arg2 groups:(id)arg3;
- (id)modelsWithParentIdentifier:(id)arg1;
- (id)name;
- (id)propertyDescription;
- (id)settings;

@end
