/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIPlaceholderProviderFactory : NSObject <CNUIPlaceholderProviderFactory> {
    <CNScheduler> * _highPriorityLock;
    <CNUIPRLikenessProvider> * _loadingPlaceholderProvider;
    <CNUIPRLikenessProvider> * _placeholderProvider;
    <CNScheduler> * _resourceLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CNScheduler> *highPriorityLock;
@property (readonly) <CNUIPRLikenessProvider> *loadingPlaceholderProvider;
@property (readonly) <CNUIPRLikenessProvider> *placeholderProvider;
@property (nonatomic, retain) <CNScheduler> *resourceLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)highPriorityLock;
- (id)init;
- (id)loadingPlaceholderProvider;
- (id)placeholderProvider;
- (id)resourceLock;
- (void)setHighPriorityLock:(id)arg1;
- (void)setResourceLock:(id)arg1;

@end