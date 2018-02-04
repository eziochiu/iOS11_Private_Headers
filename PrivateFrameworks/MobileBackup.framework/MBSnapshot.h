/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBSnapshot : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    NSString * _deviceName;
    bool  _isCompatible;
    unsigned long long  _quotaReserved;
    unsigned long long  _snapshotID;
    NSString * _snapshotUUID;
    int  _state;
    NSString * _systemVersion;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) bool isCompatible;
@property (nonatomic, readonly) unsigned long long quotaReserved;
@property (nonatomic, readonly) unsigned long long snapshotID;
@property (nonatomic, readonly) NSString *snapshotUUID;
@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) NSString *systemVersion;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapshotID:(unsigned long long)arg1 deviceName:(id)arg2 date:(id)arg3 state:(int)arg4 isCompatible:(bool)arg5 systemVersion:(id)arg6 quotaReserved:(unsigned long long)arg7;
- (id)initWithSnapshotID:(unsigned long long)arg1 snapshotUUID:(id)arg2 deviceName:(id)arg3 date:(id)arg4 state:(int)arg5 isCompatible:(bool)arg6 systemVersion:(id)arg7 quotaReserved:(unsigned long long)arg8;
- (id)initWithSnapshotUUID:(id)arg1 snapshotID:(unsigned long long)arg2 deviceName:(id)arg3 date:(id)arg4 state:(int)arg5 isCompatible:(bool)arg6 systemVersion:(id)arg7 quotaReserved:(unsigned long long)arg8;
- (bool)isCompatible;
- (unsigned long long)quotaReserved;
- (unsigned long long)snapshotID;
- (id)snapshotUUID;
- (int)state;
- (id)systemVersion;

@end