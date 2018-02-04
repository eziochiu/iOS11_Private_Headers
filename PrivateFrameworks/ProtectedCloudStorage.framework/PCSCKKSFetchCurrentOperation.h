/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

@interface PCSCKKSFetchCurrentOperation : PCSCKKSOperation {
    PCSCKKSItemModifyContext * _context;
}

@property (retain) PCSCKKSItemModifyContext *context;

- (void).cxx_destruct;
- (id)context;
- (void)fetchCurrentItem:(id)arg1 complete:(id /* block */)arg2;
- (void)fetchPersistentRef:(id)arg1;
- (id)initWithItemModifyContext:(id)arg1;
- (void)setContext:(id)arg1;
- (void)start;

@end
