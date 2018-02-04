/* made by EzioChiu.
 */

@protocol MTDiffable <MTDictionarySerializable>

@required

- (NSString *)keyForIdentifier;

@optional

- (NSSet *)keysAffectingScheduling;
- (NSSet *)keysAffectingSnooze;

@end
