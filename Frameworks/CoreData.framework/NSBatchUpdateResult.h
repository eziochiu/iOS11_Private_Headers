/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSBatchUpdateResult : NSPersistentStoreResult {
    id  _aggregatedResult;
    unsigned long long  _resultType;
}

@property (readonly) id result;
@property (readonly) unsigned long long resultType;

- (void)dealloc;
- (id)initWithResult:(id)arg1 type:(unsigned long long)arg2;
- (id)result;
- (unsigned long long)resultType;

@end