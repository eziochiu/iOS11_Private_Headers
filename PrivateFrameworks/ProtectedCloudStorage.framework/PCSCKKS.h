/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

@interface PCSCKKS : NSObject {
    NSString * _dsid;
    NSOperationQueue * _queue;
    struct _PCSIdentitySetData { } * _set;
}

@property (retain) NSString *dsid;
@property (retain) NSOperationQueue *queue;
@property struct _PCSIdentitySetData { }*set;

- (void).cxx_destruct;
- (id)createIdentityOperation:(id)arg1 roll:(bool)arg2;
- (void)createNewIdentity:(id)arg1 roll:(bool)arg2 complete:(id /* block */)arg3;
- (void)dealloc;
- (id)dsid;
- (id)ensurePCSFieldsOperation:(id)arg1;
- (id)fetchCurrentOperation:(id)arg1;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData { }*)arg1 dsid:(id)arg2;
- (id)queue;
- (struct _PCSIdentitySetData { }*)set;
- (void)setDsid:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSet:(struct _PCSIdentitySetData { }*)arg1;
- (id)stripOperationErrorIfPCSError:(id)arg1;
- (id)syncViewOperation:(id)arg1;
- (void)syncWithServer:(id)arg1 complete:(id /* block */)arg2;

@end
