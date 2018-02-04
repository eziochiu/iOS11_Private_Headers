/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSupportedProtocolMessages : NSObject {
    unsigned long long  _lastSupportedMessageType;
}

@property (nonatomic, readonly) unsigned long long lastSupportedMessageType;

- (id)initWithLastSupportedMessageType:(unsigned long long)arg1;
- (bool)isSupported:(unsigned long long)arg1;
- (unsigned long long)lastSupportedMessageType;

@end
