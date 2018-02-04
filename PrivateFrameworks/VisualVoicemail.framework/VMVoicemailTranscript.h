/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailTranscript : NSObject <NSCopying, NSSecureCoding> {
    float  _confidence;
    unsigned long long  _confidenceRating;
    NSArray * _segments;
    NSString * _transcriptionString;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) unsigned long long confidenceRating;
@property (nonatomic, readonly, copy) NSArray *segments;
@property (nonatomic, readonly, copy) NSString *transcriptionString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archivedData;
- (float)confidence;
- (unsigned long long)confidenceRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTranscription:(id)arg1;
- (id)segments;
- (id)transcriptionString;

@end