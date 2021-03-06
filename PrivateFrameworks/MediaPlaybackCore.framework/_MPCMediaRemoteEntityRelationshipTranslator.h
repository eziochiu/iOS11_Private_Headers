/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCMediaRemoteEntityRelationshipTranslator : NSObject {
    Class  _relationshipModelClass;
}

@property (nonatomic, readonly) MPCMediaRemoteEntityTranslator *entityTranslator;
@property (nonatomic) Class relationshipModelClass;

- (id)entityTranslator;
- (Class)relationshipModelClass;
- (void)setRelationshipModelClass:(Class)arg1;

@end
