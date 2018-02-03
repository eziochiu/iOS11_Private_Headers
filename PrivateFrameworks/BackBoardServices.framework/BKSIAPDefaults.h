/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSIAPDefaults : BSAbstractDefaultDomain

@property (nonatomic, readonly, retain) NSString *videoTVOutReservedForIPodOut;
@property (nonatomic, readonly, retain) NSString *videoTVOutReservedForRemoteUI;
@property (nonatomic, readonly, retain) NSString *videoTVOutSignal;
@property (nonatomic, retain) NSString *videoTVOutSystem;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
