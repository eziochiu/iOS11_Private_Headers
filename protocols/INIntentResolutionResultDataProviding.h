/* made by EzioChiu.
 */

@protocol INIntentResolutionResultDataProviding <NSObject>

@required

- (NSData *)resolutionResultDataForIntent:(INIntent *)arg1 intentSlotDescription:(INIntentSlotDescription *)arg2;

@end
