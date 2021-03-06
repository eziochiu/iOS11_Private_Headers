/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface SDFFreshObjectCache : NSObject {
    NSMutableDictionary * _cache;
    NSMutableDictionary * _cacheByMetadata;
    bool  _enableRefresh;
    unsigned long long  _expired;
    NSObject<OS_dispatch_source> * _flusher;
    double  _lifetime;
}

- (void).cxx_destruct;
- (void)_flushOldObjects;
- (bool)_isExpiredEntry:(id)arg1;
- (bool)_isExpiredEntry:(id)arg1 now:(double)arg2;
- (id)_objectForKey:(id)arg1 metadata:(id*)arg2 refreshDate:(id*)arg3;
- (id)_objectForMetadata:(id)arg1 key:(id*)arg2 refreshDate:(id*)arg3;
- (void)_renewFlusher;
- (void)_setEntry:(id)arg1 andMetadata:(id)arg2 forKey:(id)arg3;
- (id)allKeys;
- (id)allValues;
- (unsigned long long)count;
- (id)debugDescription;
- (id)description;
- (unsigned long long)expiredObjectsCount;
- (void)flushOldObjects;
- (id)initWithObjectLifetime:(double)arg1;
- (id)initWithObjectLifetime:(double)arg1 enableObjectForMetadata:(bool)arg2;
- (id)initWithObjectLifetime:(double)arg1 enableObjectForMetadata:(bool)arg2 enableRefresh:(bool)arg3;
- (id)initWithObjectLifetime:(double)arg1 enableRefresh:(bool)arg2;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 metadata:(id*)arg2;
- (id)objectForKey:(id)arg1 metadata:(id*)arg2 refreshDate:(id*)arg3;
- (id)objectForMetadata:(id)arg1;
- (id)objectForMetadata:(id)arg1 key:(id*)arg2;
- (id)objectForMetadata:(id)arg1 key:(id*)arg2 refreshDate:(id*)arg3;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 andMetadata:(id)arg2 forKey:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
