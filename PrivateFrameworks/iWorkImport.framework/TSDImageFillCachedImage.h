/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageFillCachedImage : NSObject <TSUiOSMemoryWarningFlushable> {
    TSUImage * mCachedImage;
    id /* block */  mHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  mLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSUImage *image;
@property (readonly) Class superclass;

+ (id)cachedImageWithHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)flush;
- (id)image;
- (id)initWithHandler:(id /* block */)arg1;

@end
