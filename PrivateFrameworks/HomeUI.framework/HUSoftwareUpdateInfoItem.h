/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateInfoItem : HFItem <HFHomeKitItemProtocol> {
    NSString * _publisher;
    HMSoftwareUpdate * _softwareUpdate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) NSString *publisher;
@property (nonatomic, readonly) HMSoftwareUpdate *softwareUpdate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)homeKitObject;
- (id)init;
- (id)initWithSoftwareUpdate:(id)arg1 publisher:(id)arg2;
- (id)publisher;
- (id)softwareUpdate;

@end
