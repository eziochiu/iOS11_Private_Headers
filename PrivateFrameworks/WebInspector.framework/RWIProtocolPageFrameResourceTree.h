/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolPageFrameResourceTree : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *childFrames;
@property (nonatomic, retain) RWIProtocolPageFrame *frame;
@property (nonatomic, copy) NSArray *resources;

- (id)childFrames;
- (id)frame;
- (id)initWithFrame:(id)arg1 resources:(id)arg2;
- (id)resources;
- (void)setChildFrames:(id)arg1;
- (void)setFrame:(id)arg1;
- (void)setResources:(id)arg1;

@end
