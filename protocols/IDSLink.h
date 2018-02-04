/* made by EzioChiu.
 */

@protocol IDSLink <NSObject>

@required

- (<IDSLinkDelegate> *)alternateDelegate;
- (NSString *)cbuuid;
- (NSDictionary *)copyLinkStatsDict;
- (<IDSLinkDelegate> *)delegate;
- (NSString *)deviceUniqueID;
- (NSString *)generateLinkReport:(double)arg1 isCurrentLink:(bool)arg2;
- (unsigned long long)headerOverhead;
- (NSString *)linkTypeString;
- (unsigned long long)sendPacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; unsigned short x16; unsigned char x17; bool x18; unsigned long long x19; BOOL x20; BOOL x21; int x22; unsigned char x23[0]; }*)arg1 toDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)setAlternateDelegate:(id <IDSLinkDelegate>)arg1;
- (void)setCbuuid:(NSString *)arg1;
- (void)setDelegate:(id <IDSLinkDelegate>)arg1;
- (void)setDeviceUniqueID:(NSString *)arg1;
- (unsigned long long)state;

@optional

- (void)start;

@end