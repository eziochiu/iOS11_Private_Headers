/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCManagedPath : NSManagedObject

+ (id)entityName;
+ (id)pathForPath:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)pathsForDocumentIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)savePathForPath:(id)arg1 documentIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;

@end
