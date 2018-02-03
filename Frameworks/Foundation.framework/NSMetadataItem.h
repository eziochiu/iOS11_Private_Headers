/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMetadataItem : NSObject {
    id  _item;
    void * _reserved;
}

@property (readonly, copy) NSArray *attributes;

- (id)_init:(union { id x1; })arg1;
- (id)_item;
- (void)_setQuery:(id)arg1;
- (id)attributes;
- (void)dealloc;
- (id)valueForAttribute:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valuesForAttributes:(id)arg1;

@end
