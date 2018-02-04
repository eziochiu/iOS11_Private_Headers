/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBExtensionInfo : FBBundleInfo {
    NSString * _extensionIdentifier;
    NSString * _typeIdentifier;
}

@property (nonatomic, readonly, copy) NSString *extensionIdentifier;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;

- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (id)_initWithBundleProxy:(id)arg1 url:(id)arg2;
- (id)_initWithPlugInKitProxy:(id)arg1;
- (void)dealloc;
- (id)extensionIdentifier;
- (id)typeIdentifier;

@end
