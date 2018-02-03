/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputDeviceInternal : NSObject {
    NSString * ID;
    NSData * MACAddress;
    unsigned long long  deviceFeatures;
    long long  deviceSubType;
    long long  deviceType;
    <AVOutputDeviceImpl> * impl;
    NSString * modelID;
    NSString * name;
}

@end
