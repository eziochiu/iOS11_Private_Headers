/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTUtteranceMetadataManager : NSObject

+ (bool)_audioDirectoryNeedsUpgrade:(id)arg1;
+ (id)_getBaseMetaDictionaryForUtterancePath:(id)arg1;
+ (void)_saveMetaVersionFileAtPath:(id)arg1;
+ (void)_upgradeLocaleDirectoryIfNecessary:(id)arg1;
+ (void)_upgradeUtteranceMeta:(id)arg1;
+ (void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2;
+ (void)saveMetaVersionFileAtSATAudioDirectory:(id)arg1;
+ (void)saveUtteranceMetadataForUtterance:(id)arg1 isExplicitEnrollment:(bool)arg2 isHandheldEnrollment:(bool)arg3;
+ (void)upgradeMetaFilesIfNecessaaryAtSATRoot:(id)arg1;

@end
