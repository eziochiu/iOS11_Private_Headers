/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICQuickNoteSessionSettings : NSObject

+ (void)disableNotesOnLockScreenIfNecessary;
+ (bool)hasAccountSupportingLockScreen;
+ (void)initialize;
+ (long long)sessionDuration;
+ (void)setSessionDuration:(long long)arg1;
+ (void)setShowOnLockScreen:(long long)arg1;
+ (long long)showOnLockScreen;

@end