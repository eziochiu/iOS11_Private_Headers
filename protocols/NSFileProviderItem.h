/* made by EzioChiu.
 */

@protocol NSFileProviderItem <NSObject>

@required

- (NSString *)filename;
- (NSString *)itemIdentifier;
- (NSString *)parentItemIdentifier;
- (NSString *)typeIdentifier;

@optional

- (unsigned long long)capabilities;
- (NSNumber *)childItemCount;
- (NSDate *)contentModificationDate;
- (NSDate *)creationDate;
- (NSNumber *)documentSize;
- (NSError *)downloadingError;
- (NSNumber *)favoriteRank;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isMostRecentVersionDownloaded;
- (bool)isShared;
- (bool)isSharedByCurrentUser;
- (bool)isTrashed;
- (bool)isUploaded;
- (bool)isUploading;
- (NSDate *)lastUsedDate;
- (NSPersonNameComponents *)mostRecentEditorNameComponents;
- (NSPersonNameComponents *)ownerNameComponents;
- (NSData *)tagData;
- (NSError *)uploadingError;
- (NSDictionary *)userInfo;
- (NSData *)versionIdentifier;

@end