/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface NewMediaClip : KenBurnsClip <CompoundClipInformation> {
    NSArray * _containedClips;
}

@property (nonatomic, retain) NSArray *containedClips;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)containedClips;
- (bool)expandsEditList;
- (id)initWithKBClip:(id)arg1;
- (int)maxDuration;
- (id)newMediaAssetVideoPiece;
- (void)setContainedClips:(id)arg1;
- (void)setDuration:(int)arg1;

@end