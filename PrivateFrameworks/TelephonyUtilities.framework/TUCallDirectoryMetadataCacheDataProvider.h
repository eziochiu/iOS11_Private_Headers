/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider {
    CXCallDirectoryManager * _callDirectoryManager;
    int  _identificationEntriesChangedNotifyToken;
}

@property (nonatomic, readonly) CXCallDirectoryManager *callDirectoryManager;
@property (nonatomic, readonly) int identificationEntriesChangedNotifyToken;

- (void).cxx_destruct;
- (id)callDirectoryManager;
- (void)dealloc;
- (int)identificationEntriesChangedNotifyToken;
- (id)init;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;

@end
