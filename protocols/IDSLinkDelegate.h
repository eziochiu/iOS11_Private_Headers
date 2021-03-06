/* made by EzioChiu.
 */

@protocol IDSLinkDelegate <NSObject>

@required

- (void)link:(id)arg1 didConnectForDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (bool)link:(id)arg1 didReceivePacket:(struct { char *x1; unsigned long long x2; long long x3; long long x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; unsigned short x16; unsigned char x17; bool x18; unsigned long long x19; BOOL x20; BOOL x21; int x22; unsigned char x23[0]; }*)arg2 fromDeviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;

@optional

- (void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;
- (void)link:(id)arg1 didConnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didConnectUnderlyingLink:(BOOL)arg2 linkUUID:(NSUUID *)arg3 localAttributes:(NSDictionary *)arg4 remoteAttributes:(NSDictionary *)arg5;
- (void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(bool)arg2 currentDefaultLinkID:(BOOL)arg3;
- (void)link:(id)arg1 didDisconnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didDisconnectUnderlyingLinkID:(BOOL)arg2 linkUUID:(NSUUID *)arg3;
- (void)link:(id)arg1 didFailToConnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didRATChange:(unsigned char)arg2;
- (void)link:(id)arg1 didReceiveReportEvent:(NSDictionary *)arg2;
- (void)link:(id)arg1 didReceiveSKEData:(NSData *)arg2;
- (void)link:(id)arg1 hasSpaceAvailable:(bool)arg2 deviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
- (void)link:(id)arg1 hostAwakeDidChange:(bool)arg2 deviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;

@end
