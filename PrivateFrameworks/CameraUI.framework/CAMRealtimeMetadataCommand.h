/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMRealtimeMetadataCommand : CAMCaptureCommand {
    NSArray * __desiredTypes;
}

@property (nonatomic, readonly, copy) NSArray *_desiredTypes;

- (void).cxx_destruct;
- (id)_desiredTypes;
- (id)_metadataObjectTypesForRealtimeMetadataTypes:(id)arg1 withAvailableMetadataTypes:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypes:(id)arg1;

@end
