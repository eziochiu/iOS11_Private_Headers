/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVCLIBlockHandler : NSObject {
    id /* block */  _block;
}

@property (nonatomic, readonly) id /* block */ block;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithBlock:(id /* block */)arg1;
- (void)invokeWithCommand:(id)arg1;

@end
