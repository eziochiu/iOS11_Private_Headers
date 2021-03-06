/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface _MSPQueryState : NSObject {
    NSArray * _contents;
    NSArray * _identifiers;
}

@property (readonly) NSArray *contents;
@property (readonly) NSArray *identifiers;

- (void).cxx_destruct;
- (id)contents;
- (id)identifiers;
- (id)initWithContainerContents:(id)arg1;
- (id)initWithContents:(id)arg1 identifiers:(id)arg2;
- (id)stateByDeletingObjectAtIndex:(unsigned long long)arg1;
- (id)stateByInvokingPreprocessingBlock:(id /* block */)arg1 mappingBlock:(id /* block */)arg2;
- (id)stateByMovingObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;

@end
