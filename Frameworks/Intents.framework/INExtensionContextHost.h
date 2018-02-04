/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INExtensionContextHost : NSExtensionContext <INExtensionContextHosting> {
    <INExtensionContextHostDelegate> * _delegate;
    NSBundle * _extensionBundle;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INExtensionContextHostDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSBundle *extensionBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)delegate;
- (id)extensionBundle;
- (void)extensionContextVendorWantsToCacheImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtensionBundle:(id)arg1;

@end
