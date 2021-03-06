/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDPersistence : NSObject {
    NSMutableSet * _bugSessionIdentifiers;
    NSUserDefaults * _userDefaults;
}

@property (retain) NSMutableSet *bugSessionIdentifiers;
@property (retain) NSUserDefaults *userDefaults;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_indexKeyForBugSession:(id)arg1;
- (id)_indexKeyForBugSessionIdentifier:(id)arg1;
- (id)bugSessionIdentifiers;
- (id)init;
- (id)loadSavedBugSessions;
- (void)removeBugSession:(id)arg1;
- (void)setBugSessionIdentifiers:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)updateBugSession:(id)arg1;
- (id)userDefaults;

@end
