/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMediaRemoteCommandParser : NSObject {
    NSArray * _allCommands;
    NSMutableSet * _enabledCommandNames;
}

- (void).cxx_destruct;
- (bool)_containsAnySkipCommands;
- (bool)_containsAnyTrackCommands;
- (bool)_containsEnabledCommand:(unsigned int)arg1;
- (void)_gatherEnabledCommands;
- (id)_skipButtons;
- (id)_trackAndSpeedButtons;
- (id)buttonsForCommands:(id)arg1;

@end
