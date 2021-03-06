/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingPrepareFolderForSharingOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    BRCAppLibrary * _appLibrary;
    BRCServerItem * _serverItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performPCSChainBatch;
- (id)createActivity;
- (id)initWithItem:(id)arg1;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
