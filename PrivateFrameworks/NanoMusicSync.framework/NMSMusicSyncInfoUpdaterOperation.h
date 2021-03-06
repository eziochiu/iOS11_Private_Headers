/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMusicSyncInfoUpdaterOperation : MPAsyncOperation {
    NMSMutableMediaSyncInfo * _syncInfo;
}

@property (nonatomic, readonly) NMSMutableMediaSyncInfo *syncInfo;

+ (id)sharedLibraryRequestQueue;

- (void).cxx_destruct;
- (void)execute;
- (id)syncInfo;

@end
