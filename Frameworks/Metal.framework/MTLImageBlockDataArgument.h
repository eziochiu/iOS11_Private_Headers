/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLImageBlockDataArgument : MTLArgumentInternal {
    unsigned int  _dataSize;
    MTLStructTypeInternal * _masterStructMembers;
}

- (void)dealloc;
- (unsigned long long)imageBlockDataSize;
- (id)imageBlockMasterStructMembers;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(bool)arg4 index:(unsigned long long)arg5 dataSize:(unsigned int)arg6 masterStructMembers:(id)arg7;
- (void)setStructType:(id)arg1;

@end
