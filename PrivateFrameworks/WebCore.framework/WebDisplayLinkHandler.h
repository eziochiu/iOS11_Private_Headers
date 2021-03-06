/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebDisplayLinkHandler : NSObject {
    CADisplayLink * m_displayLink;
    struct DisplayRefreshMonitorIOS { int (**x1)(); unsigned int x2; bool x3; bool x4; bool x5; int x6; unsigned int x7; struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { unsigned char x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct HashTable<WebCore::DisplayRefreshMonitorClient *, WebCore::DisplayRefreshMonitorClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct DisplayRefreshMonitorClient {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_9_1_1; } x9; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > {} *x10; struct RetainPtr<WebDisplayLinkHandler> { void *x_11_1_1; } x11; } * m_monitor;
}

- (void)dealloc;
- (void)handleDisplayLink:(id)arg1;
- (id)initWithMonitor:(struct DisplayRefreshMonitorIOS { int (**x1)(); unsigned int x2; bool x3; bool x4; bool x5; int x6; unsigned int x7; struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { unsigned char x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct HashTable<WebCore::DisplayRefreshMonitorClient *, WebCore::DisplayRefreshMonitorClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct DisplayRefreshMonitorClient {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_9_1_1; } x9; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > {} *x10; struct RetainPtr<WebDisplayLinkHandler> { void *x_11_1_1; } x11; }*)arg1;
- (void)invalidate;

@end
