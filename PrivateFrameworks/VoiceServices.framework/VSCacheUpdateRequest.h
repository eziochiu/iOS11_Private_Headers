/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSCacheUpdateRequest : NSObject {
    NSString * _classID;
    NSString * _modelID;
}

- (id)classIdentifier;
- (id)coalescedRequest:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithModelIdentifier:(id)arg1 classIdentifier:(id)arg2;
- (id)modelIdentifier;

@end
