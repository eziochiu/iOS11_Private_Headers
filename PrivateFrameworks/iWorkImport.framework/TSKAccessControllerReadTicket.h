/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAccessControllerReadTicket : NSObject <TSKAccessControllerReadTicket> {
    TSKAccessController * _accessController;
    int  _accessCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)beginExtendingLifetime;
- (void)dealloc;
- (void)endExtendingLifetime;
- (id)init;
- (id)initWithAccessController:(id)arg1;

@end