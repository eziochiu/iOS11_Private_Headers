/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFNetService : HMFObject <NSNetServiceDelegate> {
    NSMutableDictionary * _TXTRecord;
    NSArray * _addresses;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMFNetServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _domain;
    HMFNetAddress * _hostName;
    NSNetService * _internal;
    NSString * _name;
    unsigned long long  _port;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableArray * _resolveBlocks;
    bool  _resolving;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSDictionary *TXTRecord;
@property (readonly, copy) NSArray *addresses;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property <HMFNetServiceDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *hmd_sessionIdentifier;
@property (readonly, copy) HMFNetAddress *hostName;
@property (nonatomic, readonly) NSNetService *internal;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long port;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) NSMutableArray *resolveBlocks;
@property (getter=isResolving, nonatomic) bool resolving;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)errorFromNetServiceErrorDict:(id)arg1;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)TXTRecord;
- (void)_reallyResolveWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
- (id)addresses;
- (id)bestAddress;
- (id)clientQueue;
- (void)confirmWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)domain;
- (unsigned long long)hash;
- (id)hostName;
- (id)init;
- (id)initWithNetService:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (bool)isResolving;
- (id)name;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceWillResolve:(id)arg1;
- (void)notifyUpdatedAddresses:(id)arg1;
- (void)notifyUpdatedTXTRecord:(id)arg1;
- (unsigned long long)port;
- (id)propertyQueue;
- (void)removeAllTXTRecordObjects;
- (id)resolveBlocks;
- (void)resolveWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)setAddresses:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setResolving:(bool)arg1;
- (void)setTXTRecord:(id)arg1;
- (id)shortDescription;
- (void)startMonitoring;
- (id)type;
- (void)updateTXTRecordWithData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)hmd_sessionIdentifier;

@end