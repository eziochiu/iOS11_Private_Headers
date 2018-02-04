/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPageContentLayout : TSDLayout {
    TNPageLayout * mPageLayout;
    unsigned long long  mPageNumber;
}

@property TNPageLayout *pageLayout;
@property (readonly) unsigned long long pageNumber;

- (id)computeLayoutGeometry;
- (id)initWithPageLayout:(id)arg1;
- (unsigned long long)pageCount;
- (id)pageLayout;
- (unsigned long long)pageNumber;
- (Class)repClassOverride;
- (void)setPageLayout:(id)arg1;
- (void)validate;

@end