/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBulletinBoardCameraNotificationAssociation : HMFObject {
    HMDCameraProfile * _cameraProfile;
    NSMutableSet * _notificationGeneratingServicesInRoom;
    NSMutableSet * _notificationGeneratingServicesWithCamera;
}

@property (nonatomic, readonly) HMDCameraProfile *cameraProfile;
@property (nonatomic, readonly) NSMutableSet *notificationGeneratingServicesInRoom;
@property (nonatomic, readonly) NSMutableSet *notificationGeneratingServicesWithCamera;

- (void).cxx_destruct;
- (id)cameraProfile;
- (id)description;
- (id)initWithCameraProfile:(id)arg1;
- (id)notificationGeneratingServicesInRoom;
- (id)notificationGeneratingServicesWithCamera;

@end
