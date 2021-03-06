/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKWebsiteDataStoreConfiguration : NSObject {
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _cookieStorageFileURL;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _indexedDBDatabaseDirectoryURL;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _webSQLDatabaseDirectoryURL;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _webStorageDirectoryURL;
}

@property (setter=_setCookieStorageFile:, nonatomic, copy) NSURL *_cookieStorageFile;
@property (setter=_setIndexedDBDatabaseDirectory:, nonatomic, copy) NSURL *_indexedDBDatabaseDirectory;
@property (setter=_setWebSQLDatabaseDirectory:, nonatomic, copy) NSURL *_webSQLDatabaseDirectory;
@property (setter=_setWebStorageDirectory:, nonatomic, copy) NSURL *_webStorageDirectory;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_cookieStorageFile;
- (id)_indexedDBDatabaseDirectory;
- (void)_setCookieStorageFile:(id)arg1;
- (void)_setIndexedDBDatabaseDirectory:(id)arg1;
- (void)_setWebSQLDatabaseDirectory:(id)arg1;
- (void)_setWebStorageDirectory:(id)arg1;
- (id)_webSQLDatabaseDirectory;
- (id)_webStorageDirectory;

@end
