/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRVolumeControlAvailabilityMessage : MRProtocolMessage

@property (nonatomic, readonly) bool volumeControlAvailable;

- (id)initWithAvailableFlag:(bool)arg1;
- (unsigned long long)type;
- (bool)volumeControlAvailable;

@end
