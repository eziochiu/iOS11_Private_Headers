/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLStoreItemArtworkRequest : SKUIArtworkRequest {
    MPArtworkCatalog * _artworkCatalog;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
}

- (void).cxx_destruct;
- (id)initWithStoreItem:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)newLoadOperation;

@end