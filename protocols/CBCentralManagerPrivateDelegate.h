/* made by EzioChiu.
 */

@protocol CBCentralManagerPrivateDelegate <CBCentralManagerDelegate>

@optional

- (void)centralManager:(CBCentralManager *)arg1 application:(NSString *)arg2 isActive:(bool)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didLosePeripheral:(CBPeripheral *)arg2 forType:(NSNumber *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didLoseZone:(NSData *)arg2 mask:(NSData *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateConnectionParameters:(CBPeripheral *)arg2 interval:(NSNumber *)arg3 latency:(NSNumber *)arg4 supervisionTimeout:(NSNumber *)arg5;
- (void)centralManager:(CBCentralManager *)arg1 didUpdatePeripheralConnectionState:(CBPeripheral *)arg2;

@end