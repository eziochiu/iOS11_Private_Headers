/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSTerminationAssertion : BKSAssertion {
    NSString * _bundleIdentifier;
    BKSTerminationContext * _context;
    unsigned long long  _efficacy;
}

@property (nonatomic, readonly, copy) BKSTerminationContext *context;
@property (nonatomic, readonly) unsigned long long efficacy;
@property (nonatomic, readonly, copy) NSString *targetBundleIdentifier;

- (id)_clientQueue_createEvent;
- (id)_clientQueue_destroyEvent;
- (id)_clientQueue_updateEvent;
- (id)context;
- (void)dealloc;
- (unsigned long long)efficacy;
- (id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 context:(id)arg4 withHandler:(id /* block */)arg5;
- (id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 withHandler:(id /* block */)arg4;
- (id)targetBundleIdentifier;

@end