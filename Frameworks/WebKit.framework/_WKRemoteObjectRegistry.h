/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKRemoteObjectRegistry : NSObject {
    struct HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > > { 
        struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >, WTF::StringHash, WTF::HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { 
            struct KeyValuePair<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  _exportedObjects;
    struct HashMap<unsigned long long, PendingReply, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<PendingReply> > { 
        struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, PendingReply>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, PendingReply> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, PendingReply, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<PendingReply> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { 
            struct KeyValuePair<unsigned long long, PendingReply> {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  _pendingReplies;
    struct RetainPtr<NSMapTable> { 
        void *m_ptr; 
    }  _remoteObjectProxies;
    struct unique_ptr<WebKit::RemoteObjectRegistry, std::__1::default_delete<WebKit::RemoteObjectRegistry> > { 
        struct __compressed_pair<WebKit::RemoteObjectRegistry *, std::__1::default_delete<WebKit::RemoteObjectRegistry> > { 
            struct RemoteObjectRegistry {} *__first_; 
        } __ptr_; 
    }  _remoteObjectRegistry;
}

@property (nonatomic, readonly) struct RemoteObjectRegistry { int (**x1)(); id x2; struct MessageSender {} x3; }*remoteObjectRegistry;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_callReplyWithID:(unsigned long long)arg1 blockInvocation:(const struct UserData { struct RefPtr<API::Object> { struct Object {} *x_1_1_1; } x1; }*)arg2;
- (id)_initWithMessageSender:(struct MessageSender { }*)arg1;
- (void)_invalidate;
- (void)_invokeMethod:(const struct RemoteObjectInvocation { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; struct RefPtr<API::Dictionary> { struct Dictionary {} *x_2_1_1; } x2; struct unique_ptr<WebKit::RemoteObjectInvocation::ReplyInfo, std::__1::default_delete<WebKit::RemoteObjectInvocation::ReplyInfo> > { struct __compressed_pair<WebKit::RemoteObjectInvocation::ReplyInfo *, std::__1::default_delete<WebKit::RemoteObjectInvocation::ReplyInfo> > { struct ReplyInfo {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1;
- (void)_releaseReplyWithID:(unsigned long long)arg1;
- (void)_sendInvocation:(id)arg1 interface:(id)arg2;
- (void)registerExportedObject:(id)arg1 interface:(id)arg2;
- (id)remoteObjectProxyWithInterface:(id)arg1;
- (struct RemoteObjectRegistry { int (**x1)(); id x2; struct MessageSender {} x3; }*)remoteObjectRegistry;
- (void)unregisterExportedObject:(id)arg1 interface:(id)arg2;

@end
