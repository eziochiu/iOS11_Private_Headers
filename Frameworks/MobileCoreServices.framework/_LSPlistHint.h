/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSPlistHint : NSObject {
    NSDictionary * _cachedValues;
    bool  _cachedValuesAreComplete;
    NSSet * _keys;
    bool  _keysAreCompacted;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _valueLock;
}

@property (retain) NSDictionary *completeDictionary;

- (void).cxx_destruct;
- (id)cachedValueForKey:(id)arg1;
- (id)completeDictionary;
- (id)debugDescription;
- (bool)hasValueForKey:(id)arg1;
- (id)initWithKeys:(id)arg1 compacted:(bool)arg2;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)setCompleteDictionary:(id)arg1;

@end
