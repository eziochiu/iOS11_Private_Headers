/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSItemProviderCopyingLoadOperator : NSObject <_NSItemProviderLoading> {
    NSItemProvider * _itemProvider;
    NSDictionary * _loadedItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSItemProvider *itemProvider;
@property (nonatomic, retain) NSDictionary *loadedItems;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)_loadItemsForTypeIdentifiers:(id)arg1 itemProvider:(id)arg2;
- (id)_sandboxedResourceForItemIfNeeded:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemProvider:(id)arg1;
- (id)itemProvider;
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;
- (void)loadPreviewImageWithCompletionHandler:(id /* block */)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;
- (id)loadedItems;
- (void)setItemProvider:(id)arg1;
- (void)setLoadedItems:(id)arg1;

@end
