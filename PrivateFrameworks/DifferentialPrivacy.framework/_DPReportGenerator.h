/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPReportGenerator : NSObject <_DPMaintenance>

+ (id)filterNonConformingRecordsFrom:(id)arg1;
+ (id)queryKeysForPattern:(id)arg1 storage:(id)arg2;
+ (id)queryRecordsForKey:(id)arg1 storage:(id)arg2;
+ (id)randomizeKeys:(id)arg1 andSortByPriority:(bool)arg2;

- (id)generateReportForKeys:(id)arg1 storage:(id)arg2;
- (id)generateReportUsing:(id)arg1;
- (bool)markSubmitted:(id)arg1 storage:(id)arg2;
- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;

@end