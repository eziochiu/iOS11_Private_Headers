/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKDeviceActivityStore : NSObject <CKWritableDeviceActivityStore> {
    void store;
}

@property (nonatomic, readonly) CKKnowledgeStore *store;

+ (id)defaultStore;

- (id /* block */).cxx_destruct;
- (id)init;
- (id)initWithStore:(id)arg1;
- (void)recordActivityWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)recordActivityWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id*)arg4;
- (id)store;

@end
