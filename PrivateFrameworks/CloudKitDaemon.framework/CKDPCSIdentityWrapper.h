/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSIdentityWrapper : NSObject {
    NSString * _dsid;
    struct _PCSIdentitySetData { } * _identitySet;
    NSString * _identityString;
}

@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) struct _PCSIdentitySetData { }*identitySet;
@property (nonatomic, readonly) NSString *identityString;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dsid;
- (struct _PCSIdentitySetData { }*)identitySet;
- (id)identityString;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData { }*)arg1 dsid:(id)arg2;

@end
