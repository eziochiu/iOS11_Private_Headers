/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSTipsManager : NSObject {
    NSMutableDictionary * _collectionImageDownloadHandlerMap;
    NSMutableDictionary * _collectionImageDownloadTasksMap;
    NSObject<OS_os_transaction> * _collectionImageFetchTransaction;
    NSBundle * _frameworkBundle;
    NSXPCConnection * _xpcConnection;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_destroyXPCConnection;
- (void)activateCollectionIdentifier:(id)arg1 context:(id)arg2;
- (id)collectionImageDownloadHandlerMap;
- (id)collectionImageDownloadTasksMap;
- (void)collectionImageForCollectionIdentifier:(id)arg1 languageCode:(id)arg2 fetchIfNeeded:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)collectionImageNameWithCollectionIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)localizedStringForKey:(id)arg1 localizedStringsFileName:(id)arg2;
- (id)model;
- (id)welcomeInformation;
- (id)xpcConnection;

@end
