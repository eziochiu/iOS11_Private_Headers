/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEditPendingCacheRequest : NSObject {
    NSString * _cacheKey;
    id /* block */  _completionBlock;
    bool  _fullPass;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    PKPass * _pass;
    bool  _stacked;
}

@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) bool fullPass;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) PKPass *pass;
@property (nonatomic) bool stacked;

- (void).cxx_destruct;
- (id)cacheKey;
- (id /* block */)completionBlock;
- (bool)fullPass;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)pass;
- (void)setCacheKey:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setFullPass:(bool)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPass:(id)arg1;
- (void)setStacked:(bool)arg1;
- (bool)stacked;

@end
