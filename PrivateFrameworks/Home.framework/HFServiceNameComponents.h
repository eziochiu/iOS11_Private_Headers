/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceNameComponents : NSObject {
    NSString * _rawServiceName;
    NSString * _roomName;
    NSString * _serviceName;
}

@property (nonatomic, readonly) NSString *composedString;
@property (nonatomic, retain) NSString *rawServiceName;
@property (nonatomic, retain) NSString *roomName;
@property (nonatomic, retain) NSString *serviceName;

- (void).cxx_destruct;
- (id)composedString;
- (unsigned long long)hash;
- (id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)rawServiceName;
- (id)roomName;
- (id)serviceName;
- (void)setRawServiceName:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setServiceName:(id)arg1;

@end