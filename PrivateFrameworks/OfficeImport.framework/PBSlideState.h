/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBSlideState : NSObject {
    NSMutableDictionary * mBuildOrderMap;
    unsigned int  mCurrentGroupId;
}

- (void)addBuild:(id)arg1 order:(unsigned int)arg2;
- (id)buildOrderMap;
- (void)dealloc;
- (unsigned int)generateGroupId;
- (id)init;
- (void)reset;

@end
