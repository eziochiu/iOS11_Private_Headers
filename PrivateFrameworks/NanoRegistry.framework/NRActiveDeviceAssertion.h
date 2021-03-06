/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRActiveDeviceAssertion : NSObject {
    NRDevice * _device;
    NSString * _identifier;
    bool  _isActive;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NRDevice *device;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isActive;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)identifier;
- (id)initWithDevice:(id)arg1 identifier:(id)arg2;
- (void)invalidate;
- (bool)isActive;
- (id)queue;
- (void)setDevice:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setQueue:(id)arg1;

@end
