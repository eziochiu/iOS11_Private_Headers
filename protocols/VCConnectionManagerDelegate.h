/* made by EzioChiu.
 */

@protocol VCConnectionManagerDelegate <NSObject>

@required

- (void)connectionCallback:(id <VCConnectionProtocol>)arg1 isInitialConnection:(bool)arg2;
- (void)didEnableDuplication:(bool)arg1 activeConnection:(id <VCConnectionProtocol>)arg2;
- (void)primaryConnectionChanged:(id <VCConnectionProtocol>)arg1 oldPrimaryConnection:(id <VCConnectionProtocol>)arg2;

@optional

- (void)discardConnection:(id <VCConnectionProtocol>)arg1;

@end
