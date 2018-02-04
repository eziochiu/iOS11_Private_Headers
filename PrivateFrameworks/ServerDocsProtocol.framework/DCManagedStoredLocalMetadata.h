/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCManagedStoredLocalMetadata : NSManagedObject

+ (id)entityName;
+ (id)saveStoredLocalMetadata:(id)arg1 forDocumentIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)storedLocalMetadataForDocumentIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;

- (id)dictionaryRepresentation;
- (void)updateWithStoredLocalMetadataDictionary:(id)arg1;

@end
