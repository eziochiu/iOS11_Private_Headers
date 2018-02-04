/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADObjectOperationGroup : CADOperationGroup <CADObjectInterface>

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;

- (void)CADDatabaseDeleteObjectsWithObjectIDs:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseInsertObjectsWithTempObjectIDs:(id)arg1 reply:(id /* block */)arg2;
- (void)CADObject:(id)arg1 getDataPropertyWithName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(id)arg1 getDatePropertyWithName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(id)arg1 getNumberPropertyWithName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(id)arg1 getPropertiesWithNames:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(id)arg1 getPropertyWithName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(id)arg1 getRelatedObjectWithRelationName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(id)arg1 getRelatedObjectsWithRelationName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(id)arg1 getStringPropertyWithName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(id)arg1 setAttributes:(id)arg2 andRelations:(id)arg3 reply:(id /* block */)arg4;
- (void)CADObjectExists:(id)arg1 reply:(id /* block */)arg2;
- (void)CADObjectIsManaged:(id)arg1 reply:(id /* block */)arg2;
- (void)CADObjectsExist:(id)arg1 reply:(id /* block */)arg2;

@end