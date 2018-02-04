/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRModifyOutputContextRequestMessage : MRProtocolMessage

@property (nonatomic, readonly) NSArray *addingOutputDeviceUIDs;
@property (nonatomic, readonly) unsigned int contextType;
@property (nonatomic, readonly) NSArray *removingOutputDeviceUIDs;

+ (id)addDevicesRequestMessageWithContextType:(unsigned int)arg1 outputDeviceUIDs:(id)arg2;
+ (id)removeDevicesRequestMessageWithContextType:(unsigned int)arg1 outputDeviceUIDs:(id)arg2;

- (id)addingOutputDeviceUIDs;
- (unsigned int)contextType;
- (id)description;
- (id)initWithContextType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3;
- (id)removingOutputDeviceUIDs;
- (unsigned long long)type;

@end
