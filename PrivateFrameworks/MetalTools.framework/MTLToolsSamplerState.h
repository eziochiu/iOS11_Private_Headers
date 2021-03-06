/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsSamplerState : MTLToolsObject <MTLSamplerState>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) Class superclass;

- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)label;

@end
