/* made by EzioChiu.
 */

@protocol FCKeyValueStoreCoding <FCKeyValueStoreValue>

@required

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(NTPBKeyValuePair *)arg1;

- (void)writeToKeyValuePair:(NTPBKeyValuePair *)arg1;

@end
