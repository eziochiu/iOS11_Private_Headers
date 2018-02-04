/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIdentifierTable : NSObject {
    NSMapTable * _map;
    unsigned long long  _nextIdentifier;
}

@property (nonatomic, retain) NSMapTable *map;
@property (nonatomic) unsigned long long nextIdentifier;

- (void).cxx_destruct;
- (unsigned long long)addObject:(id)arg1;
- (id)allObjects;
- (unsigned long long)count;
- (id)map;
- (unsigned long long)nextIdentifier;
- (id)objectWithIdentifier:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectWithIdentifier:(unsigned long long)arg1;
- (void)setMap:(id)arg1;
- (void)setNextIdentifier:(unsigned long long)arg1;

@end