/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

@interface PCSCKKSCreateIdentityOperation : PCSCKKSOperation {
    PCSCKKSItemModifyContext * _context;
    bool  _roll;
}

@property (retain) PCSCKKSItemModifyContext *context;
@property bool roll;

- (void).cxx_destruct;
- (int)addAndNotifyOnSync:(struct _PCSIdentityData { }*)arg1 attributes:(struct __CFDictionary { }*)arg2 returnAttributes:(const struct __CFDictionary {}**)arg3 complete:(id /* block */)arg4;
- (id)context;
- (void)createManateePCSIdentity;
- (id)initWithItemModifyContext:(id)arg1 roll:(bool)arg2;
- (void)itemStored:(id)arg1;
- (bool)roll;
- (void)setContext:(id)arg1;
- (void)setIdentityToCurrent;
- (void)setRoll:(bool)arg1;
- (void)start;
- (void)storePCSIdentity:(struct _PCSIdentityData { }*)arg1;

@end
