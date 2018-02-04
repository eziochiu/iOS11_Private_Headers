/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTParsecSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry> {
    id /* block */  _availabilityChangedNotificationBlock;
}

@property (nonatomic, copy) id /* block */ availabilityChangedNotificationBlock;
@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class headlineResultsFetchDescriptorClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)availabilityChangedNotificationBlock;
- (Class)headlineResultsFetchDescriptorClass;
- (id)init;
- (bool)isAvailable;
- (void)setAvailabilityChangedNotificationBlock:(id /* block */)arg1;

@end
