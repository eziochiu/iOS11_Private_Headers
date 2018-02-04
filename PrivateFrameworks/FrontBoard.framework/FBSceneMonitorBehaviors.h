/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneMonitorBehaviors : NSObject <NSCopying> {
    bool  _monitorsClientSettings;
    bool  _monitorsCommits;
    bool  _monitorsEffectiveSettings;
    bool  _monitorsPairingStatus;
    bool  _monitorsSettings;
}

@property (nonatomic) bool monitorsClientSettings;
@property (nonatomic) bool monitorsCommits;
@property (nonatomic) bool monitorsEffectiveSettings;
@property (nonatomic) bool monitorsPairingStatus;
@property (nonatomic) bool monitorsSettings;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)monitorsClientSettings;
- (bool)monitorsCommits;
- (bool)monitorsEffectiveSettings;
- (bool)monitorsPairingStatus;
- (bool)monitorsSettings;
- (void)setMonitorsClientSettings:(bool)arg1;
- (void)setMonitorsCommits:(bool)arg1;
- (void)setMonitorsEffectiveSettings:(bool)arg1;
- (void)setMonitorsPairingStatus:(bool)arg1;
- (void)setMonitorsSettings:(bool)arg1;

@end
