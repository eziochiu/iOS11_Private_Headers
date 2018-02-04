/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCError : NSObject

+ (id)errorConnectionTimedOutWithUserInfo:(id)arg1;
+ (id)errorDirectoryNotEmptyWithUserInfo:(id)arg1;
+ (id)errorInternalWithUserInfo:(id)arg1;
+ (id)errorInvalidArgumentWithUserInfo:(id)arg1;
+ (id)errorInvalidHeaderWithUserInfo:(id)arg1;
+ (id)errorItemAlreadyExistsWithUserInfo:(id)arg1;
+ (id)errorItemNotDownloadedWithUserInfo:(id)arg1;
+ (id)errorItemNotUploadedWithUserInfo:(id)arg1;
+ (id)errorItemNotYetAvilableWithUserInfo:(id)arg1;
+ (id)errorMistmatchedTypeWithUserInfo:(id)arg1;
+ (id)errorNoPermissionWithUserInfo:(id)arg1;
+ (id)errorNoPreviewAvailableWithUserInfo:(id)arg1;
+ (id)errorNoSuchItemWithUserInfo:(id)arg1;
+ (id)errorNoThumbnailAvailableWithUserInfo:(id)arg1;
+ (id)errorNotConnectedWithUserInfo:(id)arg1;
+ (id)errorVersionConflictWithUserInfo:(id)arg1;
+ (id)errorWithUnderlyingError:(id)arg1 path:(id)arg2;
+ (id)transformFileManagerError:(id)arg1;
+ (id)userInfo:(id)arg1 addingDescription:(id)arg2;
+ (id)userInfoWithArgument:(id)arg1;
+ (id)userInfoWithFullPath:(id)arg1;
+ (id)userInfoWithHeaderName:(id)arg1;
+ (id)userInfoWithItem:(id)arg1;
+ (id)userInfoWithRelativePath:(id)arg1;
+ (id)userInfoWithURL:(id)arg1;

@end
