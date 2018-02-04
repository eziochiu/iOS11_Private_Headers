/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVMultiCallback : NSObject {
    NSMutableArray * _callbacks;
}

- (void).cxx_destruct;
- (void)addCallback:(id)arg1;
- (void)invoke:(id)arg1;
- (void)removeCallback:(id)arg1;

@end
