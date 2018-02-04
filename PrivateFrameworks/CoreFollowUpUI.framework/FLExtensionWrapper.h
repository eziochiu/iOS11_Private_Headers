/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

@interface FLExtensionWrapper : NSObject {
    <FLExtensionHostContextInterface> * _delegate;
    NSExtension * _extension;
    FLExtensionContext * _extensionContext;
    NSString * _extensionIdentifier;
    UIViewController * _extensionViewController;
    FLExtensionHostContext * _hostContext;
    id /* block */  _requestInterruptionBlock;
    NSUUID * _sessionID;
    bool  _supportsViewContext;
}

@property (nonatomic, copy) id /* block */ requestInterruptionBlock;
@property (nonatomic) bool supportsViewContext;

+ (void)getAllFollowUpExtensionsWithCompletion:(id /* block */)arg1;
+ (id)sharedExtensionQueue;

- (void).cxx_destruct;
- (id)_hostContextForExtension:(id)arg1;
- (bool)_loadExtension:(bool)arg1 error:(id*)arg2;
- (id)_loadExtensionForIdentifier:(id)arg1 error:(id*)arg2;
- (bool)_setupSessionIfNeeded:(id*)arg1;
- (void)_setupSessionWithExtension:(id)arg1 completion:(id /* block */)arg2;
- (id)identifier;
- (id)initWithExtension:(id)arg1;
- (id)initWithFollowUp:(id)arg1 andDelegate:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)remoteInterface;
- (id)remoteViewController;
- (id /* block */)requestInterruptionBlock;
- (void)setRequestInterruptionBlock:(id /* block */)arg1;
- (void)setSupportsViewContext:(bool)arg1;
- (bool)supportsViewContext;

@end
