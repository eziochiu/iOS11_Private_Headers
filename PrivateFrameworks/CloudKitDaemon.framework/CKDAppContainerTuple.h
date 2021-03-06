/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAppContainerTuple : NSObject <NSCopying> {
    NSString * _applicationBundleID;
    NSString * _applicationContainerPath;
    bool  _bypassPCSEncryption;
    CKContainerID * _containerID;
    NSString * _sourceApplicationBundleID;
    bool  _useMMCSEncryptionV2;
    bool  _useZoneWidePCS;
    bool  _wantsSiloedContext;
}

@property (nonatomic, retain) NSString *applicationBundleID;
@property (nonatomic, retain) NSString *applicationContainerPath;
@property (nonatomic) bool bypassPCSEncryption;
@property (nonatomic, retain) CKContainerID *containerID;
@property (nonatomic, retain) NSString *sourceApplicationBundleID;
@property (nonatomic) bool useMMCSEncryptionV2;
@property (nonatomic) bool useZoneWidePCS;
@property (nonatomic) bool wantsSiloedContext;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)applicationBundleID;
- (id)applicationContainerPath;
- (bool)bypassPCSEncryption;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithApplicationBundleID:(id)arg1 containerID:(id)arg2;
- (id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 applicationContainerPath:(id)arg3 containerID:(id)arg4;
- (id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)pushTokenBundleID;
- (void)setApplicationBundleID:(id)arg1;
- (void)setApplicationContainerPath:(id)arg1;
- (void)setBypassPCSEncryption:(bool)arg1;
- (void)setContainerID:(id)arg1;
- (void)setSourceApplicationBundleID:(id)arg1;
- (void)setUseMMCSEncryptionV2:(bool)arg1;
- (void)setUseZoneWidePCS:(bool)arg1;
- (void)setWantsSiloedContext:(bool)arg1;
- (id)sourceApplicationBundleID;
- (bool)useMMCSEncryptionV2;
- (bool)useZoneWidePCS;
- (bool)wantsSiloedContext;

@end
