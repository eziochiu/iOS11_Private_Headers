/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/XCTTargetBootstrap.framework/XCTTargetBootstrap
 */

@interface XCTDaemonConnectionProvider : NSObject <XCTDaemonConnectionProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)makeNewDaemonConnection;

@end
