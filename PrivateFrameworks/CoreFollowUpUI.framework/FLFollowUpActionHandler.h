/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

@interface FLFollowUpActionHandler : NSObject <FLExtensionHostContextInterface> {
    FLExtensionWrapper * _extensionLoader;
    id /* block */  _extensionRequestedViewControllerPresentation;
    FLFollowUpItem * _followUpItem;
    id /* block */  _handlerCompletion;
    UIViewController * _remoteViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ extensionRequestedViewControllerPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)handlerWithItem:(id)arg1;

- (void).cxx_destruct;
- (void)_loadUrlForAction:(id)arg1;
- (void)_processFollowUpAction:(id)arg1;
- (void)dealloc;
- (void)extensionDidFinish;
- (void)extensionDidFinishWithError:(id)arg1;
- (id)extensionLoader;
- (id /* block */)extensionRequestedViewControllerPresentation;
- (void)handleAction:(id)arg1 completion:(id /* block */)arg2;
- (void)setExtensionRequestedViewControllerPresentation:(id /* block */)arg1;
- (void)silentHandleAction:(id)arg1 completion:(id /* block */)arg2;

@end
