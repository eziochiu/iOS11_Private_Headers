/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UAPasteboardGeneration : NSObject {
    NSSet * _allTypes;
    unsigned long long  _generation;
    NSArray * _items;
}

@property (nonatomic, copy) NSSet *allTypes;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, copy) NSArray *items;

- (void).cxx_destruct;
- (bool)addItem:(id)arg1;
- (bool)addType:(id)arg1 toItemAtIndex:(unsigned long long)arg2;
- (id)allTypes;
- (unsigned long long)generation;
- (id)initWithGeneration:(unsigned long long)arg1;
- (id)items;
- (void)setAllTypes:(id)arg1;
- (void)setItems:(id)arg1;

@end
