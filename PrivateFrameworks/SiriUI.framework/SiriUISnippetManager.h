/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISnippetManager : NSObject {
    AFClientPluginManager * _pluginManager;
    NSDictionary * _snippetExtensionsCache;
    NSObject<OS_dispatch_queue> * _snippetExtensionsQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_compareObject:(id)arg1 toObject:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)_createDebugViewControllerForAceObject:(id)arg1;
- (bool)_listItem:(id)arg1 isEqualToListItem:(id)arg2;
- (bool)_listItem:(id)arg1 isPreferredOverListItem:(id)arg2;
- (void)_prewarmSnippetExtensionsCacheSynchronously;
- (id)_snippetExtensionsCache;
- (id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2;
- (id)extensionForSnippet:(id)arg1;
- (id)filteredDisambiguationListItems:(id)arg1;
- (id)init;
- (id)listItemToPickInAutodisambiguationForListItems:(id)arg1;
- (void)prewarmSnippetExtensionsCache;
- (id)snippetViewControllerForSnippet:(id)arg1;
- (id)speakableProviderForObject:(id)arg1;
- (id)transcriptItemForObject:(id)arg1;

@end
