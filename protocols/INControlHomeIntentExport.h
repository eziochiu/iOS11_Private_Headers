/* made by EzioChiu.
 */

@protocol INControlHomeIntentExport <NSObject, JSExport>

@required

- (INHomeAttribute *)attribute;
- (NSArray *)entities;
- (id)init;
- (void)setAttribute:(INHomeAttribute *)arg1;
- (void)setEntities:(NSArray *)arg1;

@end
