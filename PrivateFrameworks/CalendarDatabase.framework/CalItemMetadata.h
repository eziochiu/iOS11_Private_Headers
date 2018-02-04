/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CalItemMetadata : NSObject <NSCoding> {
    int  _classification;
    NSDictionary * _x_props;
}

@property int classification;
@property (retain) NSDictionary *x_props;

+ (id)metadataWithData:(id)arg1;
+ (id)metadataWithICSComponent:(id)arg1;

- (void).cxx_destruct;
- (void)applyToComponent:(id)arg1;
- (int)classification;
- (id)dataRepresentationWithExistingMetaData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithICSComponent:(id)arg1;
- (void)setClassification:(int)arg1;
- (void)setX_props:(id)arg1;
- (id)x_props;

@end
