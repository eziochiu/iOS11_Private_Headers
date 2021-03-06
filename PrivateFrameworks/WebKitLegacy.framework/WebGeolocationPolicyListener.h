/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct RefPtr<WebCore::Geolocation> { 
        struct Geolocation {} *m_ptr; 
    }  _geolocation;
    struct RetainPtr<WebView *> { 
        void *m_ptr; 
    }  _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allow;
- (void)deny;
- (void)denyOnlyThisRequest;
- (id)initWithGeolocation:(struct Geolocation { int (**x1)(); struct ScriptExecutionContext {} *x2; unsigned int x3; struct Weak<WebCore::JSDOMObject> { struct WeakImpl {} *x_4_1_1; } x4; unsigned int x5; struct HashSet<WTF::RefPtr<WebCore::GeoNotifier>, WTF::PtrHash<WTF::RefPtr<WebCore::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier> > > { struct HashTable<WTF::RefPtr<WebCore::GeoNotifier>, WTF::RefPtr<WebCore::GeoNotifier>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier> > > { struct RefPtr<WebCore::GeoNotifier> {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_6_1_1; } x6; struct Watchers { struct HashMap<int, WTF::RefPtr<WebCore::GeoNotifier>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier> > > { struct HashTable<int, WTF::KeyValuePair<int, WTF::RefPtr<WebCore::GeoNotifier> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<int, WTF::RefPtr<WebCore::GeoNotifier> > >, WTF::IntHash<unsigned int>, WTF::HashMap<int, WTF::RefPtr<WebCore::GeoNotifier>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier> > >::KeyValuePairTraits, WTF::HashTraits<int> > { struct KeyValuePair<int, WTF::RefPtr<WebCore::GeoNotifier> > {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_1_2_1; } x_7_1_1; struct HashMap<WTF::RefPtr<WebCore::GeoNotifier>, int, WTF::PtrHash<WTF::RefPtr<WebCore::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier> >, WTF::HashTraits<int> > { struct HashTable<WTF::RefPtr<WebCore::GeoNotifier>, WTF::KeyValuePair<WTF::RefPtr<WebCore::GeoNotifier>, int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RefPtr<WebCore::GeoNotifier>, int> >, WTF::PtrHash<WTF::RefPtr<WebCore::GeoNotifier> >, WTF::HashMap<WTF::RefPtr<WebCore::GeoNotifier>, int, WTF::PtrHash<WTF::RefPtr<WebCore::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier> >, WTF::HashTraits<int> >::KeyValuePairTraits, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier> > > { struct KeyValuePair<WTF::RefPtr<WebCore::GeoNotifier>, int> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_2_2_1; } x_7_1_2; } x7; }*)arg1 forWebView:(id)arg2;
- (bool)shouldClearCache;

@end
