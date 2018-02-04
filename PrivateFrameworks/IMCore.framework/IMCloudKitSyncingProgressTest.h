/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitSyncingProgressTest : IMCloudKitEventNotificationTest {
    int  _count;
    int  _counter;
    unsigned long long  _syncState;
    unsigned long long  _syncType;
}

- (id)initWithSyncState:(unsigned long long)arg1 syncType:(unsigned long long)arg2;
- (void)next;
- (void)startTest;

@end