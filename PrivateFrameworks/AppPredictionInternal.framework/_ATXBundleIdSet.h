/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXBundleIdSet : NSObject {
    struct _CFBurstTrie { } * _trie;
}

+ (id)sharedInstance;

- (bool)containsBundleId:(id)arg1;
- (void)dealloc;
- (id)init;
- (struct _CFBurstTrie { }*)trie;

@end