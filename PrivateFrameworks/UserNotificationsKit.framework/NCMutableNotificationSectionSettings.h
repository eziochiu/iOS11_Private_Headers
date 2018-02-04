/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCMutableNotificationSectionSettings : NCNotificationSectionSettings

@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic, copy) NSDictionary *settings;
@property (nonatomic, copy) NSString *subSectionIdentifier;
@property (nonatomic, copy) NSSet *subSectionSettings;

- (void)setSectionIdentifier:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSubSectionIdentifier:(id)arg1;
- (void)setSubSectionSettings:(id)arg1;

@end
