/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRObjectUniquenessFactory : NSObject {
    NSMutableDictionary * _uniqueObjects;
    NSObject<OS_dispatch_queue> * _uniqueObjectsQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)deallocObject:(id)arg1;
- (id)getUniqueObject:(id)arg1;
- (id)init;

@end
