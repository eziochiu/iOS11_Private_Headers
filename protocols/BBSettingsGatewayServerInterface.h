/* made by EzioChiu.
 */

@protocol BBSettingsGatewayServerInterface <NSObject>

@required

- (void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getBehaviorOverridesEnabledAndEffectiveDateWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSDate *, void*
- (void)getBehaviorOverridesEnabledWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getBehaviorOverridesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getEffectiveGlobalContentPreviewsSettingWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)getEffectiveSectionInfoForSectionID:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BBSectionInfo *, void*
- (void)getEffectiveSectionInfoForSectionIDs:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getPrivilegedSenderTypesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getSectionInfoForActiveSectionsWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getSectionInfoForSectionID:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BBSectionInfo *, void*
- (void)getSectionInfoForSectionIDs:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getSectionInfoWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getSectionOrderRuleWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)requestQuietModeOverrideAssertionWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSAction *, void*
- (void)setActiveBehaviorOverrideTypesChangeAssertionCountUpdatesEnabled:(bool)arg1;
- (void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(bool)arg1;
- (void)setBehaviorOverrideStatus:(long long)arg1 effectiveDate:(NSDate *)arg2 source:(unsigned long long)arg3;
- (void)setBehaviorOverrideStatusChangeUpdatesEnabled:(bool)arg1;
- (void)setBehaviorOverrides:(NSArray *)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverridesChangeUpdatesEnabled:(bool)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(bool)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(bool)arg1;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1;
- (void)setOrderedSectionIDs:(NSArray *)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(NSString *)arg2 source:(unsigned long long)arg3;
- (void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(bool)arg1;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)setPrivilegedSenderTypesChangeUpdatesEnabled:(bool)arg1;
- (void)setSectionInfo:(BBSectionInfo *)arg1 forSectionID:(NSString *)arg2;
- (void)setSectionInfo:(void *)arg1 forSectionID:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 7: BBSectionInfo *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setSectionOrderRule:(long long)arg1;

@end
