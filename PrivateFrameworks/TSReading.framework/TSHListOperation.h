/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHListOperation : TSHListPropertiesOperation {
    NSMutableArray * mSubPaths;
}

- (void)dealloc;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5;
- (void)parserDidEndDocument:(id)arg1;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;
- (id)subPaths;

@end
