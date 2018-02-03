/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTImplicitPromise : NSObject {
    CUTPromise * _promise;
}

@property (nonatomic, retain) CUTPromise *promise;

- (void).cxx_destruct;
- (id)initWithPromise:(id)arg1;
- (id)promise;
- (void)registerFulfillBlock:(id /* block */)arg1;
- (void)setPromise:(id)arg1;

@end