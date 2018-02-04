/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinBoardDefaults : BSAbstractDefaultDomain

@property (nonatomic) long long globalContentPreviewSetting;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
