/* made by EzioChiu.
 */

@protocol GEOToolProxy

@required

- (id)getDefault:(NSString *)arg1;
- (void)lockDBs;
- (void)resetMapDataExtension;
- (void)unlockDBs;

@end
