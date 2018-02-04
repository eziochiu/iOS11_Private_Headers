/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXGalleryItemImageView : SXImageView {
    SXContext * _context;
    SXGalleryItem * _galleryItem;
    unsigned long long  _index;
}

@property (nonatomic, readonly) SXContext *context;
@property (nonatomic, readonly) SXGalleryItem *galleryItem;
@property (nonatomic, readonly) unsigned long long index;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)context;
- (id)galleryItem;
- (unsigned long long)index;
- (id)initWithGalleryItem:(id)arg1 forIndex:(unsigned long long)arg2 context:(id)arg3;
- (bool)isAccessibilityElement;

@end
