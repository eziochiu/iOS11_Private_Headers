/* made by EzioChiu
   Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

@interface INUIImageServiceConnection : NSObject {
    NSXPCConnection * _underlyingConnection;
}

+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (id)init;
- (void)loadUIImageForINImage:(id)arg1 traitCollection:(id)arg2 reply:(id /* block */)arg3;

@end
