/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityIndicatorViewArtworkItem : NSObject <NSDiscardableContent> {
    NSString * _artKey;
    struct { 
        unsigned int isDiscarded : 1; 
        unsigned int useCount; 
    }  _flags;
    NSArray * _images;
}

@property (nonatomic, readonly) NSString *artKey;
@property (nonatomic, retain) NSArray *images;

- (void).cxx_destruct;
- (id)artKey;
- (bool)beginContentAccess;
- (void)dealloc;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (unsigned long long)hash;
- (id)images;
- (id)initWithArtKey:(id)arg1;
- (bool)isContentDiscarded;
- (void)setImages:(id)arg1;

@end
