/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallRecord : NSManagedObject

@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) NSNumber *answered;
@property (nonatomic, retain) NSNumber *call_category;
@property (nonatomic, retain) NSNumber *calltype;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *device_id;
@property (nonatomic, retain) NSNumber *disconnected_cause;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSNumber *face_time_data;
@property (nonatomic, retain) NSNumber *handle_type;
@property (nonatomic, retain) NSString *iso_country_code;
@property (nonatomic, retain) NSString *location;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *number_availability;
@property (nonatomic, retain) NSNumber *originated;
@property (nonatomic, retain) NSNumber *read;
@property (nonatomic, retain) NSString *service_provider;
@property (nonatomic, retain) NSString *unique_id;

@end
