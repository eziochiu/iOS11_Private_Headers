/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFPersistentHistoryModel : NSObject

+ (bool)_hasTombstonesInUserInfo:(id)arg1;
+ (int)_maxCountOfTombstonesInModel:(id)arg1;
+ (id)_tombstonesColumnsForEntity:(id)arg1;
+ (id)_tombstonesForEntity:(id)arg1;
+ (void)createModelsWithTombstoneCount:(int)arg1;
+ (id)newHistorySQLModelWithStoreSQLModel:(id)arg1;
+ (id)newPersistentHistoryModelWithStoreSQLModel:(id)arg1;
+ (void)resetCaches;

@end
