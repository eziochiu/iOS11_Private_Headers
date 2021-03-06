/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTextReplacementManagedObject : NSManagedObject

@property (nonatomic) bool needsSaveToCloud;
@property (nonatomic, retain) NSString *phrase;
@property (nonatomic, retain) NSData *remoteRecordInfo;
@property (nonatomic, retain) NSString *shortcut;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) NSString *uniqueName;
@property (nonatomic) bool wasDeleted;

@end
