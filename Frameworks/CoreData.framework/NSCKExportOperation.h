/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCKExportOperation : NSObject {
    NSCKExportMetadata * _exportMetadata;
    NSSet * _objects;
    NSUUID * _operationUUID;
    NSNumber * _sortIndex;
    NSNumber * _status;
}

@property (nonatomic, readonly) NSCKExportMetadata *exportMetadata;
@property (nonatomic, readonly) NSSet *objects;
@property (nonatomic, readonly) NSUUID *operationUUID;
@property (nonatomic, readonly) NSNumber *sortIndex;
@property (nonatomic, readonly) NSNumber *status;

- (id)exportMetadata;
- (id)objects;
- (id)operationUUID;
- (id)sortIndex;
- (id)status;

@end
