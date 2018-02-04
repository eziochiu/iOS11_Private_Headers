/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaOutputDevice : NSObject {
    NSString * _groupIdentifier;
    bool  _groupable;
    NSString * _modelID;
    NSString * _name;
    void * _outputDevice;
    unsigned int  _type;
    NSString * _uniqueIdentifier;
}

@property (readonly) AVOutputDevice *av_OutputDevice;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (getter=isGroupable, nonatomic, readonly) bool groupable;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) void*outputDevice;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)av_OutputDevice;
- (void)dealloc;
- (id)description;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)initWithOutputDevice:(void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGroupable;
- (id)modelID;
- (id)name;
- (void*)outputDevice;
- (void)setOutputDevice:(void*)arg1;
- (bool)shouldCreateAppleMediaAccessory;
- (bool)shouldCreateWHAAccessory;
- (unsigned int)type;
- (id)uniqueIdentifier;

@end
