/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCManagedOtherMetadata : NSManagedObject

+ (id)entityName;
+ (id)otherMetadataForDocumentIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)saveOtherMetadata:(id)arg1 forDocumentIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;

- (id)dictionaryRepresentation;
- (void)updateWithValuesFromDictionary:(id)arg1;

@end
