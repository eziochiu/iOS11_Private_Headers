/* made by EzioChiu.
 */

@protocol GEODiskSpaceProvider <NSObject>

@required

- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;

@end
