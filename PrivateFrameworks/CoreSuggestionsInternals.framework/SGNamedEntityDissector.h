/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGNamedEntityDissector : SGPipelineDissector {
    int  _linguisticDataNotificationToken;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    void * _nlpTagger;
    bool  _significanceCheckEnabled;
}

- (id)_entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 dataDetections:(id)arg3 source:(id)arg4 cloudSync:(bool)arg5 algorithms:(id)arg6;
- (bool)_isSignificantMessage:(id)arg1 store:(id)arg2;
- (void)_registerForNotifications;
- (void)dealloc;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 source:(id)arg3 cloudSync:(bool)arg4 algorithms:(id)arg5;
- (id)init;
- (id)initWithSignificanceCheckEnabled:(bool)arg1;

@end
