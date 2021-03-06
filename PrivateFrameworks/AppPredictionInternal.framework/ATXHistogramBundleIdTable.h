/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXHistogramBundleIdTable : NSObject <NSSecureCoding> {
    _ATXDataStore * _datastore;
    NSMutableDictionary * _dict;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSString * _prevBundleId;
    unsigned short  _prevEventId;
    ATXBackgroundSaver * _saver;
    NSMutableIndexSet * _usedIds;
}

+ (id)sharedInstance;
+ (void)stopUsingTemporarySharedInstance;
+ (bool)supportsSecureCoding;
+ (void)useTemporarySharedInstance:(id)arg1;

- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)flush;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatastore:(id)arg1;
- (id)initWithDict:(id)arg1 usedIds:(id)arg2 datastore:(id)arg3;
- (unsigned short)intern:(id)arg1;
- (bool)lookup:(id)arg1 into:(unsigned short*)arg2;
- (id)permutationFrom:(id)arg1;
- (unsigned short)remove:(id)arg1;

@end
